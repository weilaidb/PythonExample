#if HAVE_UNISTD_H
typedef enum  DASHTmplId;
typedef struct Segment  Segment;
typedef struct OutputStream  OutputStream;
typedef struct DASHContext  DASHContext;
dash_write
set_codec_str
dash_free
output_segment_list
dash_read_tmpl_id
dash_fill_tmpl_params
*xmlescape
write_time
format_date_now
write_manifest
dash_init
dash_write_header
add_segment
write_styp
find_index_range
update_stream_extradata
dash_flush
dash_write_packet
dash_write_trailer
dash_check_bitstream
OFFSET offsetof(DASHContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ,
, 0, 0, E },
,
};
static const AVClass dash_class = ;
AVOutputFormat ff_dash_muxer = ;
