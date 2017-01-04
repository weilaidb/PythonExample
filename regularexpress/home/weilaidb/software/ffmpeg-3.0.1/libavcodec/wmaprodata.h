#define AVCODEC_WMAPRODATA_H
static const uint16_t critical_freq[] = ;
#define HUFF_SCALE_SIZE    121
#define HUFF_SCALE_MAXBITS  19
static const uint16_t scale_huffcodes[HUFF_SCALE_SIZE] = ;
static const uint8_t scale_huffbits[HUFF_SCALE_SIZE] = ;
#define HUFF_SCALE_RL_SIZE    120
#define HUFF_SCALE_RL_MAXBITS  21
static const uint32_t scale_rl_huffcodes[HUFF_SCALE_RL_SIZE] = ;
static const uint8_t scale_rl_huffbits[HUFF_SCALE_RL_SIZE] = ;
static const uint8_t scale_rl_run[HUFF_SCALE_RL_SIZE] = ;
static const uint8_t scale_rl_level[HUFF_SCALE_RL_SIZE] = ;
#define HUFF_COEF0_SIZE    272
#define HUFF_COEF0_MAXBITS  21
static const uint32_t coef0_huffcodes[HUFF_COEF0_SIZE] = ;
static const uint8_t coef0_huffbits[HUFF_COEF0_SIZE] = ;
#define HUFF_COEF1_SIZE    244
#define HUFF_COEF1_MAXBITS  22
static const uint32_t coef1_huffcodes[HUFF_COEF1_SIZE] = ;
static const uint8_t coef1_huffbits[HUFF_COEF1_SIZE] = ;
static const uint16_t coef0_run[HUFF_COEF0_SIZE] = ;
static const float coef0_level[HUFF_COEF0_SIZE] = ;
static const uint16_t coef1_run[HUFF_COEF1_SIZE] = ;
static const float coef1_level[HUFF_COEF1_SIZE] = ;
#define HUFF_VEC4_SIZE    127
#define HUFF_VEC4_MAXBITS  14
static const uint16_t vec4_huffcodes[HUFF_VEC4_SIZE] = ;
static const uint8_t vec4_huffbits[HUFF_VEC4_SIZE] = ;
#define HUFF_VEC2_SIZE    137
#define HUFF_VEC2_MAXBITS  12
static const uint16_t vec2_huffcodes[HUFF_VEC2_SIZE] = ;
static const uint8_t vec2_huffbits[HUFF_VEC2_SIZE] = ;
#define HUFF_VEC1_SIZE    101
#define HUFF_VEC1_MAXBITS  11
static const uint16_t vec1_huffcodes[HUFF_VEC1_SIZE] = ;
static const uint8_t vec1_huffbits[HUFF_VEC1_SIZE] = ;
static const uint16_t symbol_to_vec4[HUFF_VEC4_SIZE] = ;
static const uint8_t symbol_to_vec2[HUFF_VEC2_SIZE] = ;
static const float default_decorrelation_matrices[] = ;
static const float * const default_decorrelation[] = ;
