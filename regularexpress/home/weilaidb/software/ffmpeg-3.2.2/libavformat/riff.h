#define AVFORMAT_RIFF_H
extern const AVMetadataConv ff_riff_info_conv[];
int64_t ff_start_tag(AVIOContext *pb, const char *tag);
void ff_end_tag(AVIOContext *pb, int64_t start);
int ff_get_bmp_header(AVIOContext *pb, AVStream *st, unsigned *esize);
void ff_put_bmp_header(AVIOContext *pb, AVCodecParameters *par, const AVCodecTag *tags, int for_asf, int ignore_extradata);
#define FF_PUT_WAV_HEADER_FORCE_WAVEFORMATEX    0x00000001
#define FF_PUT_WAV_HEADER_SKIP_CHANNELMASK      0x00000002
int ff_put_wav_header(AVFormatContext *s, AVIOContext *pb, AVCodecParameters *par, int flags);
enum AVCodecID ff_wav_codec_get_id(unsigned int tag, int bps);
int ff_get_wav_header(AVFormatContext *s, AVIOContext *pb, AVCodecParameters *par, int size, int big_endian);
extern const AVCodecTag ff_codec_bmp_tags[];
extern const AVCodecTag ff_codec_wav_tags[];
void ff_parse_specific_params(AVStream *st, int *au_rate, int *au_ssize, int *au_scale);
int ff_read_riff_info(AVFormatContext *s, int64_t size);
void ff_riff_write_info(AVFormatContext *s);
void ff_riff_write_info_tag(AVIOContext *pb, const char *tag, const char *str);
typedef uint8_t ff_asf_guid[16];
typedef struct AVCodecGuid  AVCodecGuid;
extern const AVCodecGuid ff_codec_wav_guids[];
#define FF_PRI_GUID \
"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x " \
""
#define FF_ARG_GUID(g) \
g[0], g[1], g[2],  g[3],  g[4],  g[5],  g[6],  g[7], \
g[8], g[9], g[10], g[11], g[12], g[13], g[14], g[15],\
g[3], g[2], g[1],  g[0],  g[5],  g[4],  g[7],  g[6], \
g[8], g[9], g[10], g[11], g[12], g[13], g[14], g[15]
#define FF_MEDIASUBTYPE_BASE_GUID \
0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71
#define FF_AMBISONIC_BASE_GUID \
0x21, 0x07, 0xD3, 0x11, 0x86, 0x44, 0xC8, 0xC1, 0xCA, 0x00, 0x00, 0x00
static av_always_inline int ff_guidcmp(const void *g1, const void *g2)
int ff_get_guid(AVIOContext *s, ff_asf_guid *g);
void ff_put_guid(AVIOContext *s, const ff_asf_guid *g);
const ff_asf_guid *ff_get_codec_guid(enum AVCodecID id, const AVCodecGuid *av_guid);
enum AVCodecID ff_codec_guid_get_id(const AVCodecGuid *guids, ff_asf_guid guid);
