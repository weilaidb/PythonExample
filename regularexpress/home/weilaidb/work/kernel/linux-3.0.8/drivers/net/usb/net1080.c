#define frame_errors	data[1]
struct nc_header  __packed;
#define	PAD_BYTE	((unsigned char)0xAC)
struct nc_trailer  __packed;
#define FRAMED_SIZE(mtu) (sizeof (struct nc_header) \
+ sizeof (struct ethhdr) \
+ (mtu) \
+ 1 \
+ sizeof (struct nc_trailer))
#define MIN_FRAMED	FRAMED_SIZE(0)
#define NC_MAX_PACKET	32767
#define	NC_READ_TTL_MS	((u8)255)
#define	REG_USBCTL	((u8)0x04)
#define REG_TTL		((u8)0x10)
#define REG_STATUS	((u8)0x11)
#define	REQUEST_REGISTER	((u8)0x10)
#define	REQUEST_EEPROM		((u8)0x11)
static int
nc_vendor_read(struct usbnet *dev, u8 req, u8 regnum, u16 *retval_ptr)
static inline int
nc_register_read(struct usbnet *dev, u8 regnum, u16 *retval_ptr)
static void
nc_vendor_write(struct usbnet *dev, u8 req, u8 regnum, u16 value)
static inline void
nc_register_write(struct usbnet *dev, u8 regnum, u16 value)
#define	USBCTL_WRITABLE_MASK	0x1f0f
#define	USBCTL_ENABLE_LANG	(1 << 12)
#define	USBCTL_ENABLE_MFGR	(1 << 11)
#define	USBCTL_ENABLE_PROD	(1 << 10)
#define	USBCTL_ENABLE_SERIAL	(1 << 9)
#define	USBCTL_ENABLE_DEFAULTS	(1 << 8)
#define	USBCTL_FLUSH_OTHER	(1 << 3)
#define	USBCTL_FLUSH_THIS	(1 << 2)
#define	USBCTL_DISCONN_OTHER	(1 << 1)
#define	USBCTL_DISCONN_THIS	(1 << 0)
static inline void nc_dump_usbctl(struct usbnet *dev, u16 usbctl)
#define	STATUS_PORT_A		(1 << 15)
#define	STATUS_CONN_OTHER	(1 << 14)
#define	STATUS_SUSPEND_OTHER	(1 << 13)
#define	STATUS_MAILBOX_OTHER	(1 << 12)
#define	STATUS_PACKETS_OTHER(n)	(((n) >> 8) & 0x03)
#define	STATUS_CONN_THIS	(1 << 6)
#define	STATUS_SUSPEND_THIS	(1 << 5)
#define	STATUS_MAILBOX_THIS	(1 << 4)
#define	STATUS_PACKETS_THIS(n)	(((n) >> 0) & 0x03)
#define	STATUS_UNSPEC_MASK	0x0c8c
#define	STATUS_NOISE_MASK 	((u16)~(0x0303|STATUS_UNSPEC_MASK))
static inline void nc_dump_status(struct usbnet *dev, u16 status)
#define	TTL_THIS(ttl)	(0x00ff & ttl)
#define	TTL_OTHER(ttl)	(0x00ff & (ttl >> 8))
#define MK_TTL(this,other)	((u16)(((other)<<8)|(0x00ff&(this))))
static inline void nc_dump_ttl(struct usbnet *dev, u16 ttl)
static int net1080_reset(struct usbnet *dev)
static int net1080_check_connect(struct usbnet *dev)
static void nc_flush_complete(struct urb *urb)
static void nc_ensure_sync(struct usbnet *dev)
static int net1080_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *
net1080_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
static int net1080_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct driver_info	net1080_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver net1080_driver = ;
static int __init net1080_init(void)
module_init(net1080_init);
static void __exit net1080_exit(void)
module_exit(net1080_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("NetChip 1080 based USB Host-to-Host Links");
MODULE_LICENSE("GPL");
