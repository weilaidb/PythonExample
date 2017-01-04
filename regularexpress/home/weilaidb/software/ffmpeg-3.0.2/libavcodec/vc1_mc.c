static av_always_inline void vc1_scale_luma(uint8_t *srcY,
int k, int linesize)
static av_always_inline void vc1_scale_chroma(uint8_t *srcU, uint8_t *srcV,
int k, int uvlinesize)
static av_always_inline void vc1_lut_scale_luma(uint8_t *srcY,
uint8_t *lut1, uint8_t *lut2,
int k, int linesize)
static av_always_inline void vc1_lut_scale_chroma(uint8_t *srcU, uint8_t *srcV,
uint8_t *lut1, uint8_t *lut2,
int k, int uvlinesize)
static const uint8_t popcount4[16] = ;
static av_always_inline int get_luma_mv(VC1Context *v, int dir, int16_t *tx, int16_t *ty)
static av_always_inline int get_chroma_mv(VC1Context *v, int dir, int16_t *tx, int16_t *ty)
void ff_vc1_mc_1mv(VC1Context *v, int dir)
void ff_vc1_mc_4mv_luma(VC1Context *v, int n, int dir, int avg)
void ff_vc1_mc_4mv_chroma(VC1Context *v, int dir)
void ff_vc1_mc_4mv_chroma4(VC1Context *v, int dir, int dir2, int avg)
void ff_vc1_interp_mc(VC1Context *v)
