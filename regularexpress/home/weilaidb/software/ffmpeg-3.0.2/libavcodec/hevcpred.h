#define AVCODEC_HEVCPRED_H
struct HEVCContext;
typedef struct HEVCPredContext  HEVCPredContext;
void ff_hevc_pred_init(HEVCPredContext *hpc, int bit_depth);
void ff_hevc_pred_init_mips(HEVCPredContext *hpc, int bit_depth);
