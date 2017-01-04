#undef DEBUG
#define START_PADCONF_SAVE		0x2
#define PADCONF_SAVE_DONE		0x1
static void __iomem *omap2_ctrl_base;
static void __iomem *omap4_ctrl_pad_base;
#if defined(CONFIG_ARCH_OMAP3) && defined(CONFIG_PM)
struct omap3_scratchpad ;
struct omap3_scratchpad_prcm_block ;
struct omap3_scratchpad_sdrc_block ;
void *omap3_secure_ram_storage;
u32 omap3_arm_context[128];
struct omap3_control_regs ;
static struct omap3_control_regs control_context;
#define OMAP_CTRL_REGADDR(reg)		(omap2_ctrl_base + (reg))
#define OMAP4_CTRL_PAD_REGADDR(reg)	(omap4_ctrl_pad_base + (reg))
void __init omap2_set_globals_control(struct omap_globals *omap2_globals)
void __iomem *omap_ctrl_base_get(void)
u8 omap_ctrl_readb(u16 offset)
u16 omap_ctrl_readw(u16 offset)
u32 omap_ctrl_readl(u16 offset)
void omap_ctrl_writeb(u8 val, u16 offset)
void omap_ctrl_writew(u16 val, u16 offset)
void omap_ctrl_writel(u32 val, u16 offset)
u32 omap4_ctrl_pad_readl(u16 offset)
void omap4_ctrl_pad_writel(u32 val, u16 offset)
void omap3_ctrl_write_boot_mode(u8 bootmode)
#if defined(CONFIG_ARCH_OMAP3) && defined(CONFIG_PM)
void omap3_clear_scratchpad_contents(void)
void omap3_save_scratchpad_contents(void)
void omap3_control_save_context(void)
void omap3_control_restore_context(void)
void omap3630_ctrl_disable_rta(void)
int omap3_ctrl_save_padconf(void)
