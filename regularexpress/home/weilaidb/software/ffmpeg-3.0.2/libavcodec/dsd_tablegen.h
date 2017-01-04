#define AVCODEC_DSD_TABLEGEN_H
#define HTAPS   48
#define CTABLES ((HTAPS + 7) / 8)
static const double htaps[HTAPS] = ;
static float ctables[CTABLES][256];
static av_cold void dsd_ctables_tableinit(void)
