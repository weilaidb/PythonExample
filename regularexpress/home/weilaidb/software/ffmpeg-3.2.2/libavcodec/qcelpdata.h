#define AVCODEC_QCELPDATA_H
typedef struct QCELPFrame  QCELPFrame;
static const float qcelp_hammsinc_table[4] = ;
typedef struct QCELPBitmap  QCELPBitmap;
QCELP_OF
static const QCELPBitmap qcelp_rate_full_bitmap[] = ;
static const QCELPBitmap qcelp_rate_half_bitmap[] = ;
static const QCELPBitmap qcelp_rate_quarter_bitmap[] = ;
static const QCELPBitmap qcelp_rate_octave_bitmap[] = ;
static const QCELPBitmap * const qcelp_unpacking_bitmaps_per_rate[5] = ;
static const uint16_t qcelp_unpacking_bitmaps_lengths[5] = ;
typedef uint16_t qcelp_vector[2];
static const qcelp_vector qcelp_lspvq1[64]= ;
static const qcelp_vector qcelp_lspvq2[128]= ;
static const qcelp_vector qcelp_lspvq3[128]= ;
static const qcelp_vector qcelp_lspvq4[64]= ;
static const qcelp_vector qcelp_lspvq5[64]= ;
static const qcelp_vector * const qcelp_lspvq[5] = ;
#define QCELP_SCALE 8192.
static const float qcelp_g12ga[61] = ;
static const int16_t qcelp_rate_full_codebook[128] = ;
#define QCELP_RATE_FULL_CODEBOOK_RATIO .01
static const int8_t qcelp_rate_half_codebook[128] = ;
#define QCELP_RATE_HALF_CODEBOOK_RATIO 0.5
#define QCELP_SQRT1887 1.373681186
static const double qcelp_rnd_fir_coefs[11] = ;
#define QCELP_LSP_SPREAD_FACTOR 0.02
#define QCELP_LSP_OCTAVE_PREDICTOR 29.0/32
#define QCELP_BANDWIDTH_EXPANSION_COEFF 0.9883
