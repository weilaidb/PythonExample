static int debug;
module_param(debug, int, 0644);
MODULE_DESCRIPTION("device driver for various i2c TV sound decoder / audiomux chips");
MODULE_AUTHOR("Eric Sandeen, Steve VanDeBogart, Greg Alexander, Gerd Knorr");
MODULE_LICENSE("GPL");
#define UNSET    (-1U)
#define MAXREGS 256
struct CHIPSTATE;
typedef int  (*getvalue)(int);
typedef int  (*checkit)(struct CHIPSTATE*);
typedef int  (*initialize)(struct CHIPSTATE*);
typedef int  (*getmode)(struct CHIPSTATE*);
typedef void (*setmode)(struct CHIPSTATE*, int mode);
typedef struct AUDIOCMD  audiocmd;
struct CHIPDESC ;
struct CHIPSTATE ;
static inline struct CHIPSTATE *to_state(struct v4l2_subdev *sd)
static int chip_write(struct CHIPSTATE *chip, int subaddr, int val)
static int chip_write_masked(struct CHIPSTATE *chip,
int subaddr, int val, int mask)
static int chip_read(struct CHIPSTATE *chip)
static int chip_read2(struct CHIPSTATE *chip, int subaddr)
static int chip_cmd(struct CHIPSTATE *chip, char *name, audiocmd *cmd)
static void chip_thread_wake(unsigned long data)
static int chip_thread(void *data)
#define TDA9840_SW         0x00
#define TDA9840_LVADJ      0x02
#define TDA9840_STADJ      0x03
#define TDA9840_TEST       0x04
#define TDA9840_MONO       0x10
#define TDA9840_STEREO     0x2a
#define TDA9840_DUALA      0x12
#define TDA9840_DUALB      0x1e
#define TDA9840_DUALAB     0x1a
#define TDA9840_DUALBA     0x16
#define TDA9840_EXTERNAL   0x7a
#define TDA9840_DS_DUAL    0x20
#define TDA9840_ST_STEREO  0x40
#define TDA9840_PONRES     0x80
#define TDA9840_TEST_INT1SN 0x1
#define TDA9840_TEST_INTFU 0x02
static int tda9840_getmode(struct CHIPSTATE *chip)
static void tda9840_setmode(struct CHIPSTATE *chip, int mode)
static int tda9840_checkit(struct CHIPSTATE *chip)
#define TDA9855_VR	0x00
#define TDA9855_VL	0x01
#define TDA9855_BA	0x02
#define TDA9855_TR	0x03
#define TDA9855_SW	0x04
#define TDA9850_C4	0x04
#define TDA985x_C5	0x05
#define TDA985x_C6	0x06
#define TDA985x_C7	0x07
#define TDA985x_A1	0x08
#define TDA985x_A2	0x09
#define TDA985x_A3	0x0a
#define TDA9855_MUTE	1<<7
#define TDA9855_AVL	1<<6
#define TDA9855_LOUD	1<<5
#define TDA9855_SUR	1<<3
#define TDA9855_EXT	1<<2
#define TDA9855_INT	0
#define TDA985x_SAP	3<<6
#define TDA985x_STEREO	1<<6
#define TDA985x_MONO	0
#define TDA985x_LMU	1<<3
#define TDA9855_TZCM	1<<5
#define TDA9855_VZCM	1<<4
#define TDA9855_LINEAR	0
#define TDA9855_PSEUDO	1
#define TDA9855_SPAT_30	2
#define TDA9855_SPAT_50	3
#define TDA9855_E_MONO	7
#define TDA985x_STP	1<<5
#define TDA985x_SAPP	1<<6
#define TDA985x_STS	1<<7
#define TDA985x_ADJ	1<<7
static int tda9855_volume(int val)
static int tda9855_bass(int val)
static int tda9855_treble(int val)
static int  tda985x_getmode(struct CHIPSTATE *chip)
static void tda985x_setmode(struct CHIPSTATE *chip, int mode)
#define TDA9873_SW	0x00
#define TDA9873_AD	0x01
#define TDA9873_PT	0x02
#define TDA9873_INP_MASK    3
#define TDA9873_INTERNAL    0
#define TDA9873_EXT_STEREO  2
#define TDA9873_EXT_MONO    1
#define TDA9873_TR_MASK     (7 << 2)
#define TDA9873_TR_MONO     4
#define TDA9873_TR_STEREO   1 << 4
#define TDA9873_TR_REVERSE  (1 << 3) & (1 << 2)
#define TDA9873_TR_DUALA    1 << 2
#define TDA9873_TR_DUALB    1 << 3
#define TDA9873_GAIN_NORMAL 1 << 5
#define TDA9873_MUTE        1 << 6
#define TDA9873_AUTOMUTE    1 << 7
#define	TDA9873_STEREO_ADJ	0x06
#define TDA9873_BG		0
#define TDA9873_M       1
#define TDA9873_DK1     2
#define TDA9873_DK2     3
#define TDA9873_DK3     4
#define TDA9873_I       5
#define TDA9873_IDR_NORM 0
#define TDA9873_IDR_FAST 1 << 7
#define TDA9873_PORTS    3
#define TDA9873_TST_PORT 1 << 2
#define TDA9873_MOUT_MONO   0
#define TDA9873_MOUT_FMONO  0
#define TDA9873_MOUT_DUALA  0
#define TDA9873_MOUT_DUALB  1 << 3
#define TDA9873_MOUT_ST     1 << 4
#define TDA9873_MOUT_EXTM   (1 << 4 ) & (1 << 3)
#define TDA9873_MOUT_EXTL   1 << 5
#define TDA9873_MOUT_EXTR   (1 << 5 ) & (1 << 3)
#define TDA9873_MOUT_EXTLR  (1 << 5 ) & (1 << 4)
#define TDA9873_MOUT_MUTE   (1 << 5 ) & (1 << 4) & (1 << 3)
#define TDA9873_PONR        0
#define TDA9873_STEREO      2
#define TDA9873_DUAL        4
static int tda9873_getmode(struct CHIPSTATE *chip)
static void tda9873_setmode(struct CHIPSTATE *chip, int mode)
static int tda9873_checkit(struct CHIPSTATE *chip)
#define TDA9874A_AGCGR		0x00
#define TDA9874A_GCONR		0x01
#define TDA9874A_MSR		0x02
#define TDA9874A_C1FRA		0x03
#define TDA9874A_C1FRB		0x04
#define TDA9874A_C1FRC		0x05
#define TDA9874A_C2FRA		0x06
#define TDA9874A_C2FRB		0x07
#define TDA9874A_C2FRC		0x08
#define TDA9874A_DCR		0x09
#define TDA9874A_FMER		0x0a
#define TDA9874A_FMMR		0x0b
#define TDA9874A_C1OLAR		0x0c
#define TDA9874A_C2OLAR		0x0d
#define TDA9874A_NCONR		0x0e
#define TDA9874A_NOLAR		0x0f
#define TDA9874A_NLELR		0x10
#define TDA9874A_NUELR		0x11
#define TDA9874A_AMCONR		0x12
#define TDA9874A_SDACOSR	0x13
#define TDA9874A_AOSR		0x14
#define TDA9874A_DAICONR	0x15
#define TDA9874A_I2SOSR		0x16
#define TDA9874A_I2SOLAR	0x17
#define TDA9874A_MDACOSR	0x18
#define TDA9874A_ESP		0xFF
#define TDA9874A_DSR		0x00
#define TDA9874A_NSR		0x01
#define TDA9874A_NECR		0x02
#define TDA9874A_DR1		0x03
#define TDA9874A_DR2		0x04
#define TDA9874A_LLRA		0x05
#define TDA9874A_LLRB		0x06
#define TDA9874A_SIFLR		0x07
#define TDA9874A_TR2		252
#define TDA9874A_TR1		253
#define TDA9874A_DIC		254
#define TDA9874A_SIC		255
static int tda9874a_mode = 1;
static int tda9874a_GCONR = 0xc0;
static int tda9874a_NCONR = 0x01;
static int tda9874a_ESP = 0x07;
static int tda9874a_dic = -1;
static unsigned int tda9874a_SIF   = UNSET;
static unsigned int tda9874a_AMSEL = UNSET;
static unsigned int tda9874a_STD   = UNSET;
module_param(tda9874a_SIF, int, 0444);
module_param(tda9874a_AMSEL, int, 0444);
module_param(tda9874a_STD, int, 0444);
static struct tda9874a_MODES  tda9874a_modelist[9] = ;
static int tda9874a_setup(struct CHIPSTATE *chip)
static int tda9874a_getmode(struct CHIPSTATE *chip)
static void tda9874a_setmode(struct CHIPSTATE *chip, int mode)
static int tda9874a_checkit(struct CHIPSTATE *chip)
static int tda9874a_initialize(struct CHIPSTATE *chip)
#define TDA9875_MUT         0x12
#define TDA9875_CFG         0x01
#define TDA9875_DACOS       0x13
#define TDA9875_LOSR        0x16
#define TDA9875_CH1V        0x0c
#define TDA9875_CH2V        0x0d
#define TDA9875_SC1         0x14
#define TDA9875_SC2         0x15
#define TDA9875_ADCIS       0x17
#define TDA9875_AER         0x19
#define TDA9875_MCS         0x18
#define TDA9875_MVL         0x1a
#define TDA9875_MVR         0x1b
#define TDA9875_MBA         0x1d
#define TDA9875_MTR         0x1e
#define TDA9875_ACS         0x1f
#define TDA9875_AVL         0x20
#define TDA9875_AVR         0x21
#define TDA9875_ABA         0x22
#define TDA9875_ATR         0x23
#define TDA9875_MSR         0x02
#define TDA9875_C1MSB       0x03
#define TDA9875_C1MIB       0x04
#define TDA9875_C1LSB       0x05
#define TDA9875_C2MSB       0x06
#define TDA9875_C2MIB       0x07
#define TDA9875_C2LSB       0x08
#define TDA9875_DCR         0x09
#define TDA9875_DEEM        0x0a
#define TDA9875_FMAT        0x0b
#define TDA9875_MUTE_ON	    0xff
#define TDA9875_MUTE_OFF    0xcc
static int tda9875_initialize(struct CHIPSTATE *chip)
static int tda9875_volume(int val)
static int tda9875_bass(int val)
static int tda9875_treble(int val)
static int tda9875_checkit(struct CHIPSTATE *chip)
#define TEA6300_VL         0x00
#define TEA6300_VR         0x01
#define TEA6300_BA         0x02
#define TEA6300_TR         0x03
#define TEA6300_FA         0x04
#define TEA6300_S          0x05
#define TEA6300_S_SA       0x01
#define TEA6300_S_SB       0x02
#define TEA6300_S_SC       0x04
#define TEA6300_S_GMU      0x80
#define TEA6320_V          0x00
#define TEA6320_FFR        0x01
#define TEA6320_FFL        0x02
#define TEA6320_FRR        0x03
#define TEA6320_FRL        0x04
#define TEA6320_BA         0x05
#define TEA6320_TR         0x06
#define TEA6320_S          0x07
#define TEA6320_S_SA       0x07
#define TEA6320_S_SB       0x06
#define TEA6320_S_SC       0x05
#define TEA6320_S_SD       0x04
#define TEA6320_S_GMU      0x80
#define TEA6420_S_SA       0x00
#define TEA6420_S_SB       0x01
#define TEA6420_S_SC       0x02
#define TEA6420_S_SD       0x03
#define TEA6420_S_SE       0x04
#define TEA6420_S_GMU      0x05
static int tea6300_shift10(int val)
static int tea6300_shift12(int val)
static int tea6320_volume(int val)
static int tea6320_shift11(int val)
static int tea6320_initialize(struct CHIPSTATE * chip)
#define TDA8425_VL         0x00
#define TDA8425_VR         0x01
#define TDA8425_BA         0x02
#define TDA8425_TR         0x03
#define TDA8425_S1         0x08
#define TDA8425_S1_OFF     0xEE
#define TDA8425_S1_CH1     0xCE
#define TDA8425_S1_CH2     0xCF
#define TDA8425_S1_MU      0x20
#define TDA8425_S1_STEREO  0x18
#define TDA8425_S1_STEREO_SPATIAL 0x18
#define TDA8425_S1_STEREO_LINEAR  0x08
#define TDA8425_S1_STEREO_PSEUDO  0x10
#define TDA8425_S1_STEREO_MONO    0x00
#define TDA8425_S1_ML      0x06
#define TDA8425_S1_ML_SOUND_A 0x02
#define TDA8425_S1_ML_SOUND_B 0x04
#define TDA8425_S1_ML_STEREO  0x06
#define TDA8425_S1_IS      0x01
static int tda8425_shift10(int val)
static int tda8425_shift12(int val)
static void tda8425_setmode(struct CHIPSTATE *chip, int mode)
#define PIC16C54_REG_KEY_CODE     0x01
#define PIC16C54_REG_MISC         0x02
#define PIC16C54_MISC_RESET_REMOTE_CTL 0x01
#define PIC16C54_MISC_MTS_MAIN         0x02
#define PIC16C54_MISC_MTS_SAP          0x04
#define PIC16C54_MISC_MTS_BOTH         0x08
#define PIC16C54_MISC_SND_MUTE         0x10
#define PIC16C54_MISC_SND_NOTMUTE      0x20
#define PIC16C54_MISC_SWITCH_TUNER     0x40
#define PIC16C54_MISC_SWITCH_LINE      0x80
#define TA8874Z_LED_STE	0x80
#define TA8874Z_LED_BIL	0x40
#define TA8874Z_LED_EXT	0x20
#define TA8874Z_MONO_SET	0x10
#define TA8874Z_MUTE	0x08
#define TA8874Z_F_MONO	0x04
#define TA8874Z_MODE_SUB	0x02
#define TA8874Z_MODE_MAIN	0x01
#define TA8874Z_SEPARATION	0x3f
#define TA8874Z_SEPARATION_DEFAULT	0x10
#define TA8874Z_B1	0x80
#define TA8874Z_B0	0x40
#define TA8874Z_CHAG_FLAG	0x20
static int ta8874z_getmode(struct CHIPSTATE *chip)
static audiocmd ta8874z_stereo = ;
static audiocmd ta8874z_mono = ;
static audiocmd ta8874z_main = ;
static audiocmd ta8874z_sub = ;
static void ta8874z_setmode(struct CHIPSTATE *chip, int mode)
static int ta8874z_checkit(struct CHIPSTATE *chip)
static int tda8425  = 1;
static int tda9840  = 1;
static int tda9850  = 1;
static int tda9855  = 1;
static int tda9873  = 1;
static int tda9874a = 1;
static int tda9875  = 1;
static int tea6300;
static int tea6320;
static int tea6420  = 1;
static int pic16c54 = 1;
static int ta8874z;
module_param(tda8425, int, 0444);
module_param(tda9840, int, 0444);
module_param(tda9850, int, 0444);
module_param(tda9855, int, 0444);
module_param(tda9873, int, 0444);
module_param(tda9874a, int, 0444);
module_param(tda9875, int, 0444);
module_param(tea6300, int, 0444);
module_param(tea6320, int, 0444);
module_param(tea6420, int, 0444);
module_param(pic16c54, int, 0444);
module_param(ta8874z, int, 0444);
static struct CHIPDESC chiplist[] = ;
static int tvaudio_g_ctrl(struct v4l2_subdev *sd,
struct v4l2_control *ctrl)
static int tvaudio_s_ctrl(struct v4l2_subdev *sd,
struct v4l2_control *ctrl)
static int tvaudio_s_radio(struct v4l2_subdev *sd)
static int tvaudio_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static int tvaudio_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int tvaudio_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int tvaudio_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int tvaudio_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int tvaudio_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *freq)
static int tvaudio_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops tvaudio_core_ops = ;
static const struct v4l2_subdev_tuner_ops tvaudio_tuner_ops = ;
static const struct v4l2_subdev_audio_ops tvaudio_audio_ops = ;
static const struct v4l2_subdev_ops tvaudio_ops = ;
static int tvaudio_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int tvaudio_remove(struct i2c_client *client)
static const struct i2c_device_id tvaudio_id[] = ;
MODULE_DEVICE_TABLE(i2c, tvaudio_id);
static struct i2c_driver tvaudio_driver = ;
static __init int init_tvaudio(void)
static __exit void exit_tvaudio(void)
module_init(init_tvaudio);
module_exit(exit_tvaudio);
