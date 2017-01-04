#define __iop_sw_cpu_defs_h
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
typedef unsigned int reg_iop_sw_cpu_r_mpu_trace;
#define REG_RD_ADDR_iop_sw_cpu_r_mpu_trace 0
typedef unsigned int reg_iop_sw_cpu_r_spu_trace;
#define REG_RD_ADDR_iop_sw_cpu_r_spu_trace 4
typedef unsigned int reg_iop_sw_cpu_r_spu_fsm_trace;
#define REG_RD_ADDR_iop_sw_cpu_r_spu_fsm_trace 8
typedef struct  reg_iop_sw_cpu_rw_mc_ctrl;
#define REG_RD_ADDR_iop_sw_cpu_rw_mc_ctrl 12
#define REG_WR_ADDR_iop_sw_cpu_rw_mc_ctrl 12
typedef struct  reg_iop_sw_cpu_rw_mc_data;
#define REG_RD_ADDR_iop_sw_cpu_rw_mc_data 16
#define REG_WR_ADDR_iop_sw_cpu_rw_mc_data 16
typedef unsigned int reg_iop_sw_cpu_rw_mc_addr;
#define REG_RD_ADDR_iop_sw_cpu_rw_mc_addr 20
#define REG_WR_ADDR_iop_sw_cpu_rw_mc_addr 20
typedef unsigned int reg_iop_sw_cpu_rs_mc_data;
#define REG_RD_ADDR_iop_sw_cpu_rs_mc_data 24
typedef unsigned int reg_iop_sw_cpu_r_mc_data;
#define REG_RD_ADDR_iop_sw_cpu_r_mc_data 28
typedef struct  reg_iop_sw_cpu_r_mc_stat;
#define REG_RD_ADDR_iop_sw_cpu_r_mc_stat 32
typedef struct  reg_iop_sw_cpu_rw_bus_clr_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_bus_clr_mask 36
#define REG_WR_ADDR_iop_sw_cpu_rw_bus_clr_mask 36
typedef struct  reg_iop_sw_cpu_rw_bus_set_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_bus_set_mask 40
#define REG_WR_ADDR_iop_sw_cpu_rw_bus_set_mask 40
typedef struct  reg_iop_sw_cpu_rw_bus_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_bus_oe_clr_mask 44
#define REG_WR_ADDR_iop_sw_cpu_rw_bus_oe_clr_mask 44
typedef struct  reg_iop_sw_cpu_rw_bus_oe_set_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_bus_oe_set_mask 48
#define REG_WR_ADDR_iop_sw_cpu_rw_bus_oe_set_mask 48
typedef unsigned int reg_iop_sw_cpu_r_bus_in;
#define REG_RD_ADDR_iop_sw_cpu_r_bus_in 52
typedef struct  reg_iop_sw_cpu_rw_gio_clr_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_gio_clr_mask 56
#define REG_WR_ADDR_iop_sw_cpu_rw_gio_clr_mask 56
typedef struct  reg_iop_sw_cpu_rw_gio_set_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_gio_set_mask 60
#define REG_WR_ADDR_iop_sw_cpu_rw_gio_set_mask 60
typedef struct  reg_iop_sw_cpu_rw_gio_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_gio_oe_clr_mask 64
#define REG_WR_ADDR_iop_sw_cpu_rw_gio_oe_clr_mask 64
typedef struct  reg_iop_sw_cpu_rw_gio_oe_set_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_gio_oe_set_mask 68
#define REG_WR_ADDR_iop_sw_cpu_rw_gio_oe_set_mask 68
typedef unsigned int reg_iop_sw_cpu_r_gio_in;
#define REG_RD_ADDR_iop_sw_cpu_r_gio_in 72
typedef struct  reg_iop_sw_cpu_rw_intr0_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_intr0_mask 76
#define REG_WR_ADDR_iop_sw_cpu_rw_intr0_mask 76
typedef struct  reg_iop_sw_cpu_rw_ack_intr0;
#define REG_RD_ADDR_iop_sw_cpu_rw_ack_intr0 80
#define REG_WR_ADDR_iop_sw_cpu_rw_ack_intr0 80
typedef struct  reg_iop_sw_cpu_r_intr0;
#define REG_RD_ADDR_iop_sw_cpu_r_intr0 84
typedef struct  reg_iop_sw_cpu_r_masked_intr0;
#define REG_RD_ADDR_iop_sw_cpu_r_masked_intr0 88
typedef struct  reg_iop_sw_cpu_rw_intr1_mask;
#define REG_RD_ADDR_iop_sw_cpu_rw_intr1_mask 92
#define REG_WR_ADDR_iop_sw_cpu_rw_intr1_mask 92
typedef struct  reg_iop_sw_cpu_rw_ack_intr1;
#define REG_RD_ADDR_iop_sw_cpu_rw_ack_intr1 96
#define REG_WR_ADDR_iop_sw_cpu_rw_ack_intr1 96
typedef struct  reg_iop_sw_cpu_r_intr1;
#define REG_RD_ADDR_iop_sw_cpu_r_intr1 100
typedef struct  reg_iop_sw_cpu_r_masked_intr1;
#define REG_RD_ADDR_iop_sw_cpu_r_masked_intr1 104
enum ;
