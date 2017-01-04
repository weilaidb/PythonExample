char *isdn_audio_revision = "$Revision: 1.1.2.2 $";
static short isdn_audio_ulaw_to_s16[] =
;
static short isdn_audio_alaw_to_s16[] =
;
static char isdn_audio_alaw_to_ulaw[] =
;
static char isdn_audio_ulaw_to_alaw[] =
;
#define NCOEFF            8
#define DTMF_TRESH     4000
#define SILENCE_TRESH   200
#define AMP_BITS          9
#define LOGRP             0
#define HIGRP             1
static int cos2pik[NCOEFF] =
;
static char dtmf_matrix[4][4] =
;
static inline void
isdn_audio_tlookup(const u_char *table, u_char *buff, unsigned long n)
void
isdn_audio_ulaw2alaw(unsigned char *buff, unsigned long len)
void
isdn_audio_alaw2ulaw(unsigned char *buff, unsigned long len)
#define ZEROTRAP
#undef ZEROTRAP
#define BIAS 0x84
#define CLIP 32635
static unsigned char
isdn_audio_linear2ulaw(int sample)
static int Mx[3][8] =
;
static int bitmask[9] =
;
static int
isdn_audio_get_bits(adpcm_state * s, unsigned char **in, int *len)
static void
isdn_audio_put_bits(int data, int nbits, adpcm_state * s,
unsigned char **out, int *len)
adpcm_state *
isdn_audio_adpcm_init(adpcm_state * s, int nbits)
dtmf_state *
isdn_audio_dtmf_init(dtmf_state * s)
int
isdn_audio_adpcm2xlaw(adpcm_state * s, int fmt, unsigned char *in,
unsigned char *out, int len)
int
isdn_audio_xlaw2adpcm(adpcm_state * s, int fmt, unsigned char *in,
unsigned char *out, int len)
static void
isdn_audio_goertzel(int *sample, modem_info * info)
void
isdn_audio_eval_dtmf(modem_info * info)
void
isdn_audio_calc_dtmf(modem_info * info, unsigned char *buf, int len, int fmt)
silence_state *
isdn_audio_silence_init(silence_state * s)
void
isdn_audio_calc_silence(modem_info * info, unsigned char *buf, int len, int fmt)
void
isdn_audio_put_dle_code(modem_info * info, u_char code)
void
isdn_audio_eval_silence(modem_info * info)
