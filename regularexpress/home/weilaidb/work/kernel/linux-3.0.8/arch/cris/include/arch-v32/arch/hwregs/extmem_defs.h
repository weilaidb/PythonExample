#define __extmem_defs_h
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
typedef struct  reg_extmem_rw_cse0_cfg;
#define REG_RD_ADDR_extmem_rw_cse0_cfg 0
#define REG_WR_ADDR_extmem_rw_cse0_cfg 0
typedef struct  reg_extmem_rw_cse1_cfg;
#define REG_RD_ADDR_extmem_rw_cse1_cfg 4
#define REG_WR_ADDR_extmem_rw_cse1_cfg 4
typedef struct  reg_extmem_rw_csr0_cfg;
#define REG_RD_ADDR_extmem_rw_csr0_cfg 8
#define REG_WR_ADDR_extmem_rw_csr0_cfg 8
typedef struct  reg_extmem_rw_csr1_cfg;
#define REG_RD_ADDR_extmem_rw_csr1_cfg 12
#define REG_WR_ADDR_extmem_rw_csr1_cfg 12
typedef struct  reg_extmem_rw_csp0_cfg;
#define REG_RD_ADDR_extmem_rw_csp0_cfg 16
#define REG_WR_ADDR_extmem_rw_csp0_cfg 16
typedef struct  reg_extmem_rw_csp1_cfg;
#define REG_RD_ADDR_extmem_rw_csp1_cfg 20
#define REG_WR_ADDR_extmem_rw_csp1_cfg 20
typedef struct  reg_extmem_rw_csp2_cfg;
#define REG_RD_ADDR_extmem_rw_csp2_cfg 24
#define REG_WR_ADDR_extmem_rw_csp2_cfg 24
typedef struct  reg_extmem_rw_csp3_cfg;
#define REG_RD_ADDR_extmem_rw_csp3_cfg 28
#define REG_WR_ADDR_extmem_rw_csp3_cfg 28
typedef struct  reg_extmem_rw_csp4_cfg;
#define REG_RD_ADDR_extmem_rw_csp4_cfg 32
#define REG_WR_ADDR_extmem_rw_csp4_cfg 32
typedef struct  reg_extmem_rw_csp5_cfg;
#define REG_RD_ADDR_extmem_rw_csp5_cfg 36
#define REG_WR_ADDR_extmem_rw_csp5_cfg 36
typedef struct  reg_extmem_rw_csp6_cfg;
#define REG_RD_ADDR_extmem_rw_csp6_cfg 40
#define REG_WR_ADDR_extmem_rw_csp6_cfg 40
typedef struct  reg_extmem_rw_css_cfg;
#define REG_RD_ADDR_extmem_rw_css_cfg 44
#define REG_WR_ADDR_extmem_rw_css_cfg 44
typedef struct  reg_extmem_rw_status_handle;
#define REG_RD_ADDR_extmem_rw_status_handle 48
#define REG_WR_ADDR_extmem_rw_status_handle 48
typedef struct  reg_extmem_rw_wait_pin;
#define REG_RD_ADDR_extmem_rw_wait_pin 52
#define REG_WR_ADDR_extmem_rw_wait_pin 52
typedef struct  reg_extmem_rw_gated_csp;
#define REG_RD_ADDR_extmem_rw_gated_csp 56
#define REG_WR_ADDR_extmem_rw_gated_csp 56
enum ;
