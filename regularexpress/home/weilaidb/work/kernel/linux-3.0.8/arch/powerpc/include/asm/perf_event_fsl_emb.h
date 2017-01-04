#define MAX_HWEVENTS 4
#define FSL_EMB_EVENT_VALID      1
#define FSL_EMB_EVENT_RESTRICTED 2
#define FSL_EMB_EVENT_THRESHMUL  0x0000070000000000ULL
#define FSL_EMB_EVENT_THRESH     0x0000003f00000000ULL
struct fsl_emb_pmu ;
int register_fsl_emb_pmu(struct fsl_emb_pmu *);
