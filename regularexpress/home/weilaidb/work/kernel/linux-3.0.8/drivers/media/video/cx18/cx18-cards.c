#define V4L2_STD_PAL_SECAM (V4L2_STD_PAL|V4L2_STD_SECAM)
static struct cx18_card_tuner_i2c cx18_i2c_std = ;
static struct cx18_card_tuner_i2c cx18_i2c_nxp = ;
static const struct cx18_card cx18_card_hvr1600_esmt = ;
static const struct cx18_card cx18_card_hvr1600_s5h1411 = ;
static const struct cx18_card cx18_card_hvr1600_samsung = ;
static const struct cx18_card_pci_info cx18_pci_h900[] = ;
static const struct cx18_card cx18_card_h900 = ;
static const struct cx18_card_pci_info cx18_pci_mpc718[] = ;
static const struct cx18_card cx18_card_mpc718 = ;
static const struct cx18_card_pci_info cx18_pci_gotview_dvd3[] = ;
static const struct cx18_card cx18_card_gotview_dvd3 = ;
static const struct cx18_card_pci_info cx18_pci_cnxt_raptor_pal[] = ;
static const struct cx18_card cx18_card_cnxt_raptor_pal = ;
static const struct cx18_card_pci_info cx18_pci_toshiba_qosmio_dvbt[] = ;
static const struct cx18_card cx18_card_toshiba_qosmio_dvbt = ;
static const struct cx18_card_pci_info cx18_pci_leadtek_pvr2100[] = ;
static const struct cx18_card cx18_card_leadtek_pvr2100 = ;
static const struct cx18_card_pci_info cx18_pci_leadtek_dvr3100h[] = ;
static const struct cx18_card cx18_card_leadtek_dvr3100h = ;
static const struct cx18_card *cx18_card_list[] = ;
const struct cx18_card *cx18_get_card(u16 index)
int cx18_get_input(struct cx18 *cx, u16 index, struct v4l2_input *input)
int cx18_get_audio_input(struct cx18 *cx, u16 index, struct v4l2_audio *audio)
