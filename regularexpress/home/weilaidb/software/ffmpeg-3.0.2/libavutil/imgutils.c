void av_image_fill_max_pixsteps(int max_pixsteps[4], int max_pixstep_comps[4],
const AVPixFmtDescriptor *pixdesc)
static inline
int image_get_linesize(int width, int plane,
int max_step, int max_step_comp,
const AVPixFmtDescriptor *desc)
int av_image_get_linesize(enum AVPixelFormat pix_fmt, int width, int plane)
int av_image_fill_linesizes(int linesizes[4], enum AVPixelFormat pix_fmt, int width)
int av_image_fill_pointers(uint8_t *data[4], enum AVPixelFormat pix_fmt, int height,
uint8_t *ptr, const int linesizes[4])
int avpriv_set_systematic_pal2(uint32_t pal[256], enum AVPixelFormat pix_fmt)
int av_image_alloc(uint8_t *pointers[4], int linesizes[4],
int w, int h, enum AVPixelFormat pix_fmt, int align)
typedef struct ImgUtils  ImgUtils;
static const AVClass imgutils_class = ;
int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx)
int av_image_check_sar(unsigned int w, unsigned int h, AVRational sar)
void av_image_copy_plane(uint8_t       *dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int bytewidth, int height)
void av_image_copy(uint8_t *dst_data[4], int dst_linesizes[4],
const uint8_t *src_data[4], const int src_linesizes[4],
enum AVPixelFormat pix_fmt, int width, int height)
int av_image_fill_arrays(uint8_t *dst_data[4], int dst_linesize[4],
const uint8_t *src, enum AVPixelFormat pix_fmt,
int width, int height, int align)
int av_image_get_buffer_size(enum AVPixelFormat pix_fmt,
int width, int height, int align)
int av_image_copy_to_buffer(uint8_t *dst, int dst_size,
const uint8_t * const src_data[4],
const int src_linesize[4],
enum AVPixelFormat pix_fmt,
int width, int height, int align)
