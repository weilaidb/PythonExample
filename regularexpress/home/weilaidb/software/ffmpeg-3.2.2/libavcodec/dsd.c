static av_cold void dsd_ctables_tableinit(void)
av_cold void ff_init_dsd_data(void)
void ff_dsd2pcm_translate(DSDContext* s, size_t samples, int lsbf,
const unsigned char *src, ptrdiff_t src_stride,
float *dst, ptrdiff_t dst_stride)
