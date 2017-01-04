#define __SOUND_HDSP_H
#define HDSP_MATRIX_MIXER_SIZE 2048
enum HDSP_IO_Type ;
struct hdsp_peak_rms ;
#define SNDRV_HDSP_IOCTL_GET_PEAK_RMS _IOR('H', 0x40, struct hdsp_peak_rms)
struct hdsp_config_info ;
#define SNDRV_HDSP_IOCTL_GET_CONFIG_INFO _IOR('H', 0x41, struct hdsp_config_info)
struct hdsp_firmware ;
#define SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE _IOW('H', 0x42, struct hdsp_firmware)
struct hdsp_version ;
#define SNDRV_HDSP_IOCTL_GET_VERSION _IOR('H', 0x43, struct hdsp_version)
struct hdsp_mixer ;
#define SNDRV_HDSP_IOCTL_GET_MIXER _IOR('H', 0x44, struct hdsp_mixer)
struct hdsp_9632_aeb ;
#define SNDRV_HDSP_IOCTL_GET_9632_AEB _IOR('H', 0x45, struct hdsp_9632_aeb)
typedef enum HDSP_IO_Type HDSP_IO_Type;
typedef struct hdsp_peak_rms hdsp_peak_rms_t;
typedef struct hdsp_config_info hdsp_config_info_t;
typedef struct hdsp_firmware hdsp_firmware_t;
typedef struct hdsp_version hdsp_version_t;
typedef struct hdsp_mixer hdsp_mixer_t;
typedef struct hdsp_9632_aeb hdsp_9632_aeb_t;
