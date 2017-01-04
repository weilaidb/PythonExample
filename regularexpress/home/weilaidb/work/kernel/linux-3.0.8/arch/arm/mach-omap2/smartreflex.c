#define SMARTREFLEX_NAME_LEN	16
#define NVALUE_NAME_LEN		40
#define SR_DISABLE_TIMEOUT	200
struct omap_sr ;
static LIST_HEAD(sr_list);
static struct omap_sr_class_data *sr_class;
static struct omap_sr_pmic_data *sr_pmic_data;
static inline void sr_write_reg(struct omap_sr *sr, unsigned offset, u32 value)
static inline void sr_modify_reg(struct omap_sr *sr, unsigned offset, u32 mask,
u32 value)
static inline u32 sr_read_reg(struct omap_sr *sr, unsigned offset)
static struct omap_sr *_sr_lookup(struct voltagedomain *voltdm)
static irqreturn_t sr_interrupt(int irq, void *data)
static void sr_set_clk_length(struct omap_sr *sr)
static void sr_set_regfields(struct omap_sr *sr)
static void sr_start_vddautocomp(struct omap_sr *sr)
static void sr_stop_vddautocomp(struct omap_sr *sr)
static int sr_late_init(struct omap_sr *sr_info)
static void sr_v1_disable(struct omap_sr *sr)
static void sr_v2_disable(struct omap_sr *sr)
static u32 sr_retrieve_nvalue(struct omap_sr *sr, u32 efuse_offs)
int sr_configure_errgen(struct voltagedomain *voltdm)
int sr_configure_minmax(struct voltagedomain *voltdm)
int sr_enable(struct voltagedomain *voltdm, unsigned long volt)
void sr_disable(struct voltagedomain *voltdm)
int sr_register_class(struct omap_sr_class_data *class_data)
void omap_sr_enable(struct voltagedomain *voltdm)
void omap_sr_disable(struct voltagedomain *voltdm)
void omap_sr_disable_reset_volt(struct voltagedomain *voltdm)
void omap_sr_register_pmic(struct omap_sr_pmic_data *pmic_data)
static int omap_sr_autocomp_show(void *data, u64 *val)
static int omap_sr_autocomp_store(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(pm_sr_fops, omap_sr_autocomp_show,
omap_sr_autocomp_store, "%llu\n");
static int __init omap_sr_probe(struct platform_device *pdev)
static int __devexit omap_sr_remove(struct platform_device *pdev)
static struct platform_driver smartreflex_driver = ;
static int __init sr_init(void)
static void __exit sr_exit(void)
late_initcall(sr_init);
module_exit(sr_exit);
MODULE_DESCRIPTION("OMAP Smartreflex Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_AUTHOR("Texas Instruments Inc");
