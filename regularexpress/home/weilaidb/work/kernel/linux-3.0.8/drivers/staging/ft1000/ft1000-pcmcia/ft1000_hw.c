#define DEBUG(n, args...) printk(KERN_DEBUG args);
#define DEBUG(n, args...)
int card_download(struct net_device *dev, const u8 *pFileStart, UINT FileLength);
void ft1000InitProc(struct net_device *dev);
void ft1000CleanupProc(struct net_device *dev);
const struct firmware *fw_entry;
static void ft1000_hbchk(u_long data);
static struct timer_list poll_timer = ;
static u16 cmdbuffer[1024];
static u8 tempbuffer[1600];
static u8 ft1000_card_present = 0;
static u8 flarion_ft1000_cnt = 0;
static irqreturn_t ft1000_interrupt(int irq, void *dev_id);
static void ft1000_enable_interrupts(struct net_device *dev);
static void ft1000_disable_interrupts(struct net_device *dev);
MODULE_AUTHOR("");
MODULE_DESCRIPTION
("Support for Flarion Flash OFDM NIC Device. Support for PCMCIA when used with ft1000_cs.");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("FT1000");
#define MAX_RCV_LOOP   100
inline u16 ft1000_asic_read(struct net_device *dev, u16 offset)
inline void ft1000_asic_write(struct net_device *dev, u16 offset, u16 value)
static inline u16 ft1000_read_fifo_len(struct net_device *dev)
u16 ft1000_read_dpram(struct net_device * dev, int offset)
static inline void ft1000_write_dpram(struct net_device *dev,
int offset, u16 value)
u16 ft1000_read_dpram_mag_16(struct net_device *dev, int offset, int Index)
static inline void ft1000_write_dpram_mag_16(struct net_device *dev,
int offset, u16 value, int Index)
u32 ft1000_read_dpram_mag_32(struct net_device *dev, int offset)
void ft1000_write_dpram_mag_32(struct net_device *dev, int offset, u32 value)
static void ft1000_enable_interrupts(struct net_device *dev)
static void ft1000_disable_interrupts(struct net_device *dev)
static void ft1000_reset_asic(struct net_device *dev)
static int ft1000_reset_card(struct net_device *dev)
static int ft1000_chkcard(struct net_device *dev)
static void ft1000_hbchk(u_long data)
void ft1000_send_cmd (struct net_device *dev, u16 *ptempbuffer, int size, u16 qtype)
BOOLEAN ft1000_receive_cmd(struct net_device *dev, u16 * pbuffer, int maxsz, u16 *pnxtph)
void ft1000_proc_drvmsg(struct net_device *dev)
int ft1000_parse_dpram_msg(struct net_device *dev)
static void ft1000_flush_fifo(struct net_device *dev, u16 DrvErrNum)
int ft1000_copy_up_pkt(struct net_device *dev)
int ft1000_copy_down_pkt(struct net_device *dev, u16 * packet, u16 len)
static struct net_device_stats *ft1000_stats(struct net_device *dev)
static int ft1000_open(struct net_device *dev)
static int ft1000_close(struct net_device *dev)
static int ft1000_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t ft1000_interrupt(int irq, void *dev_id)
void stop_ft1000_card(struct net_device *dev)
static void ft1000_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 ft1000_get_link(struct net_device *dev)
static const struct ethtool_ops ops = ;
struct net_device *init_ft1000_card(struct pcmcia_device *link,
void *ft1000_reset)
