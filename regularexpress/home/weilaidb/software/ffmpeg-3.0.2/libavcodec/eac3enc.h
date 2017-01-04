#define AVCODEC_EAC3ENC_H
void ff_eac3_exponent_init(void);
void ff_eac3_get_frame_exp_strategy(AC3EncodeContext *s);
void ff_eac3_set_cpl_states(AC3EncodeContext *s);
void ff_eac3_output_frame_header(AC3EncodeContext *s);
