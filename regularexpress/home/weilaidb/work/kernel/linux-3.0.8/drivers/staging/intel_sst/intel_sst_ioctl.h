#define __INTEL_SST_IOCTL_H__
enum sst_codec_types ;
enum sst_algo_types ;
enum snd_sst_stream_ops ;
enum stream_mode ;
enum stream_type ;
enum snd_sst_audio_device_type ;
struct snd_sst_fw_version ;
struct snd_sst_port_info ;
struct snd_sst_mix_info ;
struct snd_pcm_params ;
struct snd_mp3_params ;
#define AAC_BIT_STREAM_ADTS		0
#define AAC_BIT_STREAM_ADIF		1
#define AAC_BIT_STREAM_RAW		2
struct snd_aac_params ;
struct snd_wma_params ;
struct snd_prp_params ;
struct snd_ppp_params  __attribute__ ((packed));
struct snd_sst_postproc_info ;
struct snd_sst_prp_info  __attribute__ ((packed));
struct snd_sst_ppp_info ;
struct snd_sst_fw_info ;
union  snd_sst_codec_params ;
struct snd_sst_stream_params  __attribute__ ((packed));
struct snd_sst_params ;
struct snd_sst_vol ;
struct snd_sst_mute ;
struct snd_sst_pmic_config  __attribute__ ((packed));
struct snd_sst_get_stream_params ;
enum snd_sst_target_type ;
enum snd_sst_device_type ;
enum snd_sst_device_mode ;
enum snd_sst_port_action ;
struct snd_sst_slot_info  __attribute__ ((packed));
#define SST_MAX_TARGET_DEVICES 3
struct snd_sst_target_device   __attribute__ ((packed));
struct snd_sst_driver_info ;
enum snd_sst_buff_type ;
struct snd_sst_mmap_buff_entry ;
struct snd_sst_mmap_buffs ;
struct snd_sst_buff_entry ;
struct snd_sst_buffs ;
struct snd_sst_dbufs  ;
struct snd_sst_tuning_params  __attribute__ ((packed));
#define SNDRV_SST_STREAM_SET_PARAMS _IOR('L', 0x00, \
struct snd_sst_stream_params *)
#define SNDRV_SST_STREAM_GET_PARAMS _IOWR('L', 0x01, \
struct snd_sst_get_stream_params *)
#define SNDRV_SST_STREAM_GET_TSTAMP _IOWR('L', 0x02, __u64 *)
#define	SNDRV_SST_STREAM_DECODE	_IOWR('L', 0x03, struct snd_sst_dbufs *)
#define SNDRV_SST_STREAM_BYTES_DECODED _IOWR('L', 0x04, __u64 *)
#define SNDRV_SST_STREAM_START	_IO('A', 0x42)
#define SNDRV_SST_STREAM_DROP	_IO('A', 0x43)
#define SNDRV_SST_STREAM_DRAIN	_IO('A', 0x44)
#define SNDRV_SST_STREAM_PAUSE	_IOW('A', 0x45, int)
#define SNDRV_SST_STREAM_RESUME _IO('A', 0x47)
#define SNDRV_SST_MMAP_PLAY	_IOW('L', 0x05, struct snd_sst_mmap_buffs *)
#define SNDRV_SST_MMAP_CAPTURE _IOW('L', 0x06, struct snd_sst_mmap_buffs *)
#define SNDRV_SST_DRIVER_INFO	_IOR('L', 0x10, struct snd_sst_driver_info *)
#define SNDRV_SST_SET_VOL	_IOW('L', 0x11, struct snd_sst_vol *)
#define SNDRV_SST_GET_VOL	_IOW('L', 0x12, struct snd_sst_vol *)
#define SNDRV_SST_MUTE		_IOW('L', 0x13, struct snd_sst_mute *)
#define SNDRV_SST_FW_INFO	_IOR('L', 0x20,  struct snd_sst_fw_info *)
#define SNDRV_SST_SET_TARGET_DEVICE _IOW('L', 0x21, \
struct snd_sst_target_device *)
#define SNDRV_SST_SET_ALGO	_IOW('L', 0x30,  struct snd_ppp_params *)
#define SNDRV_SST_GET_ALGO	_IOWR('L', 0x31,  struct snd_ppp_params *)
#define SNDRV_SST_TUNING_PARAMS	_IOW('L', 0x32,  struct snd_sst_tuning_params *)
