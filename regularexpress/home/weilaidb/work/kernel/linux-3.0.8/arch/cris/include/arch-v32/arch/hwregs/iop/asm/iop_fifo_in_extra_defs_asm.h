#define __iop_fifo_in_extra_defs_asm_h
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
#define reg_iop_fifo_in_extra_rw_wr_data_offset 0
#define reg_iop_fifo_in_extra_r_stat___avail_bytes___lsb 0
#define reg_iop_fifo_in_extra_r_stat___avail_bytes___width 4
#define reg_iop_fifo_in_extra_r_stat___last___lsb 4
#define reg_iop_fifo_in_extra_r_stat___last___width 8
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___lsb 12
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___width 1
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___bit 12
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___lsb 13
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___width 1
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___bit 13
#define reg_iop_fifo_in_extra_r_stat_offset 4
#define reg_iop_fifo_in_extra_rw_strb_dif_in___last___lsb 0
#define reg_iop_fifo_in_extra_rw_strb_dif_in___last___width 2
#define reg_iop_fifo_in_extra_rw_strb_dif_in_offset 8
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___lsb 0
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___bit 0
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___lsb 1
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___bit 1
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___lsb 2
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___bit 2
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___lsb 3
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___bit 3
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___lsb 4
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___bit 4
#define reg_iop_fifo_in_extra_rw_intr_mask_offset 12
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___bit 0
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___bit 2
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___bit 3
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___bit 4
#define reg_iop_fifo_in_extra_rw_ack_intr_offset 16
#define reg_iop_fifo_in_extra_r_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_r_intr___urun___width 1
#define reg_iop_fifo_in_extra_r_intr___urun___bit 0
#define reg_iop_fifo_in_extra_r_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_r_intr___last_data___width 1
#define reg_iop_fifo_in_extra_r_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_r_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_r_intr___dav___width 1
#define reg_iop_fifo_in_extra_r_intr___dav___bit 2
#define reg_iop_fifo_in_extra_r_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_r_intr___avail___width 1
#define reg_iop_fifo_in_extra_r_intr___avail___bit 3
#define reg_iop_fifo_in_extra_r_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_r_intr___orun___width 1
#define reg_iop_fifo_in_extra_r_intr___orun___bit 4
#define reg_iop_fifo_in_extra_r_intr_offset 20
#define reg_iop_fifo_in_extra_r_masked_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_r_masked_intr___urun___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___urun___bit 0
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_r_masked_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_r_masked_intr___dav___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___dav___bit 2
#define reg_iop_fifo_in_extra_r_masked_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_r_masked_intr___avail___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___avail___bit 3
#define reg_iop_fifo_in_extra_r_masked_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_r_masked_intr___orun___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___orun___bit 4
#define reg_iop_fifo_in_extra_r_masked_intr_offset 24
#define regk_iop_fifo_in_extra_fifo_in            0x00000002
#define regk_iop_fifo_in_extra_no                 0x00000000
#define regk_iop_fifo_in_extra_rw_intr_mask_default  0x00000000
#define regk_iop_fifo_in_extra_yes                0x00000001
