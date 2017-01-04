#define __marb_foo_defs_h
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
#define STRIDE_marb_foo_rw_intm_slots 4
typedef struct  reg_marb_foo_rw_intm_slots;
#define REG_RD_ADDR_marb_foo_rw_intm_slots 0
#define REG_WR_ADDR_marb_foo_rw_intm_slots 0
#define STRIDE_marb_foo_rw_l2_slots 4
typedef struct  reg_marb_foo_rw_l2_slots;
#define REG_RD_ADDR_marb_foo_rw_l2_slots 256
#define REG_WR_ADDR_marb_foo_rw_l2_slots 256
#define STRIDE_marb_foo_rw_regs_slots 4
typedef struct  reg_marb_foo_rw_regs_slots;
#define REG_RD_ADDR_marb_foo_rw_regs_slots 512
#define REG_WR_ADDR_marb_foo_rw_regs_slots 512
typedef struct  reg_marb_foo_rw_sclr_burst;
#define REG_RD_ADDR_marb_foo_rw_sclr_burst 528
#define REG_WR_ADDR_marb_foo_rw_sclr_burst 528
typedef struct  reg_marb_foo_rw_dma0_burst;
#define REG_RD_ADDR_marb_foo_rw_dma0_burst 532
#define REG_WR_ADDR_marb_foo_rw_dma0_burst 532
typedef struct  reg_marb_foo_rw_dma1_burst;
#define REG_RD_ADDR_marb_foo_rw_dma1_burst 536
#define REG_WR_ADDR_marb_foo_rw_dma1_burst 536
typedef struct  reg_marb_foo_rw_dma2_burst;
#define REG_RD_ADDR_marb_foo_rw_dma2_burst 540
#define REG_WR_ADDR_marb_foo_rw_dma2_burst 540
typedef struct  reg_marb_foo_rw_dma3_burst;
#define REG_RD_ADDR_marb_foo_rw_dma3_burst 544
#define REG_WR_ADDR_marb_foo_rw_dma3_burst 544
typedef struct  reg_marb_foo_rw_dma4_burst;
#define REG_RD_ADDR_marb_foo_rw_dma4_burst 548
#define REG_WR_ADDR_marb_foo_rw_dma4_burst 548
typedef struct  reg_marb_foo_rw_dma5_burst;
#define REG_RD_ADDR_marb_foo_rw_dma5_burst 552
#define REG_WR_ADDR_marb_foo_rw_dma5_burst 552
typedef struct  reg_marb_foo_rw_dma6_burst;
#define REG_RD_ADDR_marb_foo_rw_dma6_burst 556
#define REG_WR_ADDR_marb_foo_rw_dma6_burst 556
typedef struct  reg_marb_foo_rw_dma7_burst;
#define REG_RD_ADDR_marb_foo_rw_dma7_burst 560
#define REG_WR_ADDR_marb_foo_rw_dma7_burst 560
typedef struct  reg_marb_foo_rw_dma9_burst;
#define REG_RD_ADDR_marb_foo_rw_dma9_burst 564
#define REG_WR_ADDR_marb_foo_rw_dma9_burst 564
typedef struct  reg_marb_foo_rw_dma11_burst;
#define REG_RD_ADDR_marb_foo_rw_dma11_burst 568
#define REG_WR_ADDR_marb_foo_rw_dma11_burst 568
typedef struct  reg_marb_foo_rw_cpui_burst;
#define REG_RD_ADDR_marb_foo_rw_cpui_burst 572
#define REG_WR_ADDR_marb_foo_rw_cpui_burst 572
typedef struct  reg_marb_foo_rw_cpud_burst;
#define REG_RD_ADDR_marb_foo_rw_cpud_burst 576
#define REG_WR_ADDR_marb_foo_rw_cpud_burst 576
typedef struct  reg_marb_foo_rw_iop_burst;
#define REG_RD_ADDR_marb_foo_rw_iop_burst 580
#define REG_WR_ADDR_marb_foo_rw_iop_burst 580
typedef struct  reg_marb_foo_rw_ccdstat_burst;
#define REG_RD_ADDR_marb_foo_rw_ccdstat_burst 584
#define REG_WR_ADDR_marb_foo_rw_ccdstat_burst 584
typedef struct  reg_marb_foo_rw_intr_mask;
#define REG_RD_ADDR_marb_foo_rw_intr_mask 588
#define REG_WR_ADDR_marb_foo_rw_intr_mask 588
typedef struct  reg_marb_foo_rw_ack_intr;
#define REG_RD_ADDR_marb_foo_rw_ack_intr 592
#define REG_WR_ADDR_marb_foo_rw_ack_intr 592
typedef struct  reg_marb_foo_r_intr;
#define REG_RD_ADDR_marb_foo_r_intr 596
typedef struct  reg_marb_foo_r_masked_intr;
#define REG_RD_ADDR_marb_foo_r_masked_intr 600
typedef struct  reg_marb_foo_rw_stop_mask;
#define REG_RD_ADDR_marb_foo_rw_stop_mask 604
#define REG_WR_ADDR_marb_foo_rw_stop_mask 604
typedef struct  reg_marb_foo_r_stopped;
#define REG_RD_ADDR_marb_foo_r_stopped 608
typedef struct  reg_marb_foo_rw_no_snoop;
#define REG_RD_ADDR_marb_foo_rw_no_snoop 896
#define REG_WR_ADDR_marb_foo_rw_no_snoop 896
typedef struct  reg_marb_foo_rw_no_snoop_rq;
#define REG_RD_ADDR_marb_foo_rw_no_snoop_rq 900
#define REG_WR_ADDR_marb_foo_rw_no_snoop_rq 900
enum ;
#define __marb_foo_bp_defs_h
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
typedef unsigned int reg_marb_foo_bp_rw_first_addr;
#define REG_RD_ADDR_marb_foo_bp_rw_first_addr 0
#define REG_WR_ADDR_marb_foo_bp_rw_first_addr 0
typedef unsigned int reg_marb_foo_bp_rw_last_addr;
#define REG_RD_ADDR_marb_foo_bp_rw_last_addr 4
#define REG_WR_ADDR_marb_foo_bp_rw_last_addr 4
typedef struct  reg_marb_foo_bp_rw_op;
#define REG_RD_ADDR_marb_foo_bp_rw_op 8
#define REG_WR_ADDR_marb_foo_bp_rw_op 8
typedef struct  reg_marb_foo_bp_rw_clients;
#define REG_RD_ADDR_marb_foo_bp_rw_clients 12
#define REG_WR_ADDR_marb_foo_bp_rw_clients 12
typedef struct  reg_marb_foo_bp_rw_options;
#define REG_RD_ADDR_marb_foo_bp_rw_options 16
#define REG_WR_ADDR_marb_foo_bp_rw_options 16
typedef unsigned int reg_marb_foo_bp_r_brk_addr;
#define REG_RD_ADDR_marb_foo_bp_r_brk_addr 20
typedef struct  reg_marb_foo_bp_r_brk_op;
#define REG_RD_ADDR_marb_foo_bp_r_brk_op 24
typedef struct  reg_marb_foo_bp_r_brk_clients;
#define REG_RD_ADDR_marb_foo_bp_r_brk_clients 28
typedef struct  reg_marb_foo_bp_r_brk_first_client;
#define REG_RD_ADDR_marb_foo_bp_r_brk_first_client 32
typedef unsigned int reg_marb_foo_bp_r_brk_size;
#define REG_RD_ADDR_marb_foo_bp_r_brk_size 36
typedef unsigned int reg_marb_foo_bp_rw_ack;
#define REG_RD_ADDR_marb_foo_bp_rw_ack 40
#define REG_WR_ADDR_marb_foo_bp_rw_ack 40
enum ;
