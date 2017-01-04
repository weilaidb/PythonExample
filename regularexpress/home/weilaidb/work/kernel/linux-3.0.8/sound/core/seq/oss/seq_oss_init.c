static int maxqlen = SNDRV_SEQ_OSS_MAX_QLEN;
module_param(maxqlen, int, 0444);
MODULE_PARM_DESC(maxqlen, "maximum queue length");
static int system_client = -1;
static int system_port = -1;
static int num_clients;
static struct seq_oss_devinfo *client_table[SNDRV_SEQ_OSS_MAX_CLIENTS];
static int receive_announce(struct snd_seq_event *ev, int direct, void *private, int atomic, int hop);
static int translate_mode(struct file *file);
static int create_port(struct seq_oss_devinfo *dp);
static int delete_port(struct seq_oss_devinfo *dp);
static int alloc_seq_queue(struct seq_oss_devinfo *dp);
static int delete_seq_queue(int queue);
static void free_devinfo(void *private);
#define call_ctl(type,rec) snd_seq_kernel_client_ctl(system_client, type, rec)
int __init
snd_seq_oss_create_client(void)
static int
receive_announce(struct snd_seq_event *ev, int direct, void *private, int atomic, int hop)
int
snd_seq_oss_delete_client(void)
int
snd_seq_oss_open(struct file *file, int level)
static int
translate_mode(struct file *file)
static int
create_port(struct seq_oss_devinfo *dp)
static int
delete_port(struct seq_oss_devinfo *dp)
static int
alloc_seq_queue(struct seq_oss_devinfo *dp)
static int
delete_seq_queue(int queue)
static void
free_devinfo(void *private)
void
snd_seq_oss_release(struct seq_oss_devinfo *dp)
void
snd_seq_oss_drain_write(struct seq_oss_devinfo *dp)
void
snd_seq_oss_reset(struct seq_oss_devinfo *dp)
char *
enabled_str(int bool)
static char *
filemode_str(int val)
void
snd_seq_oss_system_info_read(struct snd_info_buffer *buf)
