#define ECHO24_FAMILY
#define ECHOCARD_MONA
#define ECHOCARD_NAME "Mona"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_ASIC
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_DIGITAL_IO
#define ECHOCARD_HAS_DIGITAL_IN_AUTOMUTE
#define ECHOCARD_HAS_DIGITAL_MODE_SWITCH
#define ECHOCARD_HAS_EXTERNAL_CLOCK
#define ECHOCARD_HAS_ADAT	6
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	6
#define PX_ANALOG_IN	14
#define PX_DIGITAL_IN	18
#define PX_NUM		26
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	6
#define BX_ANALOG_IN	14
#define BX_DIGITAL_IN	18
#define BX_NUM		26
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/mona_301_dsp.fw");
MODULE_FIRMWARE("ea/mona_361_dsp.fw");
MODULE_FIRMWARE("ea/mona_301_1_asic_48.fw");
MODULE_FIRMWARE("ea/mona_301_1_asic_96.fw");
MODULE_FIRMWARE("ea/mona_361_1_asic_48.fw");
MODULE_FIRMWARE("ea/mona_361_1_asic_96.fw");
MODULE_FIRMWARE("ea/mona_2_asic.fw");
#define FW_361_LOADER		0
#define FW_MONA_301_DSP		1
#define FW_MONA_361_DSP		2
#define FW_MONA_301_1_ASIC48	3
#define FW_MONA_301_1_ASIC96	4
#define FW_MONA_361_1_ASIC48	5
#define FW_MONA_361_1_ASIC96	6
#define FW_MONA_2_ASIC		7
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
