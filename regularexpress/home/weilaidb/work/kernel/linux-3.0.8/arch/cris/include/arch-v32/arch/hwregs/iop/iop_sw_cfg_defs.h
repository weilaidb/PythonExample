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
typedef struct  reg_iop_sw_cfg_rw_crc_par0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_crc_par0_owner 0
#define REG_WR_ADDR_iop_sw_cfg_rw_crc_par0_owner 0
typedef struct  reg_iop_sw_cfg_rw_crc_par1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_crc_par1_owner 4
#define REG_WR_ADDR_iop_sw_cfg_rw_crc_par1_owner 4
typedef struct  reg_iop_sw_cfg_rw_dmc_in0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_in0_owner 8
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_in0_owner 8
typedef struct  reg_iop_sw_cfg_rw_dmc_in1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_in1_owner 12
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_in1_owner 12
typedef struct  reg_iop_sw_cfg_rw_dmc_out0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_out0_owner 16
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_out0_owner 16
typedef struct  reg_iop_sw_cfg_rw_dmc_out1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_dmc_out1_owner 20
#define REG_WR_ADDR_iop_sw_cfg_rw_dmc_out1_owner 20
typedef struct  reg_iop_sw_cfg_rw_fifo_in0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in0_owner 24
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in0_owner 24
typedef struct  reg_iop_sw_cfg_rw_fifo_in0_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in0_extra_owner 28
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in0_extra_owner 28
typedef struct  reg_iop_sw_cfg_rw_fifo_in1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in1_owner 32
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in1_owner 32
typedef struct  reg_iop_sw_cfg_rw_fifo_in1_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_in1_extra_owner 36
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_in1_extra_owner 36
typedef struct  reg_iop_sw_cfg_rw_fifo_out0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out0_owner 40
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out0_owner 40
typedef struct  reg_iop_sw_cfg_rw_fifo_out0_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out0_extra_owner 44
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out0_extra_owner 44
typedef struct  reg_iop_sw_cfg_rw_fifo_out1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out1_owner 48
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out1_owner 48
typedef struct  reg_iop_sw_cfg_rw_fifo_out1_extra_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_fifo_out1_extra_owner 52
#define REG_WR_ADDR_iop_sw_cfg_rw_fifo_out1_extra_owner 52
typedef struct  reg_iop_sw_cfg_rw_sap_in_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_sap_in_owner 56
#define REG_WR_ADDR_iop_sw_cfg_rw_sap_in_owner 56
typedef struct  reg_iop_sw_cfg_rw_sap_out_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_sap_out_owner 60
#define REG_WR_ADDR_iop_sw_cfg_rw_sap_out_owner 60
typedef struct  reg_iop_sw_cfg_rw_scrc_in0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_in0_owner 64
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_in0_owner 64
typedef struct  reg_iop_sw_cfg_rw_scrc_in1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_in1_owner 68
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_in1_owner 68
typedef struct  reg_iop_sw_cfg_rw_scrc_out0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_out0_owner 72
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_out0_owner 72
typedef struct  reg_iop_sw_cfg_rw_scrc_out1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_scrc_out1_owner 76
#define REG_WR_ADDR_iop_sw_cfg_rw_scrc_out1_owner 76
typedef struct  reg_iop_sw_cfg_rw_spu0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu0_owner 80
#define REG_WR_ADDR_iop_sw_cfg_rw_spu0_owner 80
typedef struct  reg_iop_sw_cfg_rw_spu1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu1_owner 84
#define REG_WR_ADDR_iop_sw_cfg_rw_spu1_owner 84
typedef struct  reg_iop_sw_cfg_rw_timer_grp0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp0_owner 88
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp0_owner 88
typedef struct  reg_iop_sw_cfg_rw_timer_grp1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp1_owner 92
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp1_owner 92
typedef struct  reg_iop_sw_cfg_rw_timer_grp2_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp2_owner 96
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp2_owner 96
typedef struct  reg_iop_sw_cfg_rw_timer_grp3_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp3_owner 100
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp3_owner 100
typedef struct  reg_iop_sw_cfg_rw_trigger_grp0_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp0_owner 104
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp0_owner 104
typedef struct  reg_iop_sw_cfg_rw_trigger_grp1_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp1_owner 108
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp1_owner 108
typedef struct  reg_iop_sw_cfg_rw_trigger_grp2_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp2_owner 112
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp2_owner 112
typedef struct  reg_iop_sw_cfg_rw_trigger_grp3_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp3_owner 116
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp3_owner 116
typedef struct  reg_iop_sw_cfg_rw_trigger_grp4_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp4_owner 120
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp4_owner 120
typedef struct  reg_iop_sw_cfg_rw_trigger_grp5_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp5_owner 124
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp5_owner 124
typedef struct  reg_iop_sw_cfg_rw_trigger_grp6_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp6_owner 128
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp6_owner 128
typedef struct  reg_iop_sw_cfg_rw_trigger_grp7_owner;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grp7_owner 132
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grp7_owner 132
typedef struct  reg_iop_sw_cfg_rw_bus0_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus0_mask 136
#define REG_WR_ADDR_iop_sw_cfg_rw_bus0_mask 136
typedef struct  reg_iop_sw_cfg_rw_bus0_oe_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus0_oe_mask 140
#define REG_WR_ADDR_iop_sw_cfg_rw_bus0_oe_mask 140
typedef struct  reg_iop_sw_cfg_rw_bus1_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus1_mask 144
#define REG_WR_ADDR_iop_sw_cfg_rw_bus1_mask 144
typedef struct  reg_iop_sw_cfg_rw_bus1_oe_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus1_oe_mask 148
#define REG_WR_ADDR_iop_sw_cfg_rw_bus1_oe_mask 148
typedef struct  reg_iop_sw_cfg_rw_gio_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_mask 152
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_mask 152
typedef struct  reg_iop_sw_cfg_rw_gio_oe_mask;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_oe_mask 156
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_oe_mask 156
typedef struct  reg_iop_sw_cfg_rw_pinmapping;
#define REG_RD_ADDR_iop_sw_cfg_rw_pinmapping 160
#define REG_WR_ADDR_iop_sw_cfg_rw_pinmapping 160
typedef struct  reg_iop_sw_cfg_rw_bus_out_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_bus_out_cfg 164
#define REG_WR_ADDR_iop_sw_cfg_rw_bus_out_cfg 164
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp0_cfg 168
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp0_cfg 168
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp1_cfg 172
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp1_cfg 172
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp2_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp2_cfg 176
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp2_cfg 176
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp3_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp3_cfg 180
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp3_cfg 180
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp4_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp4_cfg 184
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp4_cfg 184
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp5_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp5_cfg 188
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp5_cfg 188
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp6_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp6_cfg 192
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp6_cfg 192
typedef struct  reg_iop_sw_cfg_rw_gio_out_grp7_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_gio_out_grp7_cfg 196
#define REG_WR_ADDR_iop_sw_cfg_rw_gio_out_grp7_cfg 196
typedef struct  reg_iop_sw_cfg_rw_spu0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu0_cfg 200
#define REG_WR_ADDR_iop_sw_cfg_rw_spu0_cfg 200
typedef struct  reg_iop_sw_cfg_rw_spu1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_spu1_cfg 204
#define REG_WR_ADDR_iop_sw_cfg_rw_spu1_cfg 204
typedef struct  reg_iop_sw_cfg_rw_timer_grp0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp0_cfg 208
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp0_cfg 208
typedef struct  reg_iop_sw_cfg_rw_timer_grp1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp1_cfg 212
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp1_cfg 212
typedef struct  reg_iop_sw_cfg_rw_timer_grp2_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp2_cfg 216
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp2_cfg 216
typedef struct  reg_iop_sw_cfg_rw_timer_grp3_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_timer_grp3_cfg 220
#define REG_WR_ADDR_iop_sw_cfg_rw_timer_grp3_cfg 220
typedef struct  reg_iop_sw_cfg_rw_trigger_grps_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_trigger_grps_cfg 224
#define REG_WR_ADDR_iop_sw_cfg_rw_trigger_grps_cfg 224
typedef struct  reg_iop_sw_cfg_rw_pdp0_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_pdp0_cfg 228
#define REG_WR_ADDR_iop_sw_cfg_rw_pdp0_cfg 228
typedef struct  reg_iop_sw_cfg_rw_pdp1_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_pdp1_cfg 232
#define REG_WR_ADDR_iop_sw_cfg_rw_pdp1_cfg 232
typedef struct  reg_iop_sw_cfg_rw_sdp_cfg;
#define REG_RD_ADDR_iop_sw_cfg_rw_sdp_cfg 236
#define REG_WR_ADDR_iop_sw_cfg_rw_sdp_cfg 236
enum ;
