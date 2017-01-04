#define AVCODEC_PCM_TABLEGEN_H
#define         SIGN_BIT        (0x80)
#define         QUANT_MASK      (0xf)
#define         NSEGS           (8)
#define         SEG_SHIFT       (4)
#define         SEG_MASK        (0x70)
#define         BIAS            (0x84)
static av_cold int alaw2linear(unsigned char a_val)
static av_cold int ulaw2linear(unsigned char u_val)
#if CONFIG_HARDCODED_TABLES
#define pcm_alaw_tableinit()
#define pcm_ulaw_tableinit()
static uint8_t linear_to_alaw[16384];
static uint8_t linear_to_ulaw[16384];
static av_cold void build_xlaw_table(uint8_t *linear_to_xlaw,
int (*xlaw2linear)(unsigned char),
int mask)
static void pcm_alaw_tableinit(void)
static void pcm_ulaw_tableinit(void)
