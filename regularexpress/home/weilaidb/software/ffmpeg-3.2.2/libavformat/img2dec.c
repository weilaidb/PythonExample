#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#if HAVE_GLOB
#define GLOB_NOMAGIC 0
#define GLOB_BRACE 0
static const int sizes[][2] = ;
infer_size
is_glob
find_image_range
img_read_probe
ff_img_read_header
ff_img_read_packet
img_read_close
img_read_seek
OFFSET offsetof(VideoDemuxData, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
const AVOption ff_img_options[] = ,
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
#if CONFIG_IMAGE2_DEMUXER
static const AVClass img2_class = ;
AVInputFormat ff_image2_demuxer = ;
#if CONFIG_IMAGE2PIPE_DEMUXER
static const AVClass img2pipe_class = ;
AVInputFormat ff_image2pipe_demuxer = ;
bmp_probe
dds_probe
dpx_probe
exr_probe
j2k_probe
jpeg_probe
jpegls_probe
pcx_probe
qdraw_probe
pictor_probe
png_probe
sgi_probe
sunrast_probe
tiff_probe
webp_probe
pnm_magic_check
pnm_probe
pbm_probe
pgmx_probe
pgm_probe
pgmyuv_probe
ppm_probe
pam_probe
IMAGEAUTO_DEMUXER\
static const AVClass imgname ## _class = ;\
AVInputFormat ff_image_ ## imgname ## _pipe_demuxer = ;
IMAGEAUTO_DEMUXER(bmp,     AV_CODEC_ID_BMP)
IMAGEAUTO_DEMUXER(dds,     AV_CODEC_ID_DDS)
IMAGEAUTO_DEMUXER(dpx,     AV_CODEC_ID_DPX)
IMAGEAUTO_DEMUXER(exr,     AV_CODEC_ID_EXR)
IMAGEAUTO_DEMUXER(j2k,     AV_CODEC_ID_JPEG2000)
IMAGEAUTO_DEMUXER(jpeg,    AV_CODEC_ID_MJPEG)
IMAGEAUTO_DEMUXER(jpegls,  AV_CODEC_ID_JPEGLS)
IMAGEAUTO_DEMUXER(pam,     AV_CODEC_ID_PAM)
IMAGEAUTO_DEMUXER(pbm,     AV_CODEC_ID_PBM)
IMAGEAUTO_DEMUXER(pcx,     AV_CODEC_ID_PCX)
IMAGEAUTO_DEMUXER(pgm,     AV_CODEC_ID_PGM)
IMAGEAUTO_DEMUXER(pgmyuv,  AV_CODEC_ID_PGMYUV)
IMAGEAUTO_DEMUXER(pictor,  AV_CODEC_ID_PICTOR)
IMAGEAUTO_DEMUXER(png,     AV_CODEC_ID_PNG)
IMAGEAUTO_DEMUXER(ppm,     AV_CODEC_ID_PPM)
IMAGEAUTO_DEMUXER(qdraw,   AV_CODEC_ID_QDRAW)
IMAGEAUTO_DEMUXER(sgi,     AV_CODEC_ID_SGI)
IMAGEAUTO_DEMUXER(sunrast, AV_CODEC_ID_SUNRAST)
IMAGEAUTO_DEMUXER(tiff,    AV_CODEC_ID_TIFF)
IMAGEAUTO_DEMUXER(webp,    AV_CODEC_ID_WEBP)
