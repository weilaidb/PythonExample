#define __SOUND_SEQ_OSS_H
struct snd_seq_oss_arg ;
struct snd_seq_oss_callback ;
#define SNDRV_SEQ_OSS_FILE_ACMODE		3
#define SNDRV_SEQ_OSS_FILE_READ		1
#define SNDRV_SEQ_OSS_FILE_WRITE		2
#define SNDRV_SEQ_OSS_FILE_NONBLOCK	4
#define SNDRV_SEQ_OSS_MODE_SYNTH		0
#define SNDRV_SEQ_OSS_MODE_MUSIC		1
#define SNDRV_SEQ_OSS_PROCESS_EVENTS	0
#define SNDRV_SEQ_OSS_PASS_EVENTS		1
#define SNDRV_SEQ_OSS_PROCESS_KEYPRESS	2
#define SNDRV_SEQ_OSS_CTRLRATE		100
#define SNDRV_SEQ_OSS_MAX_QLEN		1024
struct snd_seq_oss_reg ;
#define SNDRV_SEQ_DEV_ID_OSS		"seq-oss"
