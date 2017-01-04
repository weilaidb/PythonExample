#define __SOUND_PCXHR_H
#define PCXHR_DRIVER_VERSION		0x000906
#define PCXHR_DRIVER_VERSION_STRING	"0.9.6"
#define PCXHR_MAX_CARDS		6
#define PCXHR_PLAYBACK_STREAMS	4
#define PCXHR_GRANULARITY	96
#define PCXHR_GRANULARITY_MIN	96
#define PCXHR_GRANULARITY_HR22	192
struct snd_pcxhr;
struct pcxhr_mgr;
struct pcxhr_stream;
struct pcxhr_pipe;
enum pcxhr_clock_type ;
struct pcxhr_mgr ;
enum pcxhr_stream_status ;
struct pcxhr_stream ;
enum pcxhr_pipe_status ;
struct pcxhr_pipe ;
struct snd_pcxhr ;
struct pcxhr_hostport
;
int pcxhr_create_pcm(struct snd_pcxhr *chip);
int pcxhr_set_clock(struct pcxhr_mgr *mgr, unsigned int rate);
int pcxhr_get_external_clock(struct pcxhr_mgr *mgr,
enum pcxhr_clock_type clock_type,
int *sample_rate);
