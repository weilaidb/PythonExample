#define SOUND_FIREWIRE_AMDTP_H_INCLUDED
enum cip_out_flags ;
enum cip_sfc ;
#define AMDTP_OUT_PCM_FORMAT_BITS	(SNDRV_PCM_FMTBIT_S16 | \
SNDRV_PCM_FMTBIT_S32)
struct fw_unit;
struct fw_iso_context;
struct snd_pcm_substream;
struct amdtp_out_stream ;
int amdtp_out_stream_init(struct amdtp_out_stream *s, struct fw_unit *unit,
enum cip_out_flags flags);
void amdtp_out_stream_destroy(struct amdtp_out_stream *s);
void amdtp_out_stream_set_rate(struct amdtp_out_stream *s, unsigned int rate);
unsigned int amdtp_out_stream_get_max_payload(struct amdtp_out_stream *s);
int amdtp_out_stream_start(struct amdtp_out_stream *s, int channel, int speed);
void amdtp_out_stream_update(struct amdtp_out_stream *s);
void amdtp_out_stream_stop(struct amdtp_out_stream *s);
void amdtp_out_stream_set_pcm_format(struct amdtp_out_stream *s,
snd_pcm_format_t format);
void amdtp_out_stream_pcm_abort(struct amdtp_out_stream *s);
static inline void amdtp_out_stream_set_pcm(struct amdtp_out_stream *s,
unsigned int pcm_channels)
static inline void amdtp_out_stream_set_midi(struct amdtp_out_stream *s,
unsigned int midi_ports)
static inline bool amdtp_out_streaming_error(struct amdtp_out_stream *s)
static inline void amdtp_out_stream_pcm_prepare(struct amdtp_out_stream *s)
static inline void amdtp_out_stream_pcm_trigger(struct amdtp_out_stream *s,
struct snd_pcm_substream *pcm)
static inline unsigned long
amdtp_out_stream_pcm_pointer(struct amdtp_out_stream *s)
static inline bool cip_sfc_is_base_44100(enum cip_sfc sfc)
