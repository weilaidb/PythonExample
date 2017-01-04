static int snd_emux_open_seq_oss(struct snd_seq_oss_arg *arg, void *closure);
static int snd_emux_close_seq_oss(struct snd_seq_oss_arg *arg);
static int snd_emux_ioctl_seq_oss(struct snd_seq_oss_arg *arg, unsigned int cmd,
unsigned long ioarg);
static int snd_emux_load_patch_seq_oss(struct snd_seq_oss_arg *arg, int format,
const char __user *buf, int offs, int count);
static int snd_emux_reset_seq_oss(struct snd_seq_oss_arg *arg);
static int snd_emux_event_oss_input(struct snd_seq_event *ev, int direct,
void *private, int atomic, int hop);
static void reset_port_mode(struct snd_emux_port *port, int midi_mode);
static void emuspec_control(struct snd_emux *emu, struct snd_emux_port *port,
int cmd, unsigned char *event, int atomic, int hop);
static void gusspec_control(struct snd_emux *emu, struct snd_emux_port *port,
int cmd, unsigned char *event, int atomic, int hop);
static void fake_event(struct snd_emux *emu, struct snd_emux_port *port,
int ch, int param, int val, int atomic, int hop);
static struct snd_seq_oss_callback oss_callback = ;
void
snd_emux_init_seq_oss(struct snd_emux *emu)
void
snd_emux_detach_seq_oss(struct snd_emux *emu)
#define SF_CLIENT_NO(p)	((p) + 0x1000)
static int
snd_emux_open_seq_oss(struct snd_seq_oss_arg *arg, void *closure)
#define DEFAULT_DRUM_FLAGS	((1<<9) | (1<<25))
static void
reset_port_mode(struct snd_emux_port *port, int midi_mode)
static int
snd_emux_close_seq_oss(struct snd_seq_oss_arg *arg)
static int
snd_emux_load_patch_seq_oss(struct snd_seq_oss_arg *arg, int format,
const char __user *buf, int offs, int count)
static int
snd_emux_ioctl_seq_oss(struct snd_seq_oss_arg *arg, unsigned int cmd, unsigned long ioarg)
static int
snd_emux_reset_seq_oss(struct snd_seq_oss_arg *arg)
static int
snd_emux_event_oss_input(struct snd_seq_event *ev, int direct, void *private_data,
int atomic, int hop)
static void
emuspec_control(struct snd_emux *emu, struct snd_emux_port *port, int cmd,
unsigned char *event, int atomic, int hop)
static void
gusspec_control(struct snd_emux *emu, struct snd_emux_port *port, int cmd,
unsigned char *event, int atomic, int hop)
static void
fake_event(struct snd_emux *emu, struct snd_emux_port *port, int ch, int param, int val, int atomic, int hop)
