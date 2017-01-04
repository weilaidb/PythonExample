#define __SOUND_MIXART_H
#define MIXART_DRIVER_VERSION	0x000100
struct mixart_uid ;
struct mem_area ;
struct mixart_route ;
#define MIXART_MOTHERBOARD_XLX_INDEX  0
#define MIXART_MOTHERBOARD_ELF_INDEX  1
#define MIXART_AESEBUBOARD_XLX_INDEX  2
#define MIXART_HARDW_FILES_MAX_INDEX  3
#define MIXART_MAX_CARDS	4
#define MSG_FIFO_SIZE           16
#define MIXART_MAX_PHYS_CONNECTORS  (MIXART_MAX_CARDS * 2 * 2)
struct mixart_mgr ;
#define MIXART_STREAM_STATUS_FREE	0
#define MIXART_STREAM_STATUS_OPEN	1
#define MIXART_STREAM_STATUS_RUNNING	2
#define MIXART_STREAM_STATUS_DRAINING	3
#define MIXART_STREAM_STATUS_PAUSE	4
#define MIXART_PLAYBACK_STREAMS		4
#define MIXART_CAPTURE_STREAMS		1
#define MIXART_PCM_ANALOG		0
#define MIXART_PCM_DIGITAL		1
#define MIXART_PCM_TOTAL		2
#define MIXART_MAX_STREAM_PER_CARD  (MIXART_PCM_TOTAL * (MIXART_PLAYBACK_STREAMS + MIXART_CAPTURE_STREAMS) )
#define MIXART_NOTIFY_CARD_MASK		0xF000
#define MIXART_NOTIFY_CARD_OFFSET	12
#define MIXART_NOTIFY_PCM_MASK		0x0F00
#define MIXART_NOTIFY_PCM_OFFSET	8
#define MIXART_NOTIFY_CAPT_MASK		0x0080
#define MIXART_NOTIFY_SUBS_MASK		0x007F
struct mixart_stream ;
enum mixart_pipe_status ;
struct mixart_pipe ;
struct snd_mixart ;
struct mixart_bufferinfo
;
struct mixart_flowinfo
;
int snd_mixart_create_pcm(struct snd_mixart * chip);
struct mixart_pipe *snd_mixart_add_ref_pipe(struct snd_mixart *chip, int pcm_number, int capture, int monitoring);
int snd_mixart_kill_ref_pipe(struct mixart_mgr *mgr, struct mixart_pipe *pipe, int monitoring);
