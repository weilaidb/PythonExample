void snd_emu8000_poke(struct snd_emu8000 *emu, unsigned int port, unsigned int reg, unsigned int val)
unsigned short snd_emu8000_peek(struct snd_emu8000 *emu, unsigned int port, unsigned int reg)
void snd_emu8000_poke_dw(struct snd_emu8000 *emu, unsigned int port, unsigned int reg, unsigned int val)
unsigned int snd_emu8000_peek_dw(struct snd_emu8000 *emu, unsigned int port, unsigned int reg)
void
snd_emu8000_dma_chan(struct snd_emu8000 *emu, int ch, int mode)
static void __devinit
snd_emu8000_read_wait(struct snd_emu8000 *emu)
static void __devinit
snd_emu8000_write_wait(struct snd_emu8000 *emu)
static int __devinit
snd_emu8000_detect(struct snd_emu8000 *emu)
static void __devinit
init_audio(struct snd_emu8000 *emu)
static void __devinit
init_dma(struct snd_emu8000 *emu)
static unsigned short init1[128] = ;
static unsigned short init2[128] = ;
static unsigned short init3[128] = ;
static unsigned short init4[128] = ;
static void __devinit
send_array(struct snd_emu8000 *emu, unsigned short *data, int size)
static void __devinit
init_arrays(struct snd_emu8000 *emu)
#define UNIQUE_ID1	0xa5b9
#define UNIQUE_ID2	0x9d53
static void __devinit
size_dram(struct snd_emu8000 *emu)
void
snd_emu8000_init_fm(struct snd_emu8000 *emu)
static void __devinit
snd_emu8000_init_hw(struct snd_emu8000 *emu)
static unsigned short bass_parm[12][3] = ;
static unsigned short treble_parm[12][9] = ; void
snd_emu8000_update_equalizer(struct snd_emu8000 *emu)
#define SNDRV_EMU8000_CHORUS_1		0
#define	SNDRV_EMU8000_CHORUS_2		1
#define	SNDRV_EMU8000_CHORUS_3		2
#define	SNDRV_EMU8000_CHORUS_4		3
#define	SNDRV_EMU8000_CHORUS_FEEDBACK	4
#define	SNDRV_EMU8000_CHORUS_FLANGER	5
#define	SNDRV_EMU8000_CHORUS_SHORTDELAY	6
#define	SNDRV_EMU8000_CHORUS_SHORTDELAY2	7
#define SNDRV_EMU8000_CHORUS_PREDEFINED	8
#define SNDRV_EMU8000_CHORUS_NUMBERS	32
struct soundfont_chorus_fx ;
static char chorus_defined[SNDRV_EMU8000_CHORUS_NUMBERS];
static struct soundfont_chorus_fx chorus_parm[SNDRV_EMU8000_CHORUS_NUMBERS] = ; int
snd_emu8000_load_chorus_fx(struct snd_emu8000 *emu, int mode, const void __user *buf, long len)
void
snd_emu8000_update_chorus_mode(struct snd_emu8000 *emu)
#define	SNDRV_EMU8000_REVERB_ROOM1	0
#define SNDRV_EMU8000_REVERB_ROOM2	1
#define	SNDRV_EMU8000_REVERB_ROOM3	2
#define	SNDRV_EMU8000_REVERB_HALL1	3
#define	SNDRV_EMU8000_REVERB_HALL2	4
#define	SNDRV_EMU8000_REVERB_PLATE	5
#define	SNDRV_EMU8000_REVERB_DELAY	6
#define	SNDRV_EMU8000_REVERB_PANNINGDELAY 7
#define SNDRV_EMU8000_REVERB_PREDEFINED	8
#define SNDRV_EMU8000_REVERB_NUMBERS	32
struct soundfont_reverb_fx ;
static char reverb_defined[SNDRV_EMU8000_CHORUS_NUMBERS];
static struct soundfont_reverb_fx reverb_parm[SNDRV_EMU8000_REVERB_NUMBERS] = ;
enum ;
#define AWE_INIT1(c)	EMU8000_CMD(2,c), DATA1
#define AWE_INIT2(c)	EMU8000_CMD(2,c), DATA2
#define AWE_INIT3(c)	EMU8000_CMD(3,c), DATA1
#define AWE_INIT4(c)	EMU8000_CMD(3,c), DATA2
static struct reverb_cmd_pair  reverb_cmds[28] = ; int
snd_emu8000_load_reverb_fx(struct snd_emu8000 *emu, int mode, const void __user *buf, long len)
void
snd_emu8000_update_reverb_mode(struct snd_emu8000 *emu)
static int mixer_bass_treble_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixer_bass_treble_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_bass_treble_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixer_bass_control =
;
static struct snd_kcontrol_new mixer_treble_control =
;
static int mixer_chorus_reverb_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixer_chorus_reverb_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_chorus_reverb_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixer_chorus_mode_control =
;
static struct snd_kcontrol_new mixer_reverb_mode_control =
;
static int mixer_fm_depth_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixer_fm_depth_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_fm_depth_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixer_fm_chorus_depth_control =
;
static struct snd_kcontrol_new mixer_fm_reverb_depth_control =
;
static struct snd_kcontrol_new *mixer_defs[EMU8000_NUM_CONTROLS] = ;
static int __devinit
snd_emu8000_create_mixer(struct snd_card *card, struct snd_emu8000 *emu)
static int snd_emu8000_free(struct snd_emu8000 *hw)
static int snd_emu8000_dev_free(struct snd_device *device)
int __devinit
snd_emu8000_new(struct snd_card *card, int index, long port, int seq_ports,
struct snd_seq_device **awe_ret)
EXPORT_SYMBOL(snd_emu8000_poke);
EXPORT_SYMBOL(snd_emu8000_peek);
EXPORT_SYMBOL(snd_emu8000_poke_dw);
EXPORT_SYMBOL(snd_emu8000_peek_dw);
EXPORT_SYMBOL(snd_emu8000_dma_chan);
EXPORT_SYMBOL(snd_emu8000_init_fm);
EXPORT_SYMBOL(snd_emu8000_load_chorus_fx);
EXPORT_SYMBOL(snd_emu8000_load_reverb_fx);
EXPORT_SYMBOL(snd_emu8000_update_chorus_mode);
EXPORT_SYMBOL(snd_emu8000_update_reverb_mode);
EXPORT_SYMBOL(snd_emu8000_update_equalizer);
