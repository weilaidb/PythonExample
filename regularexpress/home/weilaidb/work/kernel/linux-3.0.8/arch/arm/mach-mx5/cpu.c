static int cpu_silicon_rev = -1;
#define IIM_SREV 0x24
#define MX50_HW_ADADIG_DIGPROG	0xB0
static int get_mx51_srev(void)
int mx51_revision(void)
EXPORT_SYMBOL(mx51_revision);
void mx51_display_revision(void)
EXPORT_SYMBOL(mx51_display_revision);
static int __init mx51_neon_fixup(void)
late_initcall(mx51_neon_fixup);
static int get_mx53_srev(void)
int mx53_revision(void)
EXPORT_SYMBOL(mx53_revision);
static int get_mx50_srev(void)
int mx50_revision(void)
EXPORT_SYMBOL(mx50_revision);
void mx53_display_revision(void)
EXPORT_SYMBOL(mx53_display_revision);
static int __init post_cpu_init(void)
postcore_initcall(post_cpu_init);
