#define __SOUND_SFNT_INFO_H
#define SNDRV_OSS_PATCHKEY(id) (0xfd00|id)
#define SNDRV_OSS_PATCHKEY(id) ((id<<8)|0xfd)
struct soundfont_patch_info ;
#define SNDRV_SFNT_PATCH_NAME_LEN	32
struct soundfont_open_parm ;
struct soundfont_voice_parm ;
struct soundfont_voice_info ;
struct soundfont_voice_rec_hdr ;
struct soundfont_sample_info ;
struct soundfont_voice_map ;
#define SNDRV_EMUX_HWDEP_NAME	"Emux WaveTable"
#define SNDRV_EMUX_VERSION	((1 << 16) | (0 << 8) | 0)
struct snd_emux_misc_mode ;
#define SNDRV_EMUX_IOCTL_VERSION	_IOR('H', 0x80, unsigned int)
#define SNDRV_EMUX_IOCTL_LOAD_PATCH	_IOWR('H', 0x81, struct soundfont_patch_info)
#define SNDRV_EMUX_IOCTL_RESET_SAMPLES	_IO('H', 0x82)
#define SNDRV_EMUX_IOCTL_REMOVE_LAST_SAMPLES _IO('H', 0x83)
#define SNDRV_EMUX_IOCTL_MEM_AVAIL	_IOW('H', 0x84, int)
#define SNDRV_EMUX_IOCTL_MISC_MODE	_IOWR('H', 0x84, struct snd_emux_misc_mode)
