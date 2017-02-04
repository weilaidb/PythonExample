#define AVUTIL_PIXDESC_H
typedef struct AVComponentDescriptor  AVComponentDescriptor;
typedef struct AVPixFmtDescriptor  AVPixFmtDescriptor;
#define AV_PIX_FMT_FLAG_BE           (1 << 0)
#define AV_PIX_FMT_FLAG_PAL          (1 << 1)
#define AV_PIX_FMT_FLAG_BITSTREAM    (1 << 2)
#define AV_PIX_FMT_FLAG_HWACCEL      (1 << 3)
#define AV_PIX_FMT_FLAG_PLANAR       (1 << 4)
#define AV_PIX_FMT_FLAG_RGB          (1 << 5)
#define AV_PIX_FMT_FLAG_PSEUDOPAL    (1 << 6)
#define AV_PIX_FMT_FLAG_ALPHA        (1 << 7)
av_get_bits_per_pixel;
av_get_padded_bits_per_pixel;
*av_pix_fmt_desc_get;
*av_pix_fmt_desc_next;
av_pix_fmt_desc_get_id;
av_pix_fmt_get_chroma_sub_sample;
av_pix_fmt_count_planes;
*av_color_range_name;
*av_color_primaries_name;
*av_color_transfer_name;
*av_color_space_name;
*av_chroma_location_name;
av_get_pix_fmt;
*av_get_pix_fmt_name;
*av_get_pix_fmt_string;
av_read_image_line;
av_write_image_line;
av_pix_fmt_swap_endianness;
#define FF_LOSS_RESOLUTION  0x0001
#define FF_LOSS_DEPTH       0x0002
#define FF_LOSS_COLORSPACE  0x0004
#define FF_LOSS_ALPHA       0x0008
#define FF_LOSS_COLORQUANT  0x0010
#define FF_LOSS_CHROMA      0x0020
av_get_pix_fmt_loss;
av_find_best_pix_fmt_of_2;
