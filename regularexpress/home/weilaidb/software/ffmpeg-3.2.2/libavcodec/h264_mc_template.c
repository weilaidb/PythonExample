#undef MCFUNC
#if   CHROMA_IDC == 1
MCFUNC FUNC(n ## _420)
#elif CHROMA_IDC == 2
MCFUNC FUNC(n ## _422)
#elif CHROMA_IDC == 3
MCFUNC FUNC(n ## _444)
#undef  mc_part
MCFUNC
mc_part
MCFUNC(const H264Context *h, H264SliceContext *sl,
uint8_t *dest_y,
uint8_t *dest_cb, uint8_t *dest_cr,
qpel_mc_func[16],
h264_chroma_mc_func,
qpel_mc_func[16],
h264_chroma_mc_func,
const h264_weight_func *weight_op,
const h264_biweight_func *weight_avg)
