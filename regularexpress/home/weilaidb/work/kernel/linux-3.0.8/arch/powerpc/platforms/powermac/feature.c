#undef DEBUG_FEATURE
#define DBG(fmt...) printk(KERN_DEBUG fmt)
#define DBG(fmt...)
extern int powersave_lowspeed;
extern int powersave_nap;
extern struct device_node *k2_skiplist[2];
DEFINE_RAW_SPINLOCK(feature_lock);
#define LOCK(flags)	raw_spin_lock_irqsave(&feature_lock, flags);
#define UNLOCK(flags)	raw_spin_unlock_irqrestore(&feature_lock, flags);
struct macio_chip macio_chips[MAX_MACIO_CHIPS];
struct macio_chip *macio_find(struct device_node *child, int type)
EXPORT_SYMBOL_GPL(macio_find);
static const char *macio_names[] =
;
struct device_node *uninorth_node;
u32 __iomem *uninorth_base;
static u32 uninorth_rev;
static int uninorth_maj;
static void __iomem *u3_ht_base;
typedef long (*feature_call)(struct device_node *node, long param, long value);
struct feature_table_entry ;
struct pmac_mb_def
;
static struct pmac_mb_def pmac_mb;
static inline int simple_feature_tweak(struct device_node *node, int type,
int reg, u32 mask, int value)
static long ohare_htw_scc_enable(struct device_node *node, long param,
long value)
static long ohare_floppy_enable(struct device_node *node, long param,
long value)
static long ohare_mesh_enable(struct device_node *node, long param, long value)
static long ohare_ide_enable(struct device_node *node, long param, long value)
static long ohare_ide_reset(struct device_node *node, long param, long value)
static long ohare_sleep_state(struct device_node *node, long param, long value)
static long heathrow_modem_enable(struct device_node *node, long param,
long value)
static long heathrow_floppy_enable(struct device_node *node, long param,
long value)
static long heathrow_mesh_enable(struct device_node *node, long param,
long value)
static long heathrow_ide_enable(struct device_node *node, long param,
long value)
static long heathrow_ide_reset(struct device_node *node, long param,
long value)
static long heathrow_bmac_enable(struct device_node *node, long param,
long value)
static long heathrow_sound_enable(struct device_node *node, long param,
long value)
static u32 save_fcr[6];
static u32 save_mbcr;
static struct dbdma_regs save_dbdma[13];
static struct dbdma_regs save_alt_dbdma[13];
static void dbdma_save(struct macio_chip *macio, struct dbdma_regs *save)
static void dbdma_restore(struct macio_chip *macio, struct dbdma_regs *save)
static void heathrow_sleep(struct macio_chip *macio, int secondary)
static void heathrow_wakeup(struct macio_chip *macio, int secondary)
static long heathrow_sleep_state(struct device_node *node, long param,
long value)
static long core99_scc_enable(struct device_node *node, long param, long value)
static long
core99_modem_enable(struct device_node *node, long param, long value)
static long
pangea_modem_enable(struct device_node *node, long param, long value)
static long
core99_ata100_enable(struct device_node *node, long value)
static long
core99_ide_enable(struct device_node *node, long param, long value)
static long
core99_ide_reset(struct device_node *node, long param, long value)
static long
core99_gmac_enable(struct device_node *node, long param, long value)
static long
core99_gmac_phy_reset(struct device_node *node, long param, long value)
static long
core99_sound_chip_enable(struct device_node *node, long param, long value)
static long
core99_airport_enable(struct device_node *node, long param, long value)
static long
core99_reset_cpu(struct device_node *node, long param, long value)
static long
core99_usb_enable(struct device_node *node, long param, long value)
static long
core99_firewire_enable(struct device_node *node, long param, long value)
static long
core99_firewire_cable_power(struct device_node *node, long param, long value)
static long
intrepid_aack_delay_enable(struct device_node *node, long param, long value)
static long
core99_read_gpio(struct device_node *node, long param, long value)
static long
core99_write_gpio(struct device_node *node, long param, long value)
static long g5_gmac_enable(struct device_node *node, long param, long value)
static long g5_fw_enable(struct device_node *node, long param, long value)
static long g5_mpic_enable(struct device_node *node, long param, long value)
static long g5_eth_phy_reset(struct device_node *node, long param, long value)
static long g5_i2s_enable(struct device_node *node, long param, long value)
static long g5_reset_cpu(struct device_node *node, long param, long value)
void g5_phy_disable_cpu1(void)
static u32 save_gpio_levels[2];
static u8 save_gpio_extint[KEYLARGO_GPIO_EXTINT_CNT];
static u8 save_gpio_normal[KEYLARGO_GPIO_CNT];
static u32 save_unin_clock_ctl;
static void keylargo_shutdown(struct macio_chip *macio, int sleep_mode)
static void pangea_shutdown(struct macio_chip *macio, int sleep_mode)
static void intrepid_shutdown(struct macio_chip *macio, int sleep_mode)
static int
core99_sleep(void)
static int
core99_wake_up(void)
static long
core99_sleep_state(struct device_node *node, long param, long value)
static long
generic_dev_can_wake(struct device_node *node, long param, long value)
static long generic_get_mb_info(struct device_node *node, long param, long value)
static struct feature_table_entry any_features[] = ;
static struct feature_table_entry ohare_features[] = ;
static struct feature_table_entry heathrow_desktop_features[] = ;
static struct feature_table_entry heathrow_laptop_features[] = ;
static struct feature_table_entry paddington_features[] = ;
static struct feature_table_entry core99_features[] = ;
static struct feature_table_entry rackmac_features[] = ;
static struct feature_table_entry pangea_features[] = ;
static struct feature_table_entry intrepid_features[] = ;
static struct feature_table_entry g5_features[] = ;
static struct pmac_mb_def pmac_mb_defs[] = ;
long pmac_do_feature_call(unsigned int selector, ...)
static int __init probe_motherboard(void)
static void __init probe_uninorth(void)
static void __init probe_one_macio(const char *name, const char *compat, int type)
static int __init
probe_macios(void)
static void __init
initial_serial_shutdown(struct device_node *np)
static void __init
set_initial_features(void)
void __init
pmac_feature_init(void)
static void (*pmac_early_vresume_proc)(void *data);
static void *pmac_early_vresume_data;
void pmac_set_early_video_resume(void (*proc)(void *data), void *data)
EXPORT_SYMBOL(pmac_set_early_video_resume);
void pmac_call_early_video_resume(void)
static struct pci_dev *pmac_agp_bridge;
static int (*pmac_agp_suspend)(struct pci_dev *bridge);
static int (*pmac_agp_resume)(struct pci_dev *bridge);
void pmac_register_agp_pm(struct pci_dev *bridge,
int (*suspend)(struct pci_dev *bridge),
int (*resume)(struct pci_dev *bridge))
EXPORT_SYMBOL(pmac_register_agp_pm);
void pmac_suspend_agp_for_card(struct pci_dev *dev)
EXPORT_SYMBOL(pmac_suspend_agp_for_card);
void pmac_resume_agp_for_card(struct pci_dev *dev)
EXPORT_SYMBOL(pmac_resume_agp_for_card);
int pmac_get_uninorth_variant(void)
