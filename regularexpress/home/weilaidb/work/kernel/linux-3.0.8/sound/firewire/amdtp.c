#define TICKS_PER_CYCLE		3072
#define CYCLES_PER_SECOND	8000
#define TICKS_PER_SECOND	(TICKS_PER_CYCLE * CYCLES_PER_SECOND)
#define TRANSFER_DELAY_TICKS	0x2e00
#define TAG_CIP			1
#define CIP_EOH			(1u << 31)
#define CIP_FMT_AM		(0x10 << 24)
#define AMDTP_FDF_AM824		(0 << 19)
#define AMDTP_FDF_SFC_SHIFT	16
#define INTERRUPT_INTERVAL	16
#define QUEUE_LENGTH		48
int amdtp_out_stream_init(struct amdtp_out_stream *s, struct fw_unit *unit,
enum cip_out_flags flags)
EXPORT_SYMBOL(amdtp_out_stream_init);
void amdtp_out_stream_destroy(struct amdtp_out_stream *s)
EXPORT_SYMBOL(amdtp_out_stream_destroy);
void amdtp_out_stream_set_rate(struct amdtp_out_stream *s, unsigned int rate)
EXPORT_SYMBOL(amdtp_out_stream_set_rate);
unsigned int amdtp_out_stream_get_max_payload(struct amdtp_out_stream *s)
EXPORT_SYMBOL(amdtp_out_stream_get_max_payload);
static void amdtp_write_s16(struct amdtp_out_stream *s,
struct snd_pcm_substream *pcm,
__be32 *buffer, unsigned int frames);
static void amdtp_write_s32(struct amdtp_out_stream *s,
struct snd_pcm_substream *pcm,
__be32 *buffer, unsigned int frames);
void amdtp_out_stream_set_pcm_format(struct amdtp_out_stream *s,
snd_pcm_format_t format)
EXPORT_SYMBOL(amdtp_out_stream_set_pcm_format);
static unsigned int calculate_data_blocks(struct amdtp_out_stream *s)
static unsigned int calculate_syt(struct amdtp_out_stream *s,
unsigned int cycle)
static void amdtp_write_s32(struct amdtp_out_stream *s,
struct snd_pcm_substream *pcm,
__be32 *buffer, unsigned int frames)
static void amdtp_write_s16(struct amdtp_out_stream *s,
struct snd_pcm_substream *pcm,
__be32 *buffer, unsigned int frames)
static void amdtp_fill_pcm_silence(struct amdtp_out_stream *s,
__be32 *buffer, unsigned int frames)
static void amdtp_fill_midi(struct amdtp_out_stream *s,
__be32 *buffer, unsigned int frames)
static void queue_out_packet(struct amdtp_out_stream *s, unsigned int cycle)
static void out_packet_callback(struct fw_iso_context *context, u32 cycle,
size_t header_length, void *header, void *data)
static int queue_initial_skip_packets(struct amdtp_out_stream *s)
int amdtp_out_stream_start(struct amdtp_out_stream *s, int channel, int speed)
EXPORT_SYMBOL(amdtp_out_stream_start);
void amdtp_out_stream_update(struct amdtp_out_stream *s)
EXPORT_SYMBOL(amdtp_out_stream_update);
void amdtp_out_stream_stop(struct amdtp_out_stream *s)
EXPORT_SYMBOL(amdtp_out_stream_stop);
void amdtp_out_stream_pcm_abort(struct amdtp_out_stream *s)
EXPORT_SYMBOL(amdtp_out_stream_pcm_abort);
