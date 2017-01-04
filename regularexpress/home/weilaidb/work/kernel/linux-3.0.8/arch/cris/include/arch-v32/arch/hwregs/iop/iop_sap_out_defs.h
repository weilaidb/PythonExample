#define __iop_sap_out_defs_h
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
typedef struct  reg_iop_sap_out_rw_gen_gated;
#define REG_RD_ADDR_iop_sap_out_rw_gen_gated 0
#define REG_WR_ADDR_iop_sap_out_rw_gen_gated 0
typedef struct  reg_iop_sap_out_rw_bus0;
#define REG_RD_ADDR_iop_sap_out_rw_bus0 4
#define REG_WR_ADDR_iop_sap_out_rw_bus0 4
typedef struct  reg_iop_sap_out_rw_bus1;
#define REG_RD_ADDR_iop_sap_out_rw_bus1 8
#define REG_WR_ADDR_iop_sap_out_rw_bus1 8
typedef struct  reg_iop_sap_out_rw_bus0_lo_oe;
#define REG_RD_ADDR_iop_sap_out_rw_bus0_lo_oe 12
#define REG_WR_ADDR_iop_sap_out_rw_bus0_lo_oe 12
typedef struct  reg_iop_sap_out_rw_bus0_hi_oe;
#define REG_RD_ADDR_iop_sap_out_rw_bus0_hi_oe 16
#define REG_WR_ADDR_iop_sap_out_rw_bus0_hi_oe 16
typedef struct  reg_iop_sap_out_rw_bus1_lo_oe;
#define REG_RD_ADDR_iop_sap_out_rw_bus1_lo_oe 20
#define REG_WR_ADDR_iop_sap_out_rw_bus1_lo_oe 20
typedef struct  reg_iop_sap_out_rw_bus1_hi_oe;
#define REG_RD_ADDR_iop_sap_out_rw_bus1_hi_oe 24
#define REG_WR_ADDR_iop_sap_out_rw_bus1_hi_oe 24
#define STRIDE_iop_sap_out_rw_gio 4
typedef struct  reg_iop_sap_out_rw_gio;
#define REG_RD_ADDR_iop_sap_out_rw_gio 28
#define REG_WR_ADDR_iop_sap_out_rw_gio 28
enum ;
