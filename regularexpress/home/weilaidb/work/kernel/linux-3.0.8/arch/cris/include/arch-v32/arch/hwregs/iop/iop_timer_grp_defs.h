#define __iop_timer_grp_defs_h
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
typedef struct  reg_iop_timer_grp_rw_cfg;
#define REG_RD_ADDR_iop_timer_grp_rw_cfg 0
#define REG_WR_ADDR_iop_timer_grp_rw_cfg 0
typedef struct  reg_iop_timer_grp_rw_half_period;
#define REG_RD_ADDR_iop_timer_grp_rw_half_period 4
#define REG_WR_ADDR_iop_timer_grp_rw_half_period 4
typedef unsigned int reg_iop_timer_grp_rw_half_period_len;
#define REG_RD_ADDR_iop_timer_grp_rw_half_period_len 8
#define REG_WR_ADDR_iop_timer_grp_rw_half_period_len 8
#define STRIDE_iop_timer_grp_rw_tmr_cfg 4
typedef struct  reg_iop_timer_grp_rw_tmr_cfg;
#define REG_RD_ADDR_iop_timer_grp_rw_tmr_cfg 12
#define REG_WR_ADDR_iop_timer_grp_rw_tmr_cfg 12
#define STRIDE_iop_timer_grp_rw_tmr_len 4
typedef struct  reg_iop_timer_grp_rw_tmr_len;
#define REG_RD_ADDR_iop_timer_grp_rw_tmr_len 44
#define REG_WR_ADDR_iop_timer_grp_rw_tmr_len 44
typedef struct  reg_iop_timer_grp_rw_cmd;
#define REG_RD_ADDR_iop_timer_grp_rw_cmd 60
#define REG_WR_ADDR_iop_timer_grp_rw_cmd 60
typedef unsigned int reg_iop_timer_grp_r_clk_gen_cnt;
#define REG_RD_ADDR_iop_timer_grp_r_clk_gen_cnt 64
#define STRIDE_iop_timer_grp_rs_tmr_cnt 8
typedef struct  reg_iop_timer_grp_rs_tmr_cnt;
#define REG_RD_ADDR_iop_timer_grp_rs_tmr_cnt 68
#define STRIDE_iop_timer_grp_r_tmr_cnt 8
typedef struct  reg_iop_timer_grp_r_tmr_cnt;
#define REG_RD_ADDR_iop_timer_grp_r_tmr_cnt 72
typedef struct  reg_iop_timer_grp_rw_intr_mask;
#define REG_RD_ADDR_iop_timer_grp_rw_intr_mask 100
#define REG_WR_ADDR_iop_timer_grp_rw_intr_mask 100
typedef struct  reg_iop_timer_grp_rw_ack_intr;
#define REG_RD_ADDR_iop_timer_grp_rw_ack_intr 104
#define REG_WR_ADDR_iop_timer_grp_rw_ack_intr 104
typedef struct  reg_iop_timer_grp_r_intr;
#define REG_RD_ADDR_iop_timer_grp_r_intr 108
typedef struct  reg_iop_timer_grp_r_masked_intr;
#define REG_RD_ADDR_iop_timer_grp_r_masked_intr 112
enum ;
