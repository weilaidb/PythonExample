#define ECHOGALS_FAMILY
#define ECHOCARD_GINA20
#define ECHOCARD_NAME "Gina20"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_INPUT_GAIN
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	FALSE
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	10
#define PX_DIGITAL_IN	12
#define PX_NUM		14
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	8
#define BX_ANALOG_IN	10
#define BX_DIGITAL_IN	12
#define BX_NUM		14
MODULE_FIRMWARE("ea/gina20_dsp.fw");
#define FW_GINA20_DSP	0
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
