#define AVCODEC_DIRAC_VLC_H
typedef uint64_t residual;
#define LUT_BITS 8
typedef struct DiracGolombLUT  DiracGolombLUT;
ff_dirac_golomb_reader_init;
ff_dirac_golomb_read_32bit;
ff_dirac_golomb_read_16bit;
ff_dirac_golomb_reader_end;
