#define __SOUND_PCXHR_MIX22_H
struct pcxhr_mgr;
int hr222_sub_init(struct pcxhr_mgr *mgr);
int hr222_sub_set_clock(struct pcxhr_mgr *mgr, unsigned int rate,
int *changed);
int hr222_get_external_clock(struct pcxhr_mgr *mgr,
enum pcxhr_clock_type clock_type,
int *sample_rate);
int hr222_read_gpio(struct pcxhr_mgr *mgr, int is_gpi, int *value);
int hr222_write_gpo(struct pcxhr_mgr *mgr, int value);
#define HR222_LINE_PLAYBACK_LEVEL_MIN		0
#define HR222_LINE_PLAYBACK_ZERO_LEVEL		51
#define HR222_LINE_PLAYBACK_LEVEL_MAX		99
#define HR222_LINE_CAPTURE_LEVEL_MIN		0
#define HR222_LINE_CAPTURE_ZERO_LEVEL		223
#define HR222_LINE_CAPTURE_LEVEL_MAX		255
#define HR222_MICRO_CAPTURE_LEVEL_MIN		0
#define HR222_MICRO_CAPTURE_LEVEL_MAX		210
int hr222_update_analog_audio_level(struct snd_pcxhr *chip,
int is_capture,
int channel);
int hr222_set_audio_source(struct snd_pcxhr *chip);
int hr222_iec958_capture_byte(struct snd_pcxhr *chip, int aes_idx,
unsigned char *aes_bits);
int hr222_iec958_update_byte(struct snd_pcxhr *chip, int aes_idx,
unsigned char aes_bits);
int hr222_add_mic_controls(struct snd_pcxhr *chip);
