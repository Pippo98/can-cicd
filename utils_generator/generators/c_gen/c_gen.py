import os
import jinja2 as j2
from ...lib.network import Network
from ...schema import *
from ...lib import utils

__TEMPLATE_IDS_H = os.path.dirname(__file__) + "/ids.h.j2"
__TEMPLATE_UTILS_H = os.path.dirname(__file__) + "/utils.h.j2"



def generate_utils_include(network: Network, schema: Schema):
    with open(__TEMPLATE_UTILS_H, "r") as f:
        utils_h = f.read()

    code = j2.Template(utils_h).render(
        network=network,
        utils=utils,
        enumerate=enumerate,
        len=len,
        printf_cast=__printf_cast
    )

    for msg in schema.messages:
        print(__printf_cast(msg.fields))

    return code

def __printf_cast(fields):
    casts = []
    for field in fields:
        if isinstance(field.type, Number):
            if field.type.name == "float32":
                casts.append("%f")
            elif field.type.name == "float64":
                casts.append("%lf")
            elif field.type.name == "int8":
                casts.append("%hhd")
            elif field.type.name == "int16":
                casts.append("%hd")
            elif field.type.name == "int32":
                casts.append("%d")
            elif field.type.name == "int64":
                casts.append("%ld")
            elif field.type.name == "uint8":
                casts.append("%hhu")
            elif field.type.name == "uint16":
                casts.append("%hu")
            elif field.type.name == "uint32":
                casts.append("%u")
            elif field.type.name == "uint64":
                casts.append("%lu")
            elif field.type.name == "bool":
                casts.append("%d")
        elif isinstance(field.type, Enum):
            casts.append("%d")
        elif isinstance(field.type, BitSet):
            casts.append(".".join(["%hhx"] * (field.bit_size // 8)))
    return casts