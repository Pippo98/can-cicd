from .generators.c_gen import c_gen
from . import sanitized_config as c
from .schema import Schema
from .lib import utils
import pathlib
import sys


def generate_utils_includes(network, schema, output_path):
    cgenerated = c_gen.generate_utils_include(network, schema)
    with open(f"{output_path}/{c.C_UTILS_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)


def read_args(argv):
    # TODO: standardize
    if len(argv) != 4 or argv[1] in ["--help", "-h"]:
        raise ValueError("Usage: python3 main.py <networks_path> <ids_path> <output_path>")

    networks_dir = pathlib.Path(argv[1])
    ids_dir = pathlib.Path(argv[2])
    output_dir = pathlib.Path(argv[3])

    if not networks_dir.exists() or not networks_dir.is_dir():
        raise ValueError(f"Path {networks_dir} does not exist or it is not a directory")

    if not ids_dir.exists() or not ids_dir.is_dir():
        raise ValueError(f"Path {ids_dir} does not exist or it is not a directory")

    if output_dir.is_file():
        raise ValueError(f"Path {output_dir} is a file")

    return networks_dir, ids_dir, output_dir


def main():
    print("====== includes-generator ======")
    print("")

    networks_dir, ids_dir, output_dir = read_args(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA, ids_dir, c.NETWORK_IDS_VALIDATION_SCHEMA)

    for n in networks:
        print(f"Generating includes for network {n.name}")
        output_dir_network = output_dir / n.name
        utils.create_subtree(output_dir_network)


        # Utils
        schema = Schema(n)
        generate_utils_includes(n, schema, output_dir_network)
        print(f"Generated utils includes in {output_dir_network}")

        print("")


if __name__ == "__main__":
    main()
