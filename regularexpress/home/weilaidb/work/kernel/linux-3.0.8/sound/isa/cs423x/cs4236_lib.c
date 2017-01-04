static unsigned char snd_cs4236_ext_map[18] = ;
static void snd_cs4236_ctrl_out(struct snd_wss *chip,
unsigned char reg, unsigned char val)
static unsigned char snd_cs4236_ctrl_in(struct snd_wss *chip, unsigned char reg)
#define CLOCKS 8
static struct snd_ratnum clocks[CLOCKS] = ;
static struct snd_pcm_hw_constraint_ratnums hw_constraints_clocks = ;
static int snd_cs4236_xrate(struct snd_pcm_runtime *runtime)
static unsigned char divisor_to_rate_register(unsigned int divisor)
static void snd_cs4236_playback_format(struct snd_wss *chip,
struct snd_pcm_hw_params *params,
unsigned char pdfr)
static void snd_cs4236_capture_format(struct snd_wss *chip,
struct snd_pcm_hw_params *params,
unsigned char cdfr)
static void snd_cs4236_suspend(struct snd_wss *chip)
static void snd_cs4236_resume(struct snd_wss *chip)
int snd_cs4236_create(struct snd_card *card,
unsigned long port,
unsigned long cport,
int irq, int dma1, int dma2,
unsigned short hardware,
unsigned short hwshare,
struct snd_wss **rchip)
int snd_cs4236_pcm(struct snd_wss *chip, int device, struct snd_pcm **rpcm)
#define CS4236_SINGLE(xname, xindex, reg, shift, mask, invert) \
#define CS4236_SINGLE_TLV(xname, xindex, reg, shift, mask, invert, xtlv) \
static int snd_cs4236_info_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_cs4236_get_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_single(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define CS4236_SINGLEC(xname, xindex, reg, shift, mask, invert) \
static int snd_cs4236_get_singlec(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_singlec(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define CS4236_DOUBLE(xname, xindex, left_reg, right_reg, shift_left, shift_right, mask, invert) \
#define CS4236_DOUBLE_TLV(xname, xindex, left_reg, right_reg, shift_left, \
shift_right, mask, invert, xtlv) \
static int snd_cs4236_info_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_cs4236_get_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_double(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define CS4236_DOUBLE1(xname, xindex, left_reg, right_reg, shift_left, \
shift_right, mask, invert) \
#define CS4236_DOUBLE1_TLV(xname, xindex, left_reg, right_reg, shift_left, \
shift_right, mask, invert, xtlv) \
static int snd_cs4236_get_double1(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_double1(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define CS4236_MASTER_DIGITAL(xname, xindex, xtlv) \
static inline int snd_cs4236_mixer_master_digital_invert_volume(int vol)
static int snd_cs4236_get_master_digital(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_master_digital(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define CS4235_OUTPUT_ACCU(xname, xindex, xtlv) \
static inline int snd_cs4235_mixer_output_accu_get_volume(int vol)
static inline int snd_cs4235_mixer_output_accu_set_volume(int vol)
static int snd_cs4235_get_output_accu(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4235_put_output_accu(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_7bit, -9450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_6bit, -9450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_6bit_12db_max, -8250, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_12db_max, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_22db_max, -2400, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_4bit, -4500, 300, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_2bit, -1800, 600, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_rec_gain, 0, 150, 0);
static struct snd_kcontrol_new snd_cs4236_controls[] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_6db_max, -5600, 200, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_2bit_16db_max, -2400, 800, 0);
static struct snd_kcontrol_new snd_cs4235_controls[] = ;
#define CS4236_IEC958_ENABLE(xname, xindex) \
static int snd_cs4236_get_iec958_switch(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_cs4236_put_iec958_switch(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cs4236_iec958_controls[] = ;
static struct snd_kcontrol_new snd_cs4236_3d_controls_cs4235[] = ;
static struct snd_kcontrol_new snd_cs4236_3d_controls_cs4237[] = ;
static struct snd_kcontrol_new snd_cs4236_3d_controls_cs4238[] = ;
int snd_cs4236_mixer(struct snd_wss *chip)
