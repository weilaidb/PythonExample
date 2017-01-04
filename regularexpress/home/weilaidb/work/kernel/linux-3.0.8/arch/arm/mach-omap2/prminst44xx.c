static u32 _prm_bases[OMAP4_MAX_PRCM_PARTITIONS] = ;
u32 omap4_prminst_read_inst_reg(u8 part, s16 inst, u16 idx)
void omap4_prminst_write_inst_reg(u32 val, u8 part, s16 inst, u16 idx)
u32 omap4_prminst_rmw_inst_reg_bits(u32 mask, u32 bits, u8 part, s16 inst,
s16 idx)
