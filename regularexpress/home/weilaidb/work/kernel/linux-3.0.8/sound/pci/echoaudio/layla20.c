#define ECHOGALS_FAMILY
#define ECHOCARD_LAYLA20
#define ECHOCARD_NAME "Layla20"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_ASIC
#define ECHOCARD_HAS_INPUT_GAIN
#define ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	FALSE
#define ECHOCARD_HAS_OUTPUT_CLOCK_SWITCH
#define ECHOCARD_HAS_MIDI
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	10
#define PX_ANALOG_IN	12
#define PX_DIGITAL_IN	20
#define PX_NUM		22
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	10
#define BX_ANALOG_IN	12
#define BX_DIGITAL_IN	20
#define BX_NUM		22
MODULE_FIRMWARE("ea/layla20_dsp.fw");
MODULE_FIRMWARE("ea/layla20_asic.fw");
#define FW_LAYLA20_DSP	0
#define FW_LAYLA20_ASIC	1
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
