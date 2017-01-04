#define __iop_scrc_out_defs_h
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
typedef struct  reg_iop_scrc_out_rw_cfg;
#define REG_RD_ADDR_iop_scrc_out_rw_cfg 0
#define REG_WR_ADDR_iop_scrc_out_rw_cfg 0
typedef struct  reg_iop_scrc_out_rw_ctrl;
#define REG_RD_ADDR_iop_scrc_out_rw_ctrl 4
#define REG_WR_ADDR_iop_scrc_out_rw_ctrl 4
typedef unsigned int reg_iop_scrc_out_rw_init_crc;
#define REG_RD_ADDR_iop_scrc_out_rw_init_crc 8
#define REG_WR_ADDR_iop_scrc_out_rw_init_crc 8
typedef unsigned int reg_iop_scrc_out_rw_crc;
#define REG_RD_ADDR_iop_scrc_out_rw_crc 12
#define REG_WR_ADDR_iop_scrc_out_rw_crc 12
typedef struct  reg_iop_scrc_out_rw_data;
#define REG_RD_ADDR_iop_scrc_out_rw_data 16
#define REG_WR_ADDR_iop_scrc_out_rw_data 16
typedef unsigned int reg_iop_scrc_out_r_computed_crc;
#define REG_RD_ADDR_iop_scrc_out_r_computed_crc 20
enum ;
