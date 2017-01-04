#define VHOST_NET_WEIGHT 0x80000
enum ;
enum vhost_net_poll_state ;
struct vhost_net ;
static int move_iovec_hdr(struct iovec *from, struct iovec *to,
size_t len, int iov_count)
static void copy_iovec_hdr(const struct iovec *from, struct iovec *to,
size_t len, int iovcount)
static void tx_poll_stop(struct vhost_net *net)
static void tx_poll_start(struct vhost_net *net, struct socket *sock)
static void handle_tx(struct vhost_net *net)
static int peek_head_len(struct sock *sk)
static int get_rx_bufs(struct vhost_virtqueue *vq,
struct vring_used_elem *heads,
int datalen,
unsigned *iovcount,
struct vhost_log *log,
unsigned *log_num,
unsigned int quota)
static void handle_rx(struct vhost_net *net)
static void handle_tx_kick(struct vhost_work *work)
static void handle_rx_kick(struct vhost_work *work)
static void handle_tx_net(struct vhost_work *work)
static void handle_rx_net(struct vhost_work *work)
static int vhost_net_open(struct inode *inode, struct file *f)
static void vhost_net_disable_vq(struct vhost_net *n,
struct vhost_virtqueue *vq)
static void vhost_net_enable_vq(struct vhost_net *n,
struct vhost_virtqueue *vq)
static struct socket *vhost_net_stop_vq(struct vhost_net *n,
struct vhost_virtqueue *vq)
static void vhost_net_stop(struct vhost_net *n, struct socket **tx_sock,
struct socket **rx_sock)
static void vhost_net_flush_vq(struct vhost_net *n, int index)
static void vhost_net_flush(struct vhost_net *n)
static int vhost_net_release(struct inode *inode, struct file *f)
static struct socket *get_raw_socket(int fd)
static struct socket *get_tap_socket(int fd)
static struct socket *get_socket(int fd)
static long vhost_net_set_backend(struct vhost_net *n, unsigned index, int fd)
static long vhost_net_reset_owner(struct vhost_net *n)
static int vhost_net_set_features(struct vhost_net *n, u64 features)
static long vhost_net_ioctl(struct file *f, unsigned int ioctl,
unsigned long arg)
static long vhost_net_compat_ioctl(struct file *f, unsigned int ioctl,
unsigned long arg)
static const struct file_operations vhost_net_fops = ;
static struct miscdevice vhost_net_misc = ;
static int vhost_net_init(void)
module_init(vhost_net_init);
static void vhost_net_exit(void)
module_exit(vhost_net_exit);
MODULE_VERSION("0.0.1");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Michael S. Tsirkin");
MODULE_DESCRIPTION("Host kernel accelerator for virtio net");
