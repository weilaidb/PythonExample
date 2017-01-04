#define ECHOGALS_FAMILY
#define ECHOCARD_DARLA24
#define ECHOCARD_NAME "Darla24"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_INPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	8
#define PX_DIGITAL_IN	10
#define PX_NUM		10
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	8
#define BX_ANALOG_IN	8
#define BX_DIGITAL_IN	10
#define BX_NUM		10
MODULE_FIRMWARE("ea/darla24_dsp.fw");
#define FW_DARLA24_DSP	0
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
