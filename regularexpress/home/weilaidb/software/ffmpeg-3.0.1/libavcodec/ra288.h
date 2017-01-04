#define AVCODEC_RA288_H
static const float amptable[8]=;
static const int16_t codetable[128][5]=;
DECLARE_ALIGNED(32, static const float, syn_window)[FFALIGN(111, 16)]=;
DECLARE_ALIGNED(32, static const float, gain_window)[FFALIGN(38, 16)]=;
DECLARE_ALIGNED(32, static const float, syn_bw_tab)[FFALIGN(36, 16)] = ;
DECLARE_ALIGNED(32, static const float, gain_bw_tab)[FFALIGN(10, 16)] = ;
