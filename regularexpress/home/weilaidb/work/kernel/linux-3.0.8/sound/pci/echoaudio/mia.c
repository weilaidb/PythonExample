#define ECHO24_FAMILY
#define ECHOCARD_MIA
#define ECHOCARD_NAME "Mia"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_INPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_VMIXER
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	FALSE
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define ECHOCARD_HAS_MIDI
#define ECHOCARD_HAS_LINE_OUT_GAIN
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	8
#define PX_DIGITAL_IN	10
#define PX_NUM		12
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	2
#define BX_ANALOG_IN	4
#define BX_DIGITAL_IN	6
#define BX_NUM		8
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/mia_dsp.fw");
#define FW_361_LOADER	0
#define FW_MIA_DSP	1
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
