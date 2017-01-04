#define __iop_sw_cfg_defs_h
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
typedef struct  reg_iop_sw_cfg_rw_crc_par_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_crc_par_owner 0
#define REG_WR_ADDR_iop_sw_cfg_rw_crc_par_owner 0
typedef struct  reg_iop_sw_cfg_rw_dmc_in_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_in_owner 4
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_in_owner 4
typedef struct  reg_iop_sw_cfg_rw_dmc_out_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_out_owner 8
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_out_owner 8
typedef struct  reg_iop_sw_cfg_rw_fifo_in_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in_owner 12
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in_owner 12
typedef struct  reg_iop_sw_cfg_rw_fifo_in_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in_extra_owner 16
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in_extra_owner 16
typedef struct  reg_iop_sw_cfg_rw_fifo_out_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out_owner 20
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out_owner 20
typedef struct  reg_iop_sw_cfg_rw_fifo_out_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out_extra_owner 24
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out_extra_owner 24
typedef struct  reg_iop_sw_cfg_rw_sap_in_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_sap_in_owner 28
#define REG_WR_ADDR_iop_sw_cfg_rw_sap_in_owner 28
typedef struct  reg_iop_sw_cfg_rw_sap_out_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_sap_out_owner 32
#define REG_WR_ADDR_iop_sw_cfg_rw_sap_out_owner 32
typedef struct  reg_iop_sw_cfg_rw_scrc_in_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_in_owner 36
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_in_owner 36
typedef struct  reg_iop_sw_cfg_rw_scrc_out_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_out_owner 40
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_out_owner 40
typedef struct  reg_iop_sw_cfg_rw_spu_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu_owner 44
#define REG_WR_ADDR_iop_sw_cfg_rw_spu_owner 44
typedef struct  reg_iop_sw_cfg_rw_timer_grp0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp0_owner 48
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp0_owner 48
typedef struct  reg_iop_sw_cfg_rw_timer_grp1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp1_owner 52
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp1_owner 52
typedef struct  reg_iop_sw_cfg_rw_trigger_grp0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp0_owner 56
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp0_owner 56
typedef struct  reg_iop_sw_cfg_rw_trigger_grp1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp1_owner 60
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp1_owner 60
typedef struct  reg_iop_sw_cfg_rw_trigger_grp2_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp2_owner 64
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp2_owner 64
typedef struct  reg_iop_sw_cfg_rw_trigger_grp3_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp3_owner 68
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp3_owner 68
typedef struct  reg_iop_sw_cfg_rw_trigger_grp4_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp4_owner 72
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp4_owner 72
typedef struct  reg_iop_sw_cfg_rw_trigger_grp5_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp5_owner 76
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp5_owner 76
typedef struct  reg_iop_sw_cfg_rw_trigger_grp6_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp6_owner 80
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp6_owner 80
typedef struct  reg_iop_sw_cfg_rw_trigger_grp7_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp7_owner 84
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp7_owner 84
typedef struct  reg_iop_sw_cfg_rw_bus_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus_mask 88
#define REG_WR_ADDR_iop_sw_cfg_rw_bus_mask 88
typedef struct  reg_iop_sw_cfg_rw_bus_oe_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus_oe_mask 92
#define REG_WR_ADDR_iop_sw_cfg_rw_bus_oe_mask 92
typedef struct  reg_iop_sw_cfg_rw_gio_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_mask 96
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_mask 96
typedef struct  reg_iop_sw_cfg_rw_gio_oe_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_oe_mask 100
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_oe_mask 100
typedef struct  reg_iop_sw_cfg_rw_pinmapping;
#define REG_RD_ADDR_iop_sw_cfg_rw_pinmapping 104
#define REG_WR_ADDR_iop_sw_cfg_rw_pinmapping 104
typedef struct  reg_iop_sw_cfg_rw_bus_out_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus_out_cfg 108
#define REG_WR_ADDR_iop_sw_cfg_rw_bus_out_cfg 108
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp0_cfg 112
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp0_cfg 112
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp1_cfg 116
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp1_cfg 116
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp2_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp2_cfg 120
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp2_cfg 120
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp3_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp3_cfg 124
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp3_cfg 124
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp4_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp4_cfg 128
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp4_cfg 128
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp5_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp5_cfg 132
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp5_cfg 132
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp6_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp6_cfg 136
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp6_cfg 136
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp7_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp7_cfg 140
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp7_cfg 140
typedef struct  reg_iop_sw_cfg_rw_spu_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu_cfg 144
#define REG_WR_ADDR_iop_sw_cfg_rw_spu_cfg 144
typedef struct  reg_iop_sw_cfg_rw_timer_grp0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp0_cfg 148
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp0_cfg 148
typedef struct  reg_iop_sw_cfg_rw_timer_grp1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp1_cfg 152
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp1_cfg 152
typedef struct  reg_iop_sw_cfg_rw_trigger_grps_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grps_cfg 156
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grps_cfg 156
typedef struct  reg_iop_sw_cfg_rw_pdp_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_pdp_cfg 160
#define REG_WR_ADDR_iop_sw_cfg_rw_pdp_cfg 160
typedef struct  reg_iop_sw_cfg_rw_sdp_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_sdp_cfg 164
#define REG_WR_ADDR_iop_sw_cfg_rw_sdp_cfg 164
enum ;
