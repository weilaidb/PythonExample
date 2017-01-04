#undef CARM_NDEBUG
#define DRV_NAME "sx8"
#define DRV_VERSION "1.0"
#define PFX DRV_NAME ": "
MODULE_AUTHOR("Jeff Garzik");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Promise SATA SX8 block driver");
MODULE_VERSION(DRV_VERSION);
static int max_queue = 1;
module_param(max_queue, int, 0444);
MODULE_PARM_DESC(max_queue, "Maximum number of queued commands. (min==1, max==30, safe==1)");
#define NEXT_RESP(idx)	((idx + 1) % RMSG_Q_LEN)
#define TAG_ENCODE(tag)	(((tag) << 16) | 0xf)
#define TAG_DECODE(tag)	(((tag) >> 16) & 0x1f)
#define TAG_VALID(tag)	((((tag) & 0xf) == 0xf) && (TAG_DECODE(tag) < 32))
#define DPRINTK(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define VPRINTK(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define VPRINTK(fmt, args...)
#define DPRINTK(fmt, args...)
#define VPRINTK(fmt, args...)
#define assert(expr)
#define assert(expr) \
if(unlikely(!(expr)))
struct carm_host;
enum ;
enum ;
enum scatter_gather_types ;
enum host_states ;
static const char *state_name[] = ;
struct carm_port ;
struct carm_request ;
struct carm_host ;
struct carm_response   __attribute__((packed));
struct carm_msg_sg   __attribute__((packed));
struct carm_msg_rw   __attribute__((packed));
struct carm_msg_allocbuf   __attribute__((packed));
struct carm_msg_ioctl   __attribute__((packed));
struct carm_msg_sync_time   __attribute__((packed));
struct carm_msg_get_fw_ver   __attribute__((packed));
struct carm_fw_ver   __attribute__((packed));
struct carm_array_info   __attribute__((packed));
static int carm_init_one (struct pci_dev *pdev, const struct pci_device_id *ent);
static void carm_remove_one (struct pci_dev *pdev);
static int carm_bdev_getgeo(struct block_device *bdev, struct hd_geometry *geo);
static const struct pci_device_id carm_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, carm_pci_tbl);
static struct pci_driver carm_driver = ;
static const struct block_device_operations carm_bd_ops = ;
static unsigned int carm_host_id;
static unsigned long carm_major_alloc;
static int carm_bdev_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const u32 msg_sizes[] = ;
static inline int carm_lookup_bucket(u32 msg_size)
static void carm_init_buckets(void __iomem *mmio)
static inline void *carm_ref_msg(struct carm_host *host,
unsigned int msg_idx)
static inline dma_addr_t carm_ref_msg_dma(struct carm_host *host,
unsigned int msg_idx)
static int carm_send_msg(struct carm_host *host,
struct carm_request *crq)
static struct carm_request *carm_get_request(struct carm_host *host)
static int carm_put_request(struct carm_host *host, struct carm_request *crq)
static struct carm_request *carm_get_special(struct carm_host *host)
static int carm_array_info (struct carm_host *host, unsigned int array_idx)
typedef unsigned int (*carm_sspc_t)(struct carm_host *, unsigned int, void *);
static int carm_send_special (struct carm_host *host, carm_sspc_t func)
static unsigned int carm_fill_sync_time(struct carm_host *host,
unsigned int idx, void *mem)
static unsigned int carm_fill_alloc_buf(struct carm_host *host,
unsigned int idx, void *mem)
static unsigned int carm_fill_scan_channels(struct carm_host *host,
unsigned int idx, void *mem)
static unsigned int carm_fill_get_fw_ver(struct carm_host *host,
unsigned int idx, void *mem)
static inline void carm_end_request_queued(struct carm_host *host,
struct carm_request *crq,
int error)
static inline void carm_push_q (struct carm_host *host, struct request_queue *q)
static inline struct request_queue *carm_pop_q(struct carm_host *host)
static inline void carm_round_robin(struct carm_host *host)
static inline void carm_end_rq(struct carm_host *host, struct carm_request *crq,
int error)
static void carm_oob_rq_fn(struct request_queue *q)
static void carm_rq_fn(struct request_queue *q)
static void carm_handle_array_info(struct carm_host *host,
struct carm_request *crq, u8 *mem,
int error)
static void carm_handle_scan_chan(struct carm_host *host,
struct carm_request *crq, u8 *mem,
int error)
static void carm_handle_generic(struct carm_host *host,
struct carm_request *crq, int error,
int cur_state, int next_state)
static inline void carm_handle_rw(struct carm_host *host,
struct carm_request *crq, int error)
static inline void carm_handle_resp(struct carm_host *host,
__le32 ret_handle_le, u32 status)
static inline void carm_handle_responses(struct carm_host *host)
static irqreturn_t carm_interrupt(int irq, void *__host)
static void carm_fsm_task (struct work_struct *work)
static int carm_init_wait(void __iomem *mmio, u32 bits, unsigned int test_bit)
static void carm_init_responses(struct carm_host *host)
static int carm_init_host(struct carm_host *host)
static int carm_init_disks(struct carm_host *host)
static void carm_free_disks(struct carm_host *host)
static int carm_init_shm(struct carm_host *host)
static int carm_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static void carm_remove_one (struct pci_dev *pdev)
static int __init carm_init(void)
static void __exit carm_exit(void)
module_init(carm_init);
module_exit(carm_exit);
