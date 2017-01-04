static int sr_class3_enable(struct voltagedomain *voltdm)
static int sr_class3_disable(struct voltagedomain *voltdm, int is_volt_reset)
static int sr_class3_configure(struct voltagedomain *voltdm)
static struct omap_sr_class_data class3_data = ;
static int __init sr_class3_init(void)
late_initcall(sr_class3_init);
