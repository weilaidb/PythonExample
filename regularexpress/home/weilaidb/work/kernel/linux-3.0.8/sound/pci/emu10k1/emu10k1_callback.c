enum ;
struct best_voice ;
static void lookup_voices(struct snd_emux *emux, struct snd_emu10k1 *hw,
struct best_voice *best, int active_only);
static struct snd_emux_voice *get_voice(struct snd_emux *emux,
struct snd_emux_port *port);
static int start_voice(struct snd_emux_voice *vp);
static void trigger_voice(struct snd_emux_voice *vp);
static void release_voice(struct snd_emux_voice *vp);
static void update_voice(struct snd_emux_voice *vp, int update);
static void terminate_voice(struct snd_emux_voice *vp);
static void free_voice(struct snd_emux_voice *vp);
static void set_fmmod(struct snd_emu10k1 *hw, struct snd_emux_voice *vp);
static void set_fm2frq2(struct snd_emu10k1 *hw, struct snd_emux_voice *vp);
static void set_filterQ(struct snd_emu10k1 *hw, struct snd_emux_voice *vp);
#define LIMITVALUE(x, a, b) do  while (0)
#define LIMITMAX(x, a) do  while (0)
static struct snd_emux_operators emu10k1_ops = ;
void
snd_emu10k1_ops_setup(struct snd_emux *emux)
int
snd_emu10k1_synth_get_voice(struct snd_emu10k1 *hw)
static void
release_voice(struct snd_emux_voice *vp)
static void
terminate_voice(struct snd_emux_voice *vp)
static void
free_voice(struct snd_emux_voice *vp)
static void
update_voice(struct snd_emux_voice *vp, int update)
static void
lookup_voices(struct snd_emux *emu, struct snd_emu10k1 *hw,
struct best_voice *best, int active_only)
static struct snd_emux_voice *
get_voice(struct snd_emux *emu, struct snd_emux_port *port)
static int
start_voice(struct snd_emux_voice *vp)
static void
trigger_voice(struct snd_emux_voice *vp)
#define MOD_SENSE 18
static void
set_fmmod(struct snd_emu10k1 *hw, struct snd_emux_voice *vp)
static void
set_fm2frq2(struct snd_emu10k1 *hw, struct snd_emux_voice *vp)
static void
set_filterQ(struct snd_emu10k1 *hw, struct snd_emux_voice *vp)
