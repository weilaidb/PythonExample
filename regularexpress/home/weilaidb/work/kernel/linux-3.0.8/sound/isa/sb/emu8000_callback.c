static struct snd_emux_voice *get_voice(struct snd_emux *emu,
struct snd_emux_port *port);
static int start_voice(struct snd_emux_voice *vp);
static void trigger_voice(struct snd_emux_voice *vp);
static void release_voice(struct snd_emux_voice *vp);
static void update_voice(struct snd_emux_voice *vp, int update);
static void reset_voice(struct snd_emux *emu, int ch);
static void terminate_voice(struct snd_emux_voice *vp);
static void sysex(struct snd_emux *emu, char *buf, int len, int parsed,
struct snd_midi_channel_set *chset);
static int oss_ioctl(struct snd_emux *emu, int cmd, int p1, int p2);
static int load_fx(struct snd_emux *emu, int type, int mode,
const void __user *buf, long len);
static void set_pitch(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_volume(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_pan(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_fmmod(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_tremfreq(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_fm2frq2(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void set_filterQ(struct snd_emu8000 *hw, struct snd_emux_voice *vp);
static void snd_emu8000_tweak_voice(struct snd_emu8000 *emu, int ch);
#define LIMITVALUE(x, a, b) do  while (0)
#define LIMITMAX(x, a) do  while (0)
static struct snd_emux_operators emu8000_ops = ;
void
snd_emu8000_ops_setup(struct snd_emu8000 *hw)
static void
release_voice(struct snd_emux_voice *vp)
static void
terminate_voice(struct snd_emux_voice *vp)
static void
update_voice(struct snd_emux_voice *vp, int update)
static struct snd_emux_voice *
get_voice(struct snd_emux *emu, struct snd_emux_port *port)
static int
start_voice(struct snd_emux_voice *vp)
static void
trigger_voice(struct snd_emux_voice *vp)
static void
reset_voice(struct snd_emux *emu, int ch)
static void
set_pitch(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
set_volume(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
set_pan(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
#define MOD_SENSE 18
static void
set_fmmod(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
set_tremfreq(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
set_fm2frq2(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
set_filterQ(struct snd_emu8000 *hw, struct snd_emux_voice *vp)
static void
snd_emu8000_tweak_voice(struct snd_emu8000 *emu, int i)
static void
sysex(struct snd_emux *emu, char *buf, int len, int parsed, struct snd_midi_channel_set *chset)
static int
oss_ioctl(struct snd_emux *emu, int cmd, int p1, int p2)
#define SNDRV_EMU8000_LOAD_CHORUS_FX	0x10
#define SNDRV_EMU8000_LOAD_REVERB_FX	0x11
static int
load_fx(struct snd_emux *emu, int type, int mode, const void __user *buf, long len)
