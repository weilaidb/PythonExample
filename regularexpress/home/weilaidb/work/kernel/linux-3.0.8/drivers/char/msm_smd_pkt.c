#define NUM_SMD_PKT_PORTS 9
#define DEVICE_NAME "smdpkt"
#define MAX_BUF_SIZE 2048
struct smd_pkt_dev  *smd_pkt_devp[NUM_SMD_PKT_PORTS];
struct class *smd_pkt_classp;
static dev_t smd_pkt_number;
static int msm_smd_pkt_debug_enable;
module_param_named(debug_enable, msm_smd_pkt_debug_enable,
int, S_IRUGO | S_IWUSR | S_IWGRP);
#define D_DUMP_BUFFER(prestr, cnt, buf) do  while (0)
#define D_DUMP_BUFFER(prestr, cnt, buf) do  while (0)
#define DBG(x...) do  while (0)
#define DBG(x...) do  while (0)
static void check_and_wakeup_reader(struct smd_pkt_dev *smd_pkt_devp)
static int smd_pkt_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int smd_pkt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int smd_pkt_poll(struct file *file, poll_table *wait)
static void smd_pkt_ch_notify(void *priv, unsigned event)
static char *smd_pkt_dev_name[] = ;
static char *smd_ch_name[] = ;
static int smd_pkt_open(struct inode *inode, struct file *file)
static int smd_pkt_release(struct inode *inode, struct file *file)
static const struct file_operations smd_pkt_fops = ;
static int __init smd_pkt_init(void)
module_init(smd_pkt_init);
static void __exit smd_pkt_cleanup(void)
module_exit(smd_pkt_cleanup);
MODULE_DESCRIPTION("MSM Shared Memory Packet Port");
MODULE_LICENSE("GPL v2");
