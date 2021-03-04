#ifndef SCHEMA_READER_H
#define SCHEMA_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif

typedef struct TEST_TLM_STATUS_UPDATE TEST_TLM_STATUS_UPDATE_t;
typedef const TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE_struct_t;
typedef TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE_mutable_struct_t;
typedef const TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE_vec_t;
typedef TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE_mutable_vec_t;
typedef struct SET_TLM_STATUS SET_TLM_STATUS_t;
typedef const SET_TLM_STATUS_t *SET_TLM_STATUS_struct_t;
typedef SET_TLM_STATUS_t *SET_TLM_STATUS_mutable_struct_t;
typedef const SET_TLM_STATUS_t *SET_TLM_STATUS_vec_t;
typedef SET_TLM_STATUS_t *SET_TLM_STATUS_mutable_vec_t;
typedef struct HV_VOLTAGE HV_VOLTAGE_t;
typedef const HV_VOLTAGE_t *HV_VOLTAGE_struct_t;
typedef HV_VOLTAGE_t *HV_VOLTAGE_mutable_struct_t;
typedef const HV_VOLTAGE_t *HV_VOLTAGE_vec_t;
typedef HV_VOLTAGE_t *HV_VOLTAGE_mutable_vec_t;
typedef struct HV_CURRENT HV_CURRENT_t;
typedef const HV_CURRENT_t *HV_CURRENT_struct_t;
typedef HV_CURRENT_t *HV_CURRENT_mutable_struct_t;
typedef const HV_CURRENT_t *HV_CURRENT_vec_t;
typedef HV_CURRENT_t *HV_CURRENT_mutable_vec_t;
typedef struct HV_TEMP HV_TEMP_t;
typedef const HV_TEMP_t *HV_TEMP_struct_t;
typedef HV_TEMP_t *HV_TEMP_mutable_struct_t;
typedef const HV_TEMP_t *HV_TEMP_vec_t;
typedef HV_TEMP_t *HV_TEMP_mutable_vec_t;
typedef struct HV_ERROR HV_ERROR_t;
typedef const HV_ERROR_t *HV_ERROR_struct_t;
typedef HV_ERROR_t *HV_ERROR_mutable_struct_t;
typedef const HV_ERROR_t *HV_ERROR_vec_t;
typedef HV_ERROR_t *HV_ERROR_mutable_vec_t;
typedef struct TS_STATUS_UPDATE TS_STATUS_UPDATE_t;
typedef const TS_STATUS_UPDATE_t *TS_STATUS_UPDATE_struct_t;
typedef TS_STATUS_UPDATE_t *TS_STATUS_UPDATE_mutable_struct_t;
typedef const TS_STATUS_UPDATE_t *TS_STATUS_UPDATE_vec_t;
typedef TS_STATUS_UPDATE_t *TS_STATUS_UPDATE_mutable_vec_t;
typedef struct SET_TS_STATUS SET_TS_STATUS_t;
typedef const SET_TS_STATUS_t *SET_TS_STATUS_struct_t;
typedef SET_TS_STATUS_t *SET_TS_STATUS_mutable_struct_t;
typedef const SET_TS_STATUS_t *SET_TS_STATUS_vec_t;
typedef SET_TS_STATUS_t *SET_TS_STATUS_mutable_vec_t;
typedef struct STEER_STATUS_UPDATE STEER_STATUS_UPDATE_t;
typedef const STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE_struct_t;
typedef STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE_mutable_struct_t;
typedef const STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE_vec_t;
typedef STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE_mutable_vec_t;
typedef struct SET_CAR_STATUS SET_CAR_STATUS_t;
typedef const SET_CAR_STATUS_t *SET_CAR_STATUS_struct_t;
typedef SET_CAR_STATUS_t *SET_CAR_STATUS_mutable_struct_t;
typedef const SET_CAR_STATUS_t *SET_CAR_STATUS_vec_t;
typedef SET_CAR_STATUS_t *SET_CAR_STATUS_mutable_vec_t;
typedef struct CAR_STATUS_UPDATE CAR_STATUS_UPDATE_t;
typedef const CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE_struct_t;
typedef CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE_mutable_struct_t;
typedef const CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE_vec_t;
typedef CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE_mutable_vec_t;
typedef struct SET_PEDALS_RANGE SET_PEDALS_RANGE_t;
typedef const SET_PEDALS_RANGE_t *SET_PEDALS_RANGE_struct_t;
typedef SET_PEDALS_RANGE_t *SET_PEDALS_RANGE_mutable_struct_t;
typedef const SET_PEDALS_RANGE_t *SET_PEDALS_RANGE_vec_t;
typedef SET_PEDALS_RANGE_t *SET_PEDALS_RANGE_mutable_vec_t;

#ifndef TEST_TLM_STATUS_UPDATE_file_identifier
#define TEST_TLM_STATUS_UPDATE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use TEST_TLM_STATUS_UPDATE_file_identifier */
#ifndef TEST_TLM_STATUS_UPDATE_identifier
#define TEST_TLM_STATUS_UPDATE_identifier flatbuffers_identifier
#endif
#define TEST_TLM_STATUS_UPDATE_type_hash ((flatbuffers_thash_t)0x5f3d09f0)
#define TEST_TLM_STATUS_UPDATE_type_identifier "\xf0\x09\x3d\x5f"
#ifndef SET_TLM_STATUS_file_identifier
#define SET_TLM_STATUS_file_identifier flatbuffers_identifier
#endif
/* deprecated, use SET_TLM_STATUS_file_identifier */
#ifndef SET_TLM_STATUS_identifier
#define SET_TLM_STATUS_identifier flatbuffers_identifier
#endif
#define SET_TLM_STATUS_type_hash ((flatbuffers_thash_t)0x1dc6c386)
#define SET_TLM_STATUS_type_identifier "\x86\xc3\xc6\x1d"
#ifndef HV_VOLTAGE_file_identifier
#define HV_VOLTAGE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use HV_VOLTAGE_file_identifier */
#ifndef HV_VOLTAGE_identifier
#define HV_VOLTAGE_identifier flatbuffers_identifier
#endif
#define HV_VOLTAGE_type_hash ((flatbuffers_thash_t)0xf746d512)
#define HV_VOLTAGE_type_identifier "\x12\xd5\x46\xf7"
#ifndef HV_CURRENT_file_identifier
#define HV_CURRENT_file_identifier flatbuffers_identifier
#endif
/* deprecated, use HV_CURRENT_file_identifier */
#ifndef HV_CURRENT_identifier
#define HV_CURRENT_identifier flatbuffers_identifier
#endif
#define HV_CURRENT_type_hash ((flatbuffers_thash_t)0x8dce88e1)
#define HV_CURRENT_type_identifier "\xe1\x88\xce\x8d"
#ifndef HV_TEMP_file_identifier
#define HV_TEMP_file_identifier flatbuffers_identifier
#endif
/* deprecated, use HV_TEMP_file_identifier */
#ifndef HV_TEMP_identifier
#define HV_TEMP_identifier flatbuffers_identifier
#endif
#define HV_TEMP_type_hash ((flatbuffers_thash_t)0x83e78ba2)
#define HV_TEMP_type_identifier "\xa2\x8b\xe7\x83"
#ifndef HV_ERROR_file_identifier
#define HV_ERROR_file_identifier flatbuffers_identifier
#endif
/* deprecated, use HV_ERROR_file_identifier */
#ifndef HV_ERROR_identifier
#define HV_ERROR_identifier flatbuffers_identifier
#endif
#define HV_ERROR_type_hash ((flatbuffers_thash_t)0xeb0a2bf2)
#define HV_ERROR_type_identifier "\xf2\x2b\x0a\xeb"
#ifndef TS_STATUS_UPDATE_file_identifier
#define TS_STATUS_UPDATE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use TS_STATUS_UPDATE_file_identifier */
#ifndef TS_STATUS_UPDATE_identifier
#define TS_STATUS_UPDATE_identifier flatbuffers_identifier
#endif
#define TS_STATUS_UPDATE_type_hash ((flatbuffers_thash_t)0xa410a589)
#define TS_STATUS_UPDATE_type_identifier "\x89\xa5\x10\xa4"
#ifndef SET_TS_STATUS_file_identifier
#define SET_TS_STATUS_file_identifier flatbuffers_identifier
#endif
/* deprecated, use SET_TS_STATUS_file_identifier */
#ifndef SET_TS_STATUS_identifier
#define SET_TS_STATUS_identifier flatbuffers_identifier
#endif
#define SET_TS_STATUS_type_hash ((flatbuffers_thash_t)0x4ed1150c)
#define SET_TS_STATUS_type_identifier "\x0c\x15\xd1\x4e"
#ifndef STEER_STATUS_UPDATE_file_identifier
#define STEER_STATUS_UPDATE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use STEER_STATUS_UPDATE_file_identifier */
#ifndef STEER_STATUS_UPDATE_identifier
#define STEER_STATUS_UPDATE_identifier flatbuffers_identifier
#endif
#define STEER_STATUS_UPDATE_type_hash ((flatbuffers_thash_t)0xaf46dbcf)
#define STEER_STATUS_UPDATE_type_identifier "\xcf\xdb\x46\xaf"
#ifndef SET_CAR_STATUS_file_identifier
#define SET_CAR_STATUS_file_identifier flatbuffers_identifier
#endif
/* deprecated, use SET_CAR_STATUS_file_identifier */
#ifndef SET_CAR_STATUS_identifier
#define SET_CAR_STATUS_identifier flatbuffers_identifier
#endif
#define SET_CAR_STATUS_type_hash ((flatbuffers_thash_t)0xa658f439)
#define SET_CAR_STATUS_type_identifier "\x39\xf4\x58\xa6"
#ifndef CAR_STATUS_UPDATE_file_identifier
#define CAR_STATUS_UPDATE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use CAR_STATUS_UPDATE_file_identifier */
#ifndef CAR_STATUS_UPDATE_identifier
#define CAR_STATUS_UPDATE_identifier flatbuffers_identifier
#endif
#define CAR_STATUS_UPDATE_type_hash ((flatbuffers_thash_t)0x6c57b460)
#define CAR_STATUS_UPDATE_type_identifier "\x60\xb4\x57\x6c"
#ifndef SET_PEDALS_RANGE_file_identifier
#define SET_PEDALS_RANGE_file_identifier flatbuffers_identifier
#endif
/* deprecated, use SET_PEDALS_RANGE_file_identifier */
#ifndef SET_PEDALS_RANGE_identifier
#define SET_PEDALS_RANGE_identifier flatbuffers_identifier
#endif
#define SET_PEDALS_RANGE_type_hash ((flatbuffers_thash_t)0x530c2c7)
#define SET_PEDALS_RANGE_type_identifier "\xc7\xc2\x30\x05"

typedef int8_t Tlm_Status_enum_t;
__flatbuffers_define_integer_type(Tlm_Status, Tlm_Status_enum_t, 8)
#define Tlm_Status_ON ((Tlm_Status_enum_t)INT8_C(0))
#define Tlm_Status_OFF ((Tlm_Status_enum_t)INT8_C(1))

static inline const char *Tlm_Status_name(Tlm_Status_enum_t value)
{
    switch (value) {
    case Tlm_Status_ON: return "ON";
    case Tlm_Status_OFF: return "OFF";
    default: return "";
    }
}

static inline int Tlm_Status_is_known_value(Tlm_Status_enum_t value)
{
    switch (value) {
    case Tlm_Status_ON: return 1;
    case Tlm_Status_OFF: return 1;
    default: return 0;
    }
}

typedef int8_t Race_Type_enum_t;
__flatbuffers_define_integer_type(Race_Type, Race_Type_enum_t, 8)
#define Race_Type_ACCELERATION ((Race_Type_enum_t)INT8_C(0))
#define Race_Type_SKIDPAD ((Race_Type_enum_t)INT8_C(1))
#define Race_Type_AUTOCROSS ((Race_Type_enum_t)INT8_C(2))
#define Race_Type_ENDURANCE ((Race_Type_enum_t)INT8_C(3))

static inline const char *Race_Type_name(Race_Type_enum_t value)
{
    switch (value) {
    case Race_Type_ACCELERATION: return "ACCELERATION";
    case Race_Type_SKIDPAD: return "SKIDPAD";
    case Race_Type_AUTOCROSS: return "AUTOCROSS";
    case Race_Type_ENDURANCE: return "ENDURANCE";
    default: return "";
    }
}

static inline int Race_Type_is_known_value(Race_Type_enum_t value)
{
    switch (value) {
    case Race_Type_ACCELERATION: return 1;
    case Race_Type_SKIDPAD: return 1;
    case Race_Type_AUTOCROSS: return 1;
    case Race_Type_ENDURANCE: return 1;
    default: return 0;
    }
}

typedef int8_t Ts_Status_enum_t;
__flatbuffers_define_integer_type(Ts_Status, Ts_Status_enum_t, 8)
#define Ts_Status_OFF ((Ts_Status_enum_t)INT8_C(0))
#define Ts_Status_PRECHARGE ((Ts_Status_enum_t)INT8_C(1))
#define Ts_Status_ON ((Ts_Status_enum_t)INT8_C(2))
#define Ts_Status_FATAL ((Ts_Status_enum_t)INT8_C(3))

static inline const char *Ts_Status_name(Ts_Status_enum_t value)
{
    switch (value) {
    case Ts_Status_OFF: return "OFF";
    case Ts_Status_PRECHARGE: return "PRECHARGE";
    case Ts_Status_ON: return "ON";
    case Ts_Status_FATAL: return "FATAL";
    default: return "";
    }
}

static inline int Ts_Status_is_known_value(Ts_Status_enum_t value)
{
    switch (value) {
    case Ts_Status_OFF: return 1;
    case Ts_Status_PRECHARGE: return 1;
    case Ts_Status_ON: return 1;
    case Ts_Status_FATAL: return 1;
    default: return 0;
    }
}

typedef int8_t Ts_Status_Set_enum_t;
__flatbuffers_define_integer_type(Ts_Status_Set, Ts_Status_Set_enum_t, 8)
#define Ts_Status_Set_OFF ((Ts_Status_Set_enum_t)INT8_C(0))
#define Ts_Status_Set_ON ((Ts_Status_Set_enum_t)INT8_C(1))

static inline const char *Ts_Status_Set_name(Ts_Status_Set_enum_t value)
{
    switch (value) {
    case Ts_Status_Set_OFF: return "OFF";
    case Ts_Status_Set_ON: return "ON";
    default: return "";
    }
}

static inline int Ts_Status_Set_is_known_value(Ts_Status_Set_enum_t value)
{
    switch (value) {
    case Ts_Status_Set_OFF: return 1;
    case Ts_Status_Set_ON: return 1;
    default: return 0;
    }
}

typedef int8_t Traction_Control_enum_t;
__flatbuffers_define_integer_type(Traction_Control, Traction_Control_enum_t, 8)
#define Traction_Control_OFF ((Traction_Control_enum_t)INT8_C(0))
#define Traction_Control_SLIP_CONTROL ((Traction_Control_enum_t)INT8_C(1))
#define Traction_Control_TORQUE_VECTORING ((Traction_Control_enum_t)INT8_C(2))
#define Traction_Control_COMPLETE ((Traction_Control_enum_t)INT8_C(3))

static inline const char *Traction_Control_name(Traction_Control_enum_t value)
{
    switch (value) {
    case Traction_Control_OFF: return "OFF";
    case Traction_Control_SLIP_CONTROL: return "SLIP_CONTROL";
    case Traction_Control_TORQUE_VECTORING: return "TORQUE_VECTORING";
    case Traction_Control_COMPLETE: return "COMPLETE";
    default: return "";
    }
}

static inline int Traction_Control_is_known_value(Traction_Control_enum_t value)
{
    switch (value) {
    case Traction_Control_OFF: return 1;
    case Traction_Control_SLIP_CONTROL: return 1;
    case Traction_Control_TORQUE_VECTORING: return 1;
    case Traction_Control_COMPLETE: return 1;
    default: return 0;
    }
}

typedef int8_t Map_enum_t;
__flatbuffers_define_integer_type(Map, Map_enum_t, 8)
#define Map_R ((Map_enum_t)INT8_C(0))
#define Map_D20 ((Map_enum_t)INT8_C(1))
#define Map_D40 ((Map_enum_t)INT8_C(2))
#define Map_D60 ((Map_enum_t)INT8_C(3))
#define Map_D80 ((Map_enum_t)INT8_C(4))
#define Map_D100 ((Map_enum_t)INT8_C(5))

static inline const char *Map_name(Map_enum_t value)
{
    switch (value) {
    case Map_R: return "R";
    case Map_D20: return "D20";
    case Map_D40: return "D40";
    case Map_D60: return "D60";
    case Map_D80: return "D80";
    case Map_D100: return "D100";
    default: return "";
    }
}

static inline int Map_is_known_value(Map_enum_t value)
{
    switch (value) {
    case Map_R: return 1;
    case Map_D20: return 1;
    case Map_D40: return 1;
    case Map_D60: return 1;
    case Map_D80: return 1;
    case Map_D100: return 1;
    default: return 0;
    }
}

typedef int8_t Car_Status_Set_enum_t;
__flatbuffers_define_integer_type(Car_Status_Set, Car_Status_Set_enum_t, 8)
#define Car_Status_Set_IDLE ((Car_Status_Set_enum_t)INT8_C(0))
#define Car_Status_Set_RUN ((Car_Status_Set_enum_t)INT8_C(1))

static inline const char *Car_Status_Set_name(Car_Status_Set_enum_t value)
{
    switch (value) {
    case Car_Status_Set_IDLE: return "IDLE";
    case Car_Status_Set_RUN: return "RUN";
    default: return "";
    }
}

static inline int Car_Status_Set_is_known_value(Car_Status_Set_enum_t value)
{
    switch (value) {
    case Car_Status_Set_IDLE: return 1;
    case Car_Status_Set_RUN: return 1;
    default: return 0;
    }
}

typedef int8_t Car_Status_enum_t;
__flatbuffers_define_integer_type(Car_Status, Car_Status_enum_t, 8)
#define Car_Status_IDLE ((Car_Status_enum_t)INT8_C(0))
#define Car_Status_SETUP ((Car_Status_enum_t)INT8_C(1))
#define Car_Status_RUN ((Car_Status_enum_t)INT8_C(2))

static inline const char *Car_Status_name(Car_Status_enum_t value)
{
    switch (value) {
    case Car_Status_IDLE: return "IDLE";
    case Car_Status_SETUP: return "SETUP";
    case Car_Status_RUN: return "RUN";
    default: return "";
    }
}

static inline int Car_Status_is_known_value(Car_Status_enum_t value)
{
    switch (value) {
    case Car_Status_IDLE: return 1;
    case Car_Status_SETUP: return 1;
    case Car_Status_RUN: return 1;
    default: return 0;
    }
}

typedef int8_t Inverter_Status_enum_t;
__flatbuffers_define_integer_type(Inverter_Status, Inverter_Status_enum_t, 8)
#define Inverter_Status_OFF ((Inverter_Status_enum_t)INT8_C(0))
#define Inverter_Status_IDLE ((Inverter_Status_enum_t)INT8_C(1))
#define Inverter_Status_ON ((Inverter_Status_enum_t)INT8_C(2))

static inline const char *Inverter_Status_name(Inverter_Status_enum_t value)
{
    switch (value) {
    case Inverter_Status_OFF: return "OFF";
    case Inverter_Status_IDLE: return "IDLE";
    case Inverter_Status_ON: return "ON";
    default: return "";
    }
}

static inline int Inverter_Status_is_known_value(Inverter_Status_enum_t value)
{
    switch (value) {
    case Inverter_Status_OFF: return 1;
    case Inverter_Status_IDLE: return 1;
    case Inverter_Status_ON: return 1;
    default: return 0;
    }
}

typedef int8_t Bound_enum_t;
__flatbuffers_define_integer_type(Bound, Bound_enum_t, 8)
#define Bound_MAX ((Bound_enum_t)INT8_C(0))
#define Bound_MIN ((Bound_enum_t)INT8_C(1))

static inline const char *Bound_name(Bound_enum_t value)
{
    switch (value) {
    case Bound_MAX: return "MAX";
    case Bound_MIN: return "MIN";
    default: return "";
    }
}

static inline int Bound_is_known_value(Bound_enum_t value)
{
    switch (value) {
    case Bound_MAX: return 1;
    case Bound_MIN: return 1;
    default: return 0;
    }
}


struct TEST_TLM_STATUS_UPDATE {
    alignas(1) Tlm_Status_enum_t tlm_status;
    alignas(1) Race_Type_enum_t race_type;
    alignas(1) uint8_t driver;
    alignas(1) uint8_t circuit;
};
static_assert(sizeof(TEST_TLM_STATUS_UPDATE_t) == 4, "struct size mismatch");

static inline const TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE__const_ptr_add(const TEST_TLM_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline TEST_TLM_STATUS_UPDATE_t *TEST_TLM_STATUS_UPDATE__ptr_add(TEST_TLM_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline TEST_TLM_STATUS_UPDATE_struct_t TEST_TLM_STATUS_UPDATE_vec_at(TEST_TLM_STATUS_UPDATE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t TEST_TLM_STATUS_UPDATE__size(void) { return 4; }
static inline size_t TEST_TLM_STATUS_UPDATE_vec_len(TEST_TLM_STATUS_UPDATE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(TEST_TLM_STATUS_UPDATE)

__flatbuffers_define_struct_scalar_field(TEST_TLM_STATUS_UPDATE, tlm_status, Tlm_Status, Tlm_Status_enum_t)
__flatbuffers_define_struct_scalar_field(TEST_TLM_STATUS_UPDATE, race_type, Race_Type, Race_Type_enum_t)
__flatbuffers_define_struct_scalar_field(TEST_TLM_STATUS_UPDATE, driver, flatbuffers_uint8, uint8_t)
__flatbuffers_define_struct_scalar_field(TEST_TLM_STATUS_UPDATE, circuit, flatbuffers_uint8, uint8_t)

struct SET_TLM_STATUS {
    alignas(1) Tlm_Status_enum_t tlm_status;
    alignas(1) Race_Type_enum_t race_type;
    alignas(1) uint8_t driver;
    alignas(1) uint8_t circuit;
};
static_assert(sizeof(SET_TLM_STATUS_t) == 4, "struct size mismatch");

static inline const SET_TLM_STATUS_t *SET_TLM_STATUS__const_ptr_add(const SET_TLM_STATUS_t *p, size_t i) { return p + i; }
static inline SET_TLM_STATUS_t *SET_TLM_STATUS__ptr_add(SET_TLM_STATUS_t *p, size_t i) { return p + i; }
static inline SET_TLM_STATUS_struct_t SET_TLM_STATUS_vec_at(SET_TLM_STATUS_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t SET_TLM_STATUS__size(void) { return 4; }
static inline size_t SET_TLM_STATUS_vec_len(SET_TLM_STATUS_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(SET_TLM_STATUS)

__flatbuffers_define_struct_scalar_field(SET_TLM_STATUS, tlm_status, Tlm_Status, Tlm_Status_enum_t)
__flatbuffers_define_struct_scalar_field(SET_TLM_STATUS, race_type, Race_Type, Race_Type_enum_t)
__flatbuffers_define_struct_scalar_field(SET_TLM_STATUS, driver, flatbuffers_uint8, uint8_t)
__flatbuffers_define_struct_scalar_field(SET_TLM_STATUS, circuit, flatbuffers_uint8, uint8_t)

struct HV_VOLTAGE {
    alignas(2) uint16_t pack_voltage;
    alignas(2) uint16_t bus_voltage;
    alignas(2) uint16_t max_cell_voltage;
    alignas(2) uint16_t min_cell_voltage;
};
static_assert(sizeof(HV_VOLTAGE_t) == 8, "struct size mismatch");

static inline const HV_VOLTAGE_t *HV_VOLTAGE__const_ptr_add(const HV_VOLTAGE_t *p, size_t i) { return p + i; }
static inline HV_VOLTAGE_t *HV_VOLTAGE__ptr_add(HV_VOLTAGE_t *p, size_t i) { return p + i; }
static inline HV_VOLTAGE_struct_t HV_VOLTAGE_vec_at(HV_VOLTAGE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t HV_VOLTAGE__size(void) { return 8; }
static inline size_t HV_VOLTAGE_vec_len(HV_VOLTAGE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(HV_VOLTAGE)

__flatbuffers_define_struct_scalar_field(HV_VOLTAGE, pack_voltage, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_VOLTAGE, bus_voltage, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_VOLTAGE, max_cell_voltage, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_VOLTAGE, min_cell_voltage, flatbuffers_uint16, uint16_t)

struct HV_CURRENT {
    alignas(2) uint16_t current;
    alignas(1) int8_t power;
};
static_assert(sizeof(HV_CURRENT_t) == 4, "struct size mismatch");

static inline const HV_CURRENT_t *HV_CURRENT__const_ptr_add(const HV_CURRENT_t *p, size_t i) { return p + i; }
static inline HV_CURRENT_t *HV_CURRENT__ptr_add(HV_CURRENT_t *p, size_t i) { return p + i; }
static inline HV_CURRENT_struct_t HV_CURRENT_vec_at(HV_CURRENT_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t HV_CURRENT__size(void) { return 4; }
static inline size_t HV_CURRENT_vec_len(HV_CURRENT_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(HV_CURRENT)

__flatbuffers_define_struct_scalar_field(HV_CURRENT, current, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_CURRENT, power, flatbuffers_int8, int8_t)

struct HV_TEMP {
    alignas(2) uint16_t average_temp;
    alignas(2) uint16_t max_temp;
    alignas(2) uint16_t min_temp;
};
static_assert(sizeof(HV_TEMP_t) == 6, "struct size mismatch");

static inline const HV_TEMP_t *HV_TEMP__const_ptr_add(const HV_TEMP_t *p, size_t i) { return p + i; }
static inline HV_TEMP_t *HV_TEMP__ptr_add(HV_TEMP_t *p, size_t i) { return p + i; }
static inline HV_TEMP_struct_t HV_TEMP_vec_at(HV_TEMP_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t HV_TEMP__size(void) { return 6; }
static inline size_t HV_TEMP_vec_len(HV_TEMP_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(HV_TEMP)

__flatbuffers_define_struct_scalar_field(HV_TEMP, average_temp, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_TEMP, max_temp, flatbuffers_uint16, uint16_t)
__flatbuffers_define_struct_scalar_field(HV_TEMP, min_temp, flatbuffers_uint16, uint16_t)

struct HV_ERROR {
    alignas(1) uint8_t error_code;
    alignas(1) uint8_t error_index;
    alignas(1) uint8_t active;
};
static_assert(sizeof(HV_ERROR_t) == 3, "struct size mismatch");

static inline const HV_ERROR_t *HV_ERROR__const_ptr_add(const HV_ERROR_t *p, size_t i) { return p + i; }
static inline HV_ERROR_t *HV_ERROR__ptr_add(HV_ERROR_t *p, size_t i) { return p + i; }
static inline HV_ERROR_struct_t HV_ERROR_vec_at(HV_ERROR_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t HV_ERROR__size(void) { return 3; }
static inline size_t HV_ERROR_vec_len(HV_ERROR_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(HV_ERROR)

__flatbuffers_define_struct_scalar_field(HV_ERROR, error_code, flatbuffers_uint8, uint8_t)
__flatbuffers_define_struct_scalar_field(HV_ERROR, error_index, flatbuffers_uint8, uint8_t)
__flatbuffers_define_struct_scalar_field(HV_ERROR, active, flatbuffers_uint8, uint8_t)

struct TS_STATUS_UPDATE {
    alignas(1) Ts_Status_enum_t ts_status;
};
static_assert(sizeof(TS_STATUS_UPDATE_t) == 1, "struct size mismatch");

static inline const TS_STATUS_UPDATE_t *TS_STATUS_UPDATE__const_ptr_add(const TS_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline TS_STATUS_UPDATE_t *TS_STATUS_UPDATE__ptr_add(TS_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline TS_STATUS_UPDATE_struct_t TS_STATUS_UPDATE_vec_at(TS_STATUS_UPDATE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t TS_STATUS_UPDATE__size(void) { return 1; }
static inline size_t TS_STATUS_UPDATE_vec_len(TS_STATUS_UPDATE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(TS_STATUS_UPDATE)

__flatbuffers_define_struct_scalar_field(TS_STATUS_UPDATE, ts_status, Ts_Status, Ts_Status_enum_t)

struct SET_TS_STATUS {
    alignas(1) Ts_Status_Set_enum_t ts_status_set;
};
static_assert(sizeof(SET_TS_STATUS_t) == 1, "struct size mismatch");

static inline const SET_TS_STATUS_t *SET_TS_STATUS__const_ptr_add(const SET_TS_STATUS_t *p, size_t i) { return p + i; }
static inline SET_TS_STATUS_t *SET_TS_STATUS__ptr_add(SET_TS_STATUS_t *p, size_t i) { return p + i; }
static inline SET_TS_STATUS_struct_t SET_TS_STATUS_vec_at(SET_TS_STATUS_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t SET_TS_STATUS__size(void) { return 1; }
static inline size_t SET_TS_STATUS_vec_len(SET_TS_STATUS_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(SET_TS_STATUS)

__flatbuffers_define_struct_scalar_field(SET_TS_STATUS, ts_status_set, Ts_Status_Set, Ts_Status_Set_enum_t)

struct STEER_STATUS_UPDATE {
    alignas(1) Traction_Control_enum_t traction_control;
    alignas(1) Map_enum_t map;
    alignas(1) flatbuffers_bool_t radio_on;
};
static_assert(sizeof(STEER_STATUS_UPDATE_t) == 3, "struct size mismatch");

static inline const STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE__const_ptr_add(const STEER_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline STEER_STATUS_UPDATE_t *STEER_STATUS_UPDATE__ptr_add(STEER_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline STEER_STATUS_UPDATE_struct_t STEER_STATUS_UPDATE_vec_at(STEER_STATUS_UPDATE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t STEER_STATUS_UPDATE__size(void) { return 3; }
static inline size_t STEER_STATUS_UPDATE_vec_len(STEER_STATUS_UPDATE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(STEER_STATUS_UPDATE)

__flatbuffers_define_struct_scalar_field(STEER_STATUS_UPDATE, traction_control, Traction_Control, Traction_Control_enum_t)
__flatbuffers_define_struct_scalar_field(STEER_STATUS_UPDATE, map, Map, Map_enum_t)
__flatbuffers_define_struct_scalar_field(STEER_STATUS_UPDATE, radio_on, flatbuffers_bool, flatbuffers_bool_t)

struct SET_CAR_STATUS {
    alignas(1) Car_Status_Set_enum_t car_status_set;
};
static_assert(sizeof(SET_CAR_STATUS_t) == 1, "struct size mismatch");

static inline const SET_CAR_STATUS_t *SET_CAR_STATUS__const_ptr_add(const SET_CAR_STATUS_t *p, size_t i) { return p + i; }
static inline SET_CAR_STATUS_t *SET_CAR_STATUS__ptr_add(SET_CAR_STATUS_t *p, size_t i) { return p + i; }
static inline SET_CAR_STATUS_struct_t SET_CAR_STATUS_vec_at(SET_CAR_STATUS_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t SET_CAR_STATUS__size(void) { return 1; }
static inline size_t SET_CAR_STATUS_vec_len(SET_CAR_STATUS_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(SET_CAR_STATUS)

__flatbuffers_define_struct_scalar_field(SET_CAR_STATUS, car_status_set, Car_Status_Set, Car_Status_Set_enum_t)

struct CAR_STATUS_UPDATE {
    alignas(1) Car_Status_enum_t car_status;
    alignas(1) Inverter_Status_enum_t inverter_l;
    alignas(1) Inverter_Status_enum_t inverter_r;
};
static_assert(sizeof(CAR_STATUS_UPDATE_t) == 3, "struct size mismatch");

static inline const CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE__const_ptr_add(const CAR_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline CAR_STATUS_UPDATE_t *CAR_STATUS_UPDATE__ptr_add(CAR_STATUS_UPDATE_t *p, size_t i) { return p + i; }
static inline CAR_STATUS_UPDATE_struct_t CAR_STATUS_UPDATE_vec_at(CAR_STATUS_UPDATE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t CAR_STATUS_UPDATE__size(void) { return 3; }
static inline size_t CAR_STATUS_UPDATE_vec_len(CAR_STATUS_UPDATE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(CAR_STATUS_UPDATE)

__flatbuffers_define_struct_scalar_field(CAR_STATUS_UPDATE, car_status, Car_Status, Car_Status_enum_t)
__flatbuffers_define_struct_scalar_field(CAR_STATUS_UPDATE, inverter_l, Inverter_Status, Inverter_Status_enum_t)
__flatbuffers_define_struct_scalar_field(CAR_STATUS_UPDATE, inverter_r, Inverter_Status, Inverter_Status_enum_t)

struct SET_PEDALS_RANGE {
    alignas(1) Bound_enum_t bound;
};
static_assert(sizeof(SET_PEDALS_RANGE_t) == 1, "struct size mismatch");

static inline const SET_PEDALS_RANGE_t *SET_PEDALS_RANGE__const_ptr_add(const SET_PEDALS_RANGE_t *p, size_t i) { return p + i; }
static inline SET_PEDALS_RANGE_t *SET_PEDALS_RANGE__ptr_add(SET_PEDALS_RANGE_t *p, size_t i) { return p + i; }
static inline SET_PEDALS_RANGE_struct_t SET_PEDALS_RANGE_vec_at(SET_PEDALS_RANGE_vec_t vec, size_t i)
__flatbuffers_struct_vec_at(vec, i)
static inline size_t SET_PEDALS_RANGE__size(void) { return 1; }
static inline size_t SET_PEDALS_RANGE_vec_len(SET_PEDALS_RANGE_vec_t vec)
__flatbuffers_vec_len(vec)
__flatbuffers_struct_as_root(SET_PEDALS_RANGE)

__flatbuffers_define_struct_scalar_field(SET_PEDALS_RANGE, bound, Bound, Bound_enum_t)



#include "flatcc/flatcc_epilogue.h"
#endif /* SCHEMA_READER_H */
