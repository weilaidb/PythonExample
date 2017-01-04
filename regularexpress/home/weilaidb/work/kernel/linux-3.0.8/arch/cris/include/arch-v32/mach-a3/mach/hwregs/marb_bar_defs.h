#define __marb_bar_defs_h
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
#define STRIDE_marb_bar_rw_ddr2_slots 4
typedef struct  reg_marb_bar_rw_ddr2_slots;
#define REG_RD_ADDR_marb_bar_rw_ddr2_slots 0
#define REG_WR_ADDR_marb_bar_rw_ddr2_slots 0
typedef struct  reg_marb_bar_rw_h264_rd_burst;
#define REG_RD_ADDR_marb_bar_rw_h264_rd_burst 256
#define REG_WR_ADDR_marb_bar_rw_h264_rd_burst 256
typedef struct  reg_marb_bar_rw_h264_wr_burst;
#define REG_RD_ADDR_marb_bar_rw_h264_wr_burst 260
#define REG_WR_ADDR_marb_bar_rw_h264_wr_burst 260
typedef struct  reg_marb_bar_rw_ccd_burst;
#define REG_RD_ADDR_marb_bar_rw_ccd_burst 264
#define REG_WR_ADDR_marb_bar_rw_ccd_burst 264
typedef struct  reg_marb_bar_rw_vin_wr_burst;
#define REG_RD_ADDR_marb_bar_rw_vin_wr_burst 268
#define REG_WR_ADDR_marb_bar_rw_vin_wr_burst 268
typedef struct  reg_marb_bar_rw_vin_rd_burst;
#define REG_RD_ADDR_marb_bar_rw_vin_rd_burst 272
#define REG_WR_ADDR_marb_bar_rw_vin_rd_burst 272
typedef struct  reg_marb_bar_rw_sclr_rd_burst;
#define REG_RD_ADDR_marb_bar_rw_sclr_rd_burst 276
#define REG_WR_ADDR_marb_bar_rw_sclr_rd_burst 276
typedef struct  reg_marb_bar_rw_vout_burst;
#define REG_RD_ADDR_marb_bar_rw_vout_burst 280
#define REG_WR_ADDR_marb_bar_rw_vout_burst 280
typedef struct  reg_marb_bar_rw_sclr_fifo_burst;
#define REG_RD_ADDR_marb_bar_rw_sclr_fifo_burst 284
#define REG_WR_ADDR_marb_bar_rw_sclr_fifo_burst 284
typedef struct  reg_marb_bar_rw_l2cache_burst;
#define REG_RD_ADDR_marb_bar_rw_l2cache_burst 288
#define REG_WR_ADDR_marb_bar_rw_l2cache_burst 288
typedef struct  reg_marb_bar_rw_intr_mask;
#define REG_RD_ADDR_marb_bar_rw_intr_mask 292
#define REG_WR_ADDR_marb_bar_rw_intr_mask 292
typedef struct  reg_marb_bar_rw_ack_intr;
#define REG_RD_ADDR_marb_bar_rw_ack_intr 296
#define REG_WR_ADDR_marb_bar_rw_ack_intr 296
typedef struct  reg_marb_bar_r_intr;
#define REG_RD_ADDR_marb_bar_r_intr 300
typedef struct  reg_marb_bar_r_masked_intr;
#define REG_RD_ADDR_marb_bar_r_masked_intr 304
typedef struct  reg_marb_bar_rw_stop_mask;
#define REG_RD_ADDR_marb_bar_rw_stop_mask 308
#define REG_WR_ADDR_marb_bar_rw_stop_mask 308
typedef struct  reg_marb_bar_r_stopped;
#define REG_RD_ADDR_marb_bar_r_stopped 312
typedef struct  reg_marb_bar_rw_no_snoop;
#define REG_RD_ADDR_marb_bar_rw_no_snoop 576
#define REG_WR_ADDR_marb_bar_rw_no_snoop 576
enum ;
#define __marb_bar_bp_defs_h
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
typedef unsigned int reg_marb_bar_bp_rw_first_addr;
#define REG_RD_ADDR_marb_bar_bp_rw_first_addr 0
#define REG_WR_ADDR_marb_bar_bp_rw_first_addr 0
typedef unsigned int reg_marb_bar_bp_rw_last_addr;
#define REG_RD_ADDR_marb_bar_bp_rw_last_addr 4
#define REG_WR_ADDR_marb_bar_bp_rw_last_addr 4
typedef struct  reg_marb_bar_bp_rw_op;
#define REG_RD_ADDR_marb_bar_bp_rw_op 8
#define REG_WR_ADDR_marb_bar_bp_rw_op 8
typedef struct  reg_marb_bar_bp_rw_clients;
#define REG_RD_ADDR_marb_bar_bp_rw_clients 12
#define REG_WR_ADDR_marb_bar_bp_rw_clients 12
typedef struct  reg_marb_bar_bp_rw_options;
#define REG_RD_ADDR_marb_bar_bp_rw_options 16
#define REG_WR_ADDR_marb_bar_bp_rw_options 16
typedef unsigned int reg_marb_bar_bp_r_brk_addr;
#define REG_RD_ADDR_marb_bar_bp_r_brk_addr 20
typedef struct  reg_marb_bar_bp_r_brk_op;
#define REG_RD_ADDR_marb_bar_bp_r_brk_op 24
typedef struct  reg_marb_bar_bp_r_brk_clients;
#define REG_RD_ADDR_marb_bar_bp_r_brk_clients 28
typedef struct  reg_marb_bar_bp_r_brk_first_client;
#define REG_RD_ADDR_marb_bar_bp_r_brk_first_client 32
typedef unsigned int reg_marb_bar_bp_r_brk_size;
#define REG_RD_ADDR_marb_bar_bp_r_brk_size 36
typedef unsigned int reg_marb_bar_bp_rw_ack;
#define REG_RD_ADDR_marb_bar_bp_rw_ack 40
#define REG_WR_ADDR_marb_bar_bp_rw_ack 40
enum ;
