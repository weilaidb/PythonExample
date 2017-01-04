#if HAVE_MSA
static av_cold void h264_pred_init_msa(H264PredContext *h, int codec_id,
const int bit_depth,
const int chroma_format_idc)
#if HAVE_MMI
static av_cold void h264_pred_init_mmi(H264PredContext *h, int codec_id,
const int bit_depth, const int chroma_format_idc)
av_cold void ff_h264_pred_init_mips(H264PredContext *h, int codec_id,
int bit_depth,
const int chroma_format_idc)
