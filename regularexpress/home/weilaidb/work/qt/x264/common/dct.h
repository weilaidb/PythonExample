#define X264_DCT_H
extern const uint32_t x264_dct4_weight_tab[16];
extern const uint32_t x264_dct8_weight_tab[64];
extern const uint32_t x264_dct4_weight2_tab[16];
extern const uint32_t x264_dct8_weight2_tab[64];
typedef struct
x264_dct_function_t;
typedef struct
x264_zigzag_function_t;
void x264_dct_init( int cpu, x264_dct_function_t *dctf );
void x264_dct_init_weights( void );
void x264_zigzag_init( int cpu, x264_zigzag_function_t *pf_progressive, x264_zigzag_function_t *pf_interlaced );
