static const uint8_t chroma_mask_arr[16 * 5] = ;
static void avc_chroma_hz_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_4x4multiple_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_4x4multiple_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hv_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1)
static void avc_chroma_hv_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1)
static void avc_chroma_hv_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1)
static void avc_chroma_hv_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1)
static void avc_chroma_hv_4x4multiple_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0, uint32_t coef_hor1,
uint32_t coef_ver0, uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hz_and_aver_dst_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_and_aver_dst_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_and_aver_dst_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_and_aver_dst_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_and_aver_dst_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_hz_and_aver_dst_4x4multiple_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint32_t coeff0,
uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_and_aver_dst_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hz_and_aver_dst_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_and_aver_dst_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_and_aver_dst_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_and_aver_dst_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_and_aver_dst_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_and_aver_dst_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1)
static void avc_chroma_vt_and_aver_dst_4x4mul_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint32_t coeff0,
uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_and_aver_dst_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_vt_and_aver_dst_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coeff0, uint32_t coeff1,
int32_t height)
static void avc_chroma_hv_and_aver_dst_2x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1)
static void avc_chroma_hv_and_aver_dst_2x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1)
static void avc_chroma_hv_and_aver_dst_2x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1)
static void avc_chroma_hv_and_aver_dst_2w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_and_aver_dst_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1)
static void avc_chroma_hv_and_aver_dst_4x4mul_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_and_aver_dst_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1,
int32_t height)
static void avc_chroma_hv_and_aver_dst_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint32_t coef_hor0,
uint32_t coef_hor1,
uint32_t coef_ver0,
uint32_t coef_ver1,
int32_t height)
static void copy_width8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
void ff_put_h264_chroma_mc8_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
void ff_put_h264_chroma_mc4_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
void ff_put_h264_chroma_mc2_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
void ff_avg_h264_chroma_mc8_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
void ff_avg_h264_chroma_mc4_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
void ff_avg_h264_chroma_mc2_msa(uint8_t *dst, uint8_t *src,
int stride, int height, int x, int y)
