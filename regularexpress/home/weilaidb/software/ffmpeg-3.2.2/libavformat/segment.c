typedef struct SegmentListEntry  SegmentListEntry;
typedef enum  ListType;
#define SEGMENT_LIST_FLAG_CACHE 1
#define SEGMENT_LIST_FLAG_LIVE  2
typedef struct SegmentContext  SegmentContext;
print_csv_escaped_str
segment_mux_init
set_segment_filename
segment_start
segment_list_open
segment_list_print_entry
segment_end
parse_times
parse_frames
open_null_ctx
close_null_ctxp
select_reference_stream
seg_free
seg_init
seg_write_header
seg_write_packet
seg_write_trailer
OFFSET offsetof(SegmentContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
};
static const AVClass seg_class = ;
AVOutputFormat ff_segment_muxer = ;
static const AVClass sseg_class = ;
AVOutputFormat ff_stream_segment_muxer = ;
