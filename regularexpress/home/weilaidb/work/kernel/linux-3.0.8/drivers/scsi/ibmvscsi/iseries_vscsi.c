static struct ibmvscsi_host_data *single_host_data;
struct srp_lp_event ;
static void iseriesvscsi_handle_event(struct HvLpEvent *lpevt)
static int iseriesvscsi_init_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata,
int max_requests)
static void iseriesvscsi_release_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata,
int max_requests)
static int iseriesvscsi_reset_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata)
static int iseriesvscsi_reenable_crq_queue(struct crq_queue *queue,
struct ibmvscsi_host_data *hostdata)
static int iseriesvscsi_send_crq(struct ibmvscsi_host_data *hostdata,
u64 word1, u64 word2)
static int iseriesvscsi_resume(struct ibmvscsi_host_data *hostdata)
struct ibmvscsi_ops iseriesvscsi_ops = ;
