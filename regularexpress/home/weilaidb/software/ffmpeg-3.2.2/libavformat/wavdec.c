typedef struct WAVDemuxContext  WAVDemuxContext;
set_spdif
#if CONFIG_WAV_DEMUXER
next_tag
wav_seek_tag
find_tag
wav_probe
handle_stream_probing
wav_parse_fmt_tag
wav_parse_xma2_tag
wav_parse_bext_string
wav_parse_bext_tag
static const AVMetadataConv wav_metadata_conv[] = ;
wav_read_header
find_guid
#define MAX_SIZE 4096
wav_read_packet
wav_read_seek
OFFSET offsetof(WAVDemuxContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption demux_options[] = ;
static const AVClass wav_demuxer_class = ;
AVInputFormat ff_wav_demuxer = ;
#if CONFIG_W64_DEMUXER
w64_probe
w64_read_header
AVInputFormat ff_w64_demuxer = ;
