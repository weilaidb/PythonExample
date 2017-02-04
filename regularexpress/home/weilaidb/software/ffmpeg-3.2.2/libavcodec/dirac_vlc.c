#define LUT_SIZE   (1 << LUT_BITS)
#define RSIZE_BITS (CHAR_BIT*sizeof(residual))
CONVERT_TO_RESIDUE                                               \
(((residual)(a)) << (RSIZE_BITS - (b)))
INIT_RESIDUE                                                        \
residual N = 0;                                                            \
av_unused int32_t N ## _bits  = 0
SET_RESIDUE                                                   \
N          = CONVERT_TO_RESIDUE(I, B);                                     \
N ## _bits = B
APPEND_RESIDUE                                                   \
N          |= M >> (N ## _bits);                                           \
N ## _bits +=      (M ## _bits)
ff_dirac_golomb_read_32bit
ff_dirac_golomb_read_16bit
search_for_golomb
generate_parity_lut
generate_offset_lut
ff_dirac_golomb_reader_init
ff_dirac_golomb_reader_end
