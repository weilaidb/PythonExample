#define PRISM2_PCCARD
static char *dev_info = "hostap_cs";
MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Support for Intersil Prism2-based 802.11 wireless LAN "
"cards (PC Card).");
MODULE_SUPPORTED_DEVICE("Intersil Prism2-based WLAN cards (PC Card)");
MODULE_LICENSE("GPL");
static int ignore_cis_vcc;
module_param(ignore_cis_vcc, int, 0444);
MODULE_PARM_DESC(ignore_cis_vcc, "Ignore broken CIS VCC entry");
struct hostap_cs_priv ;
static inline void hfa384x_outb_debug(struct net_device *dev, int a, u8 v)
static inline u8 hfa384x_inb_debug(struct net_device *dev, int a)
static inline void hfa384x_outw_debug(struct net_device *dev, int a, u16 v)
static inline u16 hfa384x_inw_debug(struct net_device *dev, int a)
static inline void hfa384x_outsw_debug(struct net_device *dev, int a,
u8 *buf, int wc)
static inline void hfa384x_insw_debug(struct net_device *dev, int a,
u8 *buf, int wc)
#define HFA384X_OUTB(v,a) hfa384x_outb_debug(dev, (a), (v))
#define HFA384X_INB(a) hfa384x_inb_debug(dev, (a))
#define HFA384X_OUTW(v,a) hfa384x_outw_debug(dev, (a), (v))
#define HFA384X_INW(a) hfa384x_inw_debug(dev, (a))
#define HFA384X_OUTSW(a, buf, wc) hfa384x_outsw_debug(dev, (a), (buf), (wc))
#define HFA384X_INSW(a, buf, wc) hfa384x_insw_debug(dev, (a), (buf), (wc))
#define HFA384X_OUTB(v,a) outb((v), dev->base_addr + (a))
#define HFA384X_INB(a) inb(dev->base_addr + (a))
#define HFA384X_OUTW(v,a) outw((v), dev->base_addr + (a))
#define HFA384X_INW(a) inw(dev->base_addr + (a))
#define HFA384X_INSW(a, buf, wc) insw(dev->base_addr + (a), buf, wc)
#define HFA384X_OUTSW(a, buf, wc) outsw(dev->base_addr + (a), buf, wc)
static int hfa384x_from_bap(struct net_device *dev, u16 bap, void *buf,
int len)
static int hfa384x_to_bap(struct net_device *dev, u16 bap, void *buf, int len)
static void prism2_detach(struct pcmcia_device *p_dev);
static void prism2_release(u_long arg);
static int prism2_config(struct pcmcia_device *link);
static int prism2_pccard_card_present(local_info_t *local)
#define SANDISK_WLAN_ACTIVATION_OFF 0x40
#define SANDISK_HCR_OFF 0x42
static void sandisk_set_iobase(local_info_t *local)
static void sandisk_write_hcr(local_info_t *local, int hcr)
static int sandisk_enable_wireless(struct net_device *dev)
static void prism2_pccard_cor_sreset(local_info_t *local)
static void prism2_pccard_genesis_reset(local_info_t *local, int hcr)
static struct prism2_helper_functions prism2_pccard_funcs =
;
static int hostap_cs_probe(struct pcmcia_device *p_dev)
static void prism2_detach(struct pcmcia_device *link)
static int prism2_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int prism2_config(struct pcmcia_device *link)
static void prism2_release(u_long arg)
static int hostap_cs_suspend(struct pcmcia_device *link)
static int hostap_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id hostap_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, hostap_cs_ids);
static struct pcmcia_driver hostap_driver = ;
static int __init init_prism2_pccard(void)
static void __exit exit_prism2_pccard(void)
module_init(init_prism2_pccard);
module_exit(exit_prism2_pccard);
