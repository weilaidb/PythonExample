#define AVCODEC_MPEGAUDIO_TABLEGEN_H
#define TABLE_4_3_SIZE (8191 + 16)*4
#if CONFIG_HARDCODED_TABLES
#define mpegaudio_tableinit()
static int8_t   table_4_3_exp[TABLE_4_3_SIZE];
static uint32_t table_4_3_value[TABLE_4_3_SIZE];
static uint32_t exp_table_fixed[512];
static uint32_t expval_table_fixed[512][16];
static float exp_table_float[512];
static float expval_table_float[512][16];
#define FRAC_BITS 23
#define IMDCT_SCALAR 1.759
static av_cold void mpegaudio_tableinit(void)
