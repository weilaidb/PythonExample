#define AVCODEC_SVQ1_CB_H
DECLARE_ALIGNED(4, static const int8_t, svq1_inter_codebook_4x2)[768] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_inter_codebook_4x4)[1536] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_inter_codebook_8x4)[3072] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_inter_codebook_8x8)[6144] = ;
const int8_t* const ff_svq1_inter_codebooks[6] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_intra_codebook_4x2)[768] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_intra_codebook_4x4)[1536] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_intra_codebook_8x4)[3072] = ;
DECLARE_ALIGNED(4, static const int8_t, svq1_intra_codebook_8x8)[6144] = ;
const int8_t* const ff_svq1_intra_codebooks[6] = ;
