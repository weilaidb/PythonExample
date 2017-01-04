#define PCM_H
#define LINE6_ISO_BUFFERS	2
#define LINE6_ISO_PACKETS	1
#define LINE6_ISO_INTERVAL	1
#define LINE6_IMPULSE_DEFAULT_PERIOD 100
#define LINE6_BACKUP_MONITOR_SIGNAL 0
#define LINE6_REUSE_DMA_AREA_FOR_PLAYBACK 0
#define get_substream(line6pcm, stream)	\
(line6pcm->pcm->streams[stream].substream)
enum ;
struct line6_pcm_properties ;
struct snd_line6_pcm ;
extern int line6_init_pcm(struct usb_line6 *line6,
struct line6_pcm_properties *properties);
extern int snd_line6_trigger(struct snd_pcm_substream *substream, int cmd);
extern int snd_line6_prepare(struct snd_pcm_substream *substream);
extern void line6_pcm_disconnect(struct snd_line6_pcm *line6pcm);
extern int line6_pcm_start(struct snd_line6_pcm *line6pcm, int channels);
extern int line6_pcm_stop(struct snd_line6_pcm *line6pcm, int channels);
#define PRINT_FRAME_DIFF(op)
