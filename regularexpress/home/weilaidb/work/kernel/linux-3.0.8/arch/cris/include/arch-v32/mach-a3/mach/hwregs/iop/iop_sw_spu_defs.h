#define __iop_sw_spu_defs_h
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
typedef unsigned int reg_iop_sw_spu_r_mpu_trace;
#define REG_RD_ADDR_iop_sw_spu_r_mpu_trace 0
typedef struct  reg_iop_sw_spu_rw_mc_ctrl;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_ctrl 4
#define REG_WR_ADDR_iop_sw_spu_rw_mc_ctrl 4
typedef struct  reg_iop_sw_spu_rw_mc_data;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_data 8
#define REG_WR_ADDR_iop_sw_spu_rw_mc_data 8
typedef unsigned int reg_iop_sw_spu_rw_mc_addr;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_addr 12
#define REG_WR_ADDR_iop_sw_spu_rw_mc_addr 12
typedef unsigned int reg_iop_sw_spu_rs_mc_data;
#define REG_RD_ADDR_iop_sw_spu_rs_mc_data 16
typedef unsigned int reg_iop_sw_spu_r_mc_data;
#define REG_RD_ADDR_iop_sw_spu_r_mc_data 20
typedef struct  reg_iop_sw_spu_r_mc_stat;
#define REG_RD_ADDR_iop_sw_spu_r_mc_stat 24
typedef struct  reg_iop_sw_spu_rw_bus_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_clr_mask 28
#define REG_WR_ADDR_iop_sw_spu_rw_bus_clr_mask 28
typedef struct  reg_iop_sw_spu_rw_bus_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_set_mask 32
#define REG_WR_ADDR_iop_sw_spu_rw_bus_set_mask 32
typedef struct  reg_iop_sw_spu_rw_bus_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_oe_clr_mask 36
#define REG_WR_ADDR_iop_sw_spu_rw_bus_oe_clr_mask 36
typedef struct  reg_iop_sw_spu_rw_bus_oe_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_oe_set_mask 40
#define REG_WR_ADDR_iop_sw_spu_rw_bus_oe_set_mask 40
typedef unsigned int reg_iop_sw_spu_r_bus_in;
#define REG_RD_ADDR_iop_sw_spu_r_bus_in 44
typedef struct  reg_iop_sw_spu_rw_gio_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask 48
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask 48
typedef struct  reg_iop_sw_spu_rw_gio_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask 52
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask 52
typedef struct  reg_iop_sw_spu_rw_gio_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask 56
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask 56
typedef struct  reg_iop_sw_spu_rw_gio_oe_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask 60
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask 60
typedef unsigned int reg_iop_sw_spu_r_gio_in;
#define REG_RD_ADDR_iop_sw_spu_r_gio_in 64
typedef struct  reg_iop_sw_spu_rw_bus_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_clr_mask_lo 68
#define REG_WR_ADDR_iop_sw_spu_rw_bus_clr_mask_lo 68
typedef struct  reg_iop_sw_spu_rw_bus_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_clr_mask_hi 72
#define REG_WR_ADDR_iop_sw_spu_rw_bus_clr_mask_hi 72
typedef struct  reg_iop_sw_spu_rw_bus_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_set_mask_lo 76
#define REG_WR_ADDR_iop_sw_spu_rw_bus_set_mask_lo 76
typedef struct  reg_iop_sw_spu_rw_bus_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus_set_mask_hi 80
#define REG_WR_ADDR_iop_sw_spu_rw_bus_set_mask_hi 80
typedef struct  reg_iop_sw_spu_rw_gio_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask_lo 84
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask_lo 84
typedef struct  reg_iop_sw_spu_rw_gio_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask_hi 88
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask_hi 88
typedef struct  reg_iop_sw_spu_rw_gio_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask_lo 92
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask_lo 92
typedef struct  reg_iop_sw_spu_rw_gio_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask_hi 96
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask_hi 96
typedef struct  reg_iop_sw_spu_rw_gio_oe_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_lo 100
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_lo 100
typedef struct  reg_iop_sw_spu_rw_gio_oe_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_hi 104
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_hi 104
typedef struct  reg_iop_sw_spu_rw_gio_oe_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask_lo 108
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask_lo 108
typedef struct  reg_iop_sw_spu_rw_gio_oe_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask_hi 112
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask_hi 112
typedef struct  reg_iop_sw_spu_rw_cpu_intr;
#define REG_RD_ADDR_iop_sw_spu_rw_cpu_intr 116
#define REG_WR_ADDR_iop_sw_spu_rw_cpu_intr 116
typedef struct  reg_iop_sw_spu_r_cpu_intr;
#define REG_RD_ADDR_iop_sw_spu_r_cpu_intr 120
typedef struct  reg_iop_sw_spu_r_hw_intr;
#define REG_RD_ADDR_iop_sw_spu_r_hw_intr 124
typedef struct  reg_iop_sw_spu_rw_mpu_intr;
#define REG_RD_ADDR_iop_sw_spu_rw_mpu_intr 128
#define REG_WR_ADDR_iop_sw_spu_rw_mpu_intr 128
typedef struct  reg_iop_sw_spu_r_mpu_intr;
#define REG_RD_ADDR_iop_sw_spu_r_mpu_intr 132
enum ;
