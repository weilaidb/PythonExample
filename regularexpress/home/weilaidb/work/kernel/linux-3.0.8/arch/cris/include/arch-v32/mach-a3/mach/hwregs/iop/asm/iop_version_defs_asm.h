#define __iop_version_defs_asm_h
#define REG_FIELD( scope, reg, field, value ) \
REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#define REG_STATE( scope, reg, field, symbolic_value ) \
REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#define REG_MASK( scope, reg, field ) \
REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#define REG_ADDR_VECT( scope, inst, reg, index ) \
REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
((inst) + offs + (index) * stride)
#define reg_iop_version_r_version___nr___lsb 0
#define reg_iop_version_r_version___nr___width 8
#define reg_iop_version_r_version_offset 0
#define regk_iop_version_v2_0                     0x00000002
