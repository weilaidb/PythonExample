#define __SOUND_ASOUND_FM_H
#define SNDRV_DM_FM_MODE_OPL2	0x00
#define SNDRV_DM_FM_MODE_OPL3	0x01
struct snd_dm_fm_info ;
struct snd_dm_fm_voice ;
struct snd_dm_fm_note ;
struct snd_dm_fm_params ;
#define SNDRV_DM_FM_IOCTL_INFO		_IOR('H', 0x20, struct snd_dm_fm_info)
#define SNDRV_DM_FM_IOCTL_RESET		_IO ('H', 0x21)
#define SNDRV_DM_FM_IOCTL_PLAY_NOTE	_IOW('H', 0x22, struct snd_dm_fm_note)
#define SNDRV_DM_FM_IOCTL_SET_VOICE	_IOW('H', 0x23, struct snd_dm_fm_voice)
#define SNDRV_DM_FM_IOCTL_SET_PARAMS	_IOW('H', 0x24, struct snd_dm_fm_params)
#define SNDRV_DM_FM_IOCTL_SET_MODE	_IOW('H', 0x25, int)
#define SNDRV_DM_FM_IOCTL_SET_CONNECTION	_IOW('H', 0x26, int)
#define SNDRV_DM_FM_IOCTL_CLEAR_PATCHES	_IO ('H', 0x40)
#define SNDRV_DM_FM_OSS_IOCTL_RESET		0x20
#define SNDRV_DM_FM_OSS_IOCTL_PLAY_NOTE		0x21
#define SNDRV_DM_FM_OSS_IOCTL_SET_VOICE		0x22
#define SNDRV_DM_FM_OSS_IOCTL_SET_PARAMS	0x23
#define SNDRV_DM_FM_OSS_IOCTL_SET_MODE		0x24
#define SNDRV_DM_FM_OSS_IOCTL_SET_OPL		0x25
#define FM_KEY_SBI	"SBI\032"
#define FM_KEY_2OP	"2OP\032"
#define FM_KEY_4OP	"4OP\032"
struct sbi_patch ;
