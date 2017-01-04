#define __bif_slave_defs_h
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
typedef struct  reg_bif_slave_rw_slave_cfg;
#define REG_RD_ADDR_bif_slave_rw_slave_cfg 0
#define REG_WR_ADDR_bif_slave_rw_slave_cfg 0
typedef struct  reg_bif_slave_r_slave_mode;
#define REG_RD_ADDR_bif_slave_r_slave_mode 4
typedef struct  reg_bif_slave_rw_ch0_cfg;
#define REG_RD_ADDR_bif_slave_rw_ch0_cfg 16
#define REG_WR_ADDR_bif_slave_rw_ch0_cfg 16
typedef struct  reg_bif_slave_rw_ch1_cfg;
#define REG_RD_ADDR_bif_slave_rw_ch1_cfg 20
#define REG_WR_ADDR_bif_slave_rw_ch1_cfg 20
typedef struct  reg_bif_slave_rw_ch2_cfg;
#define REG_RD_ADDR_bif_slave_rw_ch2_cfg 24
#define REG_WR_ADDR_bif_slave_rw_ch2_cfg 24
typedef struct  reg_bif_slave_rw_ch3_cfg;
#define REG_RD_ADDR_bif_slave_rw_ch3_cfg 28
#define REG_WR_ADDR_bif_slave_rw_ch3_cfg 28
typedef struct  reg_bif_slave_rw_arb_cfg;
#define REG_RD_ADDR_bif_slave_rw_arb_cfg 32
#define REG_WR_ADDR_bif_slave_rw_arb_cfg 32
typedef struct  reg_bif_slave_r_arb_stat;
#define REG_RD_ADDR_bif_slave_r_arb_stat 36
typedef struct  reg_bif_slave_rw_intr_mask;
#define REG_RD_ADDR_bif_slave_rw_intr_mask 64
#define REG_WR_ADDR_bif_slave_rw_intr_mask 64
typedef struct  reg_bif_slave_rw_ack_intr;
#define REG_RD_ADDR_bif_slave_rw_ack_intr 68
#define REG_WR_ADDR_bif_slave_rw_ack_intr 68
typedef struct  reg_bif_slave_r_intr;
#define REG_RD_ADDR_bif_slave_r_intr 72
typedef struct  reg_bif_slave_r_masked_intr;
#define REG_RD_ADDR_bif_slave_r_masked_intr 76
enum ;
