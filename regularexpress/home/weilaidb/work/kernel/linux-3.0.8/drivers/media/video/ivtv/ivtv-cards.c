#define MSP_TUNER  MSP_INPUT(MSP_IN_SCART1, MSP_IN_TUNER1, \
MSP_DSP_IN_TUNER, MSP_DSP_IN_TUNER)
#define MSP_SCART1 MSP_INPUT(MSP_IN_SCART1, MSP_IN_TUNER1, \
MSP_DSP_IN_SCART, MSP_DSP_IN_SCART)
#define MSP_SCART2 MSP_INPUT(MSP_IN_SCART2, MSP_IN_TUNER1, \
MSP_DSP_IN_SCART, MSP_DSP_IN_SCART)
#define MSP_SCART3 MSP_INPUT(MSP_IN_SCART3, MSP_IN_TUNER1, \
MSP_DSP_IN_SCART, MSP_DSP_IN_SCART)
#define MSP_MONO   MSP_INPUT(MSP_IN_MONO, MSP_IN_TUNER1, \
MSP_DSP_IN_SCART, MSP_DSP_IN_SCART)
#define V4L2_STD_PAL_SECAM (V4L2_STD_PAL|V4L2_STD_SECAM)
static struct ivtv_card_tuner_i2c ivtv_i2c_std = ;
static struct ivtv_card_tuner_i2c ivtv_i2c_radio = ;
static struct ivtv_card_tuner_i2c ivtv_i2c_tda8290 = ;
static const struct ivtv_card ivtv_card_pvr250 = ;
static struct ivtv_card_output ivtv_pvr350_outputs[] = ;
static const struct ivtv_card ivtv_card_pvr350 = ;
static const struct ivtv_card ivtv_card_pvr350_v1 = ;
static const struct ivtv_card ivtv_card_pvr150 = ;
static const struct ivtv_card_pci_info ivtv_pci_m179[] = ;
static const struct ivtv_card ivtv_card_m179 = ;
static const struct ivtv_card_pci_info ivtv_pci_mpg600[] = ;
static const struct ivtv_card ivtv_card_mpg600 = ;
static const struct ivtv_card_pci_info ivtv_pci_mpg160[] = ;
static const struct ivtv_card ivtv_card_mpg160 = ;
static const struct ivtv_card_pci_info ivtv_pci_pg600[] = ;
static const struct ivtv_card ivtv_card_pg600 = ;
static const struct ivtv_card_pci_info ivtv_pci_avc2410[] = ;
static const struct ivtv_card ivtv_card_avc2410 = ;
static const struct ivtv_card_pci_info ivtv_pci_avc2010[] = ;
static const struct ivtv_card ivtv_card_avc2010 = ;
static const struct ivtv_card_pci_info ivtv_pci_tg5000tv[] = ;
static const struct ivtv_card ivtv_card_tg5000tv = ;
static const struct ivtv_card_pci_info ivtv_pci_va2000[] = ;
static const struct ivtv_card ivtv_card_va2000 = ;
static const struct ivtv_card_pci_info ivtv_pci_cx23416gyc[] = ;
static const struct ivtv_card ivtv_card_cx23416gyc = ;
static const struct ivtv_card ivtv_card_cx23416gyc_nogr = ;
static const struct ivtv_card ivtv_card_cx23416gyc_nogrycs = ;
static const struct ivtv_card_pci_info ivtv_pci_gv_mvprx[] = ;
static const struct ivtv_card ivtv_card_gv_mvprx = ;
static const struct ivtv_card_pci_info ivtv_pci_gv_mvprx2e[] = ;
static const struct ivtv_card ivtv_card_gv_mvprx2e = ;
static const struct ivtv_card_pci_info ivtv_pci_gotview_pci_dvd[] = ;
static const struct ivtv_card ivtv_card_gotview_pci_dvd = ;
static const struct ivtv_card_pci_info ivtv_pci_gotview_pci_dvd2[] = ;
static const struct ivtv_card ivtv_card_gotview_pci_dvd2 = ;
static const struct ivtv_card_pci_info ivtv_pci_yuan_mpc622[] = ;
static const struct ivtv_card ivtv_card_yuan_mpc622 = ;
static const struct ivtv_card_pci_info ivtv_pci_dctmvtvp1[] = ;
static const struct ivtv_card ivtv_card_dctmvtvp1 = ;
static const struct ivtv_card_pci_info ivtv_pci_pg600v2[] = ;
static const struct ivtv_card ivtv_card_pg600v2 = ;
static const struct ivtv_card_pci_info ivtv_pci_club3d[] = ;
static const struct ivtv_card ivtv_card_club3d = ;
static const struct ivtv_card_pci_info ivtv_pci_avertv_mce116[] = ;
static const struct ivtv_card ivtv_card_avertv_mce116 = ;
static const struct ivtv_card_pci_info ivtv_pci_aver_pvr150[] = ;
static const struct ivtv_card ivtv_card_aver_pvr150 = ;
static const struct ivtv_card_pci_info ivtv_pci_aver_ultra1500mce[] = ;
static const struct ivtv_card ivtv_card_aver_ultra1500mce = ;
static const struct ivtv_card_pci_info ivtv_pci_aver_ezmaker[] = ;
static const struct ivtv_card ivtv_card_aver_ezmaker = ;
static const struct ivtv_card_pci_info ivtv_pci_asus_falcon2[] = ;
static const struct ivtv_card ivtv_card_asus_falcon2 = ;
static const struct ivtv_card_pci_info ivtv_pci_aver_m104[] = ;
static const struct ivtv_card ivtv_card_aver_m104 = ;
static const struct ivtv_card_pci_info ivtv_pci_buffalo[] = ;
static const struct ivtv_card ivtv_card_buffalo = ;
static const struct ivtv_card_pci_info ivtv_pci_kikyou[] = ;
static const struct ivtv_card ivtv_card_kikyou = ;
static const struct ivtv_card *ivtv_card_list[] = ;
const struct ivtv_card *ivtv_get_card(u16 index)
int ivtv_get_input(struct ivtv *itv, u16 index, struct v4l2_input *input)
int ivtv_get_output(struct ivtv *itv, u16 index, struct v4l2_output *output)
int ivtv_get_audio_input(struct ivtv *itv, u16 index, struct v4l2_audio *audio)
int ivtv_get_audio_output(struct ivtv *itv, u16 index, struct v4l2_audioout *aud_output)
