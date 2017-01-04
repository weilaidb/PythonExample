enum VpxColorSpace
;
static int get_vpx_color_space(AVFormatContext *s,
enum AVColorSpace color_space)
enum VPX_CHROMA_SUBSAMPLING
;
static int get_vpx_chroma_subsampling(AVFormatContext *s,
enum AVPixelFormat pixel_format,
enum AVChromaLocation chroma_location)
static int get_bit_depth(AVFormatContext *s, enum AVPixelFormat pixel_format)
static int get_vpx_transfer_function(
enum AVColorTransferCharacteristic transfer)
static int get_vpx_video_full_range_flag(enum AVColorRange color_range)
int ff_isom_write_vpcc(AVFormatContext *s, AVIOContext *pb,
AVCodecParameters *par)
