#define __iop_fifo_out_defs_h
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
typedef struct  reg_iop_fifo_out_rw_cfg;
#define REG_RD_ADDR_iop_fifo_out_rw_cfg 0
#define REG_WR_ADDR_iop_fifo_out_rw_cfg 0
typedef struct  reg_iop_fifo_out_rw_ctrl;
#define REG_RD_ADDR_iop_fifo_out_rw_ctrl 4
#define REG_WR_ADDR_iop_fifo_out_rw_ctrl 4
typedef struct  reg_iop_fifo_out_r_stat;
#define REG_RD_ADDR_iop_fifo_out_r_stat 8
typedef struct  reg_iop_fifo_out_rw_wr1byte;
#define REG_RD_ADDR_iop_fifo_out_rw_wr1byte 12
#define REG_WR_ADDR_iop_fifo_out_rw_wr1byte 12
typedef struct  reg_iop_fifo_out_rw_wr2byte;
#define REG_RD_ADDR_iop_fifo_out_rw_wr2byte 16
#define REG_WR_ADDR_iop_fifo_out_rw_wr2byte 16
typedef struct  reg_iop_fifo_out_rw_wr3byte;
#define REG_RD_ADDR_iop_fifo_out_rw_wr3byte 20
#define REG_WR_ADDR_iop_fifo_out_rw_wr3byte 20
typedef struct  reg_iop_fifo_out_rw_wr4byte;
#define REG_RD_ADDR_iop_fifo_out_rw_wr4byte 24
#define REG_WR_ADDR_iop_fifo_out_rw_wr4byte 24
typedef struct  reg_iop_fifo_out_rw_wr1byte_last;
#define REG_RD_ADDR_iop_fifo_out_rw_wr1byte_last 28
#define REG_WR_ADDR_iop_fifo_out_rw_wr1byte_last 28
typedef struct  reg_iop_fifo_out_rw_wr2byte_last;
#define REG_RD_ADDR_iop_fifo_out_rw_wr2byte_last 32
#define REG_WR_ADDR_iop_fifo_out_rw_wr2byte_last 32
typedef struct  reg_iop_fifo_out_rw_wr3byte_last;
#define REG_RD_ADDR_iop_fifo_out_rw_wr3byte_last 36
#define REG_WR_ADDR_iop_fifo_out_rw_wr3byte_last 36
typedef struct  reg_iop_fifo_out_rw_wr4byte_last;
#define REG_RD_ADDR_iop_fifo_out_rw_wr4byte_last 40
#define REG_WR_ADDR_iop_fifo_out_rw_wr4byte_last 40
typedef unsigned int reg_iop_fifo_out_rw_set_last;
#define REG_RD_ADDR_iop_fifo_out_rw_set_last 44
#define REG_WR_ADDR_iop_fifo_out_rw_set_last 44
typedef unsigned int reg_iop_fifo_out_rs_rd_data;
#define REG_RD_ADDR_iop_fifo_out_rs_rd_data 48
typedef unsigned int reg_iop_fifo_out_r_rd_data;
#define REG_RD_ADDR_iop_fifo_out_r_rd_data 52
typedef unsigned int reg_iop_fifo_out_rw_strb_dif_out;
#define REG_RD_ADDR_iop_fifo_out_rw_strb_dif_out 56
#define REG_WR_ADDR_iop_fifo_out_rw_strb_dif_out 56
typedef struct  reg_iop_fifo_out_rw_intr_mask;
#define REG_RD_ADDR_iop_fifo_out_rw_intr_mask 60
#define REG_WR_ADDR_iop_fifo_out_rw_intr_mask 60
typedef struct  reg_iop_fifo_out_rw_ack_intr;
#define REG_RD_ADDR_iop_fifo_out_rw_ack_intr 64
#define REG_WR_ADDR_iop_fifo_out_rw_ack_intr 64
typedef struct  reg_iop_fifo_out_r_intr;
#define REG_RD_ADDR_iop_fifo_out_r_intr 68
typedef struct  reg_iop_fifo_out_r_masked_intr;
#define REG_RD_ADDR_iop_fifo_out_r_masked_intr 72
enum ;
