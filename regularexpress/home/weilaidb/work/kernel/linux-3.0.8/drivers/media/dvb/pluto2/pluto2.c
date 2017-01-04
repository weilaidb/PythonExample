DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define DRIVER_NAME		"pluto2"
#define REG_PIDn(n)		((n) << 2)
#define REG_PCAR		0x0020
#define REG_TSCR		0x0024
#define REG_MISC		0x0028
#define REG_MMAC		0x002c
#define REG_IMAC		0x0030
#define REG_LMAC		0x0034
#define REG_SPID		0x0038
#define REG_SLCS		0x003c
#define PID0_NOFIL		(0x0001 << 16)
#define PIDn_ENP		(0x0001 << 15)
#define PID0_END		(0x0001 << 14)
#define PID0_AFIL		(0x0001 << 13)
#define PIDn_PID		(0x1fff <<  0)
#define TSCR_NBPACKETS		(0x00ff << 24)
#define TSCR_DEM		(0x0001 << 17)
#define TSCR_DE			(0x0001 << 16)
#define TSCR_RSTN		(0x0001 << 15)
#define TSCR_MSKO		(0x0001 << 14)
#define TSCR_MSKA		(0x0001 << 13)
#define TSCR_MSKL		(0x0001 << 12)
#define TSCR_OVR		(0x0001 << 11)
#define TSCR_AFUL		(0x0001 << 10)
#define TSCR_LOCK		(0x0001 <<  9)
#define TSCR_IACK		(0x0001 <<  8)
#define TSCR_ADEF		(0x007f <<  0)
#define MISC_DVR		(0x0fff <<  4)
#define MISC_ALED		(0x0001 <<  3)
#define MISC_FRST		(0x0001 <<  2)
#define MISC_LED1		(0x0001 <<  1)
#define MISC_LED0		(0x0001 <<  0)
#define SPID_SPIDR		(0x00ff <<  0)
#define SLCS_SCL		(0x0001 <<  7)
#define SLCS_SDA		(0x0001 <<  6)
#define SLCS_CSN		(0x0001 <<  2)
#define SLCS_OVR		(0x0001 <<  1)
#define SLCS_SWC		(0x0001 <<  0)
#define TS_DMA_PACKETS		(8)
#define TS_DMA_BYTES		(188 * TS_DMA_PACKETS)
#define I2C_ADDR_TDA10046	0x10
#define I2C_ADDR_TUA6034	0xc2
#define NHWFILTERS		8
struct pluto ;
static inline struct pluto *feed_to_pluto(struct dvb_demux_feed *feed)
static inline struct pluto *frontend_to_pluto(struct dvb_frontend *fe)
static inline u32 pluto_readreg(struct pluto *pluto, u32 reg)
static inline void pluto_writereg(struct pluto *pluto, u32 reg, u32 val)
static inline void pluto_rw(struct pluto *pluto, u32 reg, u32 mask, u32 bits)
static void pluto_write_tscr(struct pluto *pluto, u32 val)
static void pluto_setsda(void *data, int state)
static void pluto_setscl(void *data, int state)
static int pluto_getsda(void *data)
static int pluto_getscl(void *data)
static void pluto_reset_frontend(struct pluto *pluto, int reenable)
static void pluto_reset_ts(struct pluto *pluto, int reenable)
static void pluto_set_dma_addr(struct pluto *pluto)
static int __devinit pluto_dma_map(struct pluto *pluto)
static void pluto_dma_unmap(struct pluto *pluto)
static int pluto_start_feed(struct dvb_demux_feed *f)
static int pluto_stop_feed(struct dvb_demux_feed *f)
static void pluto_dma_end(struct pluto *pluto, unsigned int nbpackets)
static irqreturn_t pluto_irq(int irq, void *dev_id)
static void __devinit pluto_enable_irqs(struct pluto *pluto)
static void pluto_disable_irqs(struct pluto *pluto)
static int __devinit pluto_hw_init(struct pluto *pluto)
static void pluto_hw_exit(struct pluto *pluto)
static inline u32 divide(u32 numerator, u32 denominator)
static int lg_tdtpe001p_tuner_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int pluto2_request_firmware(struct dvb_frontend *fe,
const struct firmware **fw, char *name)
static struct tda1004x_config pluto2_fe_config __devinitdata = ;
static int __devinit frontend_init(struct pluto *pluto)
static void __devinit pluto_read_rev(struct pluto *pluto)
static void __devinit pluto_read_mac(struct pluto *pluto, u8 *mac)
static int __devinit pluto_read_serial(struct pluto *pluto)
static int __devinit pluto2_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit pluto2_remove(struct pci_dev *pdev)
#define PCI_VENDOR_ID_SCM	0x0432
#define PCI_DEVICE_ID_PLUTO2	0x0001
static struct pci_device_id pluto2_id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, pluto2_id_table);
static struct pci_driver pluto2_driver = ;
static int __init pluto2_init(void)
static void __exit pluto2_exit(void)
module_init(pluto2_init);
module_exit(pluto2_exit);
MODULE_AUTHOR("Andreas Oberritter <obi@linuxtv.org>");
MODULE_DESCRIPTION("Pluto2 driver");
MODULE_LICENSE("GPL");
