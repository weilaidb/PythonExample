static char partition_name[97] = "UNKNOWN";
static unsigned int partition_number = -1;
static irqreturn_t rpavscsi_handle_event(int irq, void *dev_instance)
static void rpavscsi_release_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata,
int max_requests)
static struct viosrp_crq *crq_queue_next_crq(struct crq_queue *queue)
static int rpavscsi_send_crq(struct ibmvscsi_host_data *hostdata,
u64 word1, u64 word2)
static void rpavscsi_task(void *data)
static void gather_partition_info(void)
static void set_adapter_info(struct ibmvscsi_host_data *hostdata)
static int rpavscsi_reset_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata)
static int rpavscsi_init_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata,
int max_requests)
static int rpavscsi_reenable_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata)
static int rpavscsi_resume(struct ibmvscsi_host_data *hostdata)
struct ibmvscsi_ops rpavscsi_ops = ;
