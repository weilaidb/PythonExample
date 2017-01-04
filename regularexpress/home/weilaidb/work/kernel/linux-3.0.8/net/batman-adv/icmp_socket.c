static struct socket_client *socket_client_hash[256];
static void bat_socket_add_packet(struct socket_client *socket_client,
struct icmp_packet_rr *icmp_packet,
size_t icmp_len);
void bat_socket_init(void)
static int bat_socket_open(struct inode *inode, struct file *file)
static int bat_socket_release(struct inode *inode, struct file *file)
static ssize_t bat_socket_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t bat_socket_write(struct file *file, const char __user *buff,
size_t len, loff_t *off)
static unsigned int bat_socket_poll(struct file *file, poll_table *wait)
static const struct file_operations fops = ;
int bat_socket_setup(struct bat_priv *bat_priv)
static void bat_socket_add_packet(struct socket_client *socket_client,
struct icmp_packet_rr *icmp_packet,
size_t icmp_len)
void bat_socket_receive_packet(struct icmp_packet_rr *icmp_packet,
size_t icmp_len)
