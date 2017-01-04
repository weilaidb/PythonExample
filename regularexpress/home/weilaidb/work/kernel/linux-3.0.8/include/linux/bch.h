#define _BCH_H
struct bch_control ;
struct bch_control *init_bch(int m, int t, unsigned int prim_poly);
void free_bch(struct bch_control *bch);
void encode_bch(struct bch_control *bch, const uint8_t *data,
unsigned int len, uint8_t *ecc);
int decode_bch(struct bch_control *bch, const uint8_t *data, unsigned int len,
const uint8_t *recv_ecc, const uint8_t *calc_ecc,
const unsigned int *syn, unsigned int *errloc);
