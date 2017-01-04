#define __sser_defs_h
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
typedef struct  reg_sser_rw_cfg;
#define REG_RD_ADDR_sser_rw_cfg 0
#define REG_WR_ADDR_sser_rw_cfg 0
typedef struct  reg_sser_rw_frm_cfg;
#define REG_RD_ADDR_sser_rw_frm_cfg 4
#define REG_WR_ADDR_sser_rw_frm_cfg 4
typedef struct  reg_sser_rw_tr_cfg;
#define REG_RD_ADDR_sser_rw_tr_cfg 8
#define REG_WR_ADDR_sser_rw_tr_cfg 8
typedef struct  reg_sser_rw_rec_cfg;
#define REG_RD_ADDR_sser_rw_rec_cfg 12
#define REG_WR_ADDR_sser_rw_rec_cfg 12
typedef struct  reg_sser_rw_tr_data;
#define REG_RD_ADDR_sser_rw_tr_data 16
#define REG_WR_ADDR_sser_rw_tr_data 16
typedef struct  reg_sser_r_rec_data;
#define REG_RD_ADDR_sser_r_rec_data 20
typedef struct  reg_sser_rw_extra;
#define REG_RD_ADDR_sser_rw_extra 24
#define REG_WR_ADDR_sser_rw_extra 24
typedef struct  reg_sser_rw_intr_mask;
#define REG_RD_ADDR_sser_rw_intr_mask 28
#define REG_WR_ADDR_sser_rw_intr_mask 28
typedef struct  reg_sser_rw_ack_intr;
#define REG_RD_ADDR_sser_rw_ack_intr 32
#define REG_WR_ADDR_sser_rw_ack_intr 32
typedef struct  reg_sser_r_intr;
#define REG_RD_ADDR_sser_r_intr 36
typedef struct  reg_sser_r_masked_intr;
#define REG_RD_ADDR_sser_r_masked_intr 40
enum ;
