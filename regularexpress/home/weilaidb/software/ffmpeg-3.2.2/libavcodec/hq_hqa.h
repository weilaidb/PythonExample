#define AVCODEC_HQ_HQA_H
#define NUM_HQ_AC_ENTRIES 746
#define NUM_HQ_PROFILES   22
#define NUM_HQ_QUANTS     16
typedef struct HQContext  HQContext;
typedef struct HQProfile  HQProfile;
extern const int32_t * const ff_hq_quants[16][2][4];
extern const HQProfile ff_hq_profile[NUM_HQ_PROFILES];
extern const uint8_t ff_hq_ac_skips[NUM_HQ_AC_ENTRIES];
extern const int16_t ff_hq_ac_syms [NUM_HQ_AC_ENTRIES];
ff_hq_init_vlcs;
