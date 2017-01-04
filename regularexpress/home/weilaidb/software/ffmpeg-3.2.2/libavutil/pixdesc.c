void av_read_image_line(uint16_t *dst,
const uint8_t *data[4], const int linesize[4],
const AVPixFmtDescriptor *desc,
int x, int y, int c, int w,
int read_pal_component)
void av_write_image_line(const uint16_t *src,
uint8_t *data[4], const int linesize[4],
const AVPixFmtDescriptor *desc,
int x, int y, int c, int w)
#if FF_API_PLUS1_MINUS1
FF_DISABLE_DEPRECATION_WARNINGS
static const AVPixFmtDescriptor av_pix_fmt_descriptors[AV_PIX_FMT_NB] = ;
#if FF_API_PLUS1_MINUS1
FF_ENABLE_DEPRECATION_WARNINGS
static const char *color_range_names[] = ;
static const char *color_primaries_names[AVCOL_PRI_NB] = ;
static const char *color_transfer_names[] = ;
static const char *color_space_names[] = ;
static const char *chroma_location_names[] = ;
static enum AVPixelFormat get_pix_fmt_internal(const char *name)
const char *av_get_pix_fmt_name(enum AVPixelFormat pix_fmt)
#if HAVE_BIGENDIAN
#   define X_NE(be, le) be
#   define X_NE(be, le) le
enum AVPixelFormat av_get_pix_fmt(const char *name)
int av_get_bits_per_pixel(const AVPixFmtDescriptor *pixdesc)
int av_get_padded_bits_per_pixel(const AVPixFmtDescriptor *pixdesc)
char *av_get_pix_fmt_string(char *buf, int buf_size,
enum AVPixelFormat pix_fmt)
const AVPixFmtDescriptor *av_pix_fmt_desc_get(enum AVPixelFormat pix_fmt)
const AVPixFmtDescriptor *av_pix_fmt_desc_next(const AVPixFmtDescriptor *prev)
enum AVPixelFormat av_pix_fmt_desc_get_id(const AVPixFmtDescriptor *desc)
int av_pix_fmt_get_chroma_sub_sample(enum AVPixelFormat pix_fmt,
int *h_shift, int *v_shift)
int av_pix_fmt_count_planes(enum AVPixelFormat pix_fmt)
void ff_check_pixfmt_descriptors(void)
enum AVPixelFormat av_pix_fmt_swap_endianness(enum AVPixelFormat pix_fmt)
#define FF_COLOR_NA      -1
#define FF_COLOR_RGB      0
#define FF_COLOR_GRAY     1
#define FF_COLOR_YUV      2
#define FF_COLOR_YUV_JPEG 3
#define FF_COLOR_XYZ      4
#define pixdesc_has_alpha(pixdesc) \
((pixdesc)->nb_components == 2 || (pixdesc)->nb_components == 4 || (pixdesc)->flags & AV_PIX_FMT_FLAG_PAL)
static int get_color_type(const AVPixFmtDescriptor *desc)
static int get_pix_fmt_depth(int *min, int *max, enum AVPixelFormat pix_fmt)
static int get_pix_fmt_score(enum AVPixelFormat dst_pix_fmt,
enum AVPixelFormat src_pix_fmt,
unsigned *lossp, unsigned consider)
int av_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt,
enum AVPixelFormat src_pix_fmt,
int has_alpha)
enum AVPixelFormat av_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr)
const char *av_color_range_name(enum AVColorRange range)
const char *av_color_primaries_name(enum AVColorPrimaries primaries)
const char *av_color_transfer_name(enum AVColorTransferCharacteristic transfer)
const char *av_color_space_name(enum AVColorSpace space)
const char *av_chroma_location_name(enum AVChromaLocation location)
