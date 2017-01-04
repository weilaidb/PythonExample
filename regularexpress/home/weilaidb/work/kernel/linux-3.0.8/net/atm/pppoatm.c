#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
enum pppoatm_encaps ;
struct pppoatm_vcc ;
static const unsigned char pppllc[6] = ;
#define LLC_LEN		(4)
static inline struct pppoatm_vcc *atmvcc_to_pvcc(const struct atm_vcc *atmvcc)
static inline struct pppoatm_vcc *chan_to_pvcc(const struct ppp_channel *chan)
static void pppoatm_wakeup_sender(unsigned long arg)
static void pppoatm_pop(struct atm_vcc *atmvcc, struct sk_buff *skb)
static void pppoatm_unassign_vcc(struct atm_vcc *atmvcc)
static void pppoatm_push(struct atm_vcc *atmvcc, struct sk_buff *skb)
#define DROP_PACKET 1
static int pppoatm_send(struct ppp_channel *chan, struct sk_buff *skb)
static int pppoatm_devppp_ioctl(struct ppp_channel *chan, unsigned int cmd,
unsigned long arg)
static const struct ppp_channel_ops pppoatm_ops = ;
static int pppoatm_assign_vcc(struct atm_vcc *atmvcc, void __user *arg)
static int pppoatm_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static struct atm_ioctl pppoatm_ioctl_ops = ;
static int __init pppoatm_init(void)
static void __exit pppoatm_exit(void)
module_init(pppoatm_init);
module_exit(pppoatm_exit);
MODULE_AUTHOR("Mitchell Blank Jr <mitch@sfgoth.com>");
MODULE_DESCRIPTION("RFC2364 PPP over ATM/AAL5");
MODULE_LICENSE("GPL");
