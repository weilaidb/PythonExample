LIST_HEAD(llc_sap_list);
DEFINE_SPINLOCK(llc_sap_list_lock);
static struct llc_sap *llc_sap_alloc(void)
static struct llc_sap *__llc_sap_find(unsigned char sap_value)
struct llc_sap *llc_sap_find(unsigned char sap_value)
struct llc_sap *llc_sap_open(unsigned char lsap,
int (*func)(struct sk_buff *skb,
struct net_device *dev,
struct packet_type *pt,
struct net_device *orig_dev))
void llc_sap_close(struct llc_sap *sap)
static struct packet_type llc_packet_type __read_mostly = ;
static struct packet_type llc_tr_packet_type __read_mostly = ;
static int __init llc_init(void)
static void __exit llc_exit(void)
module_init(llc_init);
module_exit(llc_exit);
EXPORT_SYMBOL(llc_sap_list);
EXPORT_SYMBOL(llc_sap_list_lock);
EXPORT_SYMBOL(llc_sap_find);
EXPORT_SYMBOL(llc_sap_open);
EXPORT_SYMBOL(llc_sap_close);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Procom 1997, Jay Schullist 2001, Arnaldo C. Melo 2001-2003");
MODULE_DESCRIPTION("LLC IEEE 802.2 core support");
