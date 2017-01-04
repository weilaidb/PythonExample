#define __ser_defs_h
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
typedef struct  reg_ser_rw_tr_ctrl;
#define REG_RD_ADDR_ser_rw_tr_ctrl 0
#define REG_WR_ADDR_ser_rw_tr_ctrl 0
typedef struct  reg_ser_rw_tr_dma_en;
#define REG_RD_ADDR_ser_rw_tr_dma_en 4
#define REG_WR_ADDR_ser_rw_tr_dma_en 4
typedef struct  reg_ser_rw_rec_ctrl;
#define REG_RD_ADDR_ser_rw_rec_ctrl 8
#define REG_WR_ADDR_ser_rw_rec_ctrl 8
typedef struct  reg_ser_rw_tr_baud_div;
#define REG_RD_ADDR_ser_rw_tr_baud_div 12
#define REG_WR_ADDR_ser_rw_tr_baud_div 12
typedef struct  reg_ser_rw_rec_baud_div;
#define REG_RD_ADDR_ser_rw_rec_baud_div 16
#define REG_WR_ADDR_ser_rw_rec_baud_div 16
typedef struct  reg_ser_rw_xoff;
#define REG_RD_ADDR_ser_rw_xoff 20
#define REG_WR_ADDR_ser_rw_xoff 20
typedef struct  reg_ser_rw_xoff_clr;
#define REG_RD_ADDR_ser_rw_xoff_clr 24
#define REG_WR_ADDR_ser_rw_xoff_clr 24
typedef struct  reg_ser_rw_dout;
#define REG_RD_ADDR_ser_rw_dout 28
#define REG_WR_ADDR_ser_rw_dout 28
typedef struct  reg_ser_rs_stat_din;
#define REG_RD_ADDR_ser_rs_stat_din 32
typedef struct  reg_ser_r_stat_din;
#define REG_RD_ADDR_ser_r_stat_din 36
typedef struct  reg_ser_rw_rec_eop;
#define REG_RD_ADDR_ser_rw_rec_eop 40
#define REG_WR_ADDR_ser_rw_rec_eop 40
typedef struct  reg_ser_rw_intr_mask;
#define REG_RD_ADDR_ser_rw_intr_mask 44
#define REG_WR_ADDR_ser_rw_intr_mask 44
typedef struct  reg_ser_rw_ack_intr;
#define REG_RD_ADDR_ser_rw_ack_intr 48
#define REG_WR_ADDR_ser_rw_ack_intr 48
typedef struct  reg_ser_r_intr;
#define REG_RD_ADDR_ser_r_intr 52
typedef struct  reg_ser_r_masked_intr;
#define REG_RD_ADDR_ser_r_masked_intr 56
enum ;
