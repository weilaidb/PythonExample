# include <linux/irq.h>
#define INPUT_POOL_WORDS 128
#define OUTPUT_POOL_WORDS 32
#define SEC_XFER_SIZE 512
#define EXTRACT_SIZE 10
static int random_read_wakeup_thresh = 64;
static int random_write_wakeup_thresh = 128;
static int trickle_thresh __read_mostly = INPUT_POOL_WORDS * 28;
static DEFINE_PER_CPU(int, trickle_count);
static struct poolinfo  poolinfo_table[] = ;
#define POOLBITS	poolwords*32
#define POOLBYTES	poolwords*4
static DECLARE_WAIT_QUEUE_HEAD(random_read_wait);
static DECLARE_WAIT_QUEUE_HEAD(random_write_wait);
static struct fasync_struct *fasync;
struct entropy_store;
struct entropy_store ;
static __u32 input_pool_data[INPUT_POOL_WORDS];
static __u32 blocking_pool_data[OUTPUT_POOL_WORDS];
static __u32 nonblocking_pool_data[OUTPUT_POOL_WORDS];
static struct entropy_store input_pool = ;
static struct entropy_store blocking_pool = ;
static struct entropy_store nonblocking_pool = ;
static void mix_pool_bytes_extract(struct entropy_store *r, const void *in,
int nbytes, __u8 out[64])
static void mix_pool_bytes(struct entropy_store *r, const void *in, int bytes)
static void credit_entropy_bits(struct entropy_store *r, int nbits)
struct timer_rand_state ;
static struct timer_rand_state *irq_timer_state[NR_IRQS];
static struct timer_rand_state *get_timer_rand_state(unsigned int irq)
static void set_timer_rand_state(unsigned int irq,
struct timer_rand_state *state)
static struct timer_rand_state *get_timer_rand_state(unsigned int irq)
static void set_timer_rand_state(unsigned int irq,
struct timer_rand_state *state)
static struct timer_rand_state input_timer_state;
static void add_timer_randomness(struct timer_rand_state *state, unsigned num)
void add_input_randomness(unsigned int type, unsigned int code,
unsigned int value)
EXPORT_SYMBOL_GPL(add_input_randomness);
void add_interrupt_randomness(int irq)
void add_disk_randomness(struct gendisk *disk)
static ssize_t extract_entropy(struct entropy_store *r, void *buf,
size_t nbytes, int min, int rsvd);
static void xfer_secondary_pool(struct entropy_store *r, size_t nbytes)
static size_t account(struct entropy_store *r, size_t nbytes, int min,
int reserved)
static void extract_buf(struct entropy_store *r, __u8 *out)
static ssize_t extract_entropy(struct entropy_store *r, void *buf,
size_t nbytes, int min, int reserved)
static ssize_t extract_entropy_user(struct entropy_store *r, void __user *buf,
size_t nbytes)
void get_random_bytes(void *buf, int nbytes)
EXPORT_SYMBOL(get_random_bytes);
static void init_std_data(struct entropy_store *r)
static int rand_initialize(void)
module_init(rand_initialize);
void rand_initialize_irq(int irq)
void rand_initialize_disk(struct gendisk *disk)
static ssize_t
random_read(struct file *file, char __user *buf, size_t nbytes, loff_t *ppos)
static ssize_t
urandom_read(struct file *file, char __user *buf, size_t nbytes, loff_t *ppos)
static unsigned int
random_poll(struct file *file, poll_table * wait)
static int
write_pool(struct entropy_store *r, const char __user *buffer, size_t count)
static ssize_t random_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static long random_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static int random_fasync(int fd, struct file *filp, int on)
const struct file_operations random_fops = ;
const struct file_operations urandom_fops = ;
void generate_random_uuid(unsigned char uuid_out[16])
EXPORT_SYMBOL(generate_random_uuid);
static int min_read_thresh = 8, min_write_thresh;
static int max_read_thresh = INPUT_POOL_WORDS * 32;
static int max_write_thresh = INPUT_POOL_WORDS * 32;
static char sysctl_bootid[16];
static int proc_do_uuid(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int sysctl_poolsize = INPUT_POOL_WORDS * 32;
ctl_table random_table[] = ;
static u32 random_int_secret[MD5_MESSAGE_BYTES / 4] ____cacheline_aligned;
static int __init random_int_secret_init(void)
late_initcall(random_int_secret_init);
DEFINE_PER_CPU(__u32 [MD5_DIGEST_WORDS], get_random_int_hash);
unsigned int get_random_int(void)
unsigned long
randomize_range(unsigned long start, unsigned long end, unsigned long len)
