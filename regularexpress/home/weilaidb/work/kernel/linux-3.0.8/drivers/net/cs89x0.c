#define ALLOW_DMA	0
#define ALLOW_DMA	1
#define DEBUGGING	1
#if ALLOW_DMA
static char version[] __initdata =
"cs89x0.c: v2.4.3-pre1 Russell Nelson <nelson@crynwr.com>, Andrew Morton\n";
#define DRV_NAME "cs89x0"
#if defined(CONFIG_MACH_IXDP2351)
static unsigned int netcard_portlist[] __used __initdata = ;
static unsigned int cs8900_irq_map[] = ;
#elif defined(CONFIG_ARCH_IXDP2X01)
static unsigned int netcard_portlist[] __used __initdata = ;
static unsigned int cs8900_irq_map[] = ;
#elif defined(CONFIG_MACH_QQ2440)
static unsigned int netcard_portlist[] __used __initdata = ;
static unsigned int cs8900_irq_map[] = ;
#elif defined(CONFIG_MACH_MX31ADS)
static unsigned int netcard_portlist[] __used __initdata = ;
static unsigned cs8900_irq_map[] = ;
static unsigned int netcard_portlist[] __used __initdata =
;
static unsigned int cs8900_irq_map[] = ;
#if DEBUGGING
static unsigned int net_debug = DEBUGGING;
#define net_debug 0
#define NETCARD_IO_EXTENT	16
#define FORCE_RJ45	0x0001
#define FORCE_AUI	0x0002
#define FORCE_BNC	0x0004
#define FORCE_AUTO	0x0010
#define FORCE_HALF	0x0020
#define FORCE_FULL	0x0030
struct net_local ;
static int cs89x0_probe1(struct net_device *dev, int ioaddr, int modular);
static int net_open(struct net_device *dev);
static netdev_tx_t net_send_packet(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t net_interrupt(int irq, void *dev_id);
static void set_multicast_list(struct net_device *dev);
static void net_timeout(struct net_device *dev);
static void net_rx(struct net_device *dev);
static int net_close(struct net_device *dev);
static struct net_device_stats *net_get_stats(struct net_device *dev);
static void reset_chip(struct net_device *dev);
static int get_eeprom_data(struct net_device *dev, int off, int len, int *buffer);
static int get_eeprom_cksum(int off, int len, int *buffer);
static int set_mac_address(struct net_device *dev, void *addr);
static void count_rx_errors(int status, struct net_device *dev);
static void net_poll_controller(struct net_device *dev);
#if ALLOW_DMA
static void get_dma_channel(struct net_device *dev);
static void release_dma_buff(struct net_local *lp);
#define tx_done(dev) 1
#if !defined(MODULE) && (ALLOW_DMA != 0)
static int g_cs89x0_dma;
static int __init dma_fn(char *str)
__setup("cs89x0_dma=", dma_fn);
static int g_cs89x0_media__force;
static int __init media_fn(char *str)
__setup("cs89x0_media=", media_fn);
struct net_device * __init cs89x0_probe(int unit)
#if defined(CONFIG_MACH_IXDP2351)
static u16
readword(unsigned long base_addr, int portno)
static void
writeword(unsigned long base_addr, int portno, u16 value)
#elif defined(CONFIG_ARCH_IXDP2X01)
static u16
readword(unsigned long base_addr, int portno)
static void
writeword(unsigned long base_addr, int portno, u16 value)
static u16
readword(unsigned long base_addr, int portno)
static void
writeword(unsigned long base_addr, int portno, u16 value)
static void
readwords(unsigned long base_addr, int portno, void *buf, int length)
static void
writewords(unsigned long base_addr, int portno, void *buf, int length)
static u16
readreg(struct net_device *dev, u16 regno)
static void
writereg(struct net_device *dev, u16 regno, u16 value)
static int __init
wait_eeprom_ready(struct net_device *dev)
static int __init
get_eeprom_data(struct net_device *dev, int off, int len, int *buffer)
static int  __init
get_eeprom_cksum(int off, int len, int *buffer)
static void net_poll_controller(struct net_device *dev)
static const struct net_device_ops net_ops = ;
static int __init
cs89x0_probe1(struct net_device *dev, int ioaddr, int modular)
#if ALLOW_DMA
#define dma_page_eq(ptr1, ptr2) ((long)(ptr1)>>17 == (long)(ptr2)>>17)
static void
get_dma_channel(struct net_device *dev)
static void
write_dma(struct net_device *dev, int chip_type, int dma)
static void
set_dma_cfg(struct net_device *dev)
static int
dma_bufcfg(struct net_device *dev)
static int
dma_busctl(struct net_device *dev)
static void
dma_rx(struct net_device *dev)
static void __init reset_chip(struct net_device *dev)
static void
control_dc_dc(struct net_device *dev, int on_not_off)
#define DETECTED_NONE  0
#define DETECTED_RJ45H 1
#define DETECTED_RJ45F 2
#define DETECTED_AUI   3
#define DETECTED_BNC   4
static int
detect_tp(struct net_device *dev)
static int
send_test_pkt(struct net_device *dev)
static int
detect_aui(struct net_device *dev)
static int
detect_bnc(struct net_device *dev)
static void
write_irq(struct net_device *dev, int chip_type, int irq)
static int
net_open(struct net_device *dev)
static void net_timeout(struct net_device *dev)
static netdev_tx_t net_send_packet(struct sk_buff *skb,struct net_device *dev)
static irqreturn_t net_interrupt(int irq, void *dev_id)
static void
count_rx_errors(int status, struct net_device *dev)
static void
net_rx(struct net_device *dev)
#if ALLOW_DMA
static void release_dma_buff(struct net_local *lp)
static int
net_close(struct net_device *dev)
static struct net_device_stats *
net_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static int set_mac_address(struct net_device *dev, void *p)
static struct net_device *dev_cs89x0;
static int io;
static int irq;
static int debug;
static char media[8];
static int duplex=-1;
static int use_dma;
static int dma;
static int dmasize=16;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(debug, int, 0);
module_param_string(media, media, sizeof(media), 0);
module_param(duplex, int, 0);
module_param(dma , int, 0);
module_param(dmasize , int, 0);
module_param(use_dma , int, 0);
MODULE_PARM_DESC(io, "cs89x0 I/O base address");
MODULE_PARM_DESC(irq, "cs89x0 IRQ number");
#if DEBUGGING
MODULE_PARM_DESC(debug, "cs89x0 debug level (0-6)");
MODULE_PARM_DESC(debug, "(ignored)");
MODULE_PARM_DESC(media, "Set cs89x0 adapter(s) media type(s) (rj45,bnc,aui)");
MODULE_PARM_DESC(duplex, "(ignored)");
#if ALLOW_DMA
MODULE_PARM_DESC(dma , "cs89x0 ISA DMA channel; ignored if use_dma=0");
MODULE_PARM_DESC(dmasize , "cs89x0 DMA size in kB (16,64); ignored if use_dma=0");
MODULE_PARM_DESC(use_dma , "cs89x0 using DMA (0-1)");
MODULE_PARM_DESC(dma , "(ignored)");
MODULE_PARM_DESC(dmasize , "(ignored)");
MODULE_PARM_DESC(use_dma , "(ignored)");
MODULE_AUTHOR("Mike Cruse, Russwll Nelson <nelson@crynwr.com>, Andrew Morton");
MODULE_LICENSE("GPL");
int __init init_module(void)
void __exit
cleanup_module(void)
