#define DEBUG_ECC 0
#undef B0
#define MM 10
#define KK (1023-4)
#define B0 510
#define PRIM 1
#define	NN ((1 << MM) - 1)
typedef unsigned short dtype;
static const int Pp[MM+1] = ;
typedef int gf;
#define A0	(NN)
static inline gf
modnn(int x)
#define	CLEAR(a,n)
#define	COPY(a,b,n)
#define	COPYDOWN(a,b,n)
#define Ldec 1
static void
generate_gf(dtype Alpha_to[NN + 1], dtype Index_of[NN + 1])
static int
eras_dec_rs(dtype Alpha_to[NN + 1], dtype Index_of[NN + 1],
gf bb[NN - KK + 1], gf eras_val[NN-KK], int eras_pos[NN-KK],
int no_eras)
#define SECTOR_SIZE 512
#define NB_DATA (((SECTOR_SIZE + 1) * 8 + 6) / MM)
int doc_decode_ecc(unsigned char sector[SECTOR_SIZE], unsigned char ecc1[6])
EXPORT_SYMBOL_GPL(doc_decode_ecc);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Fabrice Bellard <fabrice.bellard@netgem.com>");
MODULE_DESCRIPTION("ECC code for correcting errors detected by DiskOnChip 2000 and Millennium ECC hardware");
