struct net_local ;
static int  sbni_card_probe( unsigned long );
static int  sbni_pci_probe( struct net_device  * );
static struct net_device  *sbni_probe1(struct net_device *, unsigned long, int);
static int  sbni_open( struct net_device * );
static int  sbni_close( struct net_device * );
static netdev_tx_t sbni_start_xmit(struct sk_buff *,
struct net_device * );
static int  sbni_ioctl( struct net_device *, struct ifreq *, int );
static void  set_multicast_list( struct net_device * );
static irqreturn_t sbni_interrupt( int, void * );
static void  handle_channel( struct net_device * );
static int   recv_frame( struct net_device * );
static void  send_frame( struct net_device * );
static int   upload_data( struct net_device *,
unsigned, unsigned, unsigned, u32 );
static void  download_data( struct net_device *, u32 * );
static void  sbni_watchdog( unsigned long );
static void  interpret_ack( struct net_device *, unsigned );
static int   append_frame_to_pkt( struct net_device *, unsigned, u32 );
static void  indicate_pkt( struct net_device * );
static void  card_start( struct net_device * );
static void  prepare_to_send( struct sk_buff *, struct net_device * );
static void  drop_xmit_queue( struct net_device * );
static void  send_frame_header( struct net_device *, u32 * );
static int   skip_tail( unsigned int, unsigned int, u32 );
static int   check_fhdr( u32, u32 *, u32 *, u32 *, u32 *, u32 * );
static void  change_level( struct net_device * );
static void  timeout_change_level( struct net_device * );
static u32   calc_crc32( u32, u8 *, u32 );
static struct sk_buff *  get_rx_buf( struct net_device * );
static int  sbni_init( struct net_device * );
static int  enslave( struct net_device *, struct net_device * );
static int  emancipate( struct net_device * );
#define ASM_CRC 1
static const char  version[] =
"Granch SBNI12 driver ver 5.0.1  Jun 22 2001  Denis I.Timofeev.\n";
static int  skip_pci_probe	__initdata = 0;
static int  scandone	__initdata = 0;
static int  num		__initdata = 0;
static unsigned char  rxl_tab[];
static u32  crc32tab[];
static struct net_device  *sbni_cards[ SBNI_MAX_NUM_CARDS ];
static u32	io[   SBNI_MAX_NUM_CARDS ] __initdata =
;
static u32	irq[  SBNI_MAX_NUM_CARDS ] __initdata;
static u32	baud[ SBNI_MAX_NUM_CARDS ] __initdata;
static u32	rxl[  SBNI_MAX_NUM_CARDS ] __initdata =
;
static u32	mac[  SBNI_MAX_NUM_CARDS ] __initdata;
typedef u32  iarr[];
static iarr __initdata *dest[5] = ;
static unsigned int  netcard_portlist[ ] __initdata = ;
#define NET_LOCAL_LOCK(dev) (((struct net_local *)netdev_priv(dev))->lock)
static inline int __init
sbni_isa_probe( struct net_device  *dev )
static const struct net_device_ops sbni_netdev_ops = ;
static void __init sbni_devsetup(struct net_device *dev)
int __init sbni_probe(int unit)
static int __init sbni_init(struct net_device *dev)
static int __init
sbni_pci_probe( struct net_device  *dev )
static struct net_device * __init
sbni_probe1( struct net_device  *dev,  unsigned long  ioaddr,  int  irq )
static netdev_tx_t
sbni_start_xmit( struct sk_buff  *skb,  struct net_device  *dev )
static netdev_tx_t
sbni_start_xmit( struct sk_buff  *skb,  struct net_device  *dev )
static irqreturn_t
sbni_interrupt( int  irq,  void  *dev_id )
static void
handle_channel( struct net_device  *dev )
static int
recv_frame( struct net_device  *dev )
static void
send_frame( struct net_device  *dev )
static void
download_data( struct net_device  *dev,  u32  *crc_p )
static int
upload_data( struct net_device  *dev,  unsigned  framelen,  unsigned  frameno,
unsigned  is_first,  u32  crc )
static inline void
send_complete( struct net_device *dev )
static void
interpret_ack( struct net_device  *dev,  unsigned  ack )
static int
append_frame_to_pkt( struct net_device  *dev,  unsigned  framelen,  u32  crc )
static void
prepare_to_send( struct sk_buff  *skb,  struct net_device  *dev )
static void
drop_xmit_queue( struct net_device  *dev )
static void
send_frame_header( struct net_device  *dev,  u32  *crc_p )
static int
skip_tail( unsigned int  ioaddr,  unsigned int  tail_len,  u32 crc )
static int
check_fhdr( u32  ioaddr,  u32  *framelen,  u32  *frameno,  u32  *ack,
u32  *is_first,  u32  *crc_p )
static struct sk_buff *
get_rx_buf( struct net_device  *dev )
static void
indicate_pkt( struct net_device  *dev )
static void
sbni_watchdog( unsigned long  arg )
static unsigned char  rxl_tab[] = ;
#define SIZE_OF_TIMEOUT_RXL_TAB 4
static unsigned char  timeout_rxl_tab[] = ;
static void
card_start( struct net_device  *dev )
static void
change_level( struct net_device  *dev )
static void
timeout_change_level( struct net_device  *dev )
static int
sbni_open( struct net_device  *dev )
static int
sbni_close( struct net_device  *dev )
#define VALID_DECODER (2 + 8 + 0x10 + 0x20 + 0x80 + 0x100 + 0x200)
static int
sbni_card_probe( unsigned long  ioaddr )
static int
sbni_ioctl( struct net_device  *dev,  struct ifreq  *ifr,  int  cmd )
static int
enslave( struct net_device  *dev,  struct net_device  *slave_dev )
static int
emancipate( struct net_device  *dev )
static void
set_multicast_list( struct net_device  *dev )
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(baud, int, NULL, 0);
module_param_array(rxl, int, NULL, 0);
module_param_array(mac, int, NULL, 0);
module_param(skip_pci_probe, bool, 0);
MODULE_LICENSE("GPL");
int __init init_module( void )
void
cleanup_module(void)
static int __init
sbni_setup( char  *p )
__setup( "sbni=", sbni_setup );
static u32
calc_crc32( u32  crc,  u8  *p,  u32  len )
static u32
calc_crc32( u32  crc,  u8  *p,  u32  len )
static u32  crc32tab[] __attribute__ ((aligned(8))) = ;
