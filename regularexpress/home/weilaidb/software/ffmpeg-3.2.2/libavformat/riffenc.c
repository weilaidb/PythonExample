int64_t ff_start_tag(AVIOContext *pb, const char *tag)
void ff_end_tag(AVIOContext *pb, int64_t start)
int ff_put_wav_header(AVFormatContext *s, AVIOContext *pb,
AVCodecParameters *par, int flags)
void ff_put_bmp_header(AVIOContext *pb, AVCodecParameters *par,
const AVCodecTag *tags, int for_asf, int ignore_extradata)
void ff_parse_specific_params(AVStream *st, int *au_rate,
int *au_ssize, int *au_scale)
void ff_riff_write_info_tag(AVIOContext *pb, const char *tag, const char *str)
static const char riff_tags[][5] = ;
static int riff_has_valid_tags(AVFormatContext *s)
void ff_riff_write_info(AVFormatContext *s)
void ff_put_guid(AVIOContext *s, const ff_asf_guid *g)
const ff_asf_guid *ff_get_codec_guid(enum AVCodecID id, const AVCodecGuid *av_guid)
