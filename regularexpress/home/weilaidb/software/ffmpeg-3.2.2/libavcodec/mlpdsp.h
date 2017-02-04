#define AVCODEC_MLPDSP_H
ff_mlp_rematrix_channel;
ff_mlp_pack_output[MAX_CHANNELS],
void *data,
uint8_t *ch_assign,
int8_t *output_shift,
uint8_t max_matrix_channel,
int is32);
typedef struct MLPDSPContext  MLPDSPContext;
ff_mlpdsp_init;
ff_mlpdsp_init_arm;
ff_mlpdsp_init_x86;
