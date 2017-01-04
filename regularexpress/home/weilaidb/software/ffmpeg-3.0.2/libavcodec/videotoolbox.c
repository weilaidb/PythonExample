#if CONFIG_VIDEOTOOLBOX
#  include "videotoolbox.h"
#  include "vda.h"
#  define kVTVideoDecoderSpecification_RequireHardwareAcceleratedVideoDecoder CFSTR("RequireHardwareAcceleratedVideoDecoder")
#define VIDEOTOOLBOX_ESDS_EXTRADATA_PADDING  12
static void videotoolbox_buffer_release(void *opaque, uint8_t *data)
static int videotoolbox_buffer_copy(VTContext *vtctx,
const uint8_t *buffer,
uint32_t size)
int ff_videotoolbox_alloc_frame(AVCodecContext *avctx, AVFrame *frame)
#define AV_W8(p, v) *(p) = (v)
CFDataRef ff_videotoolbox_avcc_extradata_create(AVCodecContext *avctx)
int ff_videotoolbox_buffer_create(VTContext *vtctx, AVFrame *frame)
int ff_videotoolbox_h264_start_frame(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
int ff_videotoolbox_h264_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
int ff_videotoolbox_uninit(AVCodecContext *avctx)
#if CONFIG_VIDEOTOOLBOX
static void videotoolbox_write_mp4_descr_length(PutByteContext *pb, int length)
static CFDataRef videotoolbox_esds_extradata_create(AVCodecContext *avctx)
static CMSampleBufferRef videotoolbox_sample_buffer_create(CMFormatDescriptionRef fmt_desc,
void *buffer,
int size)
static void videotoolbox_decoder_callback(void *opaque,
void *sourceFrameRefCon,
OSStatus status,
VTDecodeInfoFlags flags,
CVImageBufferRef image_buffer,
CMTime pts,
CMTime duration)
static OSStatus videotoolbox_session_decode_frame(AVCodecContext *avctx)
static int videotoolbox_common_end_frame(AVCodecContext *avctx, AVFrame *frame)
static int videotoolbox_h264_end_frame(AVCodecContext *avctx)
static int videotoolbox_mpeg_start_frame(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int videotoolbox_mpeg_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int videotoolbox_mpeg_end_frame(AVCodecContext *avctx)
static CFDictionaryRef videotoolbox_decoder_config_create(CMVideoCodecType codec_type,
AVCodecContext *avctx)
static CFDictionaryRef videotoolbox_buffer_attributes_create(int width,
int height,
OSType pix_fmt)
static CMVideoFormatDescriptionRef videotoolbox_format_desc_create(CMVideoCodecType codec_type,
CFDictionaryRef decoder_spec,
int width,
int height)
static int videotoolbox_default_init(AVCodecContext *avctx)
static void videotoolbox_default_free(AVCodecContext *avctx)
AVHWAccel ff_h263_videotoolbox_hwaccel = ;
AVHWAccel ff_h264_videotoolbox_hwaccel = ;
AVHWAccel ff_mpeg1_videotoolbox_hwaccel = ;
AVHWAccel ff_mpeg2_videotoolbox_hwaccel = ;
AVHWAccel ff_mpeg4_videotoolbox_hwaccel = ;
AVVideotoolboxContext *av_videotoolbox_alloc_context(void)
int av_videotoolbox_default_init(AVCodecContext *avctx)
int av_videotoolbox_default_init2(AVCodecContext *avctx, AVVideotoolboxContext *vtctx)
void av_videotoolbox_default_free(AVCodecContext *avctx)
