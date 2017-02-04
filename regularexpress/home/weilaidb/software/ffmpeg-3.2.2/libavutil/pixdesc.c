av_read_image_line
av_write_image_line
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
get_pix_fmt_internal
*av_get_pix_fmt_name
#if HAVE_BIGENDIAN
X_NE be
X_NE le
av_get_pix_fmt
av_get_bits_per_pixel
av_get_padded_bits_per_pixel
*av_get_pix_fmt_string
*av_pix_fmt_desc_get
*av_pix_fmt_desc_next
av_pix_fmt_desc_get_id
av_pix_fmt_get_chroma_sub_sample
av_pix_fmt_count_planes
ff_check_pixfmt_descriptors
av_pix_fmt_swap_endianness
#define FF_COLOR_NA      -1
#define FF_COLOR_RGB      0
#define FF_COLOR_GRAY     1
#define FF_COLOR_YUV      2
#define FF_COLOR_YUV_JPEG 3
#define FF_COLOR_XYZ      4
pixdesc_has_alpha \
((pixdesc)->nb_components == 2 || (pixdesc)->nb_components == 4 || (pixdesc)->flags & AV_PIX_FMT_FLAG_PAL)
get_color_type
get_pix_fmt_depth
get_pix_fmt_score
av_get_pix_fmt_loss
av_find_best_pix_fmt_of_2
*av_color_range_name
*av_color_primaries_name
*av_color_transfer_name
*av_color_space_name
*av_chroma_location_name
