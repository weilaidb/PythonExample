#define BOOTINFO_COMPAT_1_0
struct mac_booter_data mac_bi_data;
static unsigned long mac_orig_videoaddr;
extern unsigned long mac_gettimeoffset(void);
extern int mac_hwclk(int, struct rtc_time *);
extern int mac_set_clock_mmss(unsigned long);
extern void iop_preinit(void);
extern void iop_init(void);
extern void via_init(void);
extern void via_init_clock(irq_handler_t func);
extern void via_flush_cache(void);
extern void oss_init(void);
extern void psc_init(void);
extern void baboon_init(void);
extern void mac_mksound(unsigned int, unsigned int);
static void mac_get_model(char *str);
static void mac_identify(void);
static void mac_report_hardware(void);
static void __init mac_sched_init(irq_handler_t vector)
int __init mac_parse_bootinfo(const struct bi_record *record)
static void mac_cache_card_flush(int writeback)
void __init config_mac(void)
struct mac_model *macintosh_config;
EXPORT_SYMBOL(macintosh_config);
static struct mac_model mac_data_table[] = ;
static struct resource scc_a_rsrcs[] = ;
static struct resource scc_b_rsrcs[] = ;
struct platform_device scc_a_pdev = ;
EXPORT_SYMBOL(scc_a_pdev);
struct platform_device scc_b_pdev = ;
EXPORT_SYMBOL(scc_b_pdev);
static void __init mac_identify(void)
static void __init mac_report_hardware(void)
static void mac_get_model(char *str)
static struct resource swim_rsrc = ;
static struct platform_device swim_pdev = ;
static struct platform_device esp_0_pdev = ;
static struct platform_device esp_1_pdev = ;
static struct platform_device sonic_pdev = ;
static struct platform_device mace_pdev = ;
int __init mac_platform_init(void)
arch_initcall(mac_platform_init);
