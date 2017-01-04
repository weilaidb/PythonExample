#define __T4VF_DEFS_H__
#define T4VF_SGE_BASE_ADDR	0x0000
#define T4VF_MPS_BASE_ADDR	0x0100
#define T4VF_PL_BASE_ADDR	0x0200
#define T4VF_MBDATA_BASE_ADDR	0x0240
#define T4VF_CIM_BASE_ADDR	0x0300
#define T4VF_REGMAP_START	0x0000
#define T4VF_REGMAP_SIZE	0x0400
#if T4VF_MBDATA_BASE_ADDR != CIM_PF_MAILBOX_DATA
#error T4VF_MBDATA_BASE_ADDR must match CIM_PF_MAILBOX_DATA!
#define T4VF_MOD_MAP(module, index, first, last) \
T4VF_MOD_MAP_##module##_INDEX  = (index), \
T4VF_MOD_MAP_##module##_FIRST  = (first), \
T4VF_MOD_MAP_##module##_LAST   = (last), \
T4VF_MOD_MAP_##module##_OFFSET = ((first)/4), \
T4VF_MOD_MAP_##module##_BASE = \
(T4VF_##module##_BASE_ADDR/4 + (first)/4), \
T4VF_MOD_MAP_##module##_LIMIT = \
(T4VF_##module##_BASE_ADDR/4 + (last)/4),
#define SGE_VF_KDOORBELL 0x0
#define SGE_VF_GTS 0x4
#define MPS_VF_CTL 0x0
#define MPS_VF_STAT_RX_VF_ERR_FRAMES_H 0xfc
#define PL_VF_WHOAMI 0x0
#define CIM_VF_EXT_MAILBOX_CTRL 0x0
#define CIM_VF_EXT_MAILBOX_STATUS 0x4
enum ;
#define NUM_CIM_VF_MAILBOX_DATA_INSTANCES 16
#define T4VF_MBDATA_FIRST	0
#define T4VF_MBDATA_LAST	((NUM_CIM_VF_MAILBOX_DATA_INSTANCES-1)*4)
