#define __iop_fifo_in_extra_defs_h
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
typedef unsigned int reg_iop_fifo_in_extra_rw_wr_data;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_wr_data 0
#define REG_WR_ADDR_iop_fifo_in_extra_rw_wr_data 0
typedef struct  reg_iop_fifo_in_extra_r_stat;
#define REG_RD_ADDR_iop_fifo_in_extra_r_stat 4
typedef struct  reg_iop_fifo_in_extra_rw_strb_dif_in;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_strb_dif_in 8
#define REG_WR_ADDR_iop_fifo_in_extra_rw_strb_dif_in 8
typedef struct  reg_iop_fifo_in_extra_rw_intr_mask;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_intr_mask 12
#define REG_WR_ADDR_iop_fifo_in_extra_rw_intr_mask 12
typedef struct  reg_iop_fifo_in_extra_rw_ack_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_rw_ack_intr 16
#define REG_WR_ADDR_iop_fifo_in_extra_rw_ack_intr 16
typedef struct  reg_iop_fifo_in_extra_r_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_r_intr 20
typedef struct  reg_iop_fifo_in_extra_r_masked_intr;
#define REG_RD_ADDR_iop_fifo_in_extra_r_masked_intr 24
enum ;
