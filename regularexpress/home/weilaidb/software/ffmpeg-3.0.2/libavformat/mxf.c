const MXFCodecUL ff_mxf_data_definition_uls[] = ;
const MXFCodecUL ff_mxf_codec_uls[] = ;
const MXFCodecUL ff_mxf_pixel_format_uls[] = ;
const MXFCodecUL ff_mxf_codec_tag_uls[] = ;
static const struct  ff_mxf_pixel_layouts[] = ;
static const int num_pixel_layouts = FF_ARRAY_ELEMS(ff_mxf_pixel_layouts);
int ff_mxf_decode_pixel_layout(const char pixel_layout[16], enum AVPixelFormat *pix_fmt)
static const MXFSamplesPerFrame mxf_spf[] = ;
static const AVRational mxf_time_base[] = ;
const MXFSamplesPerFrame *ff_mxf_get_samples_per_frame(AVFormatContext *s,
AVRational time_base)
