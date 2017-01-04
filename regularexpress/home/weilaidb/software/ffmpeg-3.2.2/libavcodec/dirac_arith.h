#define AVCODEC_DIRAC_ARITH_H
enum dirac_arith_contexts ;
#define CTX_SB_F1        CTX_ZP_F5
#define CTX_SB_DATA      0
#define CTX_PMODE_REF1   0
#define CTX_PMODE_REF2   1
#define CTX_GLOBAL_BLOCK 2
#define CTX_MV_F1        CTX_ZP_F2
#define CTX_MV_DATA      0
#define CTX_DC_F1        CTX_ZP_F5
#define CTX_DC_DATA      0
typedef struct  DiracArith;
extern const uint8_t ff_dirac_next_ctx[DIRAC_CTX_COUNT];
extern const uint16_t ff_dirac_prob[256];
extern int16_t ff_dirac_prob_branchless[256][2];
static inline void renorm(DiracArith *c)
static inline void refill(DiracArith *c)
static inline int dirac_get_arith_bit(DiracArith *c, int ctx)
static inline int dirac_get_arith_uint(DiracArith *c, int follow_ctx, int data_ctx)
static inline int dirac_get_arith_int(DiracArith *c, int follow_ctx, int data_ctx)
void ff_dirac_init_arith_decoder(DiracArith *c, GetBitContext *gb, int length);
