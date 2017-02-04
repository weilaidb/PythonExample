typedef struct DfaContext  DfaContext;
dfa_decode_init
decode_copy
decode_tsw1
decode_dsw1
decode_dds1
decode_bdlt
decode_wdlt
decode_tdlt
decode_blck
typedef int (*chunk_decoder)(GetByteContext *gb, uint8_t *frame, int width, int height);
static const chunk_decoder decoder[8] = ;
static const char* chunk_name[8] = ;
dfa_decode_frame
dfa_decode_end
AVCodec ff_dfa_decoder = ;
