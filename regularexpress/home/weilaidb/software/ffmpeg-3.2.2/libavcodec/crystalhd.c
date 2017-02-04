#define _XOPEN_SOURCE 600
#if HAVE_UNISTD_H
#define OUTPUT_PROC_TIMEOUT 50
#define TIMESTAMP_UNIT 100000
#define BASE_WAIT 10000
#define WAIT_UNIT 1000
typedef enum  CopyRet;
typedef struct OpaqueList  OpaqueList;
typedef struct  CHDContext;
static const AVOption options[] = ;
id2subtype
print_frame_info
opaque_list_push
*opaque_list_pop
flush
uninit
init_bsf
init
copy_frame
receive_frame
decode
#if CONFIG_H264_CRYSTALHD_DECODER
static AVClass h264_class = ;
AVCodec ff_h264_crystalhd_decoder = ;
#if CONFIG_MPEG2_CRYSTALHD_DECODER
static AVClass mpeg2_class = ;
AVCodec ff_mpeg2_crystalhd_decoder = ;
#if CONFIG_MPEG4_CRYSTALHD_DECODER
static AVClass mpeg4_class = ;
AVCodec ff_mpeg4_crystalhd_decoder = ;
#if CONFIG_MSMPEG4_CRYSTALHD_DECODER
static AVClass msmpeg4_class = ;
AVCodec ff_msmpeg4_crystalhd_decoder = ;
#if CONFIG_VC1_CRYSTALHD_DECODER
static AVClass vc1_class = ;
AVCodec ff_vc1_crystalhd_decoder = ;
#if CONFIG_WMV3_CRYSTALHD_DECODER
static AVClass wmv3_class = ;
AVCodec ff_wmv3_crystalhd_decoder = ;
