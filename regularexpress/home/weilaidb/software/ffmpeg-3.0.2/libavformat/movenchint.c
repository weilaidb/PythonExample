int ff_mov_init_hinting(AVFormatContext *s, int index, int src_index)
static void sample_queue_pop(HintSampleQueue *queue)
static void sample_queue_free(HintSampleQueue *queue)
static void sample_queue_push(HintSampleQueue *queue, uint8_t *data, int size,
int sample)
static void sample_queue_retain(HintSampleQueue *queue)
static int match_segments(const uint8_t *haystack, int h_len,
const uint8_t *needle, int n_pos, int n_len,
int *match_h_offset_ptr, int *match_n_offset_ptr,
int *match_len_ptr)
static int find_sample_match(const uint8_t *data, int len,
HintSampleQueue *queue, int *pos,
int *match_sample, int *match_offset,
int *match_len)
static void output_immediate(const uint8_t *data, int size,
AVIOContext *out, int *entries)
static void output_match(AVIOContext *out, int match_sample,
int match_offset, int match_len, int *entries)
static void describe_payload(const uint8_t *data, int size,
AVIOContext *out, int *entries,
HintSampleQueue *queue)
static int write_hint_packets(AVIOContext *out, const uint8_t *data,
int size, MOVTrack *trk, int64_t *dts)
int ff_mov_add_hinted_packet(AVFormatContext *s, AVPacket *pkt,
int track_index, int sample,
uint8_t *sample_data, int sample_size)
void ff_mov_close_hinting(MOVTrack *track)
