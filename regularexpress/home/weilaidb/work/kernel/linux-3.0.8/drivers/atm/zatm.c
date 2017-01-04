#define ZATM_COPPER	1
#define NULLCHECK(x)
#define EVENT(s,a,b)
static void event_dump(void)
#define NULLCHECK(x) \
if ((unsigned long) (x) < 0x30) printk(KERN_CRIT #x "==0x%x\n", (int) (x))
#define EV 64
static const char *ev[EV];
static unsigned long ev_a[EV],ev_b[EV];
static int ec = 0;
static void EVENT(const char *s,unsigned long a,unsigned long b)
static void event_dump(void)
#define RING_BUSY	1
static struct atm_dev *zatm_boards = NULL;
static unsigned long dummy[2] = ;
#define zin_n(r) inl(zatm_dev->base+r*4)
#define zin(r) inl(zatm_dev->base+uPD98401_##r*4)
#define zout(v,r) outl(v,zatm_dev->base+uPD98401_##r*4)
#define zwait while (zin(CMR) & uPD98401_BUSY)
static const int mbx_entries[NR_MBX] = ;
static const int mbx_esize[NR_MBX] = ;
#define MBX_SIZE(i) (mbx_entries[i]*mbx_esize[i])
static void zpokel(struct zatm_dev *zatm_dev,u32 value,u32 addr)
static u32 zpeekl(struct zatm_dev *zatm_dev,u32 addr)
struct rx_buffer_head ;
static void refill_pool(struct atm_dev *dev,int pool)
static void drain_free(struct atm_dev *dev,int pool)
static int pool_index(int max_pdu)
static void use_pool(struct atm_dev *dev,int pool)
static void unuse_pool(struct atm_dev *dev,int pool)
static const char *err_txt[] = ;
static void poll_rx(struct atm_dev *dev,int mbx)
static int open_rx_first(struct atm_vcc *vcc)
static int open_rx_second(struct atm_vcc *vcc)
static void close_rx(struct atm_vcc *vcc)
static int start_rx(struct atm_dev *dev)
static int do_tx(struct sk_buff *skb)
static inline void dequeue_tx(struct atm_vcc *vcc)
static void poll_tx(struct atm_dev *dev,int mbx)
static int alloc_shaper(struct atm_dev *dev,int *pcr,int min,int max,int ubr)
static void dealloc_shaper(struct atm_dev *dev,int shaper)
static void close_tx(struct atm_vcc *vcc)
static int open_tx_first(struct atm_vcc *vcc)
static int open_tx_second(struct atm_vcc *vcc)
static int start_tx(struct atm_dev *dev)
static irqreturn_t zatm_int(int irq,void *dev_id)
static void __devinit eprom_set(struct zatm_dev *zatm_dev,unsigned long value,
unsigned short cmd)
static unsigned long __devinit eprom_get(struct zatm_dev *zatm_dev,
unsigned short cmd)
static void __devinit eprom_put_bits(struct zatm_dev *zatm_dev,
unsigned long data,int bits,unsigned short cmd)
static void __devinit eprom_get_byte(struct zatm_dev *zatm_dev,
unsigned char *byte,unsigned short cmd)
static unsigned char __devinit eprom_try_esi(struct atm_dev *dev,
unsigned short cmd,int offset,int swap)
static void __devinit eprom_get_esi(struct atm_dev *dev)
static int __devinit zatm_init(struct atm_dev *dev)
static int __devinit zatm_start(struct atm_dev *dev)
static void zatm_close(struct atm_vcc *vcc)
static int zatm_open(struct atm_vcc *vcc)
static int zatm_change_qos(struct atm_vcc *vcc,struct atm_qos *qos,int flags)
static int zatm_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
static int zatm_getsockopt(struct atm_vcc *vcc,int level,int optname,
void __user *optval,int optlen)
static int zatm_setsockopt(struct atm_vcc *vcc,int level,int optname,
void __user *optval,unsigned int optlen)
static int zatm_send(struct atm_vcc *vcc,struct sk_buff *skb)
static void zatm_phy_put(struct atm_dev *dev,unsigned char value,
unsigned long addr)
static unsigned char zatm_phy_get(struct atm_dev *dev,unsigned long addr)
static const struct atmdev_ops ops = ;
static int __devinit zatm_init_one(struct pci_dev *pci_dev,
const struct pci_device_id *ent)
MODULE_LICENSE("GPL");
static struct pci_device_id zatm_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, zatm_pci_tbl);
static struct pci_driver zatm_driver = ;
static int __init zatm_init_module(void)
module_init(zatm_init_module);
