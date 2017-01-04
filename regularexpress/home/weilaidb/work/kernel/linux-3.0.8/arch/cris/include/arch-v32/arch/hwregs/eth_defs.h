#define __eth_defs_h
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
typedef struct  reg_eth_rw_ma0_lo;
#define REG_RD_ADDR_eth_rw_ma0_lo 0
#define REG_WR_ADDR_eth_rw_ma0_lo 0
typedef struct  reg_eth_rw_ma0_hi;
#define REG_RD_ADDR_eth_rw_ma0_hi 4
#define REG_WR_ADDR_eth_rw_ma0_hi 4
typedef struct  reg_eth_rw_ma1_lo;
#define REG_RD_ADDR_eth_rw_ma1_lo 8
#define REG_WR_ADDR_eth_rw_ma1_lo 8
typedef struct  reg_eth_rw_ma1_hi;
#define REG_RD_ADDR_eth_rw_ma1_hi 12
#define REG_WR_ADDR_eth_rw_ma1_hi 12
typedef struct  reg_eth_rw_ga_lo;
#define REG_RD_ADDR_eth_rw_ga_lo 16
#define REG_WR_ADDR_eth_rw_ga_lo 16
typedef struct  reg_eth_rw_ga_hi;
#define REG_RD_ADDR_eth_rw_ga_hi 20
#define REG_WR_ADDR_eth_rw_ga_hi 20
typedef struct  reg_eth_rw_gen_ctrl;
#define REG_RD_ADDR_eth_rw_gen_ctrl 24
#define REG_WR_ADDR_eth_rw_gen_ctrl 24
typedef struct  reg_eth_rw_rec_ctrl;
#define REG_RD_ADDR_eth_rw_rec_ctrl 28
#define REG_WR_ADDR_eth_rw_rec_ctrl 28
typedef struct  reg_eth_rw_tr_ctrl;
#define REG_RD_ADDR_eth_rw_tr_ctrl 32
#define REG_WR_ADDR_eth_rw_tr_ctrl 32
typedef struct  reg_eth_rw_clr_err;
#define REG_RD_ADDR_eth_rw_clr_err 36
#define REG_WR_ADDR_eth_rw_clr_err 36
typedef struct  reg_eth_rw_mgm_ctrl;
#define REG_RD_ADDR_eth_rw_mgm_ctrl 40
#define REG_WR_ADDR_eth_rw_mgm_ctrl 40
typedef struct  reg_eth_r_stat;
#define REG_RD_ADDR_eth_r_stat 44
typedef struct  reg_eth_rs_rec_cnt;
#define REG_RD_ADDR_eth_rs_rec_cnt 48
typedef struct  reg_eth_r_rec_cnt;
#define REG_RD_ADDR_eth_r_rec_cnt 52
typedef struct  reg_eth_rs_tr_cnt;
#define REG_RD_ADDR_eth_rs_tr_cnt 56
typedef struct  reg_eth_r_tr_cnt;
#define REG_RD_ADDR_eth_r_tr_cnt 60
typedef struct  reg_eth_rs_phy_cnt;
#define REG_RD_ADDR_eth_rs_phy_cnt 64
typedef struct  reg_eth_r_phy_cnt;
#define REG_RD_ADDR_eth_r_phy_cnt 68
typedef struct  reg_eth_rw_test_ctrl;
#define REG_RD_ADDR_eth_rw_test_ctrl 72
#define REG_WR_ADDR_eth_rw_test_ctrl 72
typedef struct  reg_eth_rw_intr_mask;
#define REG_RD_ADDR_eth_rw_intr_mask 76
#define REG_WR_ADDR_eth_rw_intr_mask 76
typedef struct  reg_eth_rw_ack_intr;
#define REG_RD_ADDR_eth_rw_ack_intr 80
#define REG_WR_ADDR_eth_rw_ack_intr 80
typedef struct  reg_eth_r_intr;
#define REG_RD_ADDR_eth_r_intr 84
typedef struct  reg_eth_r_masked_intr;
#define REG_RD_ADDR_eth_r_masked_intr 88
enum ;
