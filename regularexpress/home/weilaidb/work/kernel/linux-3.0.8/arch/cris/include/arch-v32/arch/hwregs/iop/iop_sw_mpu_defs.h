#define __iop_sw_mpu_defs_h
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
typedef struct  reg_iop_sw_mpu_rw_sw_cfg_owner;
#define REG_RD_ADDR_iop_sw_mpu_rw_sw_cfg_owner 0
#define REG_WR_ADDR_iop_sw_mpu_rw_sw_cfg_owner 0
typedef struct  reg_iop_sw_mpu_rw_mc_ctrl;
#define REG_RD_ADDR_iop_sw_mpu_rw_mc_ctrl 4
#define REG_WR_ADDR_iop_sw_mpu_rw_mc_ctrl 4
typedef struct  reg_iop_sw_mpu_rw_mc_data;
#define REG_RD_ADDR_iop_sw_mpu_rw_mc_data 8
#define REG_WR_ADDR_iop_sw_mpu_rw_mc_data 8
typedef unsigned int reg_iop_sw_mpu_rw_mc_addr;
#define REG_RD_ADDR_iop_sw_mpu_rw_mc_addr 12
#define REG_WR_ADDR_iop_sw_mpu_rw_mc_addr 12
typedef unsigned int reg_iop_sw_mpu_rs_mc_data;
#define REG_RD_ADDR_iop_sw_mpu_rs_mc_data 16
typedef unsigned int reg_iop_sw_mpu_r_mc_data;
#define REG_RD_ADDR_iop_sw_mpu_r_mc_data 20
typedef struct  reg_iop_sw_mpu_r_mc_stat;
#define REG_RD_ADDR_iop_sw_mpu_r_mc_stat 24
typedef struct  reg_iop_sw_mpu_rw_bus0_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus0_clr_mask 28
#define REG_WR_ADDR_iop_sw_mpu_rw_bus0_clr_mask 28
typedef struct  reg_iop_sw_mpu_rw_bus0_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus0_set_mask 32
#define REG_WR_ADDR_iop_sw_mpu_rw_bus0_set_mask 32
typedef struct  reg_iop_sw_mpu_rw_bus0_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus0_oe_clr_mask 36
#define REG_WR_ADDR_iop_sw_mpu_rw_bus0_oe_clr_mask 36
typedef struct  reg_iop_sw_mpu_rw_bus0_oe_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus0_oe_set_mask 40
#define REG_WR_ADDR_iop_sw_mpu_rw_bus0_oe_set_mask 40
typedef unsigned int reg_iop_sw_mpu_r_bus0_in;
#define REG_RD_ADDR_iop_sw_mpu_r_bus0_in 44
typedef struct  reg_iop_sw_mpu_rw_bus1_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus1_clr_mask 48
#define REG_WR_ADDR_iop_sw_mpu_rw_bus1_clr_mask 48
typedef struct  reg_iop_sw_mpu_rw_bus1_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus1_set_mask 52
#define REG_WR_ADDR_iop_sw_mpu_rw_bus1_set_mask 52
typedef struct  reg_iop_sw_mpu_rw_bus1_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus1_oe_clr_mask 56
#define REG_WR_ADDR_iop_sw_mpu_rw_bus1_oe_clr_mask 56
typedef struct  reg_iop_sw_mpu_rw_bus1_oe_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_bus1_oe_set_mask 60
#define REG_WR_ADDR_iop_sw_mpu_rw_bus1_oe_set_mask 60
typedef unsigned int reg_iop_sw_mpu_r_bus1_in;
#define REG_RD_ADDR_iop_sw_mpu_r_bus1_in 64
typedef struct  reg_iop_sw_mpu_rw_gio_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_gio_clr_mask 68
#define REG_WR_ADDR_iop_sw_mpu_rw_gio_clr_mask 68
typedef struct  reg_iop_sw_mpu_rw_gio_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_gio_set_mask 72
#define REG_WR_ADDR_iop_sw_mpu_rw_gio_set_mask 72
typedef struct  reg_iop_sw_mpu_rw_gio_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_gio_oe_clr_mask 76
#define REG_WR_ADDR_iop_sw_mpu_rw_gio_oe_clr_mask 76
typedef struct  reg_iop_sw_mpu_rw_gio_oe_set_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_gio_oe_set_mask 80
#define REG_WR_ADDR_iop_sw_mpu_rw_gio_oe_set_mask 80
typedef unsigned int reg_iop_sw_mpu_r_gio_in;
#define REG_RD_ADDR_iop_sw_mpu_r_gio_in 84
typedef struct  reg_iop_sw_mpu_rw_cpu_intr;
#define REG_RD_ADDR_iop_sw_mpu_rw_cpu_intr 88
#define REG_WR_ADDR_iop_sw_mpu_rw_cpu_intr 88
typedef struct  reg_iop_sw_mpu_r_cpu_intr;
#define REG_RD_ADDR_iop_sw_mpu_r_cpu_intr 92
typedef struct  reg_iop_sw_mpu_rw_intr_grp0_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_intr_grp0_mask 96
#define REG_WR_ADDR_iop_sw_mpu_rw_intr_grp0_mask 96
typedef struct  reg_iop_sw_mpu_rw_ack_intr_grp0;
#define REG_RD_ADDR_iop_sw_mpu_rw_ack_intr_grp0 100
#define REG_WR_ADDR_iop_sw_mpu_rw_ack_intr_grp0 100
typedef struct  reg_iop_sw_mpu_r_intr_grp0;
#define REG_RD_ADDR_iop_sw_mpu_r_intr_grp0 104
typedef struct  reg_iop_sw_mpu_r_masked_intr_grp0;
#define REG_RD_ADDR_iop_sw_mpu_r_masked_intr_grp0 108
typedef struct  reg_iop_sw_mpu_rw_intr_grp1_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_intr_grp1_mask 112
#define REG_WR_ADDR_iop_sw_mpu_rw_intr_grp1_mask 112
typedef struct  reg_iop_sw_mpu_rw_ack_intr_grp1;
#define REG_RD_ADDR_iop_sw_mpu_rw_ack_intr_grp1 116
#define REG_WR_ADDR_iop_sw_mpu_rw_ack_intr_grp1 116
typedef struct  reg_iop_sw_mpu_r_intr_grp1;
#define REG_RD_ADDR_iop_sw_mpu_r_intr_grp1 120
typedef struct  reg_iop_sw_mpu_r_masked_intr_grp1;
#define REG_RD_ADDR_iop_sw_mpu_r_masked_intr_grp1 124
typedef struct  reg_iop_sw_mpu_rw_intr_grp2_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_intr_grp2_mask 128
#define REG_WR_ADDR_iop_sw_mpu_rw_intr_grp2_mask 128
typedef struct  reg_iop_sw_mpu_rw_ack_intr_grp2;
#define REG_RD_ADDR_iop_sw_mpu_rw_ack_intr_grp2 132
#define REG_WR_ADDR_iop_sw_mpu_rw_ack_intr_grp2 132
typedef struct  reg_iop_sw_mpu_r_intr_grp2;
#define REG_RD_ADDR_iop_sw_mpu_r_intr_grp2 136
typedef struct  reg_iop_sw_mpu_r_masked_intr_grp2;
#define REG_RD_ADDR_iop_sw_mpu_r_masked_intr_grp2 140
typedef struct  reg_iop_sw_mpu_rw_intr_grp3_mask;
#define REG_RD_ADDR_iop_sw_mpu_rw_intr_grp3_mask 144
#define REG_WR_ADDR_iop_sw_mpu_rw_intr_grp3_mask 144
typedef struct  reg_iop_sw_mpu_rw_ack_intr_grp3;
#define REG_RD_ADDR_iop_sw_mpu_rw_ack_intr_grp3 148
#define REG_WR_ADDR_iop_sw_mpu_rw_ack_intr_grp3 148
typedef struct  reg_iop_sw_mpu_r_intr_grp3;
#define REG_RD_ADDR_iop_sw_mpu_r_intr_grp3 152
typedef struct  reg_iop_sw_mpu_r_masked_intr_grp3;
#define REG_RD_ADDR_iop_sw_mpu_r_masked_intr_grp3 156
enum ;
