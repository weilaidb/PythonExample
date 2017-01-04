#define DTMF_NPOINTS 205
typedef struct adpcm_state  adpcm_state;
typedef struct dtmf_state  dtmf_state;
typedef struct silence_state  silence_state;
extern void isdn_audio_ulaw2alaw(unsigned char *, unsigned long);
extern void isdn_audio_alaw2ulaw(unsigned char *, unsigned long);
extern adpcm_state *isdn_audio_adpcm_init(adpcm_state *, int);
extern int isdn_audio_adpcm2xlaw(adpcm_state *, int, unsigned char *, unsigned char *, int);
extern int isdn_audio_xlaw2adpcm(adpcm_state *, int, unsigned char *, unsigned char *, int);
extern void isdn_audio_calc_dtmf(modem_info *, unsigned char *, int, int);
extern void isdn_audio_eval_dtmf(modem_info *);
dtmf_state *isdn_audio_dtmf_init(dtmf_state *);
extern void isdn_audio_calc_silence(modem_info *, unsigned char *, int, int);
extern void isdn_audio_eval_silence(modem_info *);
silence_state *isdn_audio_silence_init(silence_state *);
extern void isdn_audio_put_dle_code(modem_info *, u_char);
