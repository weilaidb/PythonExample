#if HAVE_UNISTD_H
struct algo ;
static const struct algo fdct_tab[] = ;
static void ff_prores_idct_wrap(int16_t *dst)
static const struct algo idct_tab[] = ;
#if ARCH_ARM
#elif ARCH_PPC
#elif ARCH_X86
static const struct algo fdct_tab_arch[] = ;
static const struct algo idct_tab_arch[] = ;
#define AANSCALE_BITS 12
#define NB_ITS 20000
#define NB_ITS_SPEED 50000
DECLARE_ALIGNED(16, static int16_t, block)[64];
DECLARE_ALIGNED(8,  static int16_t, block1)[64];
static void init_block(int16_t block[64], int test, int is_idct, AVLFG *prng, int vals)
static void permute(int16_t dst[64], const int16_t src[64],
enum idct_permutation_type perm_type)
static int dct_error(const struct algo *dct, int test, int is_idct, int speed, const int bits)
DECLARE_ALIGNED(8, static uint8_t, img_dest)[64];
DECLARE_ALIGNED(8, static uint8_t, img_dest1)[64];
static void idct248_ref(uint8_t *dest, int linesize, int16_t *block)
static void idct248_error(const char *name,
void (*idct248_put)(uint8_t *dest, int line_size,
int16_t *block),
int speed)
static void help(void)
#if !HAVE_GETOPT
int main(int argc, char **argv)
