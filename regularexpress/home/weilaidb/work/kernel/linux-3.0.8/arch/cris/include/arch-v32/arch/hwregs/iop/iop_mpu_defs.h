#define __iop_mpu_defs_h
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
#define STRIDE_iop_mpu_rw_r 4
typedef unsigned int reg_iop_mpu_rw_r;
#define REG_RD_ADDR_iop_mpu_rw_r 0
#define REG_WR_ADDR_iop_mpu_rw_r 0
typedef struct  reg_iop_mpu_rw_ctrl;
#define REG_RD_ADDR_iop_mpu_rw_ctrl 128
#define REG_WR_ADDR_iop_mpu_rw_ctrl 128
typedef struct  reg_iop_mpu_r_pc;
#define REG_RD_ADDR_iop_mpu_r_pc 132
typedef struct  reg_iop_mpu_r_stat;
#define REG_RD_ADDR_iop_mpu_r_stat 136
typedef unsigned int reg_iop_mpu_rw_instr;
#define REG_RD_ADDR_iop_mpu_rw_instr 140
#define REG_WR_ADDR_iop_mpu_rw_instr 140
typedef unsigned int reg_iop_mpu_rw_immediate;
#define REG_RD_ADDR_iop_mpu_rw_immediate 144
#define REG_WR_ADDR_iop_mpu_rw_immediate 144
typedef struct  reg_iop_mpu_r_trace;
#define REG_RD_ADDR_iop_mpu_r_trace 148
typedef struct  reg_iop_mpu_r_wr_stat;
#define REG_RD_ADDR_iop_mpu_r_wr_stat 152
#define STRIDE_iop_mpu_rw_thread 4
typedef struct  reg_iop_mpu_rw_thread;
#define REG_RD_ADDR_iop_mpu_rw_thread 156
#define REG_WR_ADDR_iop_mpu_rw_thread 156
#define STRIDE_iop_mpu_rw_intr 4
typedef struct  reg_iop_mpu_rw_intr;
#define REG_RD_ADDR_iop_mpu_rw_intr 196
#define REG_WR_ADDR_iop_mpu_rw_intr 196
enum ;
