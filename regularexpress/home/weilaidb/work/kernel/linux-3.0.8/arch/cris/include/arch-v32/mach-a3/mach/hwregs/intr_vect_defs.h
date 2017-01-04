#define __intr_vect_defs_h
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
#define STRIDE_intr_vect_rw_mask 4
typedef struct  reg_intr_vect_rw_mask0;
#define reg_intr_vect_rw_mask reg_intr_vect_rw_mask0
#define REG_RD_ADDR_intr_vect_rw_mask 0
#define REG_WR_ADDR_intr_vect_rw_mask 0
#define REG_RD_ADDR_intr_vect_rw_mask0 0
#define REG_WR_ADDR_intr_vect_rw_mask0 0
#define STRIDE_intr_vect_r_vect 4
typedef struct  reg_intr_vect_r_vect0;
#define reg_intr_vect_r_vect reg_intr_vect_r_vect0
#define REG_RD_ADDR_intr_vect_r_vect 8
#define REG_RD_ADDR_intr_vect_r_vect0 8
#define STRIDE_intr_vect_r_masked_vect 4
typedef struct  reg_intr_vect_r_masked_vect0;
#define reg_intr_vect_r_masked_vect reg_intr_masked_vect_r_vect0
#define REG_RD_ADDR_intr_vect_r_masked_vect0 16
#define REG_RD_ADDR_intr_vect_r_masked_vect 16
#define STRIDE_intr_vect_rw_xmask 4
typedef struct  reg_intr_vect_rw_xmask0;
#define reg_intr_vect_rw_xmask reg_intr_vect_rw_xmask0
#define REG_RD_ADDR_intr_vect_rw_xmask0 24
#define REG_WR_ADDR_intr_vect_rw_xmask0 24
#define REG_RD_ADDR_intr_vect_rw_xmask 24
#define REG_WR_ADDR_intr_vect_rw_xmask 24
typedef struct  reg_intr_vect_rw_mask1;
#define REG_RD_ADDR_intr_vect_rw_mask1 4
#define REG_WR_ADDR_intr_vect_rw_mask1 4
typedef struct  reg_intr_vect_r_vect1;
#define REG_RD_ADDR_intr_vect_r_vect1 12
typedef struct  reg_intr_vect_r_masked_vect1;
#define REG_RD_ADDR_intr_vect_r_masked_vect1 20
typedef struct  reg_intr_vect_rw_xmask1;
#define REG_RD_ADDR_intr_vect_rw_xmask1 28
#define REG_WR_ADDR_intr_vect_rw_xmask1 28
typedef struct  reg_intr_vect_rw_xmask_ctrl;
#define REG_RD_ADDR_intr_vect_rw_xmask_ctrl 32
#define REG_WR_ADDR_intr_vect_rw_xmask_ctrl 32
typedef struct  reg_intr_vect_r_nmi;
#define REG_RD_ADDR_intr_vect_r_nmi 64
typedef struct  reg_intr_vect_r_guru;
#define REG_RD_ADDR_intr_vect_r_guru 68
typedef struct
reg_intr_vect_rw_ipi;
#define REG_RD_ADDR_intr_vect_rw_ipi 72
#define REG_WR_ADDR_intr_vect_rw_ipi 72
enum ;
