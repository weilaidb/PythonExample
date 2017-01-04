#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#if HAVE_GLOB
#define GLOB_NOMAGIC 0
#define GLOB_BRACE 0
static const int sizes[][2] = ;
static int infer_size(int *width_ptr, int *height_ptr, int size)
static int is_glob(const char *path)
static int find_image_range(AVIOContext *pb, int *pfirst_index, int *plast_index,
const char *path, int start_index, int start_index_range)
static int img_read_probe(AVProbeData *p)
{
if (p->filename && ff_guess_image2_codec(p->filename))
int ff_img_read_header(AVFormatContext *s1)
int ff_img_read_packet(AVFormatContext *s1, AVPacket *pkt)
static int img_read_close(struct AVFormatContext* s1)
static int img_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
#define OFFSET(x) offsetof(VideoDemuxData, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
const AVOption ff_img_options[] = ;
#if CONFIG_IMAGE2_DEMUXER
static const AVClass img2_class = ;
AVInputFormat ff_image2_demuxer = ;
#if CONFIG_IMAGE2PIPE_DEMUXER
static const AVClass img2pipe_class = ;
AVInputFormat ff_image2pipe_demuxer = ;
static int bmp_probe(AVProbeData *p)
static int dds_probe(AVProbeData *p)
static int dpx_probe(AVProbeData *p)
static int exr_probe(AVProbeData *p)
static int j2k_probe(AVProbeData *p)
static int jpeg_probe(AVProbeData *p)
static int jpegls_probe(AVProbeData *p)
static int qdraw_probe(AVProbeData *p)
static int pictor_probe(AVProbeData *p)
static int png_probe(AVProbeData *p)
static int sgi_probe(AVProbeData *p)
static int sunrast_probe(AVProbeData *p)
static int tiff_probe(AVProbeData *p)
static int webp_probe(AVProbeData *p)
#define IMAGEAUTO_DEMUXER(imgname, codecid)\
static const AVClass imgname ## _class = ;\
AVInputFormat ff_image_ ## imgname ## _pipe_demuxer = ;
IMAGEAUTO_DEMUXER(bmp,     AV_CODEC_ID_BMP)
IMAGEAUTO_DEMUXER(dds,     AV_CODEC_ID_DDS)
IMAGEAUTO_DEMUXER(dpx,     AV_CODEC_ID_DPX)
IMAGEAUTO_DEMUXER(exr,     AV_CODEC_ID_EXR)
IMAGEAUTO_DEMUXER(j2k,     AV_CODEC_ID_JPEG2000)
IMAGEAUTO_DEMUXER(jpeg,    AV_CODEC_ID_MJPEG)
IMAGEAUTO_DEMUXER(jpegls,  AV_CODEC_ID_JPEGLS)
IMAGEAUTO_DEMUXER(pictor,  AV_CODEC_ID_PICTOR)
IMAGEAUTO_DEMUXER(png,     AV_CODEC_ID_PNG)
IMAGEAUTO_DEMUXER(qdraw,   AV_CODEC_ID_QDRAW)
IMAGEAUTO_DEMUXER(sgi,     AV_CODEC_ID_SGI)
IMAGEAUTO_DEMUXER(sunrast, AV_CODEC_ID_SUNRAST)
IMAGEAUTO_DEMUXER(tiff,    AV_CODEC_ID_TIFF)
IMAGEAUTO_DEMUXER(webp,    AV_CODEC_ID_WEBP)
