#define MODULE_NAME "dm1105"
#define UNSET (-1U)
#define DM1105_BOARD_NOAUTO			UNSET
#define DM1105_BOARD_UNKNOWN			0
#define DM1105_BOARD_DVBWORLD_2002		1
#define DM1105_BOARD_DVBWORLD_2004		2
#define DM1105_BOARD_AXESS_DM05			3
#define DM1105_BOARD_UNBRANDED_I2C_ON_GPIO	4
#define PCI_VENDOR_ID_TRIGEM	0x109f
#define PCI_VENDOR_ID_AXESS	0x195d
#define PCI_DEVICE_ID_DM1105	0x036f
#define PCI_DEVICE_ID_DW2002	0x2002
#define PCI_DEVICE_ID_DW2004	0x2004
#define PCI_DEVICE_ID_DM05	0x1105
#define DM1105_TSCTR				0x00
#define DM1105_DTALENTH				0x04
#define DM1105_GPIOVAL				0x08
#define DM1105_GPIOCTR				0x0c
#define DM1105_PIDN				0x10
#define DM1105_CWSEL				0x14
#define DM1105_HOST_CTR				0x18
#define DM1105_HOST_AD				0x1c
#define DM1105_CR				0x30
#define DM1105_RST				0x34
#define DM1105_STADR				0x38
#define DM1105_RLEN				0x3c
#define DM1105_WRP				0x40
#define DM1105_INTCNT				0x44
#define DM1105_INTMAK				0x48
#define DM1105_INTSTS				0x4c
#define DM1105_ODD				0x50
#define DM1105_EVEN				0x58
#define DM1105_PID				0x60
#define DM1105_IRCTR				0x64
#define DM1105_IRMODE				0x68
#define DM1105_SYSTEMCODE			0x6c
#define DM1105_IRCODE				0x70
#define DM1105_ENCRYPT				0x74
#define DM1105_VER				0x7c
#define DM1105_I2CCTR				0x80
#define DM1105_I2CSTS				0x81
#define DM1105_I2CDAT				0x82
#define DM1105_I2C_RA				0x83
#define INTMAK_TSIRQM				0x01
#define INTMAK_HIRQM				0x04
#define INTMAK_IRM				0x08
#define INTMAK_ALLMASK				(INTMAK_TSIRQM | \
INTMAK_HIRQM | \
INTMAK_IRM)
#define INTMAK_NONEMASK				0x00
#define INTSTS_TSIRQ				0x01
#define INTSTS_HIRQ				0x04
#define INTSTS_IR				0x08
#define DM1105_IR_EN				0x01
#define DM1105_SYS_CHK				0x02
#define DM1105_REP_FLG				0x08
#define IIC_24C01_addr				0xa0
#define DM1105_MAX				0x04
#define DRIVER_NAME				"dm1105"
#define DM1105_I2C_GPIO_NAME			"dm1105-gpio"
#define DM1105_DMA_PACKETS			47
#define DM1105_DMA_PACKET_LENGTH		(128*4)
#define DM1105_DMA_BYTES			(128 * 4 * DM1105_DMA_PACKETS)
#define GPIO08					(1 << 8)
#define GPIO13					(1 << 13)
#define GPIO14					(1 << 14)
#define GPIO15					(1 << 15)
#define GPIO16					(1 << 16)
#define GPIO17					(1 << 17)
#define GPIO_ALL				0x03ffff
#define DM1105_LNB_MASK				(GPIO_ALL & ~(GPIO14 | GPIO13))
#define DM1105_LNB_OFF				GPIO17
#define DM1105_LNB_13V				(GPIO16 | GPIO08)
#define DM1105_LNB_18V				GPIO08
#define DM05_LNB_MASK				(GPIO_ALL & ~(GPIO14 | GPIO13))
#define DM05_LNB_OFF				GPIO17
#define DM05_LNB_13V				GPIO17
#define DM05_LNB_18V				(GPIO17 | GPIO16)
#define UNBR_LNB_MASK				(GPIO17 | GPIO16)
#define UNBR_LNB_OFF				0
#define UNBR_LNB_13V				GPIO17
#define UNBR_LNB_18V				(GPIO17 | GPIO16)
static unsigned int card[]  = ;
module_param_array(card,  int, NULL, 0444);
MODULE_PARM_DESC(card, "card type");
static int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable debugging information for IR decoding");
static unsigned int dm1105_devcount;
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct dm1105_board ;
struct dm1105_subid ;
static const struct dm1105_board dm1105_boards[] = ;
static const struct dm1105_subid dm1105_subids[] = ;
static void dm1105_card_list(struct pci_dev *pci)
struct infrared ;
struct dm1105_dev ;
#define dm_io_mem(reg)	((unsigned long)(&dev->io_mem[reg]))
#define dm_readb(reg)		inb(dm_io_mem(reg))
#define dm_writeb(reg, value)	outb((value), (dm_io_mem(reg)))
#define dm_readw(reg)		inw(dm_io_mem(reg))
#define dm_writew(reg, value)	outw((value), (dm_io_mem(reg)))
#define dm_readl(reg)		inl(dm_io_mem(reg))
#define dm_writel(reg, value)	outl((value), (dm_io_mem(reg)))
#define dm_andorl(reg, mask, value) \
outl((inl(dm_io_mem(reg)) & ~(mask)) |\
((value) & (mask)), (dm_io_mem(reg)))
#define dm_setl(reg, bit)	dm_andorl((reg), (bit), (bit))
#define dm_clearl(reg, bit)	dm_andorl((reg), (bit), 0)
static void dm1105_gpio_set(struct dm1105_dev *dev, u32 mask)
static void dm1105_gpio_clear(struct dm1105_dev *dev, u32 mask)
static void dm1105_gpio_andor(struct dm1105_dev *dev, u32 mask, u32 val)
static u32 dm1105_gpio_get(struct dm1105_dev *dev, u32 mask)
static void dm1105_gpio_enable(struct dm1105_dev *dev, u32 mask, int asoutput)
static void dm1105_setline(struct dm1105_dev *dev, u32 line, int state)
static void dm1105_setsda(void *data, int state)
static void dm1105_setscl(void *data, int state)
static int dm1105_getsda(void *data)
static int dm1105_getscl(void *data)
static int dm1105_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static u32 functionality(struct i2c_adapter *adap)
static struct i2c_algorithm dm1105_algo = ;
static inline struct dm1105_dev *feed_to_dm1105_dev(struct dvb_demux_feed *feed)
static inline struct dm1105_dev *frontend_to_dm1105_dev(struct dvb_frontend *fe)
static int dm1105_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static void dm1105_set_dma_addr(struct dm1105_dev *dev)
static int __devinit dm1105_dma_map(struct dm1105_dev *dev)
static void dm1105_dma_unmap(struct dm1105_dev *dev)
static void dm1105_enable_irqs(struct dm1105_dev *dev)
static void dm1105_disable_irqs(struct dm1105_dev *dev)
static int dm1105_start_feed(struct dvb_demux_feed *f)
static int dm1105_stop_feed(struct dvb_demux_feed *f)
static void dm1105_emit_key(struct work_struct *work)
static void dm1105_dmx_buffer(struct work_struct *work)
static irqreturn_t dm1105_irq(int irq, void *dev_id)
int __devinit dm1105_ir_init(struct dm1105_dev *dm1105)
void __devexit dm1105_ir_exit(struct dm1105_dev *dm1105)
static int __devinit dm1105_hw_init(struct dm1105_dev *dev)
static void dm1105_hw_exit(struct dm1105_dev *dev)
static struct stv0299_config sharp_z0194a_config = ;
static struct stv0288_config earda_config = ;
static struct si21xx_config serit_config = ;
static struct cx24116_config serit_sp2633_config = ;
static struct ds3000_config dvbworld_ds3000_config = ;
static int __devinit frontend_init(struct dm1105_dev *dev)
static void __devinit dm1105_read_mac(struct dm1105_dev *dev, u8 *mac)
static int __devinit dm1105_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit dm1105_remove(struct pci_dev *pdev)
static struct pci_device_id dm1105_id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, dm1105_id_table);
static struct pci_driver dm1105_driver = ;
static int __init dm1105_init(void)
static void __exit dm1105_exit(void)
module_init(dm1105_init);
module_exit(dm1105_exit);
MODULE_AUTHOR("Igor M. Liplianin <liplianin@me.by>");
MODULE_DESCRIPTION("SDMC DM1105 DVB driver");
MODULE_LICENSE("GPL");
