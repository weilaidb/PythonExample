#define _LINUX_ISDN_X25IFACE_H
#define ISDN_X25IFACE_MAGIC 0x1e75a2b9
#   define IX25DEBUG(fmt,args...) printk(KERN_DEBUG fmt , ## args)
#   define IX25DEBUG(fmt,args...)
extern struct concap_proto_ops * isdn_x25iface_concap_proto_ops_pt;
extern struct concap_proto     * isdn_x25iface_proto_new(void);
