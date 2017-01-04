#define SNDRV_SEQ_GLOBAL_CLIENTS	16
#define SNDRV_SEQ_CLIENTS_PER_CARD	4
#define SNDRV_SEQ_DYNAMIC_CLIENTS_BEGIN	128
#define SNDRV_SEQ_LFLG_INPUT	0x0001
#define SNDRV_SEQ_LFLG_OUTPUT	0x0002
#define SNDRV_SEQ_LFLG_OPEN	(SNDRV_SEQ_LFLG_INPUT|SNDRV_SEQ_LFLG_OUTPUT)
static DEFINE_SPINLOCK(clients_lock);
static DEFINE_MUTEX(register_mutex);
static char clienttablock[SNDRV_SEQ_MAX_CLIENTS];
static struct snd_seq_client *clienttab[SNDRV_SEQ_MAX_CLIENTS];
static struct snd_seq_usage client_usage;
static int bounce_error_event(struct snd_seq_client *client,
struct snd_seq_event *event,
int err, int atomic, int hop);
static int snd_seq_deliver_single_event(struct snd_seq_client *client,
struct snd_seq_event *event,
int filter, int atomic, int hop);
static inline mm_segment_t snd_enter_user(void)
static inline void snd_leave_user(mm_segment_t fs)
static inline unsigned short snd_seq_file_flags(struct file *file)
static inline int snd_seq_write_pool_allocated(struct snd_seq_client *client)
static struct snd_seq_client *clientptr(int clientid)
struct snd_seq_client *snd_seq_client_use_ptr(int clientid)
static void usage_alloc(struct snd_seq_usage *res, int num)
static void usage_free(struct snd_seq_usage *res, int num)
int __init client_init_data(void)
static struct snd_seq_client *seq_create_client1(int client_index, int poolsize)
static int seq_free_client1(struct snd_seq_client *client)
static void seq_free_client(struct snd_seq_client * client)
static int snd_seq_open(struct inode *inode, struct file *file)
static int snd_seq_release(struct inode *inode, struct file *file)
static ssize_t snd_seq_read(struct file *file, char __user *buf, size_t count,
loff_t *offset)
static int check_port_perm(struct snd_seq_client_port *port, unsigned int flags)
static struct snd_seq_client *get_event_dest_client(struct snd_seq_event *event,
int filter)
static int bounce_error_event(struct snd_seq_client *client,
struct snd_seq_event *event,
int err, int atomic, int hop)
static int update_timestamp_of_queue(struct snd_seq_event *event,
int queue, int real_time)
static int snd_seq_deliver_single_event(struct snd_seq_client *client,
struct snd_seq_event *event,
int filter, int atomic, int hop)
static int deliver_to_subscribers(struct snd_seq_client *client,
struct snd_seq_event *event,
int atomic, int hop)
static int port_broadcast_event(struct snd_seq_client *client,
struct snd_seq_event *event,
int atomic, int hop)
static int broadcast_event(struct snd_seq_client *client,
struct snd_seq_event *event, int atomic, int hop)
static int multicast_event(struct snd_seq_client *client, struct snd_seq_event *event,
int atomic, int hop)
static int snd_seq_deliver_event(struct snd_seq_client *client, struct snd_seq_event *event,
int atomic, int hop)
int snd_seq_dispatch_event(struct snd_seq_event_cell *cell, int atomic, int hop)
static int snd_seq_client_enqueue_event(struct snd_seq_client *client,
struct snd_seq_event *event,
struct file *file, int blocking,
int atomic, int hop)
static int check_event_type_and_length(struct snd_seq_event *ev)
static ssize_t snd_seq_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static unsigned int snd_seq_poll(struct file *file, poll_table * wait)
static int snd_seq_ioctl_system_info(struct snd_seq_client *client, void __user *arg)
static int snd_seq_ioctl_running_mode(struct snd_seq_client *client, void __user *arg)
static void get_client_info(struct snd_seq_client *cptr,
struct snd_seq_client_info *info)
static int snd_seq_ioctl_get_client_info(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_client_info(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_create_port(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_delete_port(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_port_info(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_port_info(struct snd_seq_client *client,
void __user *arg)
#define PERM_RD		(SNDRV_SEQ_PORT_CAP_READ|SNDRV_SEQ_PORT_CAP_SUBS_READ)
#define PERM_WR		(SNDRV_SEQ_PORT_CAP_WRITE|SNDRV_SEQ_PORT_CAP_SUBS_WRITE)
static int check_subscription_permission(struct snd_seq_client *client,
struct snd_seq_client_port *sport,
struct snd_seq_client_port *dport,
struct snd_seq_port_subscribe *subs)
int snd_seq_client_notify_subscription(int client, int port,
struct snd_seq_port_subscribe *info,
int evtype)
static int snd_seq_ioctl_subscribe_port(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_unsubscribe_port(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_create_queue(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_delete_queue(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_queue_info(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_queue_info(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_named_queue(struct snd_seq_client *client, void __user *arg)
static int snd_seq_ioctl_get_queue_status(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_queue_tempo(struct snd_seq_client *client,
void __user *arg)
int snd_seq_set_queue_tempo(int client, struct snd_seq_queue_tempo *tempo)
EXPORT_SYMBOL(snd_seq_set_queue_tempo);
static int snd_seq_ioctl_set_queue_tempo(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_queue_timer(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_queue_timer(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_queue_client(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_queue_client(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_client_pool(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_set_client_pool(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_remove_events(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_get_subscription(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_query_subs(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_query_next_client(struct snd_seq_client *client,
void __user *arg)
static int snd_seq_ioctl_query_next_port(struct snd_seq_client *client,
void __user *arg)
static struct seq_ioctl_table  ioctl_tables[] = ;
static int snd_seq_do_ioctl(struct snd_seq_client *client, unsigned int cmd,
void __user *arg)
static long snd_seq_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
#define snd_seq_ioctl_compat	NULL
int snd_seq_create_kernel_client(struct snd_card *card, int client_index,
const char *name_fmt, ...)
EXPORT_SYMBOL(snd_seq_create_kernel_client);
int snd_seq_delete_kernel_client(int client)
EXPORT_SYMBOL(snd_seq_delete_kernel_client);
static int kernel_client_enqueue(int client, struct snd_seq_event *ev,
struct file *file, int blocking,
int atomic, int hop)
int snd_seq_kernel_client_enqueue(int client, struct snd_seq_event * ev,
int atomic, int hop)
EXPORT_SYMBOL(snd_seq_kernel_client_enqueue);
int snd_seq_kernel_client_enqueue_blocking(int client, struct snd_seq_event * ev,
struct file *file,
int atomic, int hop)
EXPORT_SYMBOL(snd_seq_kernel_client_enqueue_blocking);
int snd_seq_kernel_client_dispatch(int client, struct snd_seq_event * ev,
int atomic, int hop)
EXPORT_SYMBOL(snd_seq_kernel_client_dispatch);
int snd_seq_kernel_client_ctl(int clientid, unsigned int cmd, void *arg)
EXPORT_SYMBOL(snd_seq_kernel_client_ctl);
int snd_seq_kernel_client_write_poll(int clientid, struct file *file, poll_table *wait)
EXPORT_SYMBOL(snd_seq_kernel_client_write_poll);
static void snd_seq_info_dump_subscribers(struct snd_info_buffer *buffer,
struct snd_seq_port_subs_info *group,
int is_src, char *msg)
#define FLAG_PERM_RD(perm) ((perm) & SNDRV_SEQ_PORT_CAP_READ ? ((perm) & SNDRV_SEQ_PORT_CAP_SUBS_READ ? 'R' : 'r') : '-')
#define FLAG_PERM_WR(perm) ((perm) & SNDRV_SEQ_PORT_CAP_WRITE ? ((perm) & SNDRV_SEQ_PORT_CAP_SUBS_WRITE ? 'W' : 'w') : '-')
#define FLAG_PERM_EX(perm) ((perm) & SNDRV_SEQ_PORT_CAP_NO_EXPORT ? '-' : 'e')
#define FLAG_PERM_DUPLEX(perm) ((perm) & SNDRV_SEQ_PORT_CAP_DUPLEX ? 'X' : '-')
static void snd_seq_info_dump_ports(struct snd_info_buffer *buffer,
struct snd_seq_client *client)
void snd_seq_info_clients_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static const struct file_operations snd_seq_f_ops =
;
int __init snd_sequencer_device_init(void)
void __exit snd_sequencer_device_done(void)
