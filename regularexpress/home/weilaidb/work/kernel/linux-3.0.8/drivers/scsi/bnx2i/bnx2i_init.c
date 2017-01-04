static struct list_head adapter_list = LIST_HEAD_INIT(adapter_list);
static u32 adapter_count;
#define DRV_MODULE_NAME		"bnx2i"
#define DRV_MODULE_VERSION	"2.6.2.3"
#define DRV_MODULE_RELDATE	"Dec 31, 2010"
static char version[] __devinitdata =
"Broadcom NetXtreme II iSCSI Driver " DRV_MODULE_NAME \
" v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Anil Veerabhadrappa <anilgv@broadcom.com> and "
"Eddie Wai <eddie.wai@broadcom.com>");
MODULE_DESCRIPTION("Broadcom NetXtreme II BCM5706/5708/5709/57710/57711/57712"
" iSCSI Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static DEFINE_MUTEX(bnx2i_dev_lock);
unsigned int event_coal_min = 24;
module_param(event_coal_min, int, 0664);
MODULE_PARM_DESC(event_coal_min, "Event Coalescing Minimum Commands");
unsigned int event_coal_div = 1;
module_param(event_coal_div, int, 0664);
MODULE_PARM_DESC(event_coal_div, "Event Coalescing Divide Factor");
unsigned int en_tcp_dack = 1;
module_param(en_tcp_dack, int, 0664);
MODULE_PARM_DESC(en_tcp_dack, "Enable TCP Delayed ACK");
unsigned int error_mask1 = 0x00;
module_param(error_mask1, int, 0664);
MODULE_PARM_DESC(error_mask1, "Config FW iSCSI Error Mask #1");
unsigned int error_mask2 = 0x00;
module_param(error_mask2, int, 0664);
MODULE_PARM_DESC(error_mask2, "Config FW iSCSI Error Mask #2");
unsigned int sq_size;
module_param(sq_size, int, 0664);
MODULE_PARM_DESC(sq_size, "Configure SQ size");
unsigned int rq_size = BNX2I_RQ_WQES_DEFAULT;
module_param(rq_size, int, 0664);
MODULE_PARM_DESC(rq_size, "Configure RQ size");
u64 iscsi_error_mask = 0x00;
void bnx2i_identify_device(struct bnx2i_hba *hba)
struct bnx2i_hba *get_adapter_list_head(void)
struct bnx2i_hba *bnx2i_find_hba_for_cnic(struct cnic_dev *cnic)
void bnx2i_start(void *handle)
static void bnx2i_chip_cleanup(struct bnx2i_hba *hba)
void bnx2i_stop(void *handle)
static int bnx2i_init_one(struct bnx2i_hba *hba, struct cnic_dev *cnic)
void bnx2i_ulp_init(struct cnic_dev *dev)
void bnx2i_ulp_exit(struct cnic_dev *dev)
static int __init bnx2i_mod_init(void)
static void __exit bnx2i_mod_exit(void)
module_init(bnx2i_mod_init);
module_exit(bnx2i_mod_exit);
