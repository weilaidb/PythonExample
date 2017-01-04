#define AVCODEC_RAW_H
typedef struct PixelFormatTag  PixelFormatTag;
extern const PixelFormatTag ff_raw_pix_fmt_tags[];
const struct PixelFormatTag *avpriv_get_raw_pix_fmt_tags(void);
enum AVPixelFormat avpriv_find_pix_fmt(const PixelFormatTag *tags, unsigned int fourcc);
extern av_export const PixelFormatTag avpriv_pix_fmt_bps_avi[];
extern av_export const PixelFormatTag avpriv_pix_fmt_bps_mov[];
