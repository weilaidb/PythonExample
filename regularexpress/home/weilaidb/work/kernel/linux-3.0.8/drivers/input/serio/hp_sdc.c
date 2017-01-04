#if defined(__hppa__)
# include <asm/parisc-device.h>
# define sdc_readb(p)		gsc_readb(p)
# define sdc_writeb(v,p)	gsc_writeb((v),(p))
#elif defined(__mc68000__)
# include <asm/uaccess.h>
# define sdc_readb(p)		in_8(p)
# define sdc_writeb(v,p)	out_8((p),(v))
# error "HIL is not supported on this platform"
#define PREFIX "HP SDC: "
MODULE_AUTHOR("Brian S. Julin <bri@calyx.com>");
MODULE_DESCRIPTION("HP i8042-based SDC Driver");
MODULE_LICENSE("Dual BSD/GPL");
EXPORT_SYMBOL(hp_sdc_request_timer_irq);
EXPORT_SYMBOL(hp_sdc_request_hil_irq);
EXPORT_SYMBOL(hp_sdc_request_cooked_irq);
EXPORT_SYMBOL(hp_sdc_release_timer_irq);
EXPORT_SYMBOL(hp_sdc_release_hil_irq);
EXPORT_SYMBOL(hp_sdc_release_cooked_irq);
EXPORT_SYMBOL(__hp_sdc_enqueue_transaction);
EXPORT_SYMBOL(hp_sdc_enqueue_transaction);
EXPORT_SYMBOL(hp_sdc_dequeue_transaction);
static unsigned int hp_sdc_disabled;
module_param_named(no_hpsdc, hp_sdc_disabled, bool, 0);
MODULE_PARM_DESC(no_hpsdc, "Do not enable HP SDC driver.");
static hp_i8042_sdc	hp_sdc;
static inline uint8_t hp_sdc_status_in8(void)
static inline uint8_t hp_sdc_data_in8(void)
static inline void hp_sdc_status_out8(uint8_t val)
static inline void hp_sdc_data_out8(uint8_t val)
static inline void hp_sdc_spin_ibf(void)
static void hp_sdc_take(int irq, void *dev_id, uint8_t status, uint8_t data)
static irqreturn_t hp_sdc_isr(int irq, void *dev_id)
static irqreturn_t hp_sdc_nmisr(int irq, void *dev_id)
unsigned long hp_sdc_put(void);
static void hp_sdc_tasklet(unsigned long foo)
unsigned long hp_sdc_put(void)
int __hp_sdc_enqueue_transaction(hp_sdc_transaction *this)
int hp_sdc_enqueue_transaction(hp_sdc_transaction *this)
int hp_sdc_dequeue_transaction(hp_sdc_transaction *this)
int hp_sdc_request_timer_irq(hp_sdc_irqhook *callback)
int hp_sdc_request_hil_irq(hp_sdc_irqhook *callback)
int hp_sdc_request_cooked_irq(hp_sdc_irqhook *callback)
int hp_sdc_release_timer_irq(hp_sdc_irqhook *callback)
int hp_sdc_release_hil_irq(hp_sdc_irqhook *callback)
int hp_sdc_release_cooked_irq(hp_sdc_irqhook *callback)
void hp_sdc_kicker (unsigned long data)
#if defined(__hppa__)
static const struct parisc_device_id hp_sdc_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, hp_sdc_tbl);
static int __init hp_sdc_init_hppa(struct parisc_device *d);
static struct delayed_work moduleloader_work;
static struct parisc_driver hp_sdc_driver = ;
static int __init hp_sdc_init(void)
#if defined(__hppa__)
static void request_module_delayed(struct work_struct *work)
static int __init hp_sdc_init_hppa(struct parisc_device *d)
static void hp_sdc_exit(void)
static int __init hp_sdc_register(void)
module_init(hp_sdc_register);
module_exit(hp_sdc_exit);
