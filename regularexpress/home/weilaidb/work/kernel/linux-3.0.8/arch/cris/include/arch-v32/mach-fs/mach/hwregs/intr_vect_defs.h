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
#define STRIDE_intr_vect_rw_mask 0
typedef struct  reg_intr_vect_rw_mask;
#define REG_RD_ADDR_intr_vect_rw_mask 0
#define REG_WR_ADDR_intr_vect_rw_mask 0
#define STRIDE_intr_vect_r_vect 0
typedef struct  reg_intr_vect_r_vect;
#define REG_RD_ADDR_intr_vect_r_vect 4
#define STRIDE_intr_vect_r_masked_vect 0
typedef struct  reg_intr_vect_r_masked_vect;
#define REG_RD_ADDR_intr_vect_r_masked_vect 8
typedef struct  reg_intr_vect_r_nmi;
#define REG_RD_ADDR_intr_vect_r_nmi 12
typedef struct  reg_intr_vect_r_guru;
#define REG_RD_ADDR_intr_vect_r_guru 16
typedef struct
reg_intr_vect_rw_ipi;
#define REG_RD_ADDR_intr_vect_rw_ipi 20
#define REG_WR_ADDR_intr_vect_rw_ipi 20
enum ;
