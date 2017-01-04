#define __gio_defs_h
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
typedef struct  reg_gio_rw_pa_dout;
#define REG_RD_ADDR_gio_rw_pa_dout 0
#define REG_WR_ADDR_gio_rw_pa_dout 0
typedef struct  reg_gio_r_pa_din;
#define REG_RD_ADDR_gio_r_pa_din 4
typedef struct  reg_gio_rw_pa_oe;
#define REG_RD_ADDR_gio_rw_pa_oe 8
#define REG_WR_ADDR_gio_rw_pa_oe 8
typedef struct  reg_gio_rw_intr_cfg;
#define REG_RD_ADDR_gio_rw_intr_cfg 12
#define REG_WR_ADDR_gio_rw_intr_cfg 12
typedef struct  reg_gio_rw_intr_mask;
#define REG_RD_ADDR_gio_rw_intr_mask 16
#define REG_WR_ADDR_gio_rw_intr_mask 16
typedef struct  reg_gio_rw_ack_intr;
#define REG_RD_ADDR_gio_rw_ack_intr 20
#define REG_WR_ADDR_gio_rw_ack_intr 20
typedef struct  reg_gio_r_intr;
#define REG_RD_ADDR_gio_r_intr 24
typedef struct  reg_gio_r_masked_intr;
#define REG_RD_ADDR_gio_r_masked_intr 28
typedef struct  reg_gio_rw_pb_dout;
#define REG_RD_ADDR_gio_rw_pb_dout 32
#define REG_WR_ADDR_gio_rw_pb_dout 32
typedef struct  reg_gio_r_pb_din;
#define REG_RD_ADDR_gio_r_pb_din 36
typedef struct  reg_gio_rw_pb_oe;
#define REG_RD_ADDR_gio_rw_pb_oe 40
#define REG_WR_ADDR_gio_rw_pb_oe 40
typedef struct  reg_gio_rw_pc_dout;
#define REG_RD_ADDR_gio_rw_pc_dout 48
#define REG_WR_ADDR_gio_rw_pc_dout 48
typedef struct  reg_gio_r_pc_din;
#define REG_RD_ADDR_gio_r_pc_din 52
typedef struct  reg_gio_rw_pc_oe;
#define REG_RD_ADDR_gio_rw_pc_oe 56
#define REG_WR_ADDR_gio_rw_pc_oe 56
typedef struct  reg_gio_rw_pd_dout;
#define REG_RD_ADDR_gio_rw_pd_dout 64
#define REG_WR_ADDR_gio_rw_pd_dout 64
typedef struct  reg_gio_r_pd_din;
#define REG_RD_ADDR_gio_r_pd_din 68
typedef struct  reg_gio_rw_pd_oe;
#define REG_RD_ADDR_gio_rw_pd_oe 72
#define REG_WR_ADDR_gio_rw_pd_oe 72
typedef struct  reg_gio_rw_pe_dout;
#define REG_RD_ADDR_gio_rw_pe_dout 80
#define REG_WR_ADDR_gio_rw_pe_dout 80
typedef struct  reg_gio_r_pe_din;
#define REG_RD_ADDR_gio_r_pe_din 84
typedef struct  reg_gio_rw_pe_oe;
#define REG_RD_ADDR_gio_rw_pe_oe 88
#define REG_WR_ADDR_gio_rw_pe_oe 88
enum ;
