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
typedef struct  reg_gio_r_pa_din;
#define REG_RD_ADDR_gio_r_pa_din 0
typedef struct  reg_gio_rw_pa_dout;
#define REG_RD_ADDR_gio_rw_pa_dout 4
#define REG_WR_ADDR_gio_rw_pa_dout 4
typedef struct  reg_gio_rw_pa_oe;
#define REG_RD_ADDR_gio_rw_pa_oe 8
#define REG_WR_ADDR_gio_rw_pa_oe 8
typedef struct  reg_gio_rw_pa_byte0_dout;
#define REG_RD_ADDR_gio_rw_pa_byte0_dout 12
#define REG_WR_ADDR_gio_rw_pa_byte0_dout 12
typedef struct  reg_gio_rw_pa_byte0_oe;
#define REG_RD_ADDR_gio_rw_pa_byte0_oe 16
#define REG_WR_ADDR_gio_rw_pa_byte0_oe 16
typedef struct  reg_gio_rw_pa_byte1_dout;
#define REG_RD_ADDR_gio_rw_pa_byte1_dout 20
#define REG_WR_ADDR_gio_rw_pa_byte1_dout 20
typedef struct  reg_gio_rw_pa_byte1_oe;
#define REG_RD_ADDR_gio_rw_pa_byte1_oe 24
#define REG_WR_ADDR_gio_rw_pa_byte1_oe 24
typedef struct  reg_gio_rw_pa_byte2_dout;
#define REG_RD_ADDR_gio_rw_pa_byte2_dout 28
#define REG_WR_ADDR_gio_rw_pa_byte2_dout 28
typedef struct  reg_gio_rw_pa_byte2_oe;
#define REG_RD_ADDR_gio_rw_pa_byte2_oe 32
#define REG_WR_ADDR_gio_rw_pa_byte2_oe 32
typedef struct  reg_gio_rw_pa_byte3_dout;
#define REG_RD_ADDR_gio_rw_pa_byte3_dout 36
#define REG_WR_ADDR_gio_rw_pa_byte3_dout 36
typedef struct  reg_gio_rw_pa_byte3_oe;
#define REG_RD_ADDR_gio_rw_pa_byte3_oe 40
#define REG_WR_ADDR_gio_rw_pa_byte3_oe 40
typedef struct  reg_gio_r_pb_din;
#define REG_RD_ADDR_gio_r_pb_din 44
typedef struct  reg_gio_rw_pb_dout;
#define REG_RD_ADDR_gio_rw_pb_dout 48
#define REG_WR_ADDR_gio_rw_pb_dout 48
typedef struct  reg_gio_rw_pb_oe;
#define REG_RD_ADDR_gio_rw_pb_oe 52
#define REG_WR_ADDR_gio_rw_pb_oe 52
typedef struct  reg_gio_rw_pb_byte0_dout;
#define REG_RD_ADDR_gio_rw_pb_byte0_dout 56
#define REG_WR_ADDR_gio_rw_pb_byte0_dout 56
typedef struct  reg_gio_rw_pb_byte0_oe;
#define REG_RD_ADDR_gio_rw_pb_byte0_oe 60
#define REG_WR_ADDR_gio_rw_pb_byte0_oe 60
typedef struct  reg_gio_rw_pb_byte1_dout;
#define REG_RD_ADDR_gio_rw_pb_byte1_dout 64
#define REG_WR_ADDR_gio_rw_pb_byte1_dout 64
typedef struct  reg_gio_rw_pb_byte1_oe;
#define REG_RD_ADDR_gio_rw_pb_byte1_oe 68
#define REG_WR_ADDR_gio_rw_pb_byte1_oe 68
typedef struct  reg_gio_rw_pb_byte2_dout;
#define REG_RD_ADDR_gio_rw_pb_byte2_dout 72
#define REG_WR_ADDR_gio_rw_pb_byte2_dout 72
typedef struct  reg_gio_rw_pb_byte2_oe;
#define REG_RD_ADDR_gio_rw_pb_byte2_oe 76
#define REG_WR_ADDR_gio_rw_pb_byte2_oe 76
typedef struct  reg_gio_rw_pb_byte3_dout;
#define REG_RD_ADDR_gio_rw_pb_byte3_dout 80
#define REG_WR_ADDR_gio_rw_pb_byte3_dout 80
typedef struct  reg_gio_rw_pb_byte3_oe;
#define REG_RD_ADDR_gio_rw_pb_byte3_oe 84
#define REG_WR_ADDR_gio_rw_pb_byte3_oe 84
typedef struct  reg_gio_r_pc_din;
#define REG_RD_ADDR_gio_r_pc_din 88
typedef struct  reg_gio_rw_pc_dout;
#define REG_RD_ADDR_gio_rw_pc_dout 92
#define REG_WR_ADDR_gio_rw_pc_dout 92
typedef struct  reg_gio_rw_pc_oe;
#define REG_RD_ADDR_gio_rw_pc_oe 96
#define REG_WR_ADDR_gio_rw_pc_oe 96
typedef struct  reg_gio_rw_pc_byte0_dout;
#define REG_RD_ADDR_gio_rw_pc_byte0_dout 100
#define REG_WR_ADDR_gio_rw_pc_byte0_dout 100
typedef struct  reg_gio_rw_pc_byte0_oe;
#define REG_RD_ADDR_gio_rw_pc_byte0_oe 104
#define REG_WR_ADDR_gio_rw_pc_byte0_oe 104
typedef struct  reg_gio_rw_pc_byte1_dout;
#define REG_RD_ADDR_gio_rw_pc_byte1_dout 108
#define REG_WR_ADDR_gio_rw_pc_byte1_dout 108
typedef struct  reg_gio_rw_pc_byte1_oe;
#define REG_RD_ADDR_gio_rw_pc_byte1_oe 112
#define REG_WR_ADDR_gio_rw_pc_byte1_oe 112
typedef struct  reg_gio_r_pd_din;
#define REG_RD_ADDR_gio_r_pd_din 116
typedef struct  reg_gio_rw_intr_cfg;
#define REG_RD_ADDR_gio_rw_intr_cfg 120
#define REG_WR_ADDR_gio_rw_intr_cfg 120
typedef struct  reg_gio_rw_intr_pins;
#define REG_RD_ADDR_gio_rw_intr_pins 124
#define REG_WR_ADDR_gio_rw_intr_pins 124
typedef struct  reg_gio_rw_intr_mask;
#define REG_RD_ADDR_gio_rw_intr_mask 128
#define REG_WR_ADDR_gio_rw_intr_mask 128
typedef struct  reg_gio_rw_ack_intr;
#define REG_RD_ADDR_gio_rw_ack_intr 132
#define REG_WR_ADDR_gio_rw_ack_intr 132
typedef struct  reg_gio_r_intr;
#define REG_RD_ADDR_gio_r_intr 136
typedef struct  reg_gio_r_masked_intr;
#define REG_RD_ADDR_gio_r_masked_intr 140
typedef struct  reg_gio_rw_i2c0_start;
#define REG_RD_ADDR_gio_rw_i2c0_start 144
#define REG_WR_ADDR_gio_rw_i2c0_start 144
typedef struct  reg_gio_rw_i2c0_cfg;
#define REG_RD_ADDR_gio_rw_i2c0_cfg 148
#define REG_WR_ADDR_gio_rw_i2c0_cfg 148
typedef struct  reg_gio_rw_i2c0_ctrl;
#define REG_RD_ADDR_gio_rw_i2c0_ctrl 152
#define REG_WR_ADDR_gio_rw_i2c0_ctrl 152
typedef struct  reg_gio_rw_i2c0_data;
#define REG_RD_ADDR_gio_rw_i2c0_data 156
#define REG_WR_ADDR_gio_rw_i2c0_data 156
typedef struct  reg_gio_rw_i2c0_data2;
#define REG_RD_ADDR_gio_rw_i2c0_data2 160
#define REG_WR_ADDR_gio_rw_i2c0_data2 160
typedef struct  reg_gio_rw_i2c1_start;
#define REG_RD_ADDR_gio_rw_i2c1_start 164
#define REG_WR_ADDR_gio_rw_i2c1_start 164
typedef struct  reg_gio_rw_i2c1_cfg;
#define REG_RD_ADDR_gio_rw_i2c1_cfg 168
#define REG_WR_ADDR_gio_rw_i2c1_cfg 168
typedef struct  reg_gio_rw_i2c1_ctrl;
#define REG_RD_ADDR_gio_rw_i2c1_ctrl 172
#define REG_WR_ADDR_gio_rw_i2c1_ctrl 172
typedef struct  reg_gio_rw_i2c1_data;
#define REG_RD_ADDR_gio_rw_i2c1_data 176
#define REG_WR_ADDR_gio_rw_i2c1_data 176
typedef struct  reg_gio_rw_i2c1_data2;
#define REG_RD_ADDR_gio_rw_i2c1_data2 180
#define REG_WR_ADDR_gio_rw_i2c1_data2 180
typedef struct  reg_gio_r_ppwm_stat;
#define REG_RD_ADDR_gio_r_ppwm_stat 184
typedef struct  reg_gio_rw_ppwm_data;
#define REG_RD_ADDR_gio_rw_ppwm_data 188
#define REG_WR_ADDR_gio_rw_ppwm_data 188
typedef struct  reg_gio_rw_pwm0_ctrl;
#define REG_RD_ADDR_gio_rw_pwm0_ctrl 192
#define REG_WR_ADDR_gio_rw_pwm0_ctrl 192
typedef struct  reg_gio_rw_pwm0_var;
#define REG_RD_ADDR_gio_rw_pwm0_var 196
#define REG_WR_ADDR_gio_rw_pwm0_var 196
typedef struct  reg_gio_rw_pwm0_data;
#define REG_RD_ADDR_gio_rw_pwm0_data 200
#define REG_WR_ADDR_gio_rw_pwm0_data 200
typedef struct  reg_gio_rw_pwm1_ctrl;
#define REG_RD_ADDR_gio_rw_pwm1_ctrl 204
#define REG_WR_ADDR_gio_rw_pwm1_ctrl 204
typedef struct  reg_gio_rw_pwm1_var;
#define REG_RD_ADDR_gio_rw_pwm1_var 208
#define REG_WR_ADDR_gio_rw_pwm1_var 208
typedef struct  reg_gio_rw_pwm1_data;
#define REG_RD_ADDR_gio_rw_pwm1_data 212
#define REG_WR_ADDR_gio_rw_pwm1_data 212
typedef struct  reg_gio_rw_pwm2_ctrl;
#define REG_RD_ADDR_gio_rw_pwm2_ctrl 216
#define REG_WR_ADDR_gio_rw_pwm2_ctrl 216
typedef struct  reg_gio_rw_pwm2_var;
#define REG_RD_ADDR_gio_rw_pwm2_var 220
#define REG_WR_ADDR_gio_rw_pwm2_var 220
typedef struct  reg_gio_rw_pwm2_data;
#define REG_RD_ADDR_gio_rw_pwm2_data 224
#define REG_WR_ADDR_gio_rw_pwm2_data 224
typedef struct  reg_gio_rw_pwm_in_cfg;
#define REG_RD_ADDR_gio_rw_pwm_in_cfg 228
#define REG_WR_ADDR_gio_rw_pwm_in_cfg 228
typedef struct  reg_gio_r_pwm_in_lo;
#define REG_RD_ADDR_gio_r_pwm_in_lo 232
typedef struct  reg_gio_r_pwm_in_hi;
#define REG_RD_ADDR_gio_r_pwm_in_hi 236
typedef struct  reg_gio_r_pwm_in_cnt;
#define REG_RD_ADDR_gio_r_pwm_in_cnt 240
enum ;
