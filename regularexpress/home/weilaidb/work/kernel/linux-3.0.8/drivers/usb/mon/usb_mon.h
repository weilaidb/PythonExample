#define __USB_MON_H
#define TAG "usbmon"
struct mon_bus ;
struct mon_reader ;
void mon_reader_add(struct mon_bus *mbus, struct mon_reader *r);
void mon_reader_del(struct mon_bus *mbus, struct mon_reader *r);
struct mon_bus *mon_bus_lookup(unsigned int num);
int mon_text_add(struct mon_bus *mbus, const struct usb_bus *ubus);
void mon_text_del(struct mon_bus *mbus);
int mon_bin_add(struct mon_bus *mbus, const struct usb_bus *ubus);
void mon_bin_del(struct mon_bus *mbus);
int __init mon_text_init(void);
void mon_text_exit(void);
int __init mon_bin_init(void);
void mon_bin_exit(void);
extern struct mutex mon_lock;
extern const struct file_operations mon_fops_stat;
extern struct mon_bus mon_bus0;
