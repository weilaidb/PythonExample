#define __UNDEF_NO_VERSION__
#if defined(OOB_INTR_ONLY)
extern void dhdsdio_isr(void *args);
#if defined(CONFIG_MACH_SANDGATE2G) || defined(CONFIG_MACH_LOGICPD_PXA270)
#if !defined(BCMPLATFORM_BUS)
#define BCMPLATFORM_BUS
typedef struct bcmsdh_hc bcmsdh_hc_t;
struct bcmsdh_hc ;
static bcmsdh_hc_t *sdhcinfo;
static bcmsdh_driver_t drvinfo = ;
#define SDLX_MSG(x)
bool bcmsdh_chipmatch(u16 vendor, u16 device)
#if defined(BCMPLATFORM_BUS)
#if defined(BCMLXSDMMC)
int bcmsdh_probe(struct device *dev);
EXPORT_SYMBOL(bcmsdh_probe);
int bcmsdh_remove(struct device *dev);
EXPORT_SYMBOL(bcmsdh_remove);
static int __devinit bcmsdh_probe(struct device *dev);
static int __devexit bcmsdh_remove(struct device *dev);
static
int bcmsdh_probe(struct device *dev)
static
int bcmsdh_remove(struct device *dev)
extern int sdio_function_init(void);
int bcmsdh_register(bcmsdh_driver_t *driver)
extern void sdio_function_cleanup(void);
void bcmsdh_unregister(void)
#if defined(OOB_INTR_ONLY)
void bcmsdh_oob_intr_set(bool enable)
static irqreturn_t wlan_oob_irq(int irq, void *dev_id)
int bcmsdh_register_oob_intr(void *dhdp)
void bcmsdh_unregister_oob_intr(void)
extern uint sd_msglevel;
module_param(sd_msglevel, uint, 0);
extern uint sd_power;
module_param(sd_power, uint, 0);
extern uint sd_clock;
module_param(sd_clock, uint, 0);
extern uint sd_divisor;
module_param(sd_divisor, uint, 0);
extern uint sd_sdmode;
module_param(sd_sdmode, uint, 0);
extern uint sd_hiok;
module_param(sd_hiok, uint, 0);
extern uint sd_f2_blocksize;
module_param(sd_f2_blocksize, int, 0);
