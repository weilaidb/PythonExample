#define X264_QUANT_H
typedef struct
x264_quant_function_t;
void x264_quant_init( x264_t *h, int cpu, x264_quant_function_t *pf );
