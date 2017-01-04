#define __timer_defs_h
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
typedef unsigned int reg_timer_rw_tmr0_div;
#define REG_RD_ADDR_timer_rw_tmr0_div 0
#define REG_WR_ADDR_timer_rw_tmr0_div 0
typedef unsigned int reg_timer_r_tmr0_data;
#define REG_RD_ADDR_timer_r_tmr0_data 4
typedef struct  reg_timer_rw_tmr0_ctrl;
#define REG_RD_ADDR_timer_rw_tmr0_ctrl 8
#define REG_WR_ADDR_timer_rw_tmr0_ctrl 8
typedef unsigned int reg_timer_rw_tmr1_div;
#define REG_RD_ADDR_timer_rw_tmr1_div 16
#define REG_WR_ADDR_timer_rw_tmr1_div 16
typedef unsigned int reg_timer_r_tmr1_data;
#define REG_RD_ADDR_timer_r_tmr1_data 20
typedef struct  reg_timer_rw_tmr1_ctrl;
#define REG_RD_ADDR_timer_rw_tmr1_ctrl 24
#define REG_WR_ADDR_timer_rw_tmr1_ctrl 24
typedef struct  reg_timer_rs_cnt_data;
#define REG_RD_ADDR_timer_rs_cnt_data 32
typedef struct  reg_timer_r_cnt_data;
#define REG_RD_ADDR_timer_r_cnt_data 36
typedef struct  reg_timer_rw_cnt_cfg;
#define REG_RD_ADDR_timer_rw_cnt_cfg 40
#define REG_WR_ADDR_timer_rw_cnt_cfg 40
typedef unsigned int reg_timer_rw_trig;
#define REG_RD_ADDR_timer_rw_trig 48
#define REG_WR_ADDR_timer_rw_trig 48
typedef struct  reg_timer_rw_trig_cfg;
#define REG_RD_ADDR_timer_rw_trig_cfg 52
#define REG_WR_ADDR_timer_rw_trig_cfg 52
typedef unsigned int reg_timer_r_time;
#define REG_RD_ADDR_timer_r_time 56
typedef struct  reg_timer_rw_out;
#define REG_RD_ADDR_timer_rw_out 60
#define REG_WR_ADDR_timer_rw_out 60
typedef struct  reg_timer_rw_wd_ctrl;
#define REG_RD_ADDR_timer_rw_wd_ctrl 64
#define REG_WR_ADDR_timer_rw_wd_ctrl 64
typedef struct  reg_timer_r_wd_stat;
#define REG_RD_ADDR_timer_r_wd_stat 68
typedef struct  reg_timer_rw_intr_mask;
#define REG_RD_ADDR_timer_rw_intr_mask 72
#define REG_WR_ADDR_timer_rw_intr_mask 72
typedef struct  reg_timer_rw_ack_intr;
#define REG_RD_ADDR_timer_rw_ack_intr 76
#define REG_WR_ADDR_timer_rw_ack_intr 76
typedef struct  reg_timer_r_intr;
#define REG_RD_ADDR_timer_r_intr 80
typedef struct  reg_timer_r_masked_intr;
#define REG_RD_ADDR_timer_r_masked_intr 84
typedef struct  reg_timer_rw_test;
#define REG_RD_ADDR_timer_rw_test 88
#define REG_WR_ADDR_timer_rw_test 88
enum ;
