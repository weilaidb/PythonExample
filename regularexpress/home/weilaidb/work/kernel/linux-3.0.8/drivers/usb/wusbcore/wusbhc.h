#define __WUSBHC_H__
#define WUSB_CHANNEL_STOP_DELAY_MS 8
struct wusb_dev ;
#define WUSB_DEV_ADDR_UNAUTH 0x80
static inline void wusb_dev_init(struct wusb_dev *wusb_dev)
extern void wusb_dev_destroy(struct kref *_wusb_dev);
static inline struct wusb_dev *wusb_dev_get(struct wusb_dev *wusb_dev)
static inline void wusb_dev_put(struct wusb_dev *wusb_dev)
struct wusb_port ;
struct wusbhc ;
#define usb_hcd_to_wusbhc(u) container_of((u), struct wusbhc, usb_hcd)
extern int wusbhc_create(struct wusbhc *);
extern int wusbhc_b_create(struct wusbhc *);
extern void wusbhc_b_destroy(struct wusbhc *);
extern void wusbhc_destroy(struct wusbhc *);
extern int wusb_dev_sysfs_add(struct wusbhc *, struct usb_device *,
struct wusb_dev *);
extern void wusb_dev_sysfs_rm(struct wusb_dev *);
extern int wusbhc_sec_create(struct wusbhc *);
extern int wusbhc_sec_start(struct wusbhc *);
extern void wusbhc_sec_stop(struct wusbhc *);
extern void wusbhc_sec_destroy(struct wusbhc *);
extern void wusbhc_giveback_urb(struct wusbhc *wusbhc, struct urb *urb,
int status);
void wusbhc_reset_all(struct wusbhc *wusbhc);
int wusbhc_pal_register(struct wusbhc *wusbhc);
void wusbhc_pal_unregister(struct wusbhc *wusbhc);
static inline struct usb_hcd *usb_hcd_get_by_usb_dev(struct usb_device *usb_dev)
static inline struct wusbhc *wusbhc_get(struct wusbhc *wusbhc)
static inline struct wusbhc *wusbhc_get_by_usb_dev(struct usb_device *usb_dev)
static inline void wusbhc_put(struct wusbhc *wusbhc)
int wusbhc_start(struct wusbhc *wusbhc);
void wusbhc_stop(struct wusbhc *wusbhc);
extern int wusbhc_chid_set(struct wusbhc *, const struct wusb_ckhdid *);
extern int wusbhc_devconnect_create(struct wusbhc *);
extern void wusbhc_devconnect_destroy(struct wusbhc *);
extern int wusbhc_devconnect_start(struct wusbhc *wusbhc);
extern void wusbhc_devconnect_stop(struct wusbhc *wusbhc);
extern void wusbhc_handle_dn(struct wusbhc *, u8 srcaddr,
struct wusb_dn_hdr *dn_hdr, size_t size);
extern void __wusbhc_dev_disable(struct wusbhc *wusbhc, u8 port);
extern int wusb_usb_ncb(struct notifier_block *nb, unsigned long val,
void *priv);
extern int wusb_set_dev_addr(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev,
u8 addr);
extern int wusbhc_rh_create(struct wusbhc *);
extern void wusbhc_rh_destroy(struct wusbhc *);
extern int wusbhc_rh_status_data(struct usb_hcd *, char *);
extern int wusbhc_rh_control(struct usb_hcd *, u16, u16, u16, char *, u16);
extern int wusbhc_rh_suspend(struct usb_hcd *);
extern int wusbhc_rh_resume(struct usb_hcd *);
extern int wusbhc_rh_start_port_reset(struct usb_hcd *, unsigned);
extern int wusbhc_mmcie_create(struct wusbhc *);
extern void wusbhc_mmcie_destroy(struct wusbhc *);
extern int wusbhc_mmcie_set(struct wusbhc *, u8 interval, u8 repeat_cnt,
struct wuie_hdr *);
extern void wusbhc_mmcie_rm(struct wusbhc *, struct wuie_hdr *);
int wusbhc_rsv_establish(struct wusbhc *wusbhc);
void wusbhc_rsv_terminate(struct wusbhc *wusbhc);
extern int wusb_dev_sec_add(struct wusbhc *, struct usb_device *,
struct wusb_dev *);
extern void wusb_dev_sec_rm(struct wusb_dev *) ;
extern int wusb_dev_4way_handshake(struct wusbhc *, struct wusb_dev *,
struct wusb_ckhdid *ck);
void wusbhc_gtk_rekey(struct wusbhc *wusbhc);
int wusb_dev_update_address(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev);
extern u8 wusb_cluster_id_get(void);
extern void wusb_cluster_id_put(u8);
static inline struct wusb_port *wusb_port_by_idx(struct wusbhc *wusbhc,
u8 port_idx)
static inline u8 wusb_port_no_to_idx(u8 port_no)
extern struct wusb_dev *__wusb_dev_get_by_usb_dev(struct wusbhc *,
struct usb_device *);
static inline
struct wusb_dev *wusb_dev_get_by_usb_dev(struct usb_device *usb_dev)
extern struct workqueue_struct *wusbd;
