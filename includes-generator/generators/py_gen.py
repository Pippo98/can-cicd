from lib.network import Network
from config import config as c


def generate_ids_include(network: Network):
    header = ""
    header += "NETWORK_VERSION = {0}\n\n".format(network.version)
    for topic_name, topic_id in network.get_topics().items():
        topic_messages = network.get_messages_by_topic(topic_name)
        header += f"# TOPIC {topic_name}\n"
        if topic_id is not None:
            header += f"TOPIC_{topic_name}_MASK = 0b{0b00000011111:>011b}\n"
            header += f"TOPIC_{topic_name}_FILTER = 0b{topic_id:>011b}\n"
        else:
            print(network.get_topics())
        for message_name, message in topic_messages.items():
            header += "ID_{0} = 0b{1:>011b}\n".format(message_name, message["id"])
        header += "\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return output


def generate_canconfig_include(canconfig, canconfig_version):
    header = ""
    header += "CANCONFIG_VERSION = {0}\n\n".format(canconfig_version)
    for k, v in canconfig.items():
        if isinstance(v, dict):
            header += "\n"
            for _k, _v in v.items():
                header += f"{_k.upper()} = {_v}"
                header += "\n"
        else:
            header += f"{k.upper()} = {v}\n"

    return header