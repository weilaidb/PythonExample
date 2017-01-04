#define __bif_core_defs_h
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
typedef struct  reg_bif_core_rw_grp1_cfg;
#define REG_RD_ADDR_bif_core_rw_grp1_cfg 0
#define REG_WR_ADDR_bif_core_rw_grp1_cfg 0
typedef struct  reg_bif_core_rw_grp2_cfg;
#define REG_RD_ADDR_bif_core_rw_grp2_cfg 4
#define REG_WR_ADDR_bif_core_rw_grp2_cfg 4
typedef struct  reg_bif_core_rw_grp3_cfg;
#define REG_RD_ADDR_bif_core_rw_grp3_cfg 8
#define REG_WR_ADDR_bif_core_rw_grp3_cfg 8
typedef struct  reg_bif_core_rw_grp4_cfg;
#define REG_RD_ADDR_bif_core_rw_grp4_cfg 12
#define REG_WR_ADDR_bif_core_rw_grp4_cfg 12
typedef struct  reg_bif_core_rw_sdram_cfg_grp0;
#define REG_RD_ADDR_bif_core_rw_sdram_cfg_grp0 16
#define REG_WR_ADDR_bif_core_rw_sdram_cfg_grp0 16
typedef struct  reg_bif_core_rw_sdram_cfg_grp1;
#define REG_RD_ADDR_bif_core_rw_sdram_cfg_grp1 20
#define REG_WR_ADDR_bif_core_rw_sdram_cfg_grp1 20
typedef struct  reg_bif_core_rw_sdram_timing;
#define REG_RD_ADDR_bif_core_rw_sdram_timing 24
#define REG_WR_ADDR_bif_core_rw_sdram_timing 24
typedef struct  reg_bif_core_rw_sdram_cmd;
#define REG_RD_ADDR_bif_core_rw_sdram_cmd 28
#define REG_WR_ADDR_bif_core_rw_sdram_cmd 28
typedef struct  reg_bif_core_rs_sdram_ref_stat;
#define REG_RD_ADDR_bif_core_rs_sdram_ref_stat 32
typedef struct  reg_bif_core_r_sdram_ref_stat;
#define REG_RD_ADDR_bif_core_r_sdram_ref_stat 36
enum ;
