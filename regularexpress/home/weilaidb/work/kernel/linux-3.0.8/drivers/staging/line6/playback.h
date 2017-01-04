#define PLAYBACK_H
#define USE_CLEAR_BUFFER_WORKAROUND 1
extern struct snd_pcm_ops snd_line6_playback_ops;
extern int line6_create_audio_out_urbs(struct snd_line6_pcm *line6pcm);
extern int line6_submit_audio_out_all_urbs(struct snd_line6_pcm *line6pcm);
extern void line6_unlink_audio_out_urbs(struct snd_line6_pcm *line6pcm);
extern void line6_unlink_wait_clear_audio_out_urbs(struct snd_line6_pcm
*line6pcm);
extern int snd_line6_playback_trigger(struct snd_line6_pcm *line6pcm, int cmd);
