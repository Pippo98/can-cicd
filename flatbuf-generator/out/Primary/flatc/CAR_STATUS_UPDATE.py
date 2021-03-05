# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class CAR_STATUS_UPDATE(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 3

    # CAR_STATUS_UPDATE
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # CAR_STATUS_UPDATE
    def CarStatus(self): return self._tab.Get(flatbuffers.number_types.Int8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # CAR_STATUS_UPDATE
    def InverterL(self): return self._tab.Get(flatbuffers.number_types.Int8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(1))
    # CAR_STATUS_UPDATE
    def InverterR(self): return self._tab.Get(flatbuffers.number_types.Int8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))

def CreateCAR_STATUS_UPDATE(builder, carStatus, inverterL, inverterR):
    builder.Prep(1, 3)
    builder.PrependInt8(inverterR)
    builder.PrependInt8(inverterL)
    builder.PrependInt8(carStatus)
    return builder.Offset()
