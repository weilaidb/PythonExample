#define SNDRV_SEQ_OSS_MAX_MIDI_NAME	30
struct seq_oss_midi ;
static int max_midi_devs;
static struct seq_oss_midi *midi_devs[SNDRV_SEQ_OSS_MAX_MIDI_DEVS];
static DEFINE_SPINLOCK(register_lock);
static struct seq_oss_midi *get_mdev(int dev);
static struct seq_oss_midi *get_mididev(struct seq_oss_devinfo *dp, int dev);
static int send_synth_event(struct seq_oss_devinfo *dp, struct snd_seq_event *ev, int dev);
static int send_midi_event(struct seq_oss_devinfo *dp, struct snd_seq_event *ev, struct seq_oss_midi *mdev);
int __init
snd_seq_oss_midi_lookup_ports(int client)
static struct seq_oss_midi *
get_mdev(int dev)
static struct seq_oss_midi *
find_slot(int client, int port)
#define PERM_WRITE (SNDRV_SEQ_PORT_CAP_WRITE|SNDRV_SEQ_PORT_CAP_SUBS_WRITE)
#define PERM_READ (SNDRV_SEQ_PORT_CAP_READ|SNDRV_SEQ_PORT_CAP_SUBS_READ)
int
snd_seq_oss_midi_check_new_port(struct snd_seq_port_info *pinfo)
int
snd_seq_oss_midi_check_exit_port(int client, int port)
void
snd_seq_oss_midi_clear_all(void)
void
snd_seq_oss_midi_setup(struct seq_oss_devinfo *dp)
void
snd_seq_oss_midi_cleanup(struct seq_oss_devinfo *dp)
void
snd_seq_oss_midi_open_all(struct seq_oss_devinfo *dp, int file_mode)
static struct seq_oss_midi *
get_mididev(struct seq_oss_devinfo *dp, int dev)
int
snd_seq_oss_midi_open(struct seq_oss_devinfo *dp, int dev, int fmode)
int
snd_seq_oss_midi_close(struct seq_oss_devinfo *dp, int dev)
int
snd_seq_oss_midi_filemode(struct seq_oss_devinfo *dp, int dev)
void
snd_seq_oss_midi_reset(struct seq_oss_devinfo *dp, int dev)
void
snd_seq_oss_midi_get_addr(struct seq_oss_devinfo *dp, int dev, struct snd_seq_addr *addr)
int
snd_seq_oss_midi_input(struct snd_seq_event *ev, int direct, void *private_data)
static int
send_synth_event(struct seq_oss_devinfo *dp, struct snd_seq_event *ev, int dev)
static int
send_midi_event(struct seq_oss_devinfo *dp, struct snd_seq_event *ev, struct seq_oss_midi *mdev)
int
snd_seq_oss_midi_putc(struct seq_oss_devinfo *dp, int dev, unsigned char c, struct snd_seq_event *ev)
int
snd_seq_oss_midi_make_info(struct seq_oss_devinfo *dp, int dev, struct midi_info *inf)
static char *
capmode_str(int val)
void
snd_seq_oss_midi_info_read(struct snd_info_buffer *buf)
