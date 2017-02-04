#define LSFQ_MIN                   40
#define LSFQ_MAX                   25681
#define LSFQ_DIFF_MIN              321
#define INTERPOL_LEN              11
#define SHARP_MIN                  3277
#define SHARP_MAX                  13017
#define MR_ENERGY 1018156
#define DECISION_NOISE        0
#define DECISION_INTERMEDIATE 1
#define DECISION_VOICE        2
typedef enum  G729Formats;
typedef struct  G729FormatDescription;
typedef struct   G729Context;
static const G729FormatDescription format_g729_8k = ;
static const G729FormatDescription format_g729d_6k4 = ;
g729_prng
lsf_decode
lsf_restore_from_previous
g729d_get_new_exc
g729d_onset_decision
g729d_voice_decision
scalarproduct_int16_c
decoder_init
decode_frame
AVCodec ff_g729_decoder = ;
