const uint16_t ff_dirac_prob[256] = ;
const uint8_t ff_dirac_next_ctx[DIRAC_CTX_COUNT] = ;
int16_t ff_dirac_prob_branchless[256][2];
void ff_dirac_init_arith_decoder(DiracArith *c, GetBitContext *gb, int length)
