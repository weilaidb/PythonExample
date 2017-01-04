#define __pinmux_defs_h
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
typedef struct  reg_pinmux_rw_hwprot;
#define REG_RD_ADDR_pinmux_rw_hwprot 0
#define REG_WR_ADDR_pinmux_rw_hwprot 0
typedef struct  reg_pinmux_rw_gio_pa;
#define REG_RD_ADDR_pinmux_rw_gio_pa 4
#define REG_WR_ADDR_pinmux_rw_gio_pa 4
typedef struct  reg_pinmux_rw_gio_pb;
#define REG_RD_ADDR_pinmux_rw_gio_pb 8
#define REG_WR_ADDR_pinmux_rw_gio_pb 8
typedef struct  reg_pinmux_rw_gio_pc;
#define REG_RD_ADDR_pinmux_rw_gio_pc 12
#define REG_WR_ADDR_pinmux_rw_gio_pc 12
typedef struct  reg_pinmux_rw_iop_pa;
#define REG_RD_ADDR_pinmux_rw_iop_pa 16
#define REG_WR_ADDR_pinmux_rw_iop_pa 16
typedef struct  reg_pinmux_rw_iop_pb;
#define REG_RD_ADDR_pinmux_rw_iop_pb 20
#define REG_WR_ADDR_pinmux_rw_iop_pb 20
typedef struct  reg_pinmux_rw_iop_pio;
#define REG_RD_ADDR_pinmux_rw_iop_pio 24
#define REG_WR_ADDR_pinmux_rw_iop_pio 24
typedef struct  reg_pinmux_rw_iop_usb;
#define REG_RD_ADDR_pinmux_rw_iop_usb 28
#define REG_WR_ADDR_pinmux_rw_iop_usb 28
enum ;
