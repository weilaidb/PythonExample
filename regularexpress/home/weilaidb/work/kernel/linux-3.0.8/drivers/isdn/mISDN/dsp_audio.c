s32 dsp_audio_ulaw_to_s32[256];
s32 dsp_audio_alaw_to_s32[256];
s32 *dsp_audio_law_to_s32;
EXPORT_SYMBOL(dsp_audio_law_to_s32);
u8 dsp_audio_s16_to_law[65536];
EXPORT_SYMBOL(dsp_audio_s16_to_law);
u8 dsp_audio_alaw_to_ulaw[256];
static u8 dsp_audio_ulaw_to_alaw[256];
u8 dsp_silence;
#define AMI_MASK 0x55
static inline unsigned char linear2alaw(short int linear)
static inline short int alaw2linear(unsigned char alaw)
static inline short int ulaw2linear(unsigned char ulaw)
#define BIAS 0x84
static unsigned char linear2ulaw(short sample)
static int reverse_bits(int i)
void dsp_audio_generate_law_tables(void)
void
dsp_audio_generate_s2law_table(void)
u8 dsp_audio_seven2law[128];
u8 dsp_audio_law2seven[256];
void
dsp_audio_generate_seven(void)
u8 dsp_audio_mix_law[65536];
void
dsp_audio_generate_mix_table(void)
static u8 dsp_audio_reduce8[256];
static u8 dsp_audio_reduce7[256];
static u8 dsp_audio_reduce6[256];
static u8 dsp_audio_reduce5[256];
static u8 dsp_audio_reduce4[256];
static u8 dsp_audio_reduce3[256];
static u8 dsp_audio_reduce2[256];
static u8 dsp_audio_reduce1[256];
static u8 dsp_audio_increase1[256];
static u8 dsp_audio_increase2[256];
static u8 dsp_audio_increase3[256];
static u8 dsp_audio_increase4[256];
static u8 dsp_audio_increase5[256];
static u8 dsp_audio_increase6[256];
static u8 dsp_audio_increase7[256];
static u8 dsp_audio_increase8[256];
static u8 *dsp_audio_volume_change[16] = ;
void
dsp_audio_generate_volume_changes(void)
void
dsp_change_volume(struct sk_buff *skb, int volume)
