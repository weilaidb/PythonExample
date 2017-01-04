#define _LARGEFILE64_SOURCE
#define _GNU_SOURCE
typedef unsigned long long u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
#define PAGE_PRESENT 0x7
#define BRIDGE_PFX "bridge:"
#define SIOCBRADDIF	0x89a2
#define DEVICE_PAGES 256
#define VIRTQUEUE_NUM 256
static bool verbose;
#define verbose(args...) \
do  while(0)
static void *guest_base;
static unsigned long guest_limit, guest_max;
static int lguest_fd;
static unsigned int __thread cpu_id;
struct device_list ;
static struct device_list devices;
struct device ;
struct virtqueue ;
static char **main_args;
static struct termios orig_term;
#define wmb() __asm__ __volatile__("" : : : "memory")
#define mb() __asm__ __volatile__("" : : : "memory")
#define convert(iov, type) \
((type *)_convert((iov), sizeof(type), __alignof__(type), #type))
static void *_convert(struct iovec *iov, size_t size, size_t align,
const char *name)
#define lg_last_avail(vq)	((vq)->last_avail_idx)
#define cpu_to_le16(v16) (v16)
#define cpu_to_le32(v32) (v32)
#define cpu_to_le64(v64) (v64)
#define le16_to_cpu(v16) (v16)
#define le32_to_cpu(v32) (v32)
#define le64_to_cpu(v64) (v64)
static bool iov_empty(const struct iovec iov[], unsigned int num_iov)
static void iov_consume(struct iovec iov[], unsigned num_iov, unsigned len)
static u8 *get_feature_bits(struct device *dev)
static void *from_guest_phys(unsigned long addr)
static unsigned long to_guest_phys(const void *addr)
static int open_or_die(const char *name, int flags)
static void *map_zeroed_pages(unsigned int num)
static void *get_pages(unsigned int num)
static void map_at(int fd, void *addr, unsigned long offset, unsigned long len)
static unsigned long map_elf(int elf_fd, const Elf32_Ehdr *ehdr)
static unsigned long load_bzimage(int fd)
static unsigned long load_kernel(int fd)
static inline unsigned long page_align(unsigned long addr)
static unsigned long load_initrd(const char *name, unsigned long mem)
static void concat(char *dst, char *args[])
static void tell_kernel(unsigned long start)
static void *_check_pointer(unsigned long addr, unsigned int size,
unsigned int line)
#define check_pointer(addr,size) _check_pointer(addr, size, __LINE__)
static unsigned next_desc(struct vring_desc *desc,
unsigned int i, unsigned int max)
static void trigger_irq(struct virtqueue *vq)
static unsigned wait_for_vq_desc(struct virtqueue *vq,
struct iovec iov[],
unsigned int *out_num, unsigned int *in_num)
static void add_used(struct virtqueue *vq, unsigned int head, int len)
static void add_used_and_trigger(struct virtqueue *vq, unsigned head, int len)
struct console_abort ;
static void console_input(struct virtqueue *vq)
static void console_output(struct virtqueue *vq)
struct net_info ;
static void net_output(struct virtqueue *vq)
static bool will_block(int fd)
static void net_input(struct virtqueue *vq)
static int do_thread(void *_vq)
static void kill_launcher(int signal)
static void reset_device(struct device *dev)
static void create_thread(struct virtqueue *vq)
static void start_device(struct device *dev)
static void cleanup_devices(void)
static void update_device_status(struct device *dev)
static void handle_output(unsigned long addr)
static u8 *device_config(const struct device *dev)
static struct lguest_device_desc *new_dev_desc(u16 type)
static void add_virtqueue(struct device *dev, unsigned int num_descs,
void (*service)(struct virtqueue *))
static void add_feature(struct device *dev, unsigned bit)
static void set_config(struct device *dev, unsigned len, const void *conf)
static struct device *new_device(const char *name, u16 type)
static void setup_console(void)
static u32 str2ip(const char *ipaddr)
static void str2mac(const char *macaddr, unsigned char mac[6])
static void add_to_bridge(int fd, const char *if_name, const char *br_name)
static void configure_device(int fd, const char *tapif, u32 ipaddr)
static int get_tun_device(char tapif[IFNAMSIZ])
static void setup_tun_net(char *arg)
struct vblk_info ;
static void blk_request(struct virtqueue *vq)
static void setup_block_file(const char *filename)
struct rng_info ;
static void rng_input(struct virtqueue *vq)
static void setup_rng(void)
static void __attribute__((noreturn)) restart_guest(void)
static void __attribute__((noreturn)) run_guest(void)
static struct option opts[] = ;
static void usage(void)
int main(int argc, char *argv[])
