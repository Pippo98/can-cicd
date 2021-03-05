# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class TEMPERATURES_CB3_0(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 8

    # TEMPERATURES_CB3_0
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # TEMPERATURES_CB3_0
    def Temperature0(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # TEMPERATURES_CB3_0
    def Temperature1(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(1))
    # TEMPERATURES_CB3_0
    def Temperature2(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))
    # TEMPERATURES_CB3_0
    def Temperature3(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(3))
    # TEMPERATURES_CB3_0
    def Temperature4(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # TEMPERATURES_CB3_0
    def Temperature5(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(5))
    # TEMPERATURES_CB3_0
    def Temperature6(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(6))
    # TEMPERATURES_CB3_0
    def Temperature7(self): return self._tab.Get(flatbuffers.number_types.Uint8Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(7))

def CreateTEMPERATURES_CB3_0(builder, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7):
    builder.Prep(1, 8)
    builder.PrependUint8(temperature7)
    builder.PrependUint8(temperature6)
    builder.PrependUint8(temperature5)
    builder.PrependUint8(temperature4)
    builder.PrependUint8(temperature3)
    builder.PrependUint8(temperature2)
    builder.PrependUint8(temperature1)
    builder.PrependUint8(temperature0)
    return builder.Offset()
