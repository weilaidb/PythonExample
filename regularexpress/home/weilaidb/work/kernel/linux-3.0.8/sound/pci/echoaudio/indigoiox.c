#define INDIGO_FAMILY
#define ECHOCARD_INDIGO_IOX
#define ECHOCARD_NAME "Indigo IOx"
#define ECHOCARD_HAS_MONITOR
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_VMIXER
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	8
#define PX_DIGITAL_IN	10
#define PX_NUM		10
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	2
#define BX_ANALOG_IN	2
#define BX_DIGITAL_IN	4
#define BX_NUM		4
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/indigo_iox_dsp.fw");
#define FW_361_LOADER		0
#define FW_INDIGO_IOX_DSP	1
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
