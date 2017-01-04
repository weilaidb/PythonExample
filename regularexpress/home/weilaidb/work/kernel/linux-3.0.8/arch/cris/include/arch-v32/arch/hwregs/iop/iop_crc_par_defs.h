#define __iop_crc_par_defs_h
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
typedef struct  reg_iop_crc_par_rw_cfg;
#define REG_RD_ADDR_iop_crc_par_rw_cfg 0
#define REG_WR_ADDR_iop_crc_par_rw_cfg 0
typedef unsigned int reg_iop_crc_par_rw_init_crc;
#define REG_RD_ADDR_iop_crc_par_rw_init_crc 4
#define REG_WR_ADDR_iop_crc_par_rw_init_crc 4
typedef unsigned int reg_iop_crc_par_rw_correct_crc;
#define REG_RD_ADDR_iop_crc_par_rw_correct_crc 8
#define REG_WR_ADDR_iop_crc_par_rw_correct_crc 8
typedef struct  reg_iop_crc_par_rw_ctrl;
#define REG_RD_ADDR_iop_crc_par_rw_ctrl 12
#define REG_WR_ADDR_iop_crc_par_rw_ctrl 12
typedef struct  reg_iop_crc_par_rw_set_last;
#define REG_RD_ADDR_iop_crc_par_rw_set_last 16
#define REG_WR_ADDR_iop_crc_par_rw_set_last 16
typedef struct  reg_iop_crc_par_rw_wr1byte;
#define REG_RD_ADDR_iop_crc_par_rw_wr1byte 20
#define REG_WR_ADDR_iop_crc_par_rw_wr1byte 20
typedef struct  reg_iop_crc_par_rw_wr2byte;
#define REG_RD_ADDR_iop_crc_par_rw_wr2byte 24
#define REG_WR_ADDR_iop_crc_par_rw_wr2byte 24
typedef struct  reg_iop_crc_par_rw_wr3byte;
#define REG_RD_ADDR_iop_crc_par_rw_wr3byte 28
#define REG_WR_ADDR_iop_crc_par_rw_wr3byte 28
typedef struct  reg_iop_crc_par_rw_wr4byte;
#define REG_RD_ADDR_iop_crc_par_rw_wr4byte 32
#define REG_WR_ADDR_iop_crc_par_rw_wr4byte 32
typedef struct  reg_iop_crc_par_rw_wr1byte_last;
#define REG_RD_ADDR_iop_crc_par_rw_wr1byte_last 36
#define REG_WR_ADDR_iop_crc_par_rw_wr1byte_last 36
typedef struct  reg_iop_crc_par_rw_wr2byte_last;
#define REG_RD_ADDR_iop_crc_par_rw_wr2byte_last 40
#define REG_WR_ADDR_iop_crc_par_rw_wr2byte_last 40
typedef struct  reg_iop_crc_par_rw_wr3byte_last;
#define REG_RD_ADDR_iop_crc_par_rw_wr3byte_last 44
#define REG_WR_ADDR_iop_crc_par_rw_wr3byte_last 44
typedef struct  reg_iop_crc_par_rw_wr4byte_last;
#define REG_RD_ADDR_iop_crc_par_rw_wr4byte_last 48
#define REG_WR_ADDR_iop_crc_par_rw_wr4byte_last 48
typedef struct  reg_iop_crc_par_r_stat;
#define REG_RD_ADDR_iop_crc_par_r_stat 52
typedef unsigned int reg_iop_crc_par_r_sh_reg;
#define REG_RD_ADDR_iop_crc_par_r_sh_reg 56
typedef unsigned int reg_iop_crc_par_r_crc;
#define REG_RD_ADDR_iop_crc_par_r_crc 60
typedef struct  reg_iop_crc_par_rw_strb_rec_dif_in;
#define REG_RD_ADDR_iop_crc_par_rw_strb_rec_dif_in 64
#define REG_WR_ADDR_iop_crc_par_rw_strb_rec_dif_in 64
enum ;
