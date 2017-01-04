#define AVCODEC_MLPDSP_H
void ff_mlp_rematrix_channel(int32_t *samples,
const int32_t *coeffs,
const uint8_t *bypassed_lsbs,
const int8_t *noise_buffer,
int index,
unsigned int dest_ch,
uint16_t blockpos,
unsigned int maxchan,
int matrix_noise_shift,
int access_unit_size_pow2,
int32_t mask);
int32_t ff_mlp_pack_output(int32_t lossless_check_data,
uint16_t blockpos,
int32_t (*sample_buffer)[MAX_CHANNELS],
void *data,
uint8_t *ch_assign,
int8_t *output_shift,
uint8_t max_matrix_channel,
int is32);
typedef struct MLPDSPContext  MLPDSPContext;
void ff_mlpdsp_init(MLPDSPContext *c);
void ff_mlpdsp_init_arm(MLPDSPContext *c);
void ff_mlpdsp_init_x86(MLPDSPContext *c);
