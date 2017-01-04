#define __ASM_ARCH_MUX_H
#define PU_PD_SEL_NA		0
#define PULL_DWN_CTRL_NA	0
#define MUX_REG(reg, mode_offset, mode) .mux_reg_name = "FUNC_MUX_CTRL_"#reg, \
.mux_reg = FUNC_MUX_CTRL_##reg, \
.mask_offset = mode_offset, \
.mask = mode,
#define PULL_REG(reg, bit, status)	.pull_name = "PULL_DWN_CTRL_"#reg, \
.pull_reg = PULL_DWN_CTRL_##reg, \
.pull_bit = bit, \
.pull_val = status,
#define PU_PD_REG(reg, status)		.pu_pd_name = "PU_PD_SEL_"#reg, \
.pu_pd_reg = PU_PD_SEL_##reg, \
.pu_pd_val = status,
#define MUX_REG_7XX(reg, mode_offset, mode) .mux_reg_name = "OMAP7XX_IO_CONF_"#reg, \
.mux_reg = OMAP7XX_IO_CONF_##reg, \
.mask_offset = mode_offset, \
.mask = mode,
#define PULL_REG_7XX(reg, bit, status)	.pull_name = "OMAP7XX_IO_CONF_"#reg, \
.pull_reg = OMAP7XX_IO_CONF_##reg, \
.pull_bit = bit, \
.pull_val = status,
#define MUX_REG(reg, mode_offset, mode) .mux_reg = FUNC_MUX_CTRL_##reg, \
.mask_offset = mode_offset, \
.mask = mode,
#define PULL_REG(reg, bit, status)	.pull_reg = PULL_DWN_CTRL_##reg, \
.pull_bit = bit, \
.pull_val = status,
#define PU_PD_REG(reg, status)		.pu_pd_reg = PU_PD_SEL_##reg, \
.pu_pd_val = status,
#define MUX_REG_7XX(reg, mode_offset, mode) \
.mux_reg = OMAP7XX_IO_CONF_##reg, \
.mask_offset = mode_offset, \
.mask = mode,
#define PULL_REG_7XX(reg, bit, status)	.pull_reg = OMAP7XX_IO_CONF_##reg, \
.pull_bit = bit, \
.pull_val = status,
#define MUX_CFG(desc, mux_reg, mode_offset, mode,	\
pull_reg, pull_bit, pull_status,	\
pu_pd_reg, pu_pd_status, debug_status)	\
,
#define MUX_CFG_7XX(desc, mux_reg, mode_offset, mode,	\
pull_bit, pull_status, debug_status)\
,
struct pin_config ;
enum omap7xx_index ;
enum omap1xxx_index ;
struct omap_mux_cfg ;
extern int omap1_mux_init(void);
extern int omap_mux_register(struct omap_mux_cfg *);
extern int omap_cfg_reg(unsigned long reg_cfg);
static inline int omap1_mux_init(void)
static inline int omap_cfg_reg(unsigned long reg_cfg)
extern int omap2_mux_init(void);
