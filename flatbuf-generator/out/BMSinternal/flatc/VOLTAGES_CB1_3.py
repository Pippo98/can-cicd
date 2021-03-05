# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class VOLTAGES_CB1_3(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 8

    # VOLTAGES_CB1_3
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # VOLTAGES_CB1_3
    def Voltage12(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # VOLTAGES_CB1_3
    def Voltage13(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))
    # VOLTAGES_CB1_3
    def Voltage14(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # VOLTAGES_CB1_3
    def Voltage15(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(6))

def CreateVOLTAGES_CB1_3(builder, voltage12, voltage13, voltage14, voltage15):
    builder.Prep(2, 8)
    builder.PrependUint16(voltage15)
    builder.PrependUint16(voltage14)
    builder.PrependUint16(voltage13)
    builder.PrependUint16(voltage12)
    return builder.Offset()
