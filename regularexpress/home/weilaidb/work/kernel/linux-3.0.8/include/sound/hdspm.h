#define __SOUND_HDSPM_H
#define HDSPM_MAX_CHANNELS      64
enum hdspm_io_type ;
enum hdspm_speed ;
struct hdspm_peak_rms ;
#define SNDRV_HDSPM_IOCTL_GET_PEAK_RMS \
_IOR('H', 0x42, struct hdspm_peak_rms)
struct hdspm_config ;
#define SNDRV_HDSPM_IOCTL_GET_CONFIG \
_IOR('H', 0x41, struct hdspm_config)
enum hdspm_ltc_format ;
enum hdspm_ltc_frame ;
enum hdspm_ltc_input_format ;
struct hdspm_ltc ;
#define SNDRV_HDSPM_IOCTL_GET_LTC _IOR('H', 0x46, struct hdspm_mixer_ioctl)
enum hdspm_sync ;
enum hdspm_madi_input ;
enum hdspm_madi_channel_format ;
enum hdspm_madi_frame_format ;
enum hdspm_syncsource ;
struct hdspm_status ;
#define SNDRV_HDSPM_IOCTL_GET_STATUS \
_IOR('H', 0x47, struct hdspm_status)
#define HDSPM_ADDON_TCO 1
struct hdspm_version ;
#define SNDRV_HDSPM_IOCTL_GET_VERSION _IOR('H', 0x48, struct hdspm_version)
#define HDSPM_MIXER_CHANNELS HDSPM_MAX_CHANNELS
struct hdspm_channelfader ;
struct hdspm_mixer ;
struct hdspm_mixer_ioctl ;
#define SNDRV_HDSPM_IOCTL_GET_MIXER _IOR('H', 0x44, struct hdspm_mixer_ioctl)
typedef struct hdspm_peak_rms hdspm_peak_rms_t;
typedef struct hdspm_config_info hdspm_config_info_t;
typedef struct hdspm_version hdspm_version_t;
typedef struct hdspm_channelfader snd_hdspm_channelfader_t;
typedef struct hdspm_mixer hdspm_mixer_t;
