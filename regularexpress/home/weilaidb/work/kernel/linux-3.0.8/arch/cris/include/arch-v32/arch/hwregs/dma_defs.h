#define __dma_defs_h
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
typedef unsigned int reg_dma_rw_data;
#define REG_RD_ADDR_dma_rw_data 0
#define REG_WR_ADDR_dma_rw_data 0
typedef unsigned int reg_dma_rw_data_next;
#define REG_RD_ADDR_dma_rw_data_next 4
#define REG_WR_ADDR_dma_rw_data_next 4
typedef unsigned int reg_dma_rw_data_buf;
#define REG_RD_ADDR_dma_rw_data_buf 8
#define REG_WR_ADDR_dma_rw_data_buf 8
typedef struct  reg_dma_rw_data_ctrl;
#define REG_RD_ADDR_dma_rw_data_ctrl 12
#define REG_WR_ADDR_dma_rw_data_ctrl 12
typedef struct  reg_dma_rw_data_stat;
#define REG_RD_ADDR_dma_rw_data_stat 16
#define REG_WR_ADDR_dma_rw_data_stat 16
typedef struct  reg_dma_rw_data_md;
#define REG_RD_ADDR_dma_rw_data_md 20
#define REG_WR_ADDR_dma_rw_data_md 20
typedef struct  reg_dma_rw_data_md_s;
#define REG_RD_ADDR_dma_rw_data_md_s 24
#define REG_WR_ADDR_dma_rw_data_md_s 24
typedef unsigned int reg_dma_rw_data_after;
#define REG_RD_ADDR_dma_rw_data_after 28
#define REG_WR_ADDR_dma_rw_data_after 28
typedef unsigned int reg_dma_rw_ctxt;
#define REG_RD_ADDR_dma_rw_ctxt 32
#define REG_WR_ADDR_dma_rw_ctxt 32
typedef unsigned int reg_dma_rw_ctxt_next;
#define REG_RD_ADDR_dma_rw_ctxt_next 36
#define REG_WR_ADDR_dma_rw_ctxt_next 36
typedef struct  reg_dma_rw_ctxt_ctrl;
#define REG_RD_ADDR_dma_rw_ctxt_ctrl 40
#define REG_WR_ADDR_dma_rw_ctxt_ctrl 40
typedef struct  reg_dma_rw_ctxt_stat;
#define REG_RD_ADDR_dma_rw_ctxt_stat 44
#define REG_WR_ADDR_dma_rw_ctxt_stat 44
typedef struct  reg_dma_rw_ctxt_md0;
#define REG_RD_ADDR_dma_rw_ctxt_md0 48
#define REG_WR_ADDR_dma_rw_ctxt_md0 48
typedef struct  reg_dma_rw_ctxt_md0_s;
#define REG_RD_ADDR_dma_rw_ctxt_md0_s 52
#define REG_WR_ADDR_dma_rw_ctxt_md0_s 52
typedef unsigned int reg_dma_rw_ctxt_md1;
#define REG_RD_ADDR_dma_rw_ctxt_md1 56
#define REG_WR_ADDR_dma_rw_ctxt_md1 56
typedef unsigned int reg_dma_rw_ctxt_md1_s;
#define REG_RD_ADDR_dma_rw_ctxt_md1_s 60
#define REG_WR_ADDR_dma_rw_ctxt_md1_s 60
typedef unsigned int reg_dma_rw_ctxt_md2;
#define REG_RD_ADDR_dma_rw_ctxt_md2 64
#define REG_WR_ADDR_dma_rw_ctxt_md2 64
typedef unsigned int reg_dma_rw_ctxt_md2_s;
#define REG_RD_ADDR_dma_rw_ctxt_md2_s 68
#define REG_WR_ADDR_dma_rw_ctxt_md2_s 68
typedef unsigned int reg_dma_rw_ctxt_md3;
#define REG_RD_ADDR_dma_rw_ctxt_md3 72
#define REG_WR_ADDR_dma_rw_ctxt_md3 72
typedef unsigned int reg_dma_rw_ctxt_md3_s;
#define REG_RD_ADDR_dma_rw_ctxt_md3_s 76
#define REG_WR_ADDR_dma_rw_ctxt_md3_s 76
typedef unsigned int reg_dma_rw_ctxt_md4;
#define REG_RD_ADDR_dma_rw_ctxt_md4 80
#define REG_WR_ADDR_dma_rw_ctxt_md4 80
typedef unsigned int reg_dma_rw_ctxt_md4_s;
#define REG_RD_ADDR_dma_rw_ctxt_md4_s 84
#define REG_WR_ADDR_dma_rw_ctxt_md4_s 84
typedef unsigned int reg_dma_rw_saved_data;
#define REG_RD_ADDR_dma_rw_saved_data 88
#define REG_WR_ADDR_dma_rw_saved_data 88
typedef unsigned int reg_dma_rw_saved_data_buf;
#define REG_RD_ADDR_dma_rw_saved_data_buf 92
#define REG_WR_ADDR_dma_rw_saved_data_buf 92
typedef unsigned int reg_dma_rw_group;
#define REG_RD_ADDR_dma_rw_group 96
#define REG_WR_ADDR_dma_rw_group 96
typedef unsigned int reg_dma_rw_group_next;
#define REG_RD_ADDR_dma_rw_group_next 100
#define REG_WR_ADDR_dma_rw_group_next 100
typedef struct  reg_dma_rw_group_ctrl;
#define REG_RD_ADDR_dma_rw_group_ctrl 104
#define REG_WR_ADDR_dma_rw_group_ctrl 104
typedef struct  reg_dma_rw_group_stat;
#define REG_RD_ADDR_dma_rw_group_stat 108
#define REG_WR_ADDR_dma_rw_group_stat 108
typedef struct  reg_dma_rw_group_md;
#define REG_RD_ADDR_dma_rw_group_md 112
#define REG_WR_ADDR_dma_rw_group_md 112
typedef struct  reg_dma_rw_group_md_s;
#define REG_RD_ADDR_dma_rw_group_md_s 116
#define REG_WR_ADDR_dma_rw_group_md_s 116
typedef unsigned int reg_dma_rw_group_up;
#define REG_RD_ADDR_dma_rw_group_up 120
#define REG_WR_ADDR_dma_rw_group_up 120
typedef unsigned int reg_dma_rw_group_down;
#define REG_RD_ADDR_dma_rw_group_down 124
#define REG_WR_ADDR_dma_rw_group_down 124
typedef struct  reg_dma_rw_cmd;
#define REG_RD_ADDR_dma_rw_cmd 128
#define REG_WR_ADDR_dma_rw_cmd 128
typedef struct  reg_dma_rw_cfg;
#define REG_RD_ADDR_dma_rw_cfg 132
#define REG_WR_ADDR_dma_rw_cfg 132
typedef struct  reg_dma_rw_stat;
#define REG_RD_ADDR_dma_rw_stat 136
#define REG_WR_ADDR_dma_rw_stat 136
typedef struct  reg_dma_rw_intr_mask;
#define REG_RD_ADDR_dma_rw_intr_mask 140
#define REG_WR_ADDR_dma_rw_intr_mask 140
typedef struct  reg_dma_rw_ack_intr;
#define REG_RD_ADDR_dma_rw_ack_intr 144
#define REG_WR_ADDR_dma_rw_ack_intr 144
typedef struct  reg_dma_r_intr;
#define REG_RD_ADDR_dma_r_intr 148
typedef struct  reg_dma_r_masked_intr;
#define REG_RD_ADDR_dma_r_masked_intr 152
typedef struct  reg_dma_rw_stream_cmd;
#define REG_RD_ADDR_dma_rw_stream_cmd 156
#define REG_WR_ADDR_dma_rw_stream_cmd 156
enum ;
