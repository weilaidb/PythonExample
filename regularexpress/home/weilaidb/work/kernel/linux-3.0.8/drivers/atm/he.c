#undef USE_SCATTERGATHER
#undef USE_CHECKSUM_HW
#define hprintk(fmt,args...)	printk(KERN_ERR DEV_LABEL "%d: " fmt, he_dev->number , ##args)
#define HPRINTK(fmt,args...)	printk(KERN_DEBUG DEV_LABEL "%d: " fmt, he_dev->number , ##args)
#define HPRINTK(fmt,args...)	do  while (0)
static int he_open(struct atm_vcc *vcc);
static void he_close(struct atm_vcc *vcc);
static int he_send(struct atm_vcc *vcc, struct sk_buff *skb);
static int he_ioctl(struct atm_dev *dev, unsigned int cmd, void __user *arg);
static irqreturn_t he_irq_handler(int irq, void *dev_id);
static void he_tasklet(unsigned long data);
static int he_proc_read(struct atm_dev *dev,loff_t *pos,char *page);
static int he_start(struct atm_dev *dev);
static void he_stop(struct he_dev *dev);
static void he_phy_put(struct atm_dev *, unsigned char, unsigned long);
static unsigned char he_phy_get(struct atm_dev *, unsigned long);
static u8 read_prom_byte(struct he_dev *he_dev, int addr);
static struct he_dev *he_devs;
static int disable64;
static short nvpibits = -1;
static short nvcibits = -1;
static short rx_skb_reserve = 16;
static int irq_coalesce = 1;
static int sdh = 0;
static unsigned int readtab[] = ;
static unsigned int clocktab[] = ;
static struct atmdev_ops he_ops =
;
#define he_writel(dev, val, reg)	do  while (0)
#define he_readl(dev, reg)		readl((dev)->membase + (reg))
static __inline__ void
he_writel_internal(struct he_dev *he_dev, unsigned val, unsigned addr,
unsigned flags)
#define he_writel_rcm(dev, val, reg) 				\
he_writel_internal(dev, val, reg, CON_CTL_RCM)
#define he_writel_tcm(dev, val, reg) 				\
he_writel_internal(dev, val, reg, CON_CTL_TCM)
#define he_writel_mbox(dev, val, reg) 				\
he_writel_internal(dev, val, reg, CON_CTL_MBOX)
static unsigned
he_readl_internal(struct he_dev *he_dev, unsigned addr, unsigned flags)
#define he_readl_rcm(dev, reg) \
he_readl_internal(dev, reg, CON_CTL_RCM)
#define he_readl_tcm(dev, reg) \
he_readl_internal(dev, reg, CON_CTL_TCM)
#define he_readl_mbox(dev, reg) \
he_readl_internal(dev, reg, CON_CTL_MBOX)
#define he_mkcid(dev, vpi, vci)		(((vpi << (dev)->vcibits) | vci) & 0x1fff)
#define he_writel_tsr0(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 0)
#define he_readl_tsr0(dev, cid) \
he_readl_tcm(dev, CONFIG_TSRA | (cid << 3) | 0)
#define he_writel_tsr1(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 1)
#define he_writel_tsr2(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 2)
#define he_writel_tsr3(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 3)
#define he_writel_tsr4(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 4)
#define he_writel_tsr4_upper(dev, val, cid) \
he_writel_internal(dev, val, CONFIG_TSRA | (cid << 3) | 4, \
CON_CTL_TCM \
| CON_BYTE_DISABLE_2 \
| CON_BYTE_DISABLE_1 \
| CON_BYTE_DISABLE_0)
#define he_readl_tsr4(dev, cid) \
he_readl_tcm(dev, CONFIG_TSRA | (cid << 3) | 4)
#define he_writel_tsr5(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 5)
#define he_writel_tsr6(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 6)
#define he_writel_tsr7(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRA | (cid << 3) | 7)
#define he_writel_tsr8(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRB | (cid << 2) | 0)
#define he_writel_tsr9(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRB | (cid << 2) | 1)
#define he_writel_tsr10(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRB | (cid << 2) | 2)
#define he_writel_tsr11(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRB | (cid << 2) | 3)
#define he_writel_tsr12(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRC | (cid << 1) | 0)
#define he_writel_tsr13(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRC | (cid << 1) | 1)
#define he_writel_tsr14(dev, val, cid) \
he_writel_tcm(dev, val, CONFIG_TSRD | cid)
#define he_writel_tsr14_upper(dev, val, cid) \
he_writel_internal(dev, val, CONFIG_TSRD | cid, \
CON_CTL_TCM \
| CON_BYTE_DISABLE_2 \
| CON_BYTE_DISABLE_1 \
| CON_BYTE_DISABLE_0)
#define he_writel_rsr0(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 0)
#define he_readl_rsr0(dev, cid) \
he_readl_rcm(dev, 0x00000 | (cid << 3) | 0)
#define he_writel_rsr1(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 1)
#define he_writel_rsr2(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 2)
#define he_writel_rsr3(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 3)
#define he_writel_rsr4(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 4)
#define he_writel_rsr5(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 5)
#define he_writel_rsr6(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 6)
#define he_writel_rsr7(dev, val, cid) \
he_writel_rcm(dev, val, 0x00000 | (cid << 3) | 7)
static __inline__ struct atm_vcc*
__find_vcc(struct he_dev *he_dev, unsigned cid)
static int __devinit
he_init_one(struct pci_dev *pci_dev, const struct pci_device_id *pci_ent)
static void __devexit
he_remove_one (struct pci_dev *pci_dev)
static unsigned
rate_to_atmf(unsigned rate)
static void __devinit
he_init_rx_lbfp0(struct he_dev *he_dev)
static void __devinit
he_init_rx_lbfp1(struct he_dev *he_dev)
static void __devinit
he_init_tx_lbfp(struct he_dev *he_dev)
static int __devinit
he_init_tpdrq(struct he_dev *he_dev)
static void __devinit
he_init_cs_block(struct he_dev *he_dev)
static int __devinit
he_init_cs_block_rcm(struct he_dev *he_dev)
static int __devinit
he_init_group(struct he_dev *he_dev, int group)
static int __devinit
he_init_irq(struct he_dev *he_dev)
static int __devinit
he_start(struct atm_dev *dev)
static void
he_stop(struct he_dev *he_dev)
static struct he_tpd *
__alloc_tpd(struct he_dev *he_dev)
#define AAL5_LEN(buf,len) 						\
((((unsigned char *)(buf))[(len)-6] << 8) |	\
(((unsigned char *)(buf))[(len)-5]))
#define TCP_CKSUM(buf,len) 						\
((((unsigned char *)(buf))[(len)-2] << 8) |	\
(((unsigned char *)(buf))[(len-1)]))
static int
he_service_rbrq(struct he_dev *he_dev, int group)
static void
he_service_tbrq(struct he_dev *he_dev, int group)
static void
he_service_rbpl(struct he_dev *he_dev, int group)
static void
he_tasklet(unsigned long data)
static irqreturn_t
he_irq_handler(int irq, void *dev_id)
static __inline__ void
__enqueue_tpd(struct he_dev *he_dev, struct he_tpd *tpd, unsigned cid)
static int
he_open(struct atm_vcc *vcc)
static void
he_close(struct atm_vcc *vcc)
static int
he_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int
he_ioctl(struct atm_dev *atm_dev, unsigned int cmd, void __user *arg)
static void
he_phy_put(struct atm_dev *atm_dev, unsigned char val, unsigned long addr)
static unsigned char
he_phy_get(struct atm_dev *atm_dev, unsigned long addr)
static int
he_proc_read(struct atm_dev *dev, loff_t *pos, char *page)
static u8 read_prom_byte(struct he_dev *he_dev, int addr)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("chas williams <chas@cmf.nrl.navy.mil>");
MODULE_DESCRIPTION("ForeRunnerHE ATM Adapter driver");
module_param(disable64, bool, 0);
MODULE_PARM_DESC(disable64, "disable 64-bit pci bus transfers");
module_param(nvpibits, short, 0);
MODULE_PARM_DESC(nvpibits, "numbers of bits for vpi (default 0)");
module_param(nvcibits, short, 0);
MODULE_PARM_DESC(nvcibits, "numbers of bits for vci (default 12)");
module_param(rx_skb_reserve, short, 0);
MODULE_PARM_DESC(rx_skb_reserve, "padding for receive skb (default 16)");
module_param(irq_coalesce, bool, 0);
MODULE_PARM_DESC(irq_coalesce, "use interrupt coalescing (default 1)");
module_param(sdh, bool, 0);
MODULE_PARM_DESC(sdh, "use SDH framing (default 0)");
static struct pci_device_id he_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, he_pci_tbl);
static struct pci_driver he_driver = ;
static int __init he_init(void)
static void __exit he_cleanup(void)
module_init(he_init);
module_exit(he_cleanup);
