#define AVFORMAT_RIFF_H
extern const AVMetadataConv ff_riff_info_conv[];
ff_start_tag;
ff_end_tag;
ff_get_bmp_header;
ff_put_bmp_header;
#define FF_PUT_WAV_HEADER_FORCE_WAVEFORMATEX    0x00000001
#define FF_PUT_WAV_HEADER_SKIP_CHANNELMASK      0x00000002
ff_put_wav_header;
ff_wav_codec_get_id;
ff_get_wav_header;
extern const AVCodecTag ff_codec_bmp_tags[];
extern const AVCodecTag ff_codec_wav_tags[];
ff_parse_specific_params;
ff_read_riff_info;
ff_riff_write_info;
ff_riff_write_info_tag;
typedef uint8_t ff_asf_guid[16];
typedef struct AVCodecGuid  AVCodecGuid;
extern const AVCodecGuid ff_codec_wav_guids[];
#define FF_PRI_GUID \
\
FF_ARG_GUID \
g[0], g[1], g[2],  g[3],  g[4],  g[5],  g[6],  g[7], \
g[8], g[9], g[10], g[11], g[12], g[13], g[14], g[15],\
g[3], g[2], g[1],  g[0],  g[5],  g[4],  g[7],  g[6], \
g[8], g[9], g[10], g[11], g[12], g[13], g[14], g[15]
#define FF_MEDIASUBTYPE_BASE_GUID \
0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71
#define FF_AMBISONIC_BASE_GUID \
0x21, 0x07, 0xD3, 0x11, 0x86, 0x44, 0xC8, 0xC1, 0xCA, 0x00, 0x00, 0x00
ff_guidcmp
ff_get_guid;
ff_put_guid;
*ff_get_codec_guid;
ff_codec_guid_get_id;
