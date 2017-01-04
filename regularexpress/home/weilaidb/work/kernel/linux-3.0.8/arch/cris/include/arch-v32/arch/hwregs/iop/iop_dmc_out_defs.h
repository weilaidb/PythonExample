#define __iop_dmc_out_defs_h
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
typedef struct  reg_iop_dmc_out_rw_cfg;
#define REG_RD_ADDR_iop_dmc_out_rw_cfg 0
#define REG_WR_ADDR_iop_dmc_out_rw_cfg 0
typedef struct  reg_iop_dmc_out_rw_ctrl;
#define REG_RD_ADDR_iop_dmc_out_rw_ctrl 4
#define REG_WR_ADDR_iop_dmc_out_rw_ctrl 4
typedef struct  reg_iop_dmc_out_r_stat;
#define REG_RD_ADDR_iop_dmc_out_r_stat 8
typedef struct  reg_iop_dmc_out_rw_stream_cmd;
#define REG_RD_ADDR_iop_dmc_out_rw_stream_cmd 12
#define REG_WR_ADDR_iop_dmc_out_rw_stream_cmd 12
typedef unsigned int reg_iop_dmc_out_rs_stream_data;
#define REG_RD_ADDR_iop_dmc_out_rs_stream_data 16
typedef unsigned int reg_iop_dmc_out_r_stream_data;
#define REG_RD_ADDR_iop_dmc_out_r_stream_data 20
typedef struct  reg_iop_dmc_out_r_stream_stat;
#define REG_RD_ADDR_iop_dmc_out_r_stream_stat 24
typedef struct  reg_iop_dmc_out_r_data_descr;
#define REG_RD_ADDR_iop_dmc_out_r_data_descr 28
typedef struct  reg_iop_dmc_out_r_ctxt_descr;
#define REG_RD_ADDR_iop_dmc_out_r_ctxt_descr 32
typedef unsigned int reg_iop_dmc_out_r_ctxt_descr_md1;
#define REG_RD_ADDR_iop_dmc_out_r_ctxt_descr_md1 36
typedef unsigned int reg_iop_dmc_out_r_ctxt_descr_md2;
#define REG_RD_ADDR_iop_dmc_out_r_ctxt_descr_md2 40
typedef struct  reg_iop_dmc_out_r_group_descr;
#define REG_RD_ADDR_iop_dmc_out_r_group_descr 52
typedef struct  reg_iop_dmc_out_rw_data_descr;
#define REG_RD_ADDR_iop_dmc_out_rw_data_descr 56
#define REG_WR_ADDR_iop_dmc_out_rw_data_descr 56
typedef struct  reg_iop_dmc_out_rw_ctxt_descr;
#define REG_RD_ADDR_iop_dmc_out_rw_ctxt_descr 60
#define REG_WR_ADDR_iop_dmc_out_rw_ctxt_descr 60
typedef unsigned int reg_iop_dmc_out_rw_ctxt_descr_md1;
#define REG_RD_ADDR_iop_dmc_out_rw_ctxt_descr_md1 64
#define REG_WR_ADDR_iop_dmc_out_rw_ctxt_descr_md1 64
typedef unsigned int reg_iop_dmc_out_rw_ctxt_descr_md2;
#define REG_RD_ADDR_iop_dmc_out_rw_ctxt_descr_md2 68
#define REG_WR_ADDR_iop_dmc_out_rw_ctxt_descr_md2 68
typedef struct  reg_iop_dmc_out_rw_group_descr;
#define REG_RD_ADDR_iop_dmc_out_rw_group_descr 80
#define REG_WR_ADDR_iop_dmc_out_rw_group_descr 80
typedef struct  reg_iop_dmc_out_rw_intr_mask;
#define REG_RD_ADDR_iop_dmc_out_rw_intr_mask 84
#define REG_WR_ADDR_iop_dmc_out_rw_intr_mask 84
typedef struct  reg_iop_dmc_out_rw_ack_intr;
#define REG_RD_ADDR_iop_dmc_out_rw_ack_intr 88
#define REG_WR_ADDR_iop_dmc_out_rw_ack_intr 88
typedef struct  reg_iop_dmc_out_r_intr;
#define REG_RD_ADDR_iop_dmc_out_r_intr 92
typedef struct  reg_iop_dmc_out_r_masked_intr;
#define REG_RD_ADDR_iop_dmc_out_r_masked_intr 96
enum ;
