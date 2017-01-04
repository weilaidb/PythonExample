static AVInputFormat *first_iformat = NULL;
static AVOutputFormat *first_oformat = NULL;
static AVInputFormat **last_iformat = &first_iformat;
static AVOutputFormat **last_oformat = &first_oformat;
AVInputFormat *av_iformat_next(const AVInputFormat *f)
AVOutputFormat *av_oformat_next(const AVOutputFormat *f)
void av_register_input_format(AVInputFormat *format)
void av_register_output_format(AVOutputFormat *format)
int av_match_ext(const char *filename, const char *extensions)
AVOutputFormat *av_guess_format(const char *short_name, const char *filename,
const char *mime_type)
enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
const char *filename, const char *mime_type,
enum AVMediaType type)
AVInputFormat *av_find_input_format(const char *short_name)
AVInputFormat *av_probe_input_format3(AVProbeData *pd, int is_opened,
int *score_ret)
AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max)
AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened)
int av_probe_input_buffer2(AVIOContext *pb, AVInputFormat **fmt,
const char *filename, void *logctx,
unsigned int offset, unsigned int max_probe_size)
int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
const char *filename, void *logctx,
unsigned int offset, unsigned int max_probe_size)
