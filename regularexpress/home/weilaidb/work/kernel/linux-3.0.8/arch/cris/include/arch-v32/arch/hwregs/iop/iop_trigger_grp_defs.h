#define __iop_trigger_grp_defs_h
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
#define STRIDE_iop_trigger_grp_rw_cfg 4
typedef struct  reg_iop_trigger_grp_rw_cfg;
#define REG_RD_ADDR_iop_trigger_grp_rw_cfg 0
#define REG_WR_ADDR_iop_trigger_grp_rw_cfg 0
typedef struct  reg_iop_trigger_grp_rw_cmd;
#define REG_RD_ADDR_iop_trigger_grp_rw_cmd 16
#define REG_WR_ADDR_iop_trigger_grp_rw_cmd 16
typedef struct  reg_iop_trigger_grp_rw_intr_mask;
#define REG_RD_ADDR_iop_trigger_grp_rw_intr_mask 20
#define REG_WR_ADDR_iop_trigger_grp_rw_intr_mask 20
typedef struct  reg_iop_trigger_grp_rw_ack_intr;
#define REG_RD_ADDR_iop_trigger_grp_rw_ack_intr 24
#define REG_WR_ADDR_iop_trigger_grp_rw_ack_intr 24
typedef struct  reg_iop_trigger_grp_r_intr;
#define REG_RD_ADDR_iop_trigger_grp_r_intr 28
typedef struct  reg_iop_trigger_grp_r_masked_intr;
#define REG_RD_ADDR_iop_trigger_grp_r_masked_intr 32
enum ;
