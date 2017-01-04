MODULE_DESCRIPTION("TI DaVinci Video Port Interface driver");
MODULE_LICENSE("GPL");
#define VPIF_CH0_MAX_MODES	(22)
#define VPIF_CH1_MAX_MODES	(02)
#define VPIF_CH2_MAX_MODES	(15)
#define VPIF_CH3_MAX_MODES	(02)
static resource_size_t	res_len;
static struct resource	*res;
spinlock_t vpif_lock;
void __iomem *vpif_base;
const struct vpif_channel_config_params ch_params[] = ;
const unsigned int vpif_ch_params_count = ARRAY_SIZE(ch_params);
static inline void vpif_wr_bit(u32 reg, u32 bit, u32 val)
struct vpif_registers ;
static const struct vpif_registers vpifregs[VPIF_NUM_CHANNELS] = ;
static void vpif_set_mode_info(const struct vpif_channel_config_params *config,
u8 channel_id, u8 config_channel_id)
static void config_vpif_params(struct vpif_params *vpifparams,
u8 channel_id, u8 found)
int vpif_set_video_params(struct vpif_params *vpifparams, u8 channel_id)
EXPORT_SYMBOL(vpif_set_video_params);
void vpif_set_vbi_display_params(struct vpif_vbi_params *vbiparams,
u8 channel_id)
EXPORT_SYMBOL(vpif_set_vbi_display_params);
int vpif_channel_getfid(u8 channel_id)
EXPORT_SYMBOL(vpif_channel_getfid);
static int __init vpif_probe(struct platform_device *pdev)
static int __devexit vpif_remove(struct platform_device *pdev)
static struct platform_driver vpif_driver = ;
static void vpif_exit(void)
static int __init vpif_init(void)
subsys_initcall(vpif_init);
module_exit(vpif_exit);
