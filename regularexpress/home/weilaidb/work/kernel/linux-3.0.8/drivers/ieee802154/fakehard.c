struct fakehard_priv ;
static struct wpan_phy *fake_to_phy(const struct net_device *dev)
static struct wpan_phy *fake_get_phy(const struct net_device *dev)
static u16 fake_get_pan_id(const struct net_device *dev)
static u16 fake_get_short_addr(const struct net_device *dev)
static u8 fake_get_dsn(const struct net_device *dev)
static u8 fake_get_bsn(const struct net_device *dev)
static int fake_assoc_req(struct net_device *dev,
struct ieee802154_addr *addr, u8 channel, u8 page, u8 cap)
static int fake_assoc_resp(struct net_device *dev,
struct ieee802154_addr *addr, u16 short_addr, u8 status)
static int fake_disassoc_req(struct net_device *dev,
struct ieee802154_addr *addr, u8 reason)
static int fake_start_req(struct net_device *dev, struct ieee802154_addr *addr,
u8 channel, u8 page,
u8 bcn_ord, u8 sf_ord, u8 pan_coord, u8 blx,
u8 coord_realign)
static int fake_scan_req(struct net_device *dev, u8 type, u32 channels,
u8 page, u8 duration)
static struct ieee802154_mlme_ops fake_mlme = ;
static int ieee802154_fake_open(struct net_device *dev)
static int ieee802154_fake_close(struct net_device *dev)
static netdev_tx_t ieee802154_fake_xmit(struct sk_buff *skb,
struct net_device *dev)
static int ieee802154_fake_ioctl(struct net_device *dev, struct ifreq *ifr,
int cmd)
static int ieee802154_fake_mac_addr(struct net_device *dev, void *p)
static const struct net_device_ops fake_ops = ;
static void ieee802154_fake_destruct(struct net_device *dev)
static void ieee802154_fake_setup(struct net_device *dev)
static int __devinit ieee802154fake_probe(struct platform_device *pdev)
static int __devexit ieee802154fake_remove(struct platform_device *pdev)
static struct platform_device *ieee802154fake_dev;
static struct platform_driver ieee802154fake_driver = ;
static __init int fake_init(void)
static __exit void fake_exit(void)
module_init(fake_init);
module_exit(fake_exit);
MODULE_LICENSE("GPL");
