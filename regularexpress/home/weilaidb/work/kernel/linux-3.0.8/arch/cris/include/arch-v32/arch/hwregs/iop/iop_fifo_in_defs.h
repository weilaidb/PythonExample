#define __iop_fifo_in_defs_h
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
typedef struct  reg_iop_fifo_in_rw_cfg;
#define REG_RD_ADDR_iop_fifo_in_rw_cfg 0
#define REG_WR_ADDR_iop_fifo_in_rw_cfg 0
typedef struct  reg_iop_fifo_in_rw_ctrl;
#define REG_RD_ADDR_iop_fifo_in_rw_ctrl 4
#define REG_WR_ADDR_iop_fifo_in_rw_ctrl 4
typedef struct  reg_iop_fifo_in_r_stat;
#define REG_RD_ADDR_iop_fifo_in_r_stat 8
typedef struct  reg_iop_fifo_in_rs_rd1byte;
#define REG_RD_ADDR_iop_fifo_in_rs_rd1byte 12
typedef struct  reg_iop_fifo_in_r_rd1byte;
#define REG_RD_ADDR_iop_fifo_in_r_rd1byte 16
typedef struct  reg_iop_fifo_in_rs_rd2byte;
#define REG_RD_ADDR_iop_fifo_in_rs_rd2byte 20
typedef struct  reg_iop_fifo_in_r_rd2byte;
#define REG_RD_ADDR_iop_fifo_in_r_rd2byte 24
typedef struct  reg_iop_fifo_in_rs_rd3byte;
#define REG_RD_ADDR_iop_fifo_in_rs_rd3byte 28
typedef struct  reg_iop_fifo_in_r_rd3byte;
#define REG_RD_ADDR_iop_fifo_in_r_rd3byte 32
typedef struct  reg_iop_fifo_in_rs_rd4byte;
#define REG_RD_ADDR_iop_fifo_in_rs_rd4byte 36
typedef struct  reg_iop_fifo_in_r_rd4byte;
#define REG_RD_ADDR_iop_fifo_in_r_rd4byte 40
typedef unsigned int reg_iop_fifo_in_rw_set_last;
#define REG_RD_ADDR_iop_fifo_in_rw_set_last 44
#define REG_WR_ADDR_iop_fifo_in_rw_set_last 44
typedef struct  reg_iop_fifo_in_rw_strb_dif_in;
#define REG_RD_ADDR_iop_fifo_in_rw_strb_dif_in 48
#define REG_WR_ADDR_iop_fifo_in_rw_strb_dif_in 48
typedef struct  reg_iop_fifo_in_rw_intr_mask;
#define REG_RD_ADDR_iop_fifo_in_rw_intr_mask 52
#define REG_WR_ADDR_iop_fifo_in_rw_intr_mask 52
typedef struct  reg_iop_fifo_in_rw_ack_intr;
#define REG_RD_ADDR_iop_fifo_in_rw_ack_intr 56
#define REG_WR_ADDR_iop_fifo_in_rw_ack_intr 56
typedef struct  reg_iop_fifo_in_r_intr;
#define REG_RD_ADDR_iop_fifo_in_r_intr 60
typedef struct  reg_iop_fifo_in_r_masked_intr;
#define REG_RD_ADDR_iop_fifo_in_r_masked_intr 64
enum ;
