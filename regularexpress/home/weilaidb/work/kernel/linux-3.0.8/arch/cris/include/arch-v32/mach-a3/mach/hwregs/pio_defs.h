#define __pio_defs_h
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
typedef unsigned int reg_pio_rw_data;
#define REG_RD_ADDR_pio_rw_data 64
#define REG_WR_ADDR_pio_rw_data 64
typedef struct  reg_pio_rw_io_access0;
#define REG_RD_ADDR_pio_rw_io_access0 0
#define REG_WR_ADDR_pio_rw_io_access0 0
typedef struct  reg_pio_rw_io_access1;
#define REG_RD_ADDR_pio_rw_io_access1 4
#define REG_WR_ADDR_pio_rw_io_access1 4
typedef struct  reg_pio_rw_io_access2;
#define REG_RD_ADDR_pio_rw_io_access2 8
#define REG_WR_ADDR_pio_rw_io_access2 8
typedef struct  reg_pio_rw_io_access3;
#define REG_RD_ADDR_pio_rw_io_access3 12
#define REG_WR_ADDR_pio_rw_io_access3 12
typedef struct  reg_pio_rw_io_access4;
#define REG_RD_ADDR_pio_rw_io_access4 16
#define REG_WR_ADDR_pio_rw_io_access4 16
typedef struct  reg_pio_rw_io_access5;
#define REG_RD_ADDR_pio_rw_io_access5 20
#define REG_WR_ADDR_pio_rw_io_access5 20
typedef struct  reg_pio_rw_io_access6;
#define REG_RD_ADDR_pio_rw_io_access6 24
#define REG_WR_ADDR_pio_rw_io_access6 24
typedef struct  reg_pio_rw_io_access7;
#define REG_RD_ADDR_pio_rw_io_access7 28
#define REG_WR_ADDR_pio_rw_io_access7 28
typedef struct  reg_pio_rw_io_access8;
#define REG_RD_ADDR_pio_rw_io_access8 32
#define REG_WR_ADDR_pio_rw_io_access8 32
typedef struct  reg_pio_rw_io_access9;
#define REG_RD_ADDR_pio_rw_io_access9 36
#define REG_WR_ADDR_pio_rw_io_access9 36
typedef struct  reg_pio_rw_io_access10;
#define REG_RD_ADDR_pio_rw_io_access10 40
#define REG_WR_ADDR_pio_rw_io_access10 40
typedef struct  reg_pio_rw_io_access11;
#define REG_RD_ADDR_pio_rw_io_access11 44
#define REG_WR_ADDR_pio_rw_io_access11 44
typedef struct  reg_pio_rw_io_access12;
#define REG_RD_ADDR_pio_rw_io_access12 48
#define REG_WR_ADDR_pio_rw_io_access12 48
typedef struct  reg_pio_rw_io_access13;
#define REG_RD_ADDR_pio_rw_io_access13 52
#define REG_WR_ADDR_pio_rw_io_access13 52
typedef struct  reg_pio_rw_io_access14;
#define REG_RD_ADDR_pio_rw_io_access14 56
#define REG_WR_ADDR_pio_rw_io_access14 56
typedef struct  reg_pio_rw_io_access15;
#define REG_RD_ADDR_pio_rw_io_access15 60
#define REG_WR_ADDR_pio_rw_io_access15 60
typedef struct  reg_pio_rw_ce0_cfg;
#define REG_RD_ADDR_pio_rw_ce0_cfg 68
#define REG_WR_ADDR_pio_rw_ce0_cfg 68
typedef struct  reg_pio_rw_ce1_cfg;
#define REG_RD_ADDR_pio_rw_ce1_cfg 72
#define REG_WR_ADDR_pio_rw_ce1_cfg 72
typedef struct  reg_pio_rw_ce2_cfg;
#define REG_RD_ADDR_pio_rw_ce2_cfg 76
#define REG_WR_ADDR_pio_rw_ce2_cfg 76
typedef struct  reg_pio_rw_dout;
#define REG_RD_ADDR_pio_rw_dout 80
#define REG_WR_ADDR_pio_rw_dout 80
typedef struct  reg_pio_rw_oe;
#define REG_RD_ADDR_pio_rw_oe 84
#define REG_WR_ADDR_pio_rw_oe 84
typedef struct  reg_pio_rw_man_ctrl;
#define REG_RD_ADDR_pio_rw_man_ctrl 88
#define REG_WR_ADDR_pio_rw_man_ctrl 88
typedef struct  reg_pio_r_din;
#define REG_RD_ADDR_pio_r_din 92
typedef struct  reg_pio_r_stat;
#define REG_RD_ADDR_pio_r_stat 96
typedef struct  reg_pio_rw_intr_mask;
#define REG_RD_ADDR_pio_rw_intr_mask 100
#define REG_WR_ADDR_pio_rw_intr_mask 100
typedef struct  reg_pio_rw_ack_intr;
#define REG_RD_ADDR_pio_rw_ack_intr 104
#define REG_WR_ADDR_pio_rw_ack_intr 104
typedef struct  reg_pio_r_intr;
#define REG_RD_ADDR_pio_r_intr 108
typedef struct  reg_pio_r_masked_intr;
#define REG_RD_ADDR_pio_r_masked_intr 112
enum ;
