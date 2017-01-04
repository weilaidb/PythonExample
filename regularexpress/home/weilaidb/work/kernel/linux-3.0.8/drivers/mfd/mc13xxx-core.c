struct mc13xxx ;
struct mc13783 ;
struct mc13xxx *mc13783_to_mc13xxx(struct mc13783 *mc13783)
EXPORT_SYMBOL(mc13783_to_mc13xxx);
#define MC13XXX_IRQSTAT0	0
#define MC13XXX_IRQSTAT0_ADCDONEI	(1 << 0)
#define MC13XXX_IRQSTAT0_ADCBISDONEI	(1 << 1)
#define MC13XXX_IRQSTAT0_TSI		(1 << 2)
#define MC13783_IRQSTAT0_WHIGHI		(1 << 3)
#define MC13783_IRQSTAT0_WLOWI		(1 << 4)
#define MC13XXX_IRQSTAT0_CHGDETI	(1 << 6)
#define MC13783_IRQSTAT0_CHGOVI		(1 << 7)
#define MC13XXX_IRQSTAT0_CHGREVI	(1 << 8)
#define MC13XXX_IRQSTAT0_CHGSHORTI	(1 << 9)
#define MC13XXX_IRQSTAT0_CCCVI		(1 << 10)
#define MC13XXX_IRQSTAT0_CHGCURRI	(1 << 11)
#define MC13XXX_IRQSTAT0_BPONI		(1 << 12)
#define MC13XXX_IRQSTAT0_LOBATLI	(1 << 13)
#define MC13XXX_IRQSTAT0_LOBATHI	(1 << 14)
#define MC13783_IRQSTAT0_UDPI		(1 << 15)
#define MC13783_IRQSTAT0_USBI		(1 << 16)
#define MC13783_IRQSTAT0_IDI		(1 << 19)
#define MC13783_IRQSTAT0_SE1I		(1 << 21)
#define MC13783_IRQSTAT0_CKDETI		(1 << 22)
#define MC13783_IRQSTAT0_UDMI		(1 << 23)
#define MC13XXX_IRQMASK0	1
#define MC13XXX_IRQMASK0_ADCDONEM	MC13XXX_IRQSTAT0_ADCDONEI
#define MC13XXX_IRQMASK0_ADCBISDONEM	MC13XXX_IRQSTAT0_ADCBISDONEI
#define MC13XXX_IRQMASK0_TSM		MC13XXX_IRQSTAT0_TSI
#define MC13783_IRQMASK0_WHIGHM		MC13783_IRQSTAT0_WHIGHI
#define MC13783_IRQMASK0_WLOWM		MC13783_IRQSTAT0_WLOWI
#define MC13XXX_IRQMASK0_CHGDETM	MC13XXX_IRQSTAT0_CHGDETI
#define MC13783_IRQMASK0_CHGOVM		MC13783_IRQSTAT0_CHGOVI
#define MC13XXX_IRQMASK0_CHGREVM	MC13XXX_IRQSTAT0_CHGREVI
#define MC13XXX_IRQMASK0_CHGSHORTM	MC13XXX_IRQSTAT0_CHGSHORTI
#define MC13XXX_IRQMASK0_CCCVM		MC13XXX_IRQSTAT0_CCCVI
#define MC13XXX_IRQMASK0_CHGCURRM	MC13XXX_IRQSTAT0_CHGCURRI
#define MC13XXX_IRQMASK0_BPONM		MC13XXX_IRQSTAT0_BPONI
#define MC13XXX_IRQMASK0_LOBATLM	MC13XXX_IRQSTAT0_LOBATLI
#define MC13XXX_IRQMASK0_LOBATHM	MC13XXX_IRQSTAT0_LOBATHI
#define MC13783_IRQMASK0_UDPM		MC13783_IRQSTAT0_UDPI
#define MC13783_IRQMASK0_USBM		MC13783_IRQSTAT0_USBI
#define MC13783_IRQMASK0_IDM		MC13783_IRQSTAT0_IDI
#define MC13783_IRQMASK0_SE1M		MC13783_IRQSTAT0_SE1I
#define MC13783_IRQMASK0_CKDETM		MC13783_IRQSTAT0_CKDETI
#define MC13783_IRQMASK0_UDMM		MC13783_IRQSTAT0_UDMI
#define MC13XXX_IRQSTAT1	3
#define MC13XXX_IRQSTAT1_1HZI		(1 << 0)
#define MC13XXX_IRQSTAT1_TODAI		(1 << 1)
#define MC13783_IRQSTAT1_ONOFD1I	(1 << 3)
#define MC13783_IRQSTAT1_ONOFD2I	(1 << 4)
#define MC13783_IRQSTAT1_ONOFD3I	(1 << 5)
#define MC13XXX_IRQSTAT1_SYSRSTI	(1 << 6)
#define MC13XXX_IRQSTAT1_RTCRSTI	(1 << 7)
#define MC13XXX_IRQSTAT1_PCI		(1 << 8)
#define MC13XXX_IRQSTAT1_WARMI		(1 << 9)
#define MC13XXX_IRQSTAT1_MEMHLDI	(1 << 10)
#define MC13783_IRQSTAT1_PWRRDYI	(1 << 11)
#define MC13XXX_IRQSTAT1_THWARNLI	(1 << 12)
#define MC13XXX_IRQSTAT1_THWARNHI	(1 << 13)
#define MC13XXX_IRQSTAT1_CLKI		(1 << 14)
#define MC13783_IRQSTAT1_SEMAFI		(1 << 15)
#define MC13783_IRQSTAT1_MC2BI		(1 << 17)
#define MC13783_IRQSTAT1_HSDETI		(1 << 18)
#define MC13783_IRQSTAT1_HSLI		(1 << 19)
#define MC13783_IRQSTAT1_ALSPTHI	(1 << 20)
#define MC13783_IRQSTAT1_AHSSHORTI	(1 << 21)
#define MC13XXX_IRQMASK1	4
#define MC13XXX_IRQMASK1_1HZM		MC13XXX_IRQSTAT1_1HZI
#define MC13XXX_IRQMASK1_TODAM		MC13XXX_IRQSTAT1_TODAI
#define MC13783_IRQMASK1_ONOFD1M	MC13783_IRQSTAT1_ONOFD1I
#define MC13783_IRQMASK1_ONOFD2M	MC13783_IRQSTAT1_ONOFD2I
#define MC13783_IRQMASK1_ONOFD3M	MC13783_IRQSTAT1_ONOFD3I
#define MC13XXX_IRQMASK1_SYSRSTM	MC13XXX_IRQSTAT1_SYSRSTI
#define MC13XXX_IRQMASK1_RTCRSTM	MC13XXX_IRQSTAT1_RTCRSTI
#define MC13XXX_IRQMASK1_PCM		MC13XXX_IRQSTAT1_PCI
#define MC13XXX_IRQMASK1_WARMM		MC13XXX_IRQSTAT1_WARMI
#define MC13XXX_IRQMASK1_MEMHLDM	MC13XXX_IRQSTAT1_MEMHLDI
#define MC13783_IRQMASK1_PWRRDYM	MC13783_IRQSTAT1_PWRRDYI
#define MC13XXX_IRQMASK1_THWARNLM	MC13XXX_IRQSTAT1_THWARNLI
#define MC13XXX_IRQMASK1_THWARNHM	MC13XXX_IRQSTAT1_THWARNHI
#define MC13XXX_IRQMASK1_CLKM		MC13XXX_IRQSTAT1_CLKI
#define MC13783_IRQMASK1_SEMAFM		MC13783_IRQSTAT1_SEMAFI
#define MC13783_IRQMASK1_MC2BM		MC13783_IRQSTAT1_MC2BI
#define MC13783_IRQMASK1_HSDETM		MC13783_IRQSTAT1_HSDETI
#define MC13783_IRQMASK1_HSLM		MC13783_IRQSTAT1_HSLI
#define MC13783_IRQMASK1_ALSPTHM	MC13783_IRQSTAT1_ALSPTHI
#define MC13783_IRQMASK1_AHSSHORTM	MC13783_IRQSTAT1_AHSSHORTI
#define MC13XXX_REVISION	7
#define MC13XXX_REVISION_REVMETAL	(0x07 <<  0)
#define MC13XXX_REVISION_REVFULL	(0x03 <<  3)
#define MC13XXX_REVISION_ICID		(0x07 <<  6)
#define MC13XXX_REVISION_FIN		(0x03 <<  9)
#define MC13XXX_REVISION_FAB		(0x03 << 11)
#define MC13XXX_REVISION_ICIDCODE	(0x3f << 13)
#define MC13783_ADC1		44
#define MC13783_ADC1_ADEN		(1 << 0)
#define MC13783_ADC1_RAND		(1 << 1)
#define MC13783_ADC1_ADSEL		(1 << 3)
#define MC13783_ADC1_ASC		(1 << 20)
#define MC13783_ADC1_ADTRIGIGN		(1 << 21)
#define MC13783_ADC2		45
#define MC13XXX_NUMREGS 0x3f
void mc13xxx_lock(struct mc13xxx *mc13xxx)
EXPORT_SYMBOL(mc13xxx_lock);
void mc13xxx_unlock(struct mc13xxx *mc13xxx)
EXPORT_SYMBOL(mc13xxx_unlock);
#define MC13XXX_REGOFFSET_SHIFT 25
int mc13xxx_reg_read(struct mc13xxx *mc13xxx, unsigned int offset, u32 *val)
EXPORT_SYMBOL(mc13xxx_reg_read);
int mc13xxx_reg_write(struct mc13xxx *mc13xxx, unsigned int offset, u32 val)
EXPORT_SYMBOL(mc13xxx_reg_write);
int mc13xxx_reg_rmw(struct mc13xxx *mc13xxx, unsigned int offset,
u32 mask, u32 val)
EXPORT_SYMBOL(mc13xxx_reg_rmw);
int mc13xxx_irq_mask(struct mc13xxx *mc13xxx, int irq)
EXPORT_SYMBOL(mc13xxx_irq_mask);
int mc13xxx_irq_unmask(struct mc13xxx *mc13xxx, int irq)
EXPORT_SYMBOL(mc13xxx_irq_unmask);
int mc13xxx_irq_status(struct mc13xxx *mc13xxx, int irq,
int *enabled, int *pending)
EXPORT_SYMBOL(mc13xxx_irq_status);
int mc13xxx_irq_ack(struct mc13xxx *mc13xxx, int irq)
EXPORT_SYMBOL(mc13xxx_irq_ack);
int mc13xxx_irq_request_nounmask(struct mc13xxx *mc13xxx, int irq,
irq_handler_t handler, const char *name, void *dev)
EXPORT_SYMBOL(mc13xxx_irq_request_nounmask);
int mc13xxx_irq_request(struct mc13xxx *mc13xxx, int irq,
irq_handler_t handler, const char *name, void *dev)
EXPORT_SYMBOL(mc13xxx_irq_request);
int mc13xxx_irq_free(struct mc13xxx *mc13xxx, int irq, void *dev)
EXPORT_SYMBOL(mc13xxx_irq_free);
static inline irqreturn_t mc13xxx_irqhandler(struct mc13xxx *mc13xxx, int irq)
static int mc13xxx_irq_handle(struct mc13xxx *mc13xxx,
unsigned int offstat, unsigned int offmask, int baseirq)
static irqreturn_t mc13xxx_irq_thread(int irq, void *data)
enum mc13xxx_id ;
const char *mc13xxx_chipname[] = ;
#define maskval(reg, mask)	(((reg) & (mask)) >> __ffs(mask))
static int mc13xxx_identify(struct mc13xxx *mc13xxx, enum mc13xxx_id *id)
static const char *mc13xxx_get_chipname(struct mc13xxx *mc13xxx)
int mc13xxx_get_flags(struct mc13xxx *mc13xxx)
EXPORT_SYMBOL(mc13xxx_get_flags);
#define MC13783_ADC1_CHAN0_SHIFT	5
#define MC13783_ADC1_CHAN1_SHIFT	8
struct mc13xxx_adcdone_data ;
static irqreturn_t mc13783_handler_adcdone(int irq, void *data)
#define MC13783_ADC_WORKING (1 << 0)
int mc13783_adc_do_conversion(struct mc13783 *mc13783, unsigned int mode,
unsigned int channel, unsigned int *sample)
EXPORT_SYMBOL_GPL(mc13783_adc_do_conversion);
static int mc13xxx_add_subdevice_pdata(struct mc13xxx *mc13xxx,
const char *format, void *pdata, size_t pdata_size)
static int mc13xxx_add_subdevice(struct mc13xxx *mc13xxx, const char *format)
static int mc13xxx_probe(struct spi_device *spi)
static int __devexit mc13xxx_remove(struct spi_device *spi)
static const struct spi_device_id mc13xxx_device_id[] = ;
MODULE_DEVICE_TABLE(spi, mc13xxx_device_id);
static struct spi_driver mc13xxx_driver = ;
static int __init mc13xxx_init(void)
subsys_initcall(mc13xxx_init);
static void __exit mc13xxx_exit(void)
module_exit(mc13xxx_exit);
MODULE_DESCRIPTION("Core driver for Freescale MC13XXX PMIC");
MODULE_AUTHOR("Uwe Kleine-Koenig <u.kleine-koenig@pengutronix.de>");
MODULE_LICENSE("GPL v2");
