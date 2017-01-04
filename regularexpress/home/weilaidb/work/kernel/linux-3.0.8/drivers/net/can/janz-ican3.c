#define DPM_NUM_PAGES		256
#define DPM_PAGE_SIZE		256
#define DPM_PAGE_ADDR(p)	((p) * DPM_PAGE_SIZE)
#define QUEUE_OLD_CONTROL	0
#define QUEUE_OLD_RB0		1
#define QUEUE_OLD_RB1		2
#define QUEUE_OLD_WB0		3
#define QUEUE_OLD_WB1		4
#define MSYNC_PEER		0x00
#define MSYNC_LOCL		0x01
#define TARGET_RUNNING		0x02
#define MSYNC_RB0		0x01
#define MSYNC_RB1		0x02
#define MSYNC_RBLW		0x04
#define MSYNC_RB_MASK		(MSYNC_RB0 | MSYNC_RB1)
#define MSYNC_WB0		0x10
#define MSYNC_WB1		0x20
#define MSYNC_WBLW		0x40
#define MSYNC_WB_MASK		(MSYNC_WB0 | MSYNC_WB1)
#define QUEUE_TOHOST		5
#define QUEUE_FROMHOST_MID	6
#define QUEUE_FROMHOST_HIGH	7
#define QUEUE_FROMHOST_LOW	8
#define DPM_FREE_START		9
#define DESC_VALID		0x80
#define DESC_WRAP		0x40
#define DESC_INTERRUPT		0x20
#define DESC_IVALID		0x10
#define DESC_LEN(len)		(len)
#define MSG_CONNECTI		0x02
#define MSG_DISCONNECT		0x03
#define MSG_IDVERS		0x04
#define MSG_MSGLOST		0x05
#define MSG_NEWHOSTIF		0x08
#define MSG_INQUIRY		0x0a
#define MSG_SETAFILMASK		0x10
#define MSG_INITFDPMQUEUE	0x11
#define MSG_HWCONF		0x12
#define MSG_FMSGLOST		0x15
#define MSG_CEVTIND		0x37
#define MSG_CBTRREQ		0x41
#define MSG_COFFREQ		0x42
#define MSG_CONREQ		0x43
#define MSG_CCONFREQ		0x47
#define INQUIRY_STATUS		0x00
#define INQUIRY_TERMINATION	0x01
#define INQUIRY_EXTENDED	0x04
#define SETAFILMASK_REJECT	0x00
#define SETAFILMASK_FASTIF	0x02
#define HWCONF_TERMINATE_ON	0x01
#define HWCONF_TERMINATE_OFF	0x00
#define CEVTIND_EI		0x01
#define CEVTIND_DOI		0x02
#define CEVTIND_LOST		0x04
#define CEVTIND_FULL		0x08
#define CEVTIND_BEI		0x10
#define CEVTIND_CHIP_SJA1000	0x02
#define ICAN3_BUSERR_QUOTA_MAX	255
#define ICAN3_ECHO	0x10
#define ICAN3_EFF_RTR	0x40
#define ICAN3_SFF_RTR	0x10
#define ICAN3_EFF	0x80
#define ICAN3_CAN_TYPE_MASK	0x0f
#define ICAN3_CAN_TYPE_SFF	0x00
#define ICAN3_CAN_TYPE_EFF	0x01
#define ICAN3_CAN_DLC_MASK	0x0f
#define SR_BS		0x80
#define SR_ES		0x40
#define SR_TS		0x20
#define SR_RS		0x10
#define SR_TCS		0x08
#define SR_TBS		0x04
#define SR_DOS		0x02
#define SR_RBS		0x01
#define SR_CRIT (SR_BS|SR_ES)
#define ECC_SEG		0x1F
#define ECC_DIR		0x20
#define ECC_ERR		6
#define ECC_BIT		0x00
#define ECC_FORM	0x40
#define ECC_STUFF	0x80
#define ECC_MASK	0xc0
#define ICAN3_NEW_BUFFERS	16
#define ICAN3_TX_BUFFERS	512
#define ICAN3_RX_BUFFERS	1024
#define ICAN3_CAN_CLOCK		8000000
#define DRV_NAME "janz-ican3"
struct ican3_dpm_control ;
struct ican3_dev ;
struct ican3_msg ;
struct ican3_new_desc ;
struct ican3_fast_desc ;
static inline void ican3_set_page(struct ican3_dev *mod, unsigned int page)
static int ican3_old_recv_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static int ican3_old_send_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static void __devinit ican3_init_new_host_interface(struct ican3_dev *mod)
static void __devinit ican3_init_fast_host_interface(struct ican3_dev *mod)
static int ican3_new_send_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static int ican3_new_recv_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static int ican3_send_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static int ican3_recv_msg(struct ican3_dev *mod, struct ican3_msg *msg)
static int __devinit ican3_msg_connect(struct ican3_dev *mod)
static int __devexit ican3_msg_disconnect(struct ican3_dev *mod)
static int __devinit ican3_msg_newhostif(struct ican3_dev *mod)
static int __devinit ican3_msg_fasthostif(struct ican3_dev *mod)
static int __devinit ican3_set_id_filter(struct ican3_dev *mod, bool accept)
static int ican3_set_bus_state(struct ican3_dev *mod, bool on)
static int ican3_set_termination(struct ican3_dev *mod, bool on)
static int ican3_send_inquiry(struct ican3_dev *mod, u8 subspec)
static int ican3_set_buserror(struct ican3_dev *mod, u8 quota)
static void ican3_to_can_frame(struct ican3_dev *mod,
struct ican3_fast_desc *desc,
struct can_frame *cf)
static void can_frame_to_ican3(struct ican3_dev *mod,
struct can_frame *cf,
struct ican3_fast_desc *desc)
static void ican3_handle_idvers(struct ican3_dev *mod, struct ican3_msg *msg)
static void ican3_handle_msglost(struct ican3_dev *mod, struct ican3_msg *msg)
static int ican3_handle_cevtind(struct ican3_dev *mod, struct ican3_msg *msg)
static void ican3_handle_inquiry(struct ican3_dev *mod, struct ican3_msg *msg)
static void ican3_handle_unknown_message(struct ican3_dev *mod,
struct ican3_msg *msg)
static void ican3_handle_message(struct ican3_dev *mod, struct ican3_msg *msg)
static bool ican3_txok(struct ican3_dev *mod)
static int ican3_recv_skb(struct ican3_dev *mod)
static int ican3_napi(struct napi_struct *napi, int budget)
static irqreturn_t ican3_irq(int irq, void *dev_id)
static int ican3_reset_module(struct ican3_dev *mod)
static void __devexit ican3_shutdown_module(struct ican3_dev *mod)
static int __devinit ican3_startup_module(struct ican3_dev *mod)
static int ican3_open(struct net_device *ndev)
static int ican3_stop(struct net_device *ndev)
static int ican3_xmit(struct sk_buff *skb, struct net_device *ndev)
static const struct net_device_ops ican3_netdev_ops = ;
static struct can_bittiming_const ican3_bittiming_const = ;
static int ican3_set_bittiming(struct net_device *ndev)
static int ican3_set_mode(struct net_device *ndev, enum can_mode mode)
static int ican3_get_berr_counter(const struct net_device *ndev,
struct can_berr_counter *bec)
static ssize_t ican3_sysfs_show_term(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ican3_sysfs_set_term(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(termination, S_IWUSR | S_IRUGO, ican3_sysfs_show_term,
ican3_sysfs_set_term);
static struct attribute *ican3_sysfs_attrs[] = ;
static struct attribute_group ican3_sysfs_attr_group = ;
static int __devinit ican3_probe(struct platform_device *pdev)
static int __devexit ican3_remove(struct platform_device *pdev)
static struct platform_driver ican3_driver = ;
static int __init ican3_init(void)
static void __exit ican3_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("Janz MODULbus VMOD-ICAN3 Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:janz-ican3");
module_init(ican3_init);
module_exit(ican3_exit);
