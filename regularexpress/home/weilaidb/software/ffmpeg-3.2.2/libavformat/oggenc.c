#define MAX_PAGE_SIZE 65025
typedef struct OGGPage  OGGPage;
typedef struct OGGStreamContext  OGGStreamContext;
typedef struct OGGPageList  OGGPageList;
typedef struct OGGContext  OGGContext;
OFFSET offsetof(OGGContext, x)
#define PARAM AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
OGG_CLASS\
static const AVClass flavor ## _muxer_class = ;
ogg_update_checksum
ogg_write_page
ogg_key_granule
ogg_granule_to_timestamp
ogg_compare_granule
ogg_reset_cur_page
ogg_buffer_page
ogg_buffer_data
*ogg_write_vorbiscomment
ogg_build_flac_headers
#define SPEEX_HEADER_SIZE 80
ogg_build_speex_headers
#define OPUS_HEADER_SIZE 19
ogg_build_opus_headers
#define VP8_HEADER_SIZE 26
ogg_build_vp8_headers
ogg_write_pages
ogg_write_header
ogg_write_packet_internal
ogg_write_packet
ogg_write_trailer
OGG_CLASS
AVOutputFormat ff_ogg_muxer = ;
OGG_CLASS
AVOutputFormat ff_oga_muxer = ;
OGG_CLASS
AVOutputFormat ff_ogv_muxer = ;
OGG_CLASS
AVOutputFormat ff_spx_muxer = ;
OGG_CLASS
AVOutputFormat ff_opus_muxer = ;
