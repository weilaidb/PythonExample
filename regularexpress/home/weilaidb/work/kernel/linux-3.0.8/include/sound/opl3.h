#define __SOUND_OPL3_H
#define OPL3_REG_TEST			0x01
#define   OPL3_ENABLE_WAVE_SELECT	0x20
#define OPL3_REG_TIMER1			0x02
#define OPL3_REG_TIMER2			0x03
#define OPL3_REG_TIMER_CONTROL		0x04
#define   OPL3_IRQ_RESET		0x80
#define   OPL3_TIMER1_MASK		0x40
#define   OPL3_TIMER2_MASK		0x20
#define   OPL3_TIMER1_START		0x01
#define   OPL3_TIMER2_START		0x02
#define OPL3_REG_CONNECTION_SELECT	0x04
#define   OPL3_LEFT_4OP_0		0x01
#define   OPL3_LEFT_4OP_1		0x02
#define   OPL3_LEFT_4OP_2		0x04
#define   OPL3_RIGHT_4OP_0		0x08
#define   OPL3_RIGHT_4OP_1		0x10
#define   OPL3_RIGHT_4OP_2		0x20
#define OPL3_REG_MODE			0x05
#define   OPL3_OPL3_ENABLE		0x01
#define   OPL3_OPL4_ENABLE		0x02
#define OPL3_REG_KBD_SPLIT		0x08
#define   OPL3_COMPOSITE_SINE_WAVE_MODE	0x80
#define   OPL3_KEYBOARD_SPLIT		0x40
#define OPL3_REG_PERCUSSION		0xbd
#define   OPL3_TREMOLO_DEPTH		0x80
#define   OPL3_VIBRATO_DEPTH		0x40
#define	  OPL3_PERCUSSION_ENABLE	0x20
#define   OPL3_BASSDRUM_ON		0x10
#define   OPL3_SNAREDRUM_ON		0x08
#define   OPL3_TOMTOM_ON		0x04
#define   OPL3_CYMBAL_ON		0x02
#define   OPL3_HIHAT_ON			0x01
#define OPL3_REG_AM_VIB			0x20
#define   OPL3_TREMOLO_ON		0x80
#define   OPL3_VIBRATO_ON		0x40
#define   OPL3_SUSTAIN_ON		0x20
#define   OPL3_KSR			0x10
#define   OPL3_MULTIPLE_MASK		0x0f
#define OPL3_REG_KSL_LEVEL		0x40
#define   OPL3_KSL_MASK			0xc0
#define   OPL3_TOTAL_LEVEL_MASK		0x3f
#define OPL3_REG_ATTACK_DECAY		0x60
#define   OPL3_ATTACK_MASK		0xf0
#define   OPL3_DECAY_MASK		0x0f
#define OPL3_REG_SUSTAIN_RELEASE	0x80
#define   OPL3_SUSTAIN_MASK		0xf0
#define   OPL3_RELEASE_MASK		0x0f
#define OPL3_REG_WAVE_SELECT		0xe0
#define   OPL3_WAVE_SELECT_MASK		0x07
#define OPL3_REG_FNUM_LOW		0xa0
#define OPL3_REG_KEYON_BLOCK		0xb0
#define	  OPL3_KEYON_BIT		0x20
#define	  OPL3_BLOCKNUM_MASK		0x1c
#define   OPL3_FNUM_HIGH_MASK		0x03
#define OPL3_REG_FEEDBACK_CONNECTION	0xc0
#define   OPL3_FEEDBACK_MASK		0x0e
#define   OPL3_CONNECTION_BIT		0x01
#define   OPL3_STEREO_BITS		0x30
#define     OPL3_VOICE_TO_LEFT		0x10
#define     OPL3_VOICE_TO_RIGHT		0x20
#define OPL3_LEFT		0x0000
#define OPL3_RIGHT		0x0100
#define OPL3_HW_AUTO		0x0000
#define OPL3_HW_OPL2		0x0200
#define OPL3_HW_OPL3		0x0300
#define OPL3_HW_OPL3_SV		0x0301
#define OPL3_HW_OPL3_CS		0x0302
#define OPL3_HW_OPL3_FM801	0x0303
#define OPL3_HW_OPL3_CS4281	0x0304
#define OPL3_HW_OPL4		0x0400
#define OPL3_HW_OPL4_ML		0x0401
#define OPL3_HW_MASK		0xff00
#define MAX_OPL2_VOICES		9
#define MAX_OPL3_VOICES		18
struct snd_opl3;
struct fm_operator  __attribute__((packed));
struct fm_instrument ;
#define FM_PATCH_OPL2	0x01
#define FM_PATCH_OPL3	0x02
struct fm_patch ;
struct snd_opl3_voice ;
struct snd_opl3 ;
void snd_opl3_interrupt(struct snd_hwdep * hw);
int snd_opl3_new(struct snd_card *card, unsigned short hardware,
struct snd_opl3 **ropl3);
int snd_opl3_init(struct snd_opl3 *opl3);
int snd_opl3_create(struct snd_card *card,
unsigned long l_port, unsigned long r_port,
unsigned short hardware,
int integrated,
struct snd_opl3 ** opl3);
int snd_opl3_timer_new(struct snd_opl3 * opl3, int timer1_dev, int timer2_dev);
int snd_opl3_hwdep_new(struct snd_opl3 * opl3, int device, int seq_device,
struct snd_hwdep ** rhwdep);
int snd_opl3_open(struct snd_hwdep * hw, struct file *file);
int snd_opl3_ioctl(struct snd_hwdep * hw, struct file *file,
unsigned int cmd, unsigned long arg);
int snd_opl3_release(struct snd_hwdep * hw, struct file *file);
void snd_opl3_reset(struct snd_opl3 * opl3);
#if defined(CONFIG_SND_SEQUENCER) || defined(CONFIG_SND_SEQUENCER_MODULE)
long snd_opl3_write(struct snd_hwdep *hw, const char __user *buf, long count,
loff_t *offset);
int snd_opl3_load_patch(struct snd_opl3 *opl3,
int prog, int bank, int type,
const char *name,
const unsigned char *ext,
const unsigned char *data);
struct fm_patch *snd_opl3_find_patch(struct snd_opl3 *opl3, int prog, int bank,
int create_patch);
void snd_opl3_clear_patches(struct snd_opl3 *opl3);
#define snd_opl3_write	NULL
static inline void snd_opl3_clear_patches(struct snd_opl3 *opl3)
