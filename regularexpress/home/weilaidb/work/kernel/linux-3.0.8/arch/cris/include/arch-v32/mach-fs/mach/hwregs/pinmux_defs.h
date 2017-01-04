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
typedef struct  reg_pinmux_rw_pa;
#define REG_RD_ADDR_pinmux_rw_pa 0
#define REG_WR_ADDR_pinmux_rw_pa 0
typedef struct  reg_pinmux_rw_hwprot;
#define REG_RD_ADDR_pinmux_rw_hwprot 4
#define REG_WR_ADDR_pinmux_rw_hwprot 4
typedef struct  reg_pinmux_rw_pb_gio;
#define REG_RD_ADDR_pinmux_rw_pb_gio 8
#define REG_WR_ADDR_pinmux_rw_pb_gio 8
typedef struct  reg_pinmux_rw_pb_iop;
#define REG_RD_ADDR_pinmux_rw_pb_iop 12
#define REG_WR_ADDR_pinmux_rw_pb_iop 12
typedef struct  reg_pinmux_rw_pc_gio;
#define REG_RD_ADDR_pinmux_rw_pc_gio 16
#define REG_WR_ADDR_pinmux_rw_pc_gio 16
typedef struct  reg_pinmux_rw_pc_iop;
#define REG_RD_ADDR_pinmux_rw_pc_iop 20
#define REG_WR_ADDR_pinmux_rw_pc_iop 20
typedef struct  reg_pinmux_rw_pd_gio;
#define REG_RD_ADDR_pinmux_rw_pd_gio 24
#define REG_WR_ADDR_pinmux_rw_pd_gio 24
typedef struct  reg_pinmux_rw_pd_iop;
#define REG_RD_ADDR_pinmux_rw_pd_iop 28
#define REG_WR_ADDR_pinmux_rw_pd_iop 28
typedef struct  reg_pinmux_rw_pe_gio;
#define REG_RD_ADDR_pinmux_rw_pe_gio 32
#define REG_WR_ADDR_pinmux_rw_pe_gio 32
typedef struct  reg_pinmux_rw_pe_iop;
#define REG_RD_ADDR_pinmux_rw_pe_iop 36
#define REG_WR_ADDR_pinmux_rw_pe_iop 36
typedef struct  reg_pinmux_rw_usb_phy;
#define REG_RD_ADDR_pinmux_rw_usb_phy 40
#define REG_WR_ADDR_pinmux_rw_usb_phy 40
enum ;
