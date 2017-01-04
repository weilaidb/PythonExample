#define __iop_spu_defs_h
#define REG_RD( scope, inst, reg ) \
REG_READ( reg_##scope##_##reg, \
(inst) + REG_RD_ADDR_##scope##_##reg )
#define REG_WR( scope, inst, reg, val ) \
REG_WRITE( reg_##scope##_##reg, \
(inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#define REG_RD_VECT( scope, inst, reg, index ) \
REG_READ( reg_##scope##_##reg, \
(inst) + REG_RD_ADDR_##scope##_##reg + \
(index) * STRIDE_##scope##_##reg )
#define REG_WR_VECT( scope, inst, reg, index, val ) \
REG_WRITE( reg_##scope##_##reg, \
(inst) + REG_WR_ADDR_##scope##_##reg + \
(index) * STRIDE_##scope##_##reg, (val) )
#define REG_RD_INT( scope, inst, reg ) \
REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#define REG_WR_INT( scope, inst, reg, val ) \
REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
(index) * STRIDE_##scope##_##reg )
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
(index) * STRIDE_##scope##_##reg, (val) )
#define REG_TYPE_CONV( type, orgtype, val ) \
(  )
#define reg_page_size 8192
#define REG_ADDR( scope, inst, reg ) \
( (inst) + REG_RD_ADDR_##scope##_##reg )
#define REG_ADDR_VECT( scope, inst, reg, index ) \
( (inst) + REG_RD_ADDR_##scope##_##reg + \
(index) * STRIDE_##scope##_##reg )
#define STRIDE_iop_spu_rw_r 4
typedef unsigned int reg_iop_spu_rw_r;
#define REG_RD_ADDR_iop_spu_rw_r 0
#define REG_WR_ADDR_iop_spu_rw_r 0
typedef struct  reg_iop_spu_rw_seq_pc;
#define REG_RD_ADDR_iop_spu_rw_seq_pc 64
#define REG_WR_ADDR_iop_spu_rw_seq_pc 64
typedef struct  reg_iop_spu_rw_fsm_pc;
#define REG_RD_ADDR_iop_spu_rw_fsm_pc 68
#define REG_WR_ADDR_iop_spu_rw_fsm_pc 68
typedef struct  reg_iop_spu_rw_ctrl;
#define REG_RD_ADDR_iop_spu_rw_ctrl 72
#define REG_WR_ADDR_iop_spu_rw_ctrl 72
typedef struct  reg_iop_spu_rw_fsm_inputs3_0;
#define REG_RD_ADDR_iop_spu_rw_fsm_inputs3_0 76
#define REG_WR_ADDR_iop_spu_rw_fsm_inputs3_0 76
typedef struct  reg_iop_spu_rw_fsm_inputs7_4;
#define REG_RD_ADDR_iop_spu_rw_fsm_inputs7_4 80
#define REG_WR_ADDR_iop_spu_rw_fsm_inputs7_4 80
typedef unsigned int reg_iop_spu_rw_gio_out;
#define REG_RD_ADDR_iop_spu_rw_gio_out 84
#define REG_WR_ADDR_iop_spu_rw_gio_out 84
typedef unsigned int reg_iop_spu_rw_bus0_out;
#define REG_RD_ADDR_iop_spu_rw_bus0_out 88
#define REG_WR_ADDR_iop_spu_rw_bus0_out 88
typedef unsigned int reg_iop_spu_rw_bus1_out;
#define REG_RD_ADDR_iop_spu_rw_bus1_out 92
#define REG_WR_ADDR_iop_spu_rw_bus1_out 92
typedef unsigned int reg_iop_spu_r_gio_in;
#define REG_RD_ADDR_iop_spu_r_gio_in 96
typedef unsigned int reg_iop_spu_r_bus0_in;
#define REG_RD_ADDR_iop_spu_r_bus0_in 100
typedef unsigned int reg_iop_spu_r_bus1_in;
#define REG_RD_ADDR_iop_spu_r_bus1_in 104
typedef unsigned int reg_iop_spu_rw_gio_out_set;
#define REG_RD_ADDR_iop_spu_rw_gio_out_set 108
#define REG_WR_ADDR_iop_spu_rw_gio_out_set 108
typedef unsigned int reg_iop_spu_rw_gio_out_clr;
#define REG_RD_ADDR_iop_spu_rw_gio_out_clr 112
#define REG_WR_ADDR_iop_spu_rw_gio_out_clr 112
typedef struct  reg_iop_spu_rs_wr_stat;
#define REG_RD_ADDR_iop_spu_rs_wr_stat 116
typedef struct  reg_iop_spu_r_wr_stat;
#define REG_RD_ADDR_iop_spu_r_wr_stat 120
typedef unsigned int reg_iop_spu_r_reg_indexed_by_bus0_in;
#define REG_RD_ADDR_iop_spu_r_reg_indexed_by_bus0_in 124
typedef struct  reg_iop_spu_r_stat_in;
#define REG_RD_ADDR_iop_spu_r_stat_in 128
typedef unsigned int reg_iop_spu_r_trigger_in;
#define REG_RD_ADDR_iop_spu_r_trigger_in 132
typedef struct  reg_iop_spu_r_special_stat;
#define REG_RD_ADDR_iop_spu_r_special_stat 136
typedef struct  reg_iop_spu_rw_reg_access;
#define REG_RD_ADDR_iop_spu_rw_reg_access 140
#define REG_WR_ADDR_iop_spu_rw_reg_access 140
#define STRIDE_iop_spu_rw_event_cfg 4
typedef struct  reg_iop_spu_rw_event_cfg;
#define REG_RD_ADDR_iop_spu_rw_event_cfg 144
#define REG_WR_ADDR_iop_spu_rw_event_cfg 144
#define STRIDE_iop_spu_rw_event_mask 4
typedef unsigned int reg_iop_spu_rw_event_mask;
#define REG_RD_ADDR_iop_spu_rw_event_mask 160
#define REG_WR_ADDR_iop_spu_rw_event_mask 160
#define STRIDE_iop_spu_rw_event_val 4
typedef unsigned int reg_iop_spu_rw_event_val;
#define REG_RD_ADDR_iop_spu_rw_event_val 176
#define REG_WR_ADDR_iop_spu_rw_event_val 176
typedef struct  reg_iop_spu_rw_event_ret;
#define REG_RD_ADDR_iop_spu_rw_event_ret 192
#define REG_WR_ADDR_iop_spu_rw_event_ret 192
typedef struct  reg_iop_spu_r_trace;
#define REG_RD_ADDR_iop_spu_r_trace 196
typedef struct  reg_iop_spu_r_fsm_trace;
#define REG_RD_ADDR_iop_spu_r_fsm_trace 200
#define STRIDE_iop_spu_rw_brp 4
typedef struct  reg_iop_spu_rw_brp;
#define REG_RD_ADDR_iop_spu_rw_brp 204
#define REG_WR_ADDR_iop_spu_rw_brp 204
enum ;
