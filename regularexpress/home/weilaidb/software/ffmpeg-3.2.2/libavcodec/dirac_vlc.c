#define LUT_SIZE   (1 << LUT_BITS)
#define RSIZE_BITS (CHAR_BIT*sizeof(residual))
#define CONVERT_TO_RESIDUE(a, b)                                               \
(((residual)(a)) << (RSIZE_BITS - (b)))
#define INIT_RESIDUE(N)                                                        \
residual N = 0;                                                            \
av_unused int32_t N ## _bits  = 0
#define SET_RESIDUE(N, I, B)                                                   \
N          = CONVERT_TO_RESIDUE(I, B);                                     \
N ## _bits = B
#define APPEND_RESIDUE(N, M)                                                   \
N          |= M >> (N ## _bits);                                           \
N ## _bits +=      (M ## _bits)
int ff_dirac_golomb_read_32bit(DiracGolombLUT *lut_ctx, const uint8_t *buf,
int bytes, uint8_t *_dst, int coeffs)
int ff_dirac_golomb_read_16bit(DiracGolombLUT *lut_ctx, const uint8_t *buf,
int bytes, uint8_t *_dst, int coeffs)
static inline void search_for_golomb(DiracGolombLUT *l, residual r, int bits)
static void generate_parity_lut(DiracGolombLUT *lut, int even)
static void generate_offset_lut(DiracGolombLUT *lut, int off)
av_cold int ff_dirac_golomb_reader_init(DiracGolombLUT **lut_ctx)
av_cold void ff_dirac_golomb_reader_end(DiracGolombLUT **lut_ctx)
