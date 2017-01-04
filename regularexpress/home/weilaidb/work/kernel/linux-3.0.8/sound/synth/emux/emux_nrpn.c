struct nrpn_conv_table ;
#define FX_CUTOFF	0
#define FX_RESONANCE	1
#define FX_ATTACK	2
#define FX_RELEASE	3
#define FX_VIBRATE	4
#define FX_VIBDEPTH	5
#define FX_VIBDELAY	6
#define FX_NUMS		7
static int send_converted_effect(struct nrpn_conv_table *table, int num_tables,
struct snd_emux_port *port,
struct snd_midi_channel *chan,
int type, int val, int mode)
#define DEF_FX_CUTOFF		170
#define DEF_FX_RESONANCE	6
#define DEF_FX_ATTACK		50
#define DEF_FX_RELEASE		50
#define DEF_FX_VIBRATE		30
#define DEF_FX_VIBDEPTH		4
#define DEF_FX_VIBDELAY		1500
static int gs_sense[] =
;
static int xg_sense[] =
;
static int fx_delay(int val);
static int fx_attack(int val);
static int fx_hold(int val);
static int fx_decay(int val);
static int fx_the_value(int val);
static int fx_twice_value(int val);
static int fx_conv_pitch(int val);
static int fx_conv_Q(int val);
#define fx_env1_delay	fx_delay
#define fx_env1_attack	fx_attack
#define fx_env1_hold	fx_hold
#define fx_env1_decay	fx_decay
#define fx_env1_release	fx_decay
#define fx_env1_sustain	fx_the_value
#define fx_env1_pitch	fx_the_value
#define fx_env1_cutoff	fx_the_value
#define fx_env2_delay	fx_delay
#define fx_env2_attack	fx_attack
#define fx_env2_hold	fx_hold
#define fx_env2_decay	fx_decay
#define fx_env2_release	fx_decay
#define fx_env2_sustain	fx_the_value
#define fx_lfo1_delay	fx_delay
#define fx_lfo1_freq	fx_twice_value
#define fx_lfo1_volume	fx_twice_value
#define fx_lfo1_pitch	fx_the_value
#define fx_lfo1_cutoff	fx_twice_value
#define fx_lfo2_delay	fx_delay
#define fx_lfo2_freq	fx_twice_value
#define fx_lfo2_pitch	fx_the_value
#define fx_init_pitch	fx_conv_pitch
#define fx_chorus	fx_the_value
#define fx_reverb	fx_the_value
#define fx_cutoff	fx_twice_value
#define fx_filterQ	fx_conv_Q
static int fx_delay(int val)
static int fx_attack(int val)
static int fx_hold(int val)
static int fx_decay(int val)
static int fx_the_value(int val)
static int fx_twice_value(int val)
static int fx_conv_pitch(int val)
static int fx_conv_Q(int val)
static struct nrpn_conv_table awe_effects[] =
;
static int gs_cutoff(int val)
static int gs_filterQ(int val)
static int gs_attack(int val)
static int gs_decay(int val)
static int gs_release(int val)
static int gs_vib_rate(int val)
static int gs_vib_depth(int val)
static int gs_vib_delay(int val)
static struct nrpn_conv_table gs_effects[] =
;
void
snd_emux_nrpn(void *p, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset)
static int xg_cutoff(int val)
static int xg_filterQ(int val)
static int xg_attack(int val)
static int xg_release(int val)
static struct nrpn_conv_table xg_effects[] =
;
int
snd_emux_xg_control(struct snd_emux_port *port, struct snd_midi_channel *chan,
int param)
void
snd_emux_sysex(void *p, unsigned char *buf, int len, int parsed,
struct snd_midi_channel_set *chset)
