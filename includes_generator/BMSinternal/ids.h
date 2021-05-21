#ifndef BMSinternal_IDS_H
#define BMSinternal_IDS_H

#define NETWORK_BMSinternal_VERSION 1f

/* TOPIC VOLTAGE_INFO */
#define TOPIC_VOLTAGE_INFO_MASK 0b00000011111
#define TOPIC_VOLTAGE_INFO_FILTER 0b00000000000
#define ID_VOLTAGES_CB0_0 0b10000000000
#define ID_VOLTAGES_CB0_1 0b01100000000
#define ID_VOLTAGES_CB0_2 0b01000000000
#define ID_VOLTAGES_CB0_3 0b00100000000
#define ID_VOLTAGES_CB0_4 0b00000000000
#define ID_VOLTAGES_CB1_0 0b10000100000
#define ID_VOLTAGES_CB1_1 0b01100100000
#define ID_VOLTAGES_CB1_2 0b01000100000
#define ID_VOLTAGES_CB1_3 0b00100100000
#define ID_VOLTAGES_CB1_4 0b00000100000
#define ID_VOLTAGES_CB2_0 0b10001000000
#define ID_VOLTAGES_CB2_1 0b01101000000
#define ID_VOLTAGES_CB2_2 0b01001000000
#define ID_VOLTAGES_CB2_3 0b00101000000
#define ID_VOLTAGES_CB2_4 0b00001000000
#define ID_VOLTAGES_CB3_0 0b10001100000
#define ID_VOLTAGES_CB3_1 0b01101100000
#define ID_VOLTAGES_CB3_2 0b01001100000
#define ID_VOLTAGES_CB3_3 0b00101100000
#define ID_VOLTAGES_CB3_4 0b00001100000
#define ID_VOLTAGES_CB4_0 0b10010000000
#define ID_VOLTAGES_CB4_1 0b01110000000
#define ID_VOLTAGES_CB4_2 0b01010000000
#define ID_VOLTAGES_CB4_3 0b00110000000
#define ID_VOLTAGES_CB4_4 0b00010000000
#define ID_VOLTAGES_CB5_0 0b10010100000
#define ID_VOLTAGES_CB5_1 0b01110100000
#define ID_VOLTAGES_CB5_2 0b01010100000
#define ID_VOLTAGES_CB5_3 0b00110100000
#define ID_VOLTAGES_CB5_4 0b00010100000

/* TOPIC TEMPERATURE_INFO */
#define TOPIC_TEMPERATURE_INFO_MASK 0b00000011111
#define TOPIC_TEMPERATURE_INFO_FILTER 0b00000000001
#define ID_TEMPERATURES_CB0_0 0b10000000001
#define ID_TEMPERATURES_CB0_1 0b01100000001
#define ID_TEMPERATURES_CB0_2 0b01000000001
#define ID_TEMPERATURES_CB1_0 0b10000100001
#define ID_TEMPERATURES_CB1_1 0b01100100001
#define ID_TEMPERATURES_CB1_2 0b01000100001
#define ID_TEMPERATURES_CB2_0 0b10001000001
#define ID_TEMPERATURES_CB2_1 0b01101000001
#define ID_TEMPERATURES_CB2_2 0b01001000001
#define ID_TEMPERATURES_CB3_0 0b10001100001
#define ID_TEMPERATURES_CB3_1 0b01101100001
#define ID_TEMPERATURES_CB3_2 0b01001100001
#define ID_TEMPERATURES_CB4_0 0b10010000001
#define ID_TEMPERATURES_CB4_1 0b01110000001
#define ID_TEMPERATURES_CB4_2 0b01010000001
#define ID_TEMPERATURES_CB5_0 0b10010100001
#define ID_TEMPERATURES_CB5_1 0b01110100001
#define ID_TEMPERATURES_CB5_2 0b01010100001

/* TOPIC INTRA_NET_BMS_SYNC */
#define TOPIC_INTRA_NET_BMS_SYNC_MASK 0b00000011111
#define TOPIC_INTRA_NET_BMS_SYNC_FILTER 0b00000000010
#define ID_MASTER_SYNC 0b11100000010
#define ID_CELLBOARD_TOKEN 0b11000000010

#endif

