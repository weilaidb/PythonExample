#define MONO_SUM_SCALE	0x19a8
#define DAIONUM		7
#define MAX_MULTI_CHN	8
#define IEC958_DEFAULT_CON ((IEC958_AES0_NONAUDIO \
| IEC958_AES0_CON_NOT_COPYRIGHT) \
| ((IEC958_AES1_CON_MIXER \
| IEC958_AES1_CON_ORIGINAL) << 8) \
| (0x10 << 16) \
| ((IEC958_AES3_CON_FS_48000) << 24))
static struct snd_pci_quirk __devinitdata subsys_20k1_list[] = ;
static struct snd_pci_quirk __devinitdata subsys_20k2_list[] = ;
static const char *ct_subsys_name[NUM_CTCARDS] = ;
static struct  alsa_dev_funcs[NUM_CTALSADEVS] = ;
typedef int (*create_t)(void *, void **);
typedef int (*destroy_t)(void *);
static struct  rsc_mgr_funcs[NUM_RSCTYP] = ;
static int
atc_pcm_release_resources(struct ct_atc *atc, struct ct_atc_pcm *apcm);
static int ct_map_audio_buffer(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static void ct_unmap_audio_buffer(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static unsigned long atc_get_ptp_phys(struct ct_atc *atc, int index)
static unsigned int convert_format(snd_pcm_format_t snd_format)
static unsigned int
atc_get_pitch(unsigned int input_rate, unsigned int output_rate)
static int select_rom(unsigned int pitch)
static int atc_pcm_playback_prepare(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int
atc_pcm_release_resources(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int atc_pcm_playback_start(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int atc_pcm_stop(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int
atc_pcm_playback_position(struct ct_atc *atc, struct ct_atc_pcm *apcm)
struct src_node_conf_t ;
static void setup_src_node_conf(struct ct_atc *atc, struct ct_atc_pcm *apcm,
struct src_node_conf_t *conf, int *n_srcc)
static int
atc_pcm_capture_get_resources(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int atc_pcm_capture_prepare(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int atc_pcm_capture_start(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int
atc_pcm_capture_position(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int spdif_passthru_playback_get_resources(struct ct_atc *atc,
struct ct_atc_pcm *apcm)
static int atc_pll_init(struct ct_atc *atc, int rate)
static int
spdif_passthru_playback_setup(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int
spdif_passthru_playback_prepare(struct ct_atc *atc, struct ct_atc_pcm *apcm)
static int atc_select_line_in(struct ct_atc *atc)
static int atc_select_mic_in(struct ct_atc *atc)
static int atc_have_digit_io_switch(struct ct_atc *atc)
static int atc_select_digit_io(struct ct_atc *atc)
static int atc_daio_unmute(struct ct_atc *atc, unsigned char state, int type)
static int
atc_dao_get_status(struct ct_atc *atc, unsigned int *status, int type)
static int
atc_dao_set_status(struct ct_atc *atc, unsigned int status, int type)
static int atc_line_front_unmute(struct ct_atc *atc, unsigned char state)
static int atc_line_surround_unmute(struct ct_atc *atc, unsigned char state)
static int atc_line_clfe_unmute(struct ct_atc *atc, unsigned char state)
static int atc_line_rear_unmute(struct ct_atc *atc, unsigned char state)
static int atc_line_in_unmute(struct ct_atc *atc, unsigned char state)
static int atc_spdif_out_unmute(struct ct_atc *atc, unsigned char state)
static int atc_spdif_in_unmute(struct ct_atc *atc, unsigned char state)
static int atc_spdif_out_get_status(struct ct_atc *atc, unsigned int *status)
static int atc_spdif_out_set_status(struct ct_atc *atc, unsigned int status)
static int atc_spdif_out_passthru(struct ct_atc *atc, unsigned char state)
static int atc_release_resources(struct ct_atc *atc)
static int ct_atc_destroy(struct ct_atc *atc)
static int atc_dev_free(struct snd_device *dev)
static int __devinit atc_identify_card(struct ct_atc *atc, unsigned int ssid)
int __devinit ct_atc_create_alsa_devs(struct ct_atc *atc)
static int __devinit atc_create_hw_devs(struct ct_atc *atc)
static int atc_get_resources(struct ct_atc *atc)
static void
atc_connect_dai(struct src_mgr *src_mgr, struct dai *dai,
struct src **srcs, struct srcimp **srcimps)
static void atc_connect_resources(struct ct_atc *atc)
static int atc_suspend(struct ct_atc *atc, pm_message_t state)
static int atc_hw_resume(struct ct_atc *atc)
static int atc_resources_resume(struct ct_atc *atc)
static int atc_resume(struct ct_atc *atc)
static struct ct_atc atc_preset __devinitdata = ;
int __devinit ct_atc_create(struct snd_card *card, struct pci_dev *pci,
unsigned int rsr, unsigned int msr,
int chip_type, unsigned int ssid,
struct ct_atc **ratc)
