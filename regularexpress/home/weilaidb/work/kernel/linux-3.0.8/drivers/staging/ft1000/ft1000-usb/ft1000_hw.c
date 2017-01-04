#define HARLEY_READ_REGISTER     0x0
#define HARLEY_WRITE_REGISTER    0x01
#define HARLEY_READ_DPRAM_32     0x02
#define HARLEY_READ_DPRAM_LOW    0x03
#define HARLEY_READ_DPRAM_HIGH   0x04
#define HARLEY_WRITE_DPRAM_32    0x05
#define HARLEY_WRITE_DPRAM_LOW   0x06
#define HARLEY_WRITE_DPRAM_HIGH  0x07
#define HARLEY_READ_OPERATION    0xc1
#define HARLEY_WRITE_OPERATION   0x41
static int ft1000_reset(struct net_device *ft1000dev);
static int ft1000_submit_rx_urb(struct ft1000_info *info);
static int ft1000_start_xmit(struct sk_buff *skb, struct net_device *dev);
static int ft1000_open (struct net_device *dev);
static struct net_device_stats *ft1000_netdev_stats(struct net_device *dev);
static int ft1000_chkcard (struct ft1000_device *dev);
static u8 tempbuffer[1600];
#define MAX_RCV_LOOP   100
static int ft1000_control(struct ft1000_device *ft1000dev, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size, int timeout)
int ft1000_read_register(struct ft1000_device *ft1000dev, u16* Data,
u16 nRegIndx)
int ft1000_write_register(struct ft1000_device *ft1000dev, u16 value,
u16 nRegIndx)
int ft1000_read_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer,
u16 cnt)
int ft1000_write_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer,
u16 cnt)
int ft1000_read_dpram16(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer,
u8 highlow)
int ft1000_write_dpram16(struct ft1000_device *ft1000dev, u16 indx, u16 value, u8 highlow)
int fix_ft1000_read_dpram32(struct ft1000_device *ft1000dev, u16 indx,
u8 *buffer)
int fix_ft1000_write_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer)
static void card_reset_dsp(struct ft1000_device *ft1000dev, bool value)
void card_send_command(struct ft1000_device *ft1000dev, void *ptempbuffer,
int size)
int dsp_reload(struct ft1000_device *ft1000dev)
static void ft1000_reset_asic(struct net_device *dev)
static int ft1000_reset_card(struct net_device *dev)
static const struct net_device_ops ftnet_ops =
;
int init_ft1000_netdev(struct ft1000_device *ft1000dev)
int reg_ft1000_netdev(struct ft1000_device *ft1000dev,
struct usb_interface *intf)
static int ft1000_reset(struct net_device *dev)
static void ft1000_usb_transmit_complete(struct urb *urb)
static int ft1000_copy_down_pkt(struct net_device *netdev, u8 * packet, u16 len)
static int ft1000_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int ft1000_copy_up_pkt(struct urb *urb)
static int ft1000_submit_rx_urb(struct ft1000_info *info)
static int ft1000_open(struct net_device *dev)
int ft1000_close(struct net_device *net)
static struct net_device_stats *ft1000_netdev_stats(struct net_device *dev)
static int ft1000_chkcard(struct ft1000_device *dev)
static bool ft1000_receive_cmd(struct ft1000_device *dev, u16 *pbuffer,
int maxsz, u16 *pnxtph)
static int ft1000_dsp_prov(void *arg)
static int ft1000_proc_drvmsg(struct ft1000_device *dev, u16 size)
int ft1000_poll(void* dev_id)
