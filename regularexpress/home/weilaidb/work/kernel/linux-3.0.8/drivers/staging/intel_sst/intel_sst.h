#define __INTEL_SST_H__
#define SST_CARD_NAMES "intel_mid_card"
#define MFLD_MAX_HW_CH 4
enum port_status ;
enum sst_card_states ;
enum sst_controls ;
enum SND_CARDS ;
struct pcm_stream_info ;
struct snd_pmic_ops ;
extern void sst_mad_send_jack_report(struct snd_jack *jack,
int buttonpressevent,
int status);
int intemad_set_headset_state(int state);
int intelmad_get_mic_bias(void);
struct intel_sst_pcm_control ;
struct intel_sst_card_ops ;
struct sc_reg_access ;
enum sc_reg_access_type ;
int register_sst_card(struct intel_sst_card_ops *card);
void unregister_sst_card(struct intel_sst_card_ops *card);
