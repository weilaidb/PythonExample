#define IN_DMA 9
#define OUT_DMA 8
#define IN_DMA_INST regi_dma9
#define OUT_DMA_INST regi_dma8
#define DMA_IRQ DMA9_INTR_VECT
#define IN_DMA 3
#define OUT_DMA 2
#define IN_DMA_INST regi_dma3
#define OUT_DMA_INST regi_dma2
#define DMA_IRQ DMA3_INTR_VECT
#define DESCR_ALLOC_PAD  (31)
struct cryptocop_dma_desc ;
struct cryptocop_int_operation;
struct cryptocop_tfrm_ctx ;
struct cryptocop_private;
struct cryptocop_transform_ctx;
struct cryptocop_session;
typedef enum  cryptocop_queue_priority;
struct cryptocop_prio_queue;
struct cryptocop_prio_job;
struct ioctl_job_cb_ctx ;
static struct cryptocop_session *cryptocop_sessions = NULL;
spinlock_t cryptocop_sessions_lock;
static cryptocop_session_id next_sid = 1;
static const char csum_zero_pad[1] = ;
#define MEM2MEM_DISCARD_BUF_LENGTH  (512)
static unsigned char mem2mem_discard_buf[MEM2MEM_DISCARD_BUF_LENGTH];
#define CRYPTOCOP_DESCRIPTOR_POOL_SIZE   (100)
static struct cryptocop_dma_desc descr_pool[CRYPTOCOP_DESCRIPTOR_POOL_SIZE];
static struct cryptocop_dma_desc *descr_pool_free_list;
static int descr_pool_no_free;
static spinlock_t descr_pool_lock;
spinlock_t cryptocop_process_lock;
static struct cryptocop_prio_queue cryptocop_job_queues[cryptocop_prio_no_prios];
static spinlock_t cryptocop_job_queue_lock;
static struct cryptocop_prio_job *cryptocop_running_job = NULL;
static spinlock_t running_job_lock;
static struct list_head cryptocop_completed_jobs;
static spinlock_t cryptocop_completed_jobs_lock;
DECLARE_WAIT_QUEUE_HEAD(cryptocop_ioc_process_wq);
static int cryptocop_open(struct inode *, struct file *);
static int cryptocop_release(struct inode *, struct file *);
static long cryptocop_ioctl(struct file *file,
unsigned int cmd, unsigned long arg);
static void cryptocop_start_job(void);
static int cryptocop_job_queue_insert(cryptocop_queue_priority prio, struct cryptocop_operation *operation);
static int cryptocop_job_setup(struct cryptocop_prio_job **pj, struct cryptocop_operation *operation);
static int cryptocop_job_queue_init(void);
static void cryptocop_job_queue_close(void);
static int create_md5_pad(int alloc_flag, unsigned long long hashed_length, char **pad, size_t *pad_length);
static int create_sha1_pad(int alloc_flag, unsigned long long hashed_length, char **pad, size_t *pad_length);
static int transform_ok(struct cryptocop_transform_init *tinit);
static struct cryptocop_session *get_session(cryptocop_session_id sid);
static struct cryptocop_transform_ctx *get_transform_ctx(struct cryptocop_session *sess, cryptocop_tfrm_id tid);
static void delete_internal_operation(struct cryptocop_int_operation *iop);
static void get_aes_decrypt_key(unsigned char *dec_key, const unsigned  char *key, unsigned int keylength);
static int init_stream_coprocessor(void);
static void __exit exit_stream_coprocessor(void);
#define DEBUG(s) s
#define DEBUG_API(s) s
static void print_cryptocop_operation(struct cryptocop_operation *cop);
static void print_dma_descriptors(struct cryptocop_int_operation *iop);
static void print_strcop_crypto_op(struct strcop_crypto_op *cop);
static void print_lock_status(void);
static void print_user_dma_lists(struct cryptocop_dma_list_operation *dma_op);
#define assert(s) do while(0);
#define DEBUG(s)
#define DEBUG_API(s)
#define assert(s)
#define DES_BLOCK_LENGTH   (8)
#define AES_BLOCK_LENGTH   (16)
#define MD5_BLOCK_LENGTH   (64)
#define SHA1_BLOCK_LENGTH  (64)
#define CSUM_BLOCK_LENGTH  (2)
#define MD5_STATE_LENGTH   (16)
#define SHA1_STATE_LENGTH  (20)
#define CRYPTOCOP_MAJOR    (254)
#define CRYPTOCOP_MINOR    (0)
const struct file_operations cryptocop_fops = ;
static void free_cdesc(struct cryptocop_dma_desc *cdesc)
static struct cryptocop_dma_desc *alloc_cdesc(int alloc_flag)
static void setup_descr_chain(struct cryptocop_dma_desc *cd)
static int create_pad_descriptor(struct cryptocop_tfrm_ctx *tc, struct cryptocop_dma_desc **pad_desc, int alloc_flag)
static int setup_key_dl_desc(struct cryptocop_tfrm_ctx *tc, struct cryptocop_dma_desc **kd, int alloc_flag)
static int setup_cipher_iv_desc(struct cryptocop_tfrm_ctx *tc, struct cryptocop_dma_desc **id, int alloc_flag)
static int create_input_descriptors(struct cryptocop_operation *operation, struct cryptocop_tfrm_ctx *tc, struct cryptocop_dma_desc **id, int alloc_flag)
static int create_output_descriptors(struct cryptocop_operation *operation, int *iniov_ix, int *iniov_offset, size_t desc_len, struct cryptocop_dma_desc **current_out_cdesc, struct strcop_meta_out *meta_out, int alloc_flag)
static int append_input_descriptors(struct cryptocop_operation *operation, struct cryptocop_dma_desc **current_in_cdesc, struct cryptocop_dma_desc **current_out_cdesc, struct cryptocop_tfrm_ctx *tc, int alloc_flag)
static int cryptocop_setup_dma_list(struct cryptocop_operation *operation, struct cryptocop_int_operation **int_op, int alloc_flag)
static void delete_internal_operation(struct cryptocop_int_operation *iop)
#define MD5_MIN_PAD_LENGTH (9)
#define MD5_PAD_LENGTH_FIELD_LENGTH (8)
static int create_md5_pad(int alloc_flag, unsigned long long hashed_length, char **pad, size_t *pad_length)
#define SHA1_MIN_PAD_LENGTH (9)
#define SHA1_PAD_LENGTH_FIELD_LENGTH (8)
static int create_sha1_pad(int alloc_flag, unsigned long long hashed_length, char **pad, size_t *pad_length)
static int transform_ok(struct cryptocop_transform_init *tinit)
int cryptocop_new_session(cryptocop_session_id *sid, struct cryptocop_transform_init *tinit, int alloc_flag)
int cryptocop_free_session(cryptocop_session_id sid)
static struct cryptocop_session *get_session(cryptocop_session_id sid)
static struct cryptocop_transform_ctx *get_transform_ctx(struct cryptocop_session *sess, cryptocop_tfrm_id tid)
static const u8 aes_sbox[256] = ;
static u32 round_constant[11] = ;
static u32 aes_ks_subword(const u32 w)
static void get_aes_decrypt_key(unsigned char *dec_key, const unsigned  char *key, unsigned int keylength)
int cryptocop_job_queue_insert_csum(struct cryptocop_operation *operation)
int cryptocop_job_queue_insert_crypto(struct cryptocop_operation *operation)
int cryptocop_job_queue_insert_user_job(struct cryptocop_operation *operation)
static int cryptocop_job_queue_insert(cryptocop_queue_priority prio, struct cryptocop_operation *operation)
static void cryptocop_do_tasklet(unsigned long unused);
DECLARE_TASKLET (cryptocop_tasklet, cryptocop_do_tasklet, 0);
static void cryptocop_do_tasklet(unsigned long unused)
static irqreturn_t
dma_done_interrupt(int irq, void *dev_id)
static int init_cryptocop(void)
static void release_cryptocop(void)
static int cryptocop_job_queue_init(void)
static void cryptocop_job_queue_close(void)
static void cryptocop_start_job(void)
static int cryptocop_job_setup(struct cryptocop_prio_job **pj, struct cryptocop_operation *operation)
static int cryptocop_open(struct inode *inode, struct file *filp)
static int cryptocop_release(struct inode *inode, struct file *filp)
static int cryptocop_ioctl_close_session(struct inode *inode, struct file *filp,
unsigned int cmd, unsigned long arg)
static void ioctl_process_job_callback(struct cryptocop_operation *op, void*cb_data)
#define CRYPTOCOP_IOCTL_CIPHER_TID  (1)
#define CRYPTOCOP_IOCTL_DIGEST_TID  (2)
#define CRYPTOCOP_IOCTL_CSUM_TID    (3)
static size_t first_cfg_change_ix(struct strcop_crypto_op *crp_op)
static size_t next_cfg_change_ix(struct strcop_crypto_op *crp_op, size_t ix)
static int map_pages_to_iovec(struct iovec *iov, int iovlen, int *iovix, struct page **pages, int nopages, int *pageix, int *pageoffset, int map_length )
static int cryptocop_ioctl_process(struct inode *inode, struct file *filp, unsigned int cmd, unsigned long arg)
static int cryptocop_ioctl_create_session(struct inode *inode, struct file *filp, unsigned int cmd, unsigned long arg)
static long cryptocop_ioctl_unlocked(struct inode *inode,
struct file *filp, unsigned int cmd, unsigned long arg)
static long
cryptocop_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static void print_dma_descriptors(struct cryptocop_int_operation *iop)
static void print_strcop_crypto_op(struct strcop_crypto_op *cop)
static void print_cryptocop_operation(struct cryptocop_operation *cop)
static void print_user_dma_lists(struct cryptocop_dma_list_operation *dma_op)
static void print_lock_status(void)
static const char cryptocop_name[] = "ETRAX FS stream co-processor";
static int init_stream_coprocessor(void)
static void __exit exit_stream_coprocessor(void)
module_init(init_stream_coprocessor);
module_exit(exit_stream_coprocessor);
