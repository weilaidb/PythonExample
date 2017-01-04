#define ECHO3G_FAMILY
#define ECHOCARD_ECHO3G
#define ECHOCARD_NAME "Echo3G"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_ASIC
#define ECHOCARD_HAS_INPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_DIGITAL_MODE_SWITCH
#define ECHOCARD_HAS_ADAT	6
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define ECHOCARD_HAS_MIDI
#define ECHOCARD_HAS_PHANTOM_POWER
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	chip->px_digital_out
#define PX_ANALOG_IN	chip->px_analog_in
#define PX_DIGITAL_IN	chip->px_digital_in
#define PX_NUM		chip->px_num
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	chip->bx_digital_out
#define BX_ANALOG_IN	chip->bx_analog_in
#define BX_DIGITAL_IN	chip->bx_digital_in
#define BX_NUM		chip->bx_num
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/echo3g_dsp.fw");
MODULE_FIRMWARE("ea/3g_asic.fw");
#define FW_361_LOADER	0
#define FW_ECHO3G_DSP	1
#define FW_3G_ASIC	2
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
