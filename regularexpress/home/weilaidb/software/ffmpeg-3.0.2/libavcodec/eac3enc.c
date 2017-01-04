#define CONFIG_AC3ENC_FLOAT 1
#define AC3ENC_TYPE AC3ENC_TYPE_EAC3
static const AVClass eac3enc_class = ;
static int8_t eac3_frame_expstr_index_tab[3][4][4][4][4][4];
av_cold void ff_eac3_exponent_init(void)
void ff_eac3_get_frame_exp_strategy(AC3EncodeContext *s)
void ff_eac3_set_cpl_states(AC3EncodeContext *s)
void ff_eac3_output_frame_header(AC3EncodeContext *s)
AVCodec ff_eac3_encoder = ;
