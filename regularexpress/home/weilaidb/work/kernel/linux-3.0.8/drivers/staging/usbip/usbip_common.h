#define __USBIP_COMMON_H
#define USBIP_VERSION "1.0.0"
#undef pr_fmt
#define pr_fmt(fmt)     KBUILD_MODNAME ": %s:%d: " fmt, __func__, __LINE__
#define pr_fmt(fmt)     KBUILD_MODNAME ": " fmt
enum ;
#define usbip_dbg_flag_xmit	(usbip_debug_flag & usbip_debug_xmit)
#define usbip_dbg_flag_vhci_rh	(usbip_debug_flag & usbip_debug_vhci_rh)
#define usbip_dbg_flag_vhci_hc	(usbip_debug_flag & usbip_debug_vhci_hc)
#define usbip_dbg_flag_vhci_rx	(usbip_debug_flag & usbip_debug_vhci_rx)
#define usbip_dbg_flag_vhci_tx	(usbip_debug_flag & usbip_debug_vhci_tx)
#define usbip_dbg_flag_stub_rx	(usbip_debug_flag & usbip_debug_stub_rx)
#define usbip_dbg_flag_stub_tx	(usbip_debug_flag & usbip_debug_stub_tx)
#define usbip_dbg_flag_vhci_sysfs   (usbip_debug_flag & usbip_debug_vhci_sysfs)
extern unsigned long usbip_debug_flag;
extern struct device_attribute dev_attr_usbip_debug;
#define usbip_dbg_with_flag(flag, fmt, args...)		\
do  while (0)
#define usbip_dbg_sysfs(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_sysfs, fmt , ##args)
#define usbip_dbg_xmit(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_xmit, fmt , ##args)
#define usbip_dbg_urb(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_urb, fmt , ##args)
#define usbip_dbg_eh(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_eh, fmt , ##args)
#define usbip_dbg_vhci_rh(fmt, args...)	\
usbip_dbg_with_flag(usbip_debug_vhci_rh, fmt , ##args)
#define usbip_dbg_vhci_hc(fmt, args...)	\
usbip_dbg_with_flag(usbip_debug_vhci_hc, fmt , ##args)
#define usbip_dbg_vhci_rx(fmt, args...)	\
usbip_dbg_with_flag(usbip_debug_vhci_rx, fmt , ##args)
#define usbip_dbg_vhci_tx(fmt, args...)	\
usbip_dbg_with_flag(usbip_debug_vhci_tx, fmt , ##args)
#define usbip_dbg_vhci_sysfs(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_vhci_sysfs, fmt , ##args)
#define usbip_dbg_stub_cmp(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_stub_cmp, fmt , ##args)
#define usbip_dbg_stub_rx(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_stub_rx, fmt , ##args)
#define usbip_dbg_stub_tx(fmt, args...) \
usbip_dbg_with_flag(usbip_debug_stub_tx, fmt , ##args)
struct usbip_header_basic  __packed;
struct usbip_header_cmd_submit  __packed;
struct usbip_header_ret_submit  __packed;
struct usbip_header_cmd_unlink  __packed;
struct usbip_header_ret_unlink  __packed;
struct usbip_iso_packet_descriptor  __packed;
struct usbip_header  __packed;
int usbip_xmit(int, struct socket *, char *, int, int);
int usbip_sendmsg(struct socket *, struct msghdr *, int);
static inline int interface_to_busnum(struct usb_interface *interface)
static inline int interface_to_devnum(struct usb_interface *interface)
static inline int interface_to_infnum(struct usb_interface *interface)
struct socket *sockfd_to_socket(unsigned int);
int set_sockaddr(struct socket *socket, struct sockaddr_storage *ss);
void usbip_dump_urb(struct urb *purb);
void usbip_dump_header(struct usbip_header *pdu);
struct usbip_device;
enum usbip_side ;
enum usbip_status ;
struct usbip_device ;
void usbip_pack_pdu(struct usbip_header *pdu, struct urb *urb, int cmd,
int pack);
void usbip_header_correct_endian(struct usbip_header *pdu, int send);
int usbip_recv_xbuff(struct usbip_device *ud, struct urb *urb);
int usbip_recv_iso(struct usbip_device *ud, struct urb *urb);
int usbip_pad_iso(struct usbip_device *ud, struct urb *urb);
void *usbip_alloc_iso_desc_pdu(struct urb *urb, ssize_t *bufflen);
int usbip_start_eh(struct usbip_device *ud);
void usbip_stop_eh(struct usbip_device *ud);
void usbip_event_add(struct usbip_device *ud, unsigned long event);
int usbip_event_happened(struct usbip_device *ud);
