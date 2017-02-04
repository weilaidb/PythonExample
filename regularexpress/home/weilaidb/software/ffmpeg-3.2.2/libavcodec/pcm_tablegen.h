#define AVCODEC_PCM_TABLEGEN_H
#define         SIGN_BIT        (0x80)
#define         QUANT_MASK      (0xf)
#define         NSEGS           (8)
#define         SEG_SHIFT       (4)
#define         SEG_MASK        (0x70)
#define         BIAS            (0x84)
alaw2linear
ulaw2linear
#if CONFIG_HARDCODED_TABLES
pcm_alaw_tableinit
pcm_ulaw_tableinit
static uint8_t linear_to_alaw[16384];
static uint8_t linear_to_ulaw[16384];
build_xlaw_table(unsigned char),
int mask)
pcm_alaw_tableinit
pcm_ulaw_tableinit
