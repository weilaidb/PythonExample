#define ECHO24_FAMILY
#define ECHOCARD_GINA24
#define ECHOCARD_NAME "Gina24"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_ASIC
#define ECHOCARD_HAS_INPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_OUTPUT_NOMINAL_LEVEL
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_DIGITAL_IN_AUTOMUTE
#define ECHOCARD_HAS_DIGITAL_MODE_SWITCH
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	6
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	16
#define PX_DIGITAL_IN	18
#define PX_NUM		26
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	8
#define BX_ANALOG_IN	16
#define BX_DIGITAL_IN	18
#define BX_NUM		26
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/gina24_301_dsp.fw");
MODULE_FIRMWARE("ea/gina24_361_dsp.fw");
MODULE_FIRMWARE("ea/gina24_301_asic.fw");
MODULE_FIRMWARE("ea/gina24_361_asic.fw");
#define FW_361_LOADER		0
#define FW_GINA24_301_DSP	1
#define FW_GINA24_361_DSP	2
#define FW_GINA24_301_ASIC	3
#define FW_GINA24_361_ASIC	4
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;