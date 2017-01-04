#if !defined(__i386__) && !defined(__x86_64__)
#define ioremap_nocache(X,Y) ioremap(X,Y)
#define CONFIG_ATM_ENI_BURST_TX_8W
#define CONFIG_ATM_ENI_BURST_RX_4W
#define NULLCHECK(x)
#define EVENT(s,a,b)
static void event_dump(void)
#define NULLCHECK(x) \
if ((unsigned long) (x) < 0x30) \
printk(KERN_CRIT #x "==0x%lx\n",(unsigned long) (x))
#define EV 64
static const char *ev[EV];
static unsigned long ev_a[EV],ev_b[EV];
static int ec = 0;
static void EVENT(const char *s,unsigned long a,unsigned long b)
static void event_dump(void)
#define NEPJOK(a0,a1,b) \
((a0) < (a1) ? (b) <= (a0) || (b) > (a1) : (b) <= (a0) && (b) > (a1))
#define EEPJOK(a0,a1,b) \
((a0) < (a1) ? (b) < (a0) || (b) >= (a1) : (b) < (a0) && (b) >= (a1))
#define NEPMOK(a0,d,b,c) NEPJOK(a0,(a0+d) & (c-1),b)
#define EEPMOK(a0,d,b,c) EEPJOK(a0,(a0+d) & (c-1),b)
static int tx_complete = 0,dma_complete = 0,queued = 0,requeued = 0,
backlogged = 0,rx_enqueued = 0,rx_dequeued = 0,pushed = 0,submitted = 0,
putting = 0;
static struct atm_dev *eni_boards = NULL;
static u32 *cpu_zeroes = NULL;
static dma_addr_t zeroes;
#define eni_in(r)	readl(eni_dev->reg+(r)*4)
#define eni_out(v,r)	writel((v),eni_dev->reg+(r)*4)
static void dump_mem(struct eni_dev *eni_dev)
static void dump(struct atm_dev *dev)
static void eni_put_free(struct eni_dev *eni_dev, void __iomem *start,
unsigned long size)
static void __iomem *eni_alloc_mem(struct eni_dev *eni_dev, unsigned long *size)
static void eni_free_mem(struct eni_dev *eni_dev, void __iomem *start,
unsigned long size)
#define ENI_VCC_NOS ((struct atm_vcc *) 1)
static void rx_ident_err(struct atm_vcc *vcc)
static int do_rx_dma(struct atm_vcc *vcc,struct sk_buff *skb,
unsigned long skip,unsigned long size,unsigned long eff)
static void discard(struct atm_vcc *vcc,unsigned long size)
static int rx_aal0(struct atm_vcc *vcc)
static int rx_aal5(struct atm_vcc *vcc)
static inline int rx_vcc(struct atm_vcc *vcc)
static void poll_rx(struct atm_dev *dev)
static void get_service(struct atm_dev *dev)
static void dequeue_rx(struct atm_dev *dev)
static int open_rx_first(struct atm_vcc *vcc)
static int open_rx_second(struct atm_vcc *vcc)
static void close_rx(struct atm_vcc *vcc)
static int start_rx(struct atm_dev *dev)
enum enq_res ;
static inline void put_dma(int chan,u32 *dma,int *j,dma_addr_t paddr,
u32 size)
static enum enq_res do_tx(struct sk_buff *skb)
static void poll_tx(struct atm_dev *dev)
static void dequeue_tx(struct atm_dev *dev)
static struct eni_tx *alloc_tx(struct eni_dev *eni_dev,int ubr)
static int comp_tx(struct eni_dev *eni_dev,int *pcr,int reserved,int *pre,
int *res,int unlimited)
static int reserve_or_set_tx(struct atm_vcc *vcc,struct atm_trafprm *txtp,
int set_rsv,int set_shp)
static int open_tx_first(struct atm_vcc *vcc)
static int open_tx_second(struct atm_vcc *vcc)
static void close_tx(struct atm_vcc *vcc)
static int start_tx(struct atm_dev *dev)
static void bug_int(struct atm_dev *dev,unsigned long reason)
static irqreturn_t eni_int(int irq,void *dev_id)
static void eni_tasklet(unsigned long data)
static const char *media_name[] __devinitdata = ;
#define SET_SEPROM \
()
#define GET_SEPROM \
()
static int __devinit get_esi_asic(struct atm_dev *dev)
#undef SET_SEPROM
#undef GET_SEPROM
static int __devinit get_esi_fpga(struct atm_dev *dev, void __iomem *base)
static int __devinit eni_do_init(struct atm_dev *dev)
static int __devinit eni_start(struct atm_dev *dev)
static void eni_close(struct atm_vcc *vcc)
static int eni_open(struct atm_vcc *vcc)
static int eni_change_qos(struct atm_vcc *vcc,struct atm_qos *qos,int flgs)
static int eni_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
static int eni_getsockopt(struct atm_vcc *vcc,int level,int optname,
void __user *optval,int optlen)
static int eni_setsockopt(struct atm_vcc *vcc,int level,int optname,
void __user *optval,unsigned int optlen)
static int eni_send(struct atm_vcc *vcc,struct sk_buff *skb)
static void eni_phy_put(struct atm_dev *dev,unsigned char value,
unsigned long addr)
static unsigned char eni_phy_get(struct atm_dev *dev,unsigned long addr)
static int eni_proc_read(struct atm_dev *dev,loff_t *pos,char *page)
static const struct atmdev_ops ops = ;
static int __devinit eni_init_one(struct pci_dev *pci_dev,
const struct pci_device_id *ent)
static struct pci_device_id eni_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci,eni_pci_tbl);
static void __devexit eni_remove_one(struct pci_dev *pci_dev)
static struct pci_driver eni_driver = ;
static int __init eni_init(void)
module_init(eni_init);
MODULE_LICENSE("GPL");
