#if HAVE_MSA
static av_cold void h264dsp_init_msa(H264DSPContext *c,
const int bit_depth,
const int chroma_format_idc)
#if HAVE_MMI
static av_cold void h264dsp_init_mmi(H264DSPContext * c, const int bit_depth,
const int chroma_format_idc)
av_cold void ff_h264dsp_init_mips(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc)
