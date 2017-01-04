#define _ISL_IOCTL_H
#define SUPPORTED_WIRELESS_EXT                  19
void prism54_mib_init(islpci_private *);
struct iw_statistics *prism54_get_wireless_stats(struct net_device *);
void prism54_update_stats(struct work_struct *);
void prism54_acl_init(struct islpci_acl *);
void prism54_acl_clean(struct islpci_acl *);
void prism54_process_trap(struct work_struct *);
void prism54_wpa_bss_ie_init(islpci_private *priv);
void prism54_wpa_bss_ie_clean(islpci_private *priv);
int prism54_set_mac_address(struct net_device *, void *);
int prism54_ioctl(struct net_device *, struct ifreq *, int);
extern const struct iw_handler_def prism54_handler_def;
