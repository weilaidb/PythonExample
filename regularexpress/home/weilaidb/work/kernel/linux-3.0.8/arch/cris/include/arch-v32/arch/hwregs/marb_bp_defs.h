#define __marb_bp_defs_h
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
typedef unsigned int reg_marb_bp_rw_first_addr;
#define REG_RD_ADDR_marb_bp_rw_first_addr 0
#define REG_WR_ADDR_marb_bp_rw_first_addr 0
typedef unsigned int reg_marb_bp_rw_last_addr;
#define REG_RD_ADDR_marb_bp_rw_last_addr 4
#define REG_WR_ADDR_marb_bp_rw_last_addr 4
typedef struct  reg_marb_bp_rw_op;
#define REG_RD_ADDR_marb_bp_rw_op 8
#define REG_WR_ADDR_marb_bp_rw_op 8
typedef struct  reg_marb_bp_rw_clients;
#define REG_RD_ADDR_marb_bp_rw_clients 12
#define REG_WR_ADDR_marb_bp_rw_clients 12
typedef struct  reg_marb_bp_rw_options;
#define REG_RD_ADDR_marb_bp_rw_options 16
#define REG_WR_ADDR_marb_bp_rw_options 16
typedef unsigned int reg_marb_bp_r_break_addr;
#define REG_RD_ADDR_marb_bp_r_break_addr 20
typedef struct  reg_marb_bp_r_break_op;
#define REG_RD_ADDR_marb_bp_r_break_op 24
typedef struct  reg_marb_bp_r_break_clients;
#define REG_RD_ADDR_marb_bp_r_break_clients 28
typedef struct  reg_marb_bp_r_break_first_client;
#define REG_RD_ADDR_marb_bp_r_break_first_client 32
typedef unsigned int reg_marb_bp_r_break_size;
#define REG_RD_ADDR_marb_bp_r_break_size 36
typedef unsigned int reg_marb_bp_rw_ack;
#define REG_RD_ADDR_marb_bp_rw_ack 40
#define REG_WR_ADDR_marb_bp_rw_ack 40
enum ;
