#define	INITIAL_SRP_LIMIT	16
#define	DEFAULT_MAX_SECTORS	256
#define	TGT_NAME	"ibmvstgt"
#define h_copy_rdma(l, sa, sb, da, db) \
plpar_hcall_norets(H_COPY_RDMA, l, sa, sb, da, db)
#define h_send_crq(ua, l, h) \
plpar_hcall_norets(H_SEND_CRQ, ua, l, h)
#define h_reg_crq(ua, tok, sz)\
plpar_hcall_norets(H_REG_CRQ, ua, tok, sz);
#define h_free_crq(ua) \
plpar_hcall_norets(H_FREE_CRQ, ua);
#define eprintk(fmt, args...)					\
do  while (0)
#define dprintk(fmt, args...)
struct vio_port ;
static struct workqueue_struct *vtgtd;
static struct scsi_transport_template *ibmvstgt_transport_template;
static char system_id[64] = "";
static char partition_name[97] = "UNKNOWN";
static unsigned int partition_number = -1;
static struct vio_port *target_to_port(struct srp_target *target)
static inline union viosrp_iu *vio_iu(struct iu_entry *iue)
static int send_iu(struct iu_entry *iue, uint64_t length, uint8_t format)
#define SRP_RSP_SENSE_DATA_LEN	18
static int send_rsp(struct iu_entry *iue, struct scsi_cmnd *sc,
unsigned char status, unsigned char asc)
static void handle_cmd_queue(struct srp_target *target)
static int ibmvstgt_rdma(struct scsi_cmnd *sc, struct scatterlist *sg, int nsg,
struct srp_direct_buf *md, int nmd,
enum dma_data_direction dir, unsigned int rest)
static int ibmvstgt_cmd_done(struct scsi_cmnd *sc,
void (*done)(struct scsi_cmnd *))
int send_adapter_info(struct iu_entry *iue,
dma_addr_t remote_buffer, uint16_t length)
static void process_login(struct iu_entry *iue)
static inline void queue_cmd(struct iu_entry *iue)
static int process_tsk_mgmt(struct iu_entry *iue)
static int process_mad_iu(struct iu_entry *iue)
static int process_srp_iu(struct iu_entry *iue)
static void process_iu(struct viosrp_crq *crq, struct srp_target *target)
static irqreturn_t ibmvstgt_interrupt(int dummy, void *data)
static int crq_queue_create(struct crq_queue *queue, struct srp_target *target)
static void crq_queue_destroy(struct srp_target *target)
static void process_crq(struct viosrp_crq *crq,	struct srp_target *target)
static inline struct viosrp_crq *next_crq(struct crq_queue *queue)
static void handle_crq(struct work_struct *work)
static int ibmvstgt_eh_abort_handler(struct scsi_cmnd *sc)
static int ibmvstgt_tsk_mgmt_response(struct Scsi_Host *shost,
u64 itn_id, u64 mid, int result)
static int ibmvstgt_it_nexus_response(struct Scsi_Host *shost, u64 itn_id,
int result)
static ssize_t system_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t partition_number_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t unit_address_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(system_id, S_IRUGO, system_id_show, NULL);
static DEVICE_ATTR(partition_number, S_IRUGO, partition_number_show, NULL);
static DEVICE_ATTR(unit_address, S_IRUGO, unit_address_show, NULL);
static struct device_attribute *ibmvstgt_attrs[] = ;
static struct scsi_host_template ibmvstgt_sht = ;
static int ibmvstgt_probe(struct vio_dev *dev, const struct vio_device_id *id)
static int ibmvstgt_remove(struct vio_dev *dev)
static struct vio_device_id ibmvstgt_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, ibmvstgt_device_table);
static struct vio_driver ibmvstgt_driver = ;
static int get_system_info(void)
static struct srp_function_template ibmvstgt_transport_functions = ;
static int __init ibmvstgt_init(void)
static void __exit ibmvstgt_exit(void)
MODULE_DESCRIPTION("IBM Virtual SCSI Target");
MODULE_AUTHOR("Santiago Leon");
MODULE_LICENSE("GPL");
module_init(ibmvstgt_init);
module_exit(ibmvstgt_exit);
