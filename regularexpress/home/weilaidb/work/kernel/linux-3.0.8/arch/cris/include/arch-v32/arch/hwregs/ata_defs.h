#define __ata_defs_h
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
typedef struct  reg_ata_rw_ctrl0;
#define REG_RD_ADDR_ata_rw_ctrl0 12
#define REG_WR_ADDR_ata_rw_ctrl0 12
typedef struct  reg_ata_rw_ctrl1;
#define REG_RD_ADDR_ata_rw_ctrl1 16
#define REG_WR_ADDR_ata_rw_ctrl1 16
typedef struct  reg_ata_rw_ctrl2;
#define REG_RD_ADDR_ata_rw_ctrl2 0
#define REG_WR_ADDR_ata_rw_ctrl2 0
typedef struct  reg_ata_rs_stat_data;
#define REG_RD_ADDR_ata_rs_stat_data 4
typedef struct  reg_ata_r_stat_data;
#define REG_RD_ADDR_ata_r_stat_data 8
typedef struct  reg_ata_rw_trf_cnt;
#define REG_RD_ADDR_ata_rw_trf_cnt 20
#define REG_WR_ADDR_ata_rw_trf_cnt 20
typedef struct  reg_ata_r_stat_misc;
#define REG_RD_ADDR_ata_r_stat_misc 24
typedef struct  reg_ata_rw_intr_mask;
#define REG_RD_ADDR_ata_rw_intr_mask 28
#define REG_WR_ADDR_ata_rw_intr_mask 28
typedef struct  reg_ata_rw_ack_intr;
#define REG_RD_ADDR_ata_rw_ack_intr 32
#define REG_WR_ADDR_ata_rw_ack_intr 32
typedef struct  reg_ata_r_intr;
#define REG_RD_ADDR_ata_r_intr 36
typedef struct  reg_ata_r_masked_intr;
#define REG_RD_ADDR_ata_r_masked_intr 40
enum ;
