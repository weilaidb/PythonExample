static bool high_res_gpr_volume;
module_param(high_res_gpr_volume, bool, 0444);
MODULE_PARM_DESC(high_res_gpr_volume, "GPR mixer controls use 31-bit range.");
static char *fxbuses[16] = ;
static char *creative_ins[16] = ;
static char *audigy_ins[16] = ;
static char *creative_outs[32] = ;
static char *audigy_outs[32] = ;
static const u32 bass_table[41][5] = ;
static const u32 treble_table[41][5] = ;
static const u32 db_table[101] = ;
static const DECLARE_TLV_DB_SCALE(snd_emu10k1_db_scale1, -4000, 40, 1);
static const DECLARE_TLV_DB_LINEAR(snd_emu10k1_db_linear, TLV_DB_GAIN_MUTE, 0);
static const DECLARE_TLV_DB_SCALE(snd_emu10k1_bass_treble_db_scale, -1200, 60, 0);
static const u32 onoff_table[2] = ;
static inline mm_segment_t snd_enter_user(void)
static inline void snd_leave_user(mm_segment_t fs)
static int snd_emu10k1_gpr_ctl_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_gpr_ctl_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_gpr_ctl_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static void snd_emu10k1_fx8010_interrupt(struct snd_emu10k1 *emu)
int snd_emu10k1_fx8010_register_irq_handler(struct snd_emu10k1 *emu,
snd_fx8010_irq_handler_t *handler,
unsigned char gpr_running,
void *private_data,
struct snd_emu10k1_fx8010_irq **r_irq)
int snd_emu10k1_fx8010_unregister_irq_handler(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_irq *irq)
static void snd_emu10k1_write_op(struct snd_emu10k1_fx8010_code *icode,
unsigned int *ptr,
u32 op, u32 r, u32 a, u32 x, u32 y)
#define OP(icode, ptr, op, r, a, x, y) \
snd_emu10k1_write_op(icode, ptr, op, r, a, x, y)
static void snd_emu10k1_audigy_write_op(struct snd_emu10k1_fx8010_code *icode,
unsigned int *ptr,
u32 op, u32 r, u32 a, u32 x, u32 y)
#define A_OP(icode, ptr, op, r, a, x, y) \
snd_emu10k1_audigy_write_op(icode, ptr, op, r, a, x, y)
static void snd_emu10k1_efx_write(struct snd_emu10k1 *emu, unsigned int pc, unsigned int data)
unsigned int snd_emu10k1_efx_read(struct snd_emu10k1 *emu, unsigned int pc)
static int snd_emu10k1_gpr_poke(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_gpr_peek(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_tram_poke(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_tram_peek(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_code_poke(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_code_peek(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static struct snd_emu10k1_fx8010_ctl *
snd_emu10k1_look_for_ctl(struct snd_emu10k1 *emu, struct snd_ctl_elem_id *id)
#define MAX_TLV_SIZE	256
static unsigned int *copy_tlv(const unsigned int __user *_tlv)
static int copy_gctl(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_control_gpr *gctl,
struct snd_emu10k1_fx8010_control_gpr __user *_gctl,
int idx)
static int copy_gctl_to_user(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_control_gpr __user *_gctl,
struct snd_emu10k1_fx8010_control_gpr *gctl,
int idx)
static int snd_emu10k1_verify_controls(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static void snd_emu10k1_ctl_private_free(struct snd_kcontrol *kctl)
static int snd_emu10k1_add_controls(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_del_controls(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_list_controls(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_icode_poke(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_icode_peek(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_code *icode)
static int snd_emu10k1_ipcm_poke(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_pcm_rec *ipcm)
static int snd_emu10k1_ipcm_peek(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_pcm_rec *ipcm)
#define SND_EMU10K1_GPR_CONTROLS	44
#define SND_EMU10K1_INPUTS		12
#define SND_EMU10K1_PLAYBACK_CHANNELS	8
#define SND_EMU10K1_CAPTURE_CHANNELS	4
static void __devinit
snd_emu10k1_init_mono_control(struct snd_emu10k1_fx8010_control_gpr *ctl,
const char *name, int gpr, int defval)
static void __devinit
snd_emu10k1_init_stereo_control(struct snd_emu10k1_fx8010_control_gpr *ctl,
const char *name, int gpr, int defval)
static void __devinit
snd_emu10k1_init_mono_onoff_control(struct snd_emu10k1_fx8010_control_gpr *ctl,
const char *name, int gpr, int defval)
static void __devinit
snd_emu10k1_init_stereo_onoff_control(struct snd_emu10k1_fx8010_control_gpr *ctl,
const char *name, int gpr, int defval)
static int snd_emu10k1_audigy_dsp_convert_32_to_2x16(
struct snd_emu10k1_fx8010_code *icode,
u32 *ptr, int tmp, int bit_shifter16,
int reg_in, int reg_out)
static int __devinit _snd_emu10k1_audigy_init_efx(struct snd_emu10k1 *emu)
static void __devinit _volume(struct snd_emu10k1_fx8010_code *icode, u32 *ptr, u32 dst, u32 src, u32 vol)
static void __devinit _volume_add(struct snd_emu10k1_fx8010_code *icode, u32 *ptr, u32 dst, u32 src, u32 vol)
static void __devinit _volume_out(struct snd_emu10k1_fx8010_code *icode, u32 *ptr, u32 dst, u32 src, u32 vol)
#define VOLUME(icode, ptr, dst, src, vol) \
_volume(icode, ptr, GPR(dst), GPR(src), GPR(vol))
#define VOLUME_IN(icode, ptr, dst, src, vol) \
_volume(icode, ptr, GPR(dst), EXTIN(src), GPR(vol))
#define VOLUME_ADD(icode, ptr, dst, src, vol) \
_volume_add(icode, ptr, GPR(dst), GPR(src), GPR(vol))
#define VOLUME_ADDIN(icode, ptr, dst, src, vol) \
_volume_add(icode, ptr, GPR(dst), EXTIN(src), GPR(vol))
#define VOLUME_OUT(icode, ptr, dst, src, vol) \
_volume_out(icode, ptr, EXTOUT(dst), GPR(src), GPR(vol))
#define _SWITCH(icode, ptr, dst, src, sw) \
OP((icode), ptr, iMACINT0, dst, C_00000000, src, sw);
#define SWITCH(icode, ptr, dst, src, sw) \
_SWITCH(icode, ptr, GPR(dst), GPR(src), GPR(sw))
#define SWITCH_IN(icode, ptr, dst, src, sw) \
_SWITCH(icode, ptr, GPR(dst), EXTIN(src), GPR(sw))
#define _SWITCH_NEG(icode, ptr, dst, src) \
OP((icode), ptr, iANDXOR, dst, src, C_00000001, C_00000001);
#define SWITCH_NEG(icode, ptr, dst, src) \
_SWITCH_NEG(icode, ptr, GPR(dst), GPR(src))
static int __devinit _snd_emu10k1_init_efx(struct snd_emu10k1 *emu)
int __devinit snd_emu10k1_init_efx(struct snd_emu10k1 *emu)
void snd_emu10k1_free_efx(struct snd_emu10k1 *emu)
int snd_emu10k1_fx8010_tram_setup(struct snd_emu10k1 *emu, u32 size)
static int snd_emu10k1_fx8010_open(struct snd_hwdep * hw, struct file *file)
static void copy_string(char *dst, char *src, char *null, int idx)
static void snd_emu10k1_fx8010_info(struct snd_emu10k1 *emu,
struct snd_emu10k1_fx8010_info *info)
static int snd_emu10k1_fx8010_ioctl(struct snd_hwdep * hw, struct file *file, unsigned int cmd, unsigned long arg)
static int snd_emu10k1_fx8010_release(struct snd_hwdep * hw, struct file *file)
int __devinit snd_emu10k1_fx8010_new(struct snd_emu10k1 *emu, int device, struct snd_hwdep ** rhwdep)
int __devinit snd_emu10k1_efx_alloc_pm_buffer(struct snd_emu10k1 *emu)
void snd_emu10k1_efx_free_pm_buffer(struct snd_emu10k1 *emu)
void snd_emu10k1_efx_suspend(struct snd_emu10k1 *emu)
void snd_emu10k1_efx_resume(struct snd_emu10k1 *emu)
