#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define QBUFF_PER_PAGE		(PAGE_SIZE / sizeof(struct qdio_buffer))
static int zfcp_qdio_buffers_enqueue(struct qdio_buffer **sbal)
static void zfcp_qdio_handler_error(struct zfcp_qdio *qdio, char *id,
unsigned int qdio_err)
static void zfcp_qdio_zero_sbals(struct qdio_buffer *sbal[], int first, int cnt)
static inline void zfcp_qdio_account(struct zfcp_qdio *qdio)
static void zfcp_qdio_int_req(struct ccw_device *cdev, unsigned int qdio_err,
int queue_no, int idx, int count,
unsigned long parm)
static void zfcp_qdio_int_resp(struct ccw_device *cdev, unsigned int qdio_err,
int queue_no, int idx, int count,
unsigned long parm)
static struct qdio_buffer_element *
zfcp_qdio_sbal_chain(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
static struct qdio_buffer_element *
zfcp_qdio_sbale_next(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
int zfcp_qdio_sbals_from_sg(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req,
struct scatterlist *sg)
static int zfcp_qdio_sbal_check(struct zfcp_qdio *qdio)
int zfcp_qdio_sbal_get(struct zfcp_qdio *qdio)
int zfcp_qdio_send(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
static void zfcp_qdio_setup_init_data(struct qdio_initialize *id,
struct zfcp_qdio *qdio)
static int zfcp_qdio_allocate(struct zfcp_qdio *qdio)
void zfcp_qdio_close(struct zfcp_qdio *qdio)
int zfcp_qdio_open(struct zfcp_qdio *qdio)
void zfcp_qdio_destroy(struct zfcp_qdio *qdio)
int zfcp_qdio_setup(struct zfcp_adapter *adapter)
void zfcp_qdio_siosl(struct zfcp_adapter *adapter)
