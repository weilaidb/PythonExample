int ff_get_guid(AVIOContext *s, ff_asf_guid *g)
enum AVCodecID ff_codec_guid_get_id(const AVCodecGuid *guids, ff_asf_guid guid)
static void parse_waveformatex(AVIOContext *pb, AVCodecContext *c)
int ff_get_wav_header(AVFormatContext *s, AVIOContext *pb,
AVCodecContext *codec, int size, int big_endian)
enum AVCodecID ff_wav_codec_get_id(unsigned int tag, int bps)
int ff_get_bmp_header(AVIOContext *pb, AVStream *st, unsigned *esize)
int ff_read_riff_info(AVFormatContext *s, int64_t size)
