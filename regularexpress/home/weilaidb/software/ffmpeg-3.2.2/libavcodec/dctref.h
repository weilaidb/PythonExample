#define AVCODEC_DCTREF_H
void ff_ref_fdct(short *block);
void ff_ref_idct(short *block);
void ff_ref_dct_init(void);
