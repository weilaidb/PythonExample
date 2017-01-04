#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
enum _reg_v1 ;
int rev_id = 0x20;
static bool jack_det_enabled;
static int fs_init_card(void)
static int fs_enable_audiodac(int value)
static int fs_power_up_pb(unsigned int port)
static int fs_power_down_pb(unsigned int device)
static int fs_power_up_cp(unsigned int port)
static int fs_power_down_cp(unsigned int device)
static int fs_power_down(void)
static int fs_set_pcm_voice_params(void)
static int fs_set_audio_port(int status)
static int fs_set_voice_port(int status)
static int fs_set_pcm_audio_params(int sfreq, int word_size, int num_channel)
static int fs_set_selected_input_dev(u8 value)
static int fs_set_selected_output_dev(u8 value)
static int fs_set_mute(int dev_id, u8 value)
static int fs_set_vol(int dev_id, int value)
static int fs_get_mute(int dev_id, u8 *value)
static int fs_get_vol(int dev_id, int *value)
static void fs_pmic_irq_enable(void *data)
static void fs_pmic_irq_cb(void *cb_data, u8 value)
static int fs_jack_enable(void)
struct snd_pmic_ops snd_pmic_ops_fs = ;
