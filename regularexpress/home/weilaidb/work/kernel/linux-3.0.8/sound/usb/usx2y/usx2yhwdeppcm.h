#define MAXPACK 50
#define MAXBUFFERMS 100
#define MAXSTRIDE 3
#define SSS (((MAXPACK*MAXBUFFERMS*MAXSTRIDE + 4096) / 4096) * 4096)
struct snd_usX2Y_hwdep_pcm_shm ;
int usX2Y_hwdep_pcm_new(struct snd_card *card);
