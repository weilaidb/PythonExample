#define xoffsetof(type,tag)	((long)(&((type)NULL)->tag) - (long)(NULL))
#define parm_offset(tag)	xoffsetof(struct soundfont_voice_parm *, tag)
#define PARM_IS_BYTE		(1 << 0)
#define PARM_IS_WORD		(1 << 1)
#define PARM_IS_ALIGNED		(3 << 2)
#define PARM_IS_ALIGN_HI	(1 << 2)
#define PARM_IS_ALIGN_LO	(2 << 2)
#define PARM_IS_SIGNED		(1 << 4)
#define PARM_WORD	(PARM_IS_WORD)
#define PARM_BYTE_LO	(PARM_IS_BYTE|PARM_IS_ALIGN_LO)
#define PARM_BYTE_HI	(PARM_IS_BYTE|PARM_IS_ALIGN_HI)
#define PARM_BYTE	(PARM_IS_BYTE)
#define PARM_SIGN_LO	(PARM_IS_BYTE|PARM_IS_ALIGN_LO|PARM_IS_SIGNED)
#define PARM_SIGN_HI	(PARM_IS_BYTE|PARM_IS_ALIGN_HI|PARM_IS_SIGNED)
static struct emux_parm_defs  parm_defs[EMUX_NUM_EFFECTS] = ;
static void
effect_set_byte(unsigned char *valp, struct snd_midi_channel *chan, int type)
static void
effect_set_word(unsigned short *valp, struct snd_midi_channel *chan, int type)
static int
effect_get_offset(struct snd_midi_channel *chan, int lo, int hi, int mode)
void
snd_emux_send_effect_oss(struct snd_emux_port *port,
struct snd_midi_channel *chan, int type, int val)
void
snd_emux_send_effect(struct snd_emux_port *port, struct snd_midi_channel *chan,
int type, int val, int mode)
void
snd_emux_setup_effect(struct snd_emux_voice *vp)
void
snd_emux_create_effect(struct snd_emux_port *p)
void
snd_emux_delete_effect(struct snd_emux_port *p)
void
snd_emux_clear_effect(struct snd_emux_port *p)
