#define __bif_dma_defs_h
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
typedef struct  reg_bif_dma_rw_ch0_ctrl;
#define REG_RD_ADDR_bif_dma_rw_ch0_ctrl 0
#define REG_WR_ADDR_bif_dma_rw_ch0_ctrl 0
typedef struct  reg_bif_dma_rw_ch0_addr;
#define REG_RD_ADDR_bif_dma_rw_ch0_addr 4
#define REG_WR_ADDR_bif_dma_rw_ch0_addr 4
typedef struct  reg_bif_dma_rw_ch0_start;
#define REG_RD_ADDR_bif_dma_rw_ch0_start 8
#define REG_WR_ADDR_bif_dma_rw_ch0_start 8
typedef struct  reg_bif_dma_rw_ch0_cnt;
#define REG_RD_ADDR_bif_dma_rw_ch0_cnt 12
#define REG_WR_ADDR_bif_dma_rw_ch0_cnt 12
typedef struct  reg_bif_dma_r_ch0_stat;
#define REG_RD_ADDR_bif_dma_r_ch0_stat 16
typedef struct  reg_bif_dma_rw_ch1_ctrl;
#define REG_RD_ADDR_bif_dma_rw_ch1_ctrl 32
#define REG_WR_ADDR_bif_dma_rw_ch1_ctrl 32
typedef struct  reg_bif_dma_rw_ch1_addr;
#define REG_RD_ADDR_bif_dma_rw_ch1_addr 36
#define REG_WR_ADDR_bif_dma_rw_ch1_addr 36
typedef struct  reg_bif_dma_rw_ch1_start;
#define REG_RD_ADDR_bif_dma_rw_ch1_start 40
#define REG_WR_ADDR_bif_dma_rw_ch1_start 40
typedef struct  reg_bif_dma_rw_ch1_cnt;
#define REG_RD_ADDR_bif_dma_rw_ch1_cnt 44
#define REG_WR_ADDR_bif_dma_rw_ch1_cnt 44
typedef struct  reg_bif_dma_r_ch1_stat;
#define REG_RD_ADDR_bif_dma_r_ch1_stat 48
typedef struct  reg_bif_dma_rw_ch2_ctrl;
#define REG_RD_ADDR_bif_dma_rw_ch2_ctrl 64
#define REG_WR_ADDR_bif_dma_rw_ch2_ctrl 64
typedef struct  reg_bif_dma_rw_ch2_addr;
#define REG_RD_ADDR_bif_dma_rw_ch2_addr 68
#define REG_WR_ADDR_bif_dma_rw_ch2_addr 68
typedef struct  reg_bif_dma_rw_ch2_start;
#define REG_RD_ADDR_bif_dma_rw_ch2_start 72
#define REG_WR_ADDR_bif_dma_rw_ch2_start 72
typedef struct  reg_bif_dma_rw_ch2_cnt;
#define REG_RD_ADDR_bif_dma_rw_ch2_cnt 76
#define REG_WR_ADDR_bif_dma_rw_ch2_cnt 76
typedef struct  reg_bif_dma_r_ch2_stat;
#define REG_RD_ADDR_bif_dma_r_ch2_stat 80
typedef struct  reg_bif_dma_rw_ch3_ctrl;
#define REG_RD_ADDR_bif_dma_rw_ch3_ctrl 96
#define REG_WR_ADDR_bif_dma_rw_ch3_ctrl 96
typedef struct  reg_bif_dma_rw_ch3_addr;
#define REG_RD_ADDR_bif_dma_rw_ch3_addr 100
#define REG_WR_ADDR_bif_dma_rw_ch3_addr 100
typedef struct  reg_bif_dma_rw_ch3_start;
#define REG_RD_ADDR_bif_dma_rw_ch3_start 104
#define REG_WR_ADDR_bif_dma_rw_ch3_start 104
typedef struct  reg_bif_dma_rw_ch3_cnt;
#define REG_RD_ADDR_bif_dma_rw_ch3_cnt 108
#define REG_WR_ADDR_bif_dma_rw_ch3_cnt 108
typedef struct  reg_bif_dma_r_ch3_stat;
#define REG_RD_ADDR_bif_dma_r_ch3_stat 112
typedef struct  reg_bif_dma_rw_intr_mask;
#define REG_RD_ADDR_bif_dma_rw_intr_mask 128
#define REG_WR_ADDR_bif_dma_rw_intr_mask 128
typedef struct  reg_bif_dma_rw_ack_intr;
#define REG_RD_ADDR_bif_dma_rw_ack_intr 132
#define REG_WR_ADDR_bif_dma_rw_ack_intr 132
typedef struct  reg_bif_dma_r_intr;
#define REG_RD_ADDR_bif_dma_r_intr 136
typedef struct  reg_bif_dma_r_masked_intr;
#define REG_RD_ADDR_bif_dma_r_masked_intr 140
typedef struct  reg_bif_dma_rw_pin0_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin0_cfg 160
#define REG_WR_ADDR_bif_dma_rw_pin0_cfg 160
typedef struct  reg_bif_dma_rw_pin1_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin1_cfg 164
#define REG_WR_ADDR_bif_dma_rw_pin1_cfg 164
typedef struct  reg_bif_dma_rw_pin2_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin2_cfg 168
#define REG_WR_ADDR_bif_dma_rw_pin2_cfg 168
typedef struct  reg_bif_dma_rw_pin3_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin3_cfg 172
#define REG_WR_ADDR_bif_dma_rw_pin3_cfg 172
typedef struct  reg_bif_dma_rw_pin4_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin4_cfg 176
#define REG_WR_ADDR_bif_dma_rw_pin4_cfg 176
typedef struct  reg_bif_dma_rw_pin5_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin5_cfg 180
#define REG_WR_ADDR_bif_dma_rw_pin5_cfg 180
typedef struct  reg_bif_dma_rw_pin6_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin6_cfg 184
#define REG_WR_ADDR_bif_dma_rw_pin6_cfg 184
typedef struct  reg_bif_dma_rw_pin7_cfg;
#define REG_RD_ADDR_bif_dma_rw_pin7_cfg 188
#define REG_WR_ADDR_bif_dma_rw_pin7_cfg 188
typedef struct  reg_bif_dma_r_pin_stat;
#define REG_RD_ADDR_bif_dma_r_pin_stat 192
enum ;
