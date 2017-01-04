#define __ARCH_ASM_MACH_OMAP2_PRMINST44XX_H
extern u32 omap4_prminst_read_inst_reg(u8 part, s16 inst, u16 idx);
extern void omap4_prminst_write_inst_reg(u32 val, u8 part, s16 inst, u16 idx);
extern u32 omap4_prminst_rmw_inst_reg_bits(u32 mask, u32 bits, u8 part,
s16 inst, s16 idx);
extern void omap4_prm_global_warm_sw_reset(void);
