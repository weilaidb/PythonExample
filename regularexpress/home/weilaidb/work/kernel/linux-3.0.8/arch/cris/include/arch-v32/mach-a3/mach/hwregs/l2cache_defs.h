#define __l2cache_defs_h
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
typedef struct  reg_l2cache_rw_cfg;
#define REG_RD_ADDR_l2cache_rw_cfg 0
#define REG_WR_ADDR_l2cache_rw_cfg 0
typedef struct  reg_l2cache_rw_ctrl;
#define REG_RD_ADDR_l2cache_rw_ctrl 4
#define REG_WR_ADDR_l2cache_rw_ctrl 4
typedef struct  reg_l2cache_rw_idxop;
#define REG_RD_ADDR_l2cache_rw_idxop 8
#define REG_WR_ADDR_l2cache_rw_idxop 8
typedef struct  reg_l2cache_rw_addrop_addr;
#define REG_RD_ADDR_l2cache_rw_addrop_addr 12
#define REG_WR_ADDR_l2cache_rw_addrop_addr 12
typedef struct  reg_l2cache_rw_addrop_ctrl;
#define REG_RD_ADDR_l2cache_rw_addrop_ctrl 16
#define REG_WR_ADDR_l2cache_rw_addrop_ctrl 16
enum ;
