#define __LINUX_USB_OTG_H
enum usb_otg_state ;
enum usb_xceiv_events ;
struct otg_transceiver;
struct otg_io_access_ops ;
struct otg_transceiver ;
extern int otg_set_transceiver(struct otg_transceiver *);
#if defined(CONFIG_NOP_USB_XCEIV) || (defined(CONFIG_NOP_USB_XCEIV_MODULE) && defined(MODULE))
extern void usb_nop_xceiv_register(void);
extern void usb_nop_xceiv_unregister(void);
static inline void usb_nop_xceiv_register(void)
static inline void usb_nop_xceiv_unregister(void)
static inline int otg_io_read(struct otg_transceiver *otg, u32 reg)
static inline int otg_io_write(struct otg_transceiver *otg, u32 val, u32 reg)
static inline int
otg_init(struct otg_transceiver *otg)
static inline void
otg_shutdown(struct otg_transceiver *otg)
extern struct otg_transceiver *otg_get_transceiver(void);
extern void otg_put_transceiver(struct otg_transceiver *);
extern const char *otg_state_string(enum usb_otg_state state);
static inline struct otg_transceiver *otg_get_transceiver(void)
static inline void otg_put_transceiver(struct otg_transceiver *x)
static inline const char *otg_state_string(enum usb_otg_state state)
static inline int
otg_start_hnp(struct otg_transceiver *otg)
static inline int
otg_set_vbus(struct otg_transceiver *otg, bool enabled)
static inline int
otg_set_host(struct otg_transceiver *otg, struct usb_bus *host)
static inline int
otg_set_peripheral(struct otg_transceiver *otg, struct usb_gadget *periph)
static inline int
otg_set_power(struct otg_transceiver *otg, unsigned mA)
static inline int
otg_set_suspend(struct otg_transceiver *otg, int suspend)
static inline int
otg_start_srp(struct otg_transceiver *otg)
static inline int
otg_register_notifier(struct otg_transceiver *otg, struct notifier_block *nb)
static inline void
otg_unregister_notifier(struct otg_transceiver *otg, struct notifier_block *nb)
extern int usb_bus_start_enum(struct usb_bus *bus, unsigned port_num);
