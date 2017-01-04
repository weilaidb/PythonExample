extern int atm_init_aal5(struct atm_vcc *vcc);
#define PRIV(dev) ((struct atmtcp_dev_data *) ((dev)->dev_data))
struct atmtcp_dev_data ;
#define DEV_LABEL    "atmtcp"
#define MAX_VPI_BITS  8
#define MAX_VCI_BITS 16
static int atmtcp_send_control(struct atm_vcc *vcc,int type,
const struct atmtcp_control *msg,int flag)
static int atmtcp_recv_control(const struct atmtcp_control *msg)
static void atmtcp_v_dev_close(struct atm_dev *dev)
static int atmtcp_v_open(struct atm_vcc *vcc)
static void atmtcp_v_close(struct atm_vcc *vcc)
static int atmtcp_v_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
static int atmtcp_v_send(struct atm_vcc *vcc,struct sk_buff *skb)
static int atmtcp_v_proc(struct atm_dev *dev,loff_t *pos,char *page)
static void atmtcp_c_close(struct atm_vcc *vcc)
static struct atm_vcc *find_vcc(struct atm_dev *dev, short vpi, int vci)
static int atmtcp_c_send(struct atm_vcc *vcc,struct sk_buff *skb)
static struct atmdev_ops atmtcp_v_dev_ops = ;
static struct atmdev_ops atmtcp_c_dev_ops = ;
static struct atm_dev atmtcp_control_dev = ;
static int atmtcp_create(int itf,int persist,struct atm_dev **result)
static int atmtcp_attach(struct atm_vcc *vcc,int itf)
static int atmtcp_create_persistent(int itf)
static int atmtcp_remove_persistent(int itf)
static int atmtcp_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static struct atm_ioctl atmtcp_ioctl_ops = ;
static __init int atmtcp_init(void)
static void __exit atmtcp_exit(void)
MODULE_LICENSE("GPL");
module_init(atmtcp_init);
module_exit(atmtcp_exit);
