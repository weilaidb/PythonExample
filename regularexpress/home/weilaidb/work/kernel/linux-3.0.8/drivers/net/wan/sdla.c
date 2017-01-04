static const char* version = "SDLA driver v0.30, 12 Sep 1996, mike.mclagan@linux.org";
static unsigned int valid_port[] = ;
static unsigned int valid_mem[] = ;
static DEFINE_SPINLOCK(sdla_lock);
#define SDLA_WINDOW(dev,addr) outb((((addr) >> 13) & 0x1F), (dev)->base_addr + SDLA_REG_Z80_WINDOW)
static void __sdla_read(struct net_device *dev, int addr, void *buf, short len)
static void sdla_read(struct net_device *dev, int addr, void *buf, short len)
static void __sdla_write(struct net_device *dev, int addr,
const void *buf, short len)
static void sdla_write(struct net_device *dev, int addr,
const void *buf, short len)
static void sdla_clear(struct net_device *dev)
static char sdla_byte(struct net_device *dev, int addr)
static void sdla_stop(struct net_device *dev)
static void sdla_start(struct net_device *dev)
static int sdla_z80_poll(struct net_device *dev, int z80_addr, int jiffs, char resp1, char resp2)
#define Z80_READY 		'1'
#define LOADER_READY 		'2'
#define Z80_SCC_OK 		'3'
#define Z80_SCC_BAD	 	'4'
static int sdla_cpuspeed(struct net_device *dev, struct ifreq *ifr)
struct _dlci_stat
__packed;
struct _frad_stat
;
static void sdla_errors(struct net_device *dev, int cmd, int dlci, int ret, int len, void *data)
static int sdla_cmd(struct net_device *dev, int cmd, short dlci, short flags,
void *inbuf, short inlen, void *outbuf, short *outlen)
static int sdla_reconfig(struct net_device *dev);
static int sdla_activate(struct net_device *slave, struct net_device *master)
static int sdla_deactivate(struct net_device *slave, struct net_device *master)
static int sdla_assoc(struct net_device *slave, struct net_device *master)
static int sdla_deassoc(struct net_device *slave, struct net_device *master)
static int sdla_dlci_conf(struct net_device *slave, struct net_device *master, int get)
static netdev_tx_t sdla_transmit(struct sk_buff *skb,
struct net_device *dev)
static void sdla_receive(struct net_device *dev)
static irqreturn_t sdla_isr(int dummy, void *dev_id)
static void sdla_poll(unsigned long device)
static int sdla_close(struct net_device *dev)
struct conf_data ;
static int sdla_open(struct net_device *dev)
static int sdla_config(struct net_device *dev, struct frad_conf __user *conf, int get)
static int sdla_xfer(struct net_device *dev, struct sdla_mem __user *info, int read)
static int sdla_reconfig(struct net_device *dev)
static int sdla_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int sdla_change_mtu(struct net_device *dev, int new_mtu)
static int sdla_set_config(struct net_device *dev, struct ifmap *map)
static const struct net_device_ops sdla_netdev_ops = ;
static void setup_sdla(struct net_device *dev)
static struct net_device *sdla;
static int __init init_sdla(void)
static void __exit exit_sdla(void)
MODULE_LICENSE("GPL");
module_init(init_sdla);
module_exit(exit_sdla);
