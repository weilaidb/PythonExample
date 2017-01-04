#define __iop_dmc_in_defs_h
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
typedef struct  reg_iop_dmc_in_rw_cfg;
#define REG_RD_ADDR_iop_dmc_in_rw_cfg 0
#define REG_WR_ADDR_iop_dmc_in_rw_cfg 0
typedef struct  reg_iop_dmc_in_rw_ctrl;
#define REG_RD_ADDR_iop_dmc_in_rw_ctrl 4
#define REG_WR_ADDR_iop_dmc_in_rw_ctrl 4
typedef struct  reg_iop_dmc_in_r_stat;
#define REG_RD_ADDR_iop_dmc_in_r_stat 8
typedef struct  reg_iop_dmc_in_rw_stream_cmd;
#define REG_RD_ADDR_iop_dmc_in_rw_stream_cmd 12
#define REG_WR_ADDR_iop_dmc_in_rw_stream_cmd 12
typedef unsigned int reg_iop_dmc_in_rw_stream_wr_data;
#define REG_RD_ADDR_iop_dmc_in_rw_stream_wr_data 16
#define REG_WR_ADDR_iop_dmc_in_rw_stream_wr_data 16
typedef unsigned int reg_iop_dmc_in_rw_stream_wr_data_last;
#define REG_RD_ADDR_iop_dmc_in_rw_stream_wr_data_last 20
#define REG_WR_ADDR_iop_dmc_in_rw_stream_wr_data_last 20
typedef struct  reg_iop_dmc_in_rw_stream_ctrl;
#define REG_RD_ADDR_iop_dmc_in_rw_stream_ctrl 24
#define REG_WR_ADDR_iop_dmc_in_rw_stream_ctrl 24
typedef struct  reg_iop_dmc_in_r_stream_stat;
#define REG_RD_ADDR_iop_dmc_in_r_stream_stat 28
typedef struct  reg_iop_dmc_in_r_data_descr;
#define REG_RD_ADDR_iop_dmc_in_r_data_descr 32
typedef struct  reg_iop_dmc_in_r_ctxt_descr;
#define REG_RD_ADDR_iop_dmc_in_r_ctxt_descr 36
typedef unsigned int reg_iop_dmc_in_r_ctxt_descr_md1;
#define REG_RD_ADDR_iop_dmc_in_r_ctxt_descr_md1 40
typedef unsigned int reg_iop_dmc_in_r_ctxt_descr_md2;
#define REG_RD_ADDR_iop_dmc_in_r_ctxt_descr_md2 44
typedef struct  reg_iop_dmc_in_r_group_descr;
#define REG_RD_ADDR_iop_dmc_in_r_group_descr 56
typedef struct  reg_iop_dmc_in_rw_data_descr;
#define REG_RD_ADDR_iop_dmc_in_rw_data_descr 60
#define REG_WR_ADDR_iop_dmc_in_rw_data_descr 60
typedef struct  reg_iop_dmc_in_rw_ctxt_descr;
#define REG_RD_ADDR_iop_dmc_in_rw_ctxt_descr 64
#define REG_WR_ADDR_iop_dmc_in_rw_ctxt_descr 64
typedef unsigned int reg_iop_dmc_in_rw_ctxt_descr_md1;
#define REG_RD_ADDR_iop_dmc_in_rw_ctxt_descr_md1 68
#define REG_WR_ADDR_iop_dmc_in_rw_ctxt_descr_md1 68
typedef unsigned int reg_iop_dmc_in_rw_ctxt_descr_md2;
#define REG_RD_ADDR_iop_dmc_in_rw_ctxt_descr_md2 72
#define REG_WR_ADDR_iop_dmc_in_rw_ctxt_descr_md2 72
typedef struct  reg_iop_dmc_in_rw_group_descr;
#define REG_RD_ADDR_iop_dmc_in_rw_group_descr 84
#define REG_WR_ADDR_iop_dmc_in_rw_group_descr 84
typedef struct  reg_iop_dmc_in_rw_intr_mask;
#define REG_RD_ADDR_iop_dmc_in_rw_intr_mask 88
#define REG_WR_ADDR_iop_dmc_in_rw_intr_mask 88
typedef struct  reg_iop_dmc_in_rw_ack_intr;
#define REG_RD_ADDR_iop_dmc_in_rw_ack_intr 92
#define REG_WR_ADDR_iop_dmc_in_rw_ack_intr 92
typedef struct  reg_iop_dmc_in_r_intr;
#define REG_RD_ADDR_iop_dmc_in_r_intr 96
typedef struct  reg_iop_dmc_in_r_masked_intr;
#define REG_RD_ADDR_iop_dmc_in_r_masked_intr 100
enum ;
