#define __ddr2_defs_h
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
typedef struct  reg_ddr2_rw_cfg;
#define REG_RD_ADDR_ddr2_rw_cfg 0
#define REG_WR_ADDR_ddr2_rw_cfg 0
typedef struct  reg_ddr2_rw_timing;
#define REG_RD_ADDR_ddr2_rw_timing 4
#define REG_WR_ADDR_ddr2_rw_timing 4
typedef struct  reg_ddr2_rw_latency;
#define REG_RD_ADDR_ddr2_rw_latency 8
#define REG_WR_ADDR_ddr2_rw_latency 8
typedef struct  reg_ddr2_rw_phy_cfg;
#define REG_RD_ADDR_ddr2_rw_phy_cfg 12
#define REG_WR_ADDR_ddr2_rw_phy_cfg 12
typedef struct  reg_ddr2_rw_phy_ctrl;
#define REG_RD_ADDR_ddr2_rw_phy_ctrl 16
#define REG_WR_ADDR_ddr2_rw_phy_ctrl 16
typedef struct  reg_ddr2_rw_ctrl;
#define REG_RD_ADDR_ddr2_rw_ctrl 20
#define REG_WR_ADDR_ddr2_rw_ctrl 20
typedef struct  reg_ddr2_rw_pwr_down;
#define REG_RD_ADDR_ddr2_rw_pwr_down 24
#define REG_WR_ADDR_ddr2_rw_pwr_down 24
typedef struct  reg_ddr2_r_stat;
#define REG_RD_ADDR_ddr2_r_stat 28
typedef struct  reg_ddr2_rw_imp_ctrl;
#define REG_RD_ADDR_ddr2_rw_imp_ctrl 32
#define REG_WR_ADDR_ddr2_rw_imp_ctrl 32
#define STRIDE_ddr2_rw_dll_ctrl 4
typedef struct  reg_ddr2_rw_dll_ctrl;
#define REG_RD_ADDR_ddr2_rw_dll_ctrl 36
#define REG_WR_ADDR_ddr2_rw_dll_ctrl 36
#define STRIDE_ddr2_rw_dqs_dll_ctrl 4
typedef struct  reg_ddr2_rw_dqs_dll_ctrl;
#define REG_RD_ADDR_ddr2_rw_dqs_dll_ctrl 52
#define REG_WR_ADDR_ddr2_rw_dqs_dll_ctrl 52
enum ;
