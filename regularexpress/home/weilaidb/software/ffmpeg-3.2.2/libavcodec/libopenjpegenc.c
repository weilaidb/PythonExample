#if HAVE_OPENJPEG_2_1_OPENJPEG_H
#  include <openjpeg-2.1/openjpeg.h>
#elif HAVE_OPENJPEG_2_0_OPENJPEG_H
#  include <openjpeg-2.0/openjpeg.h>
#elif HAVE_OPENJPEG_1_5_OPENJPEG_H
#  include <openjpeg-1.5/openjpeg.h>
#  include <openjpeg.h>
#if HAVE_OPENJPEG_2_1_OPENJPEG_H || HAVE_OPENJPEG_2_0_OPENJPEG_H
#  define OPENJPEG_MAJOR_VERSION 2
OPJ OPJ_##x
#  define OPENJPEG_MAJOR_VERSION 1
OPJ x
typedef struct LibOpenJPEGContext  LibOpenJPEGContext;
error_callback
warning_callback
info_callback
#if OPENJPEG_MAJOR_VERSION == 2
typedef struct PacketWriter  PacketWriter;
stream_write
stream_skip
stream_seek
cinema_parameters
*mj2_create_image
libopenjpeg_encode_init
libopenjpeg_copy_packed8
libopenjpeg_copy_packed12
libopenjpeg_copy_packed16
libopenjpeg_copy_unpacked8
libopenjpeg_copy_unpacked16
libopenjpeg_encode_frame
libopenjpeg_encode_close
OFFSET offsetof(LibOpenJPEGContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass openjpeg_class = ;
AVCodec ff_libopenjpeg_encoder = ;
