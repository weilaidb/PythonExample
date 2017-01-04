#define MAX_ABS (512 >> (SCALE_OFFSET>0 ? SCALE_OFFSET : 0))
static int DEF(try_8x8basis)(int16_t rem[64], int16_t weight[64], int16_t basis[64], int scale)
static void DEF(add_8x8basis)(int16_t rem[64], int16_t basis[64], int scale)
