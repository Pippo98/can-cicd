#ifndef IDS_H
#define IDS_H

/* TOPIC AB */
#define TOPIC_AB_MASK 00000011111
#define TOPIC_AB_FILTER 00000000000
#define INV_R_TEMP 00100000000
#define INV_L_TEMP 00000000000
#define MOT_R_TEMP 11100000000
#define MOT_L_TEMP 00000100000
#define CAL_SET_MIN_MAX 00001000000

/* TOPIC A */
#define TOPIC_A_MASK 00000011111
#define TOPIC_A_FILTER 00000000001
#define ENC_L_FROM_ACU 00000000001
#define ENC_R_FROM_ACU 10000000001
#define ENC_C_FROM_ACU 00000100001
#define PEDALS_FROM_ATC 00001000001
#define PEDALS_FROM_ACU 10000100001

/* TOPIC BC */
#define TOPIC_BC_MASK 00000011111
#define TOPIC_BC_FILTER 00000000010
#define CAL_RESP 00000000010

/* TOPIC B */
#define TOPIC_B_MASK 00000011111
#define TOPIC_B_FILTER 00000000011
#define HV_VOLT 00000000011
#define HV_TEMP 00000100011
#define HV_CURR_ERR_WARN 00001000011
#define LV_STATUS 00001100011
#define LV_STATUS_JUDGE 00100000011

#endif

