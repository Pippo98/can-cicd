# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class VOLTAGES_CB2_1(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 8

    # VOLTAGES_CB2_1
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # VOLTAGES_CB2_1
    def Voltage4(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # VOLTAGES_CB2_1
    def Voltage5(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))
    # VOLTAGES_CB2_1
    def Voltage6(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # VOLTAGES_CB2_1
    def Voltage7(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(6))

def CreateVOLTAGES_CB2_1(builder, voltage4, voltage5, voltage6, voltage7):
    builder.Prep(2, 8)
    builder.PrependUint16(voltage7)
    builder.PrependUint16(voltage6)
    builder.PrependUint16(voltage5)
    builder.PrependUint16(voltage4)
    return builder.Offset()
