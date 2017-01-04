#define __SOUND_EMUX_SYNTH_H
#define SNDRV_EMUX_USE_RAW_EFFECT
struct snd_emux;
struct snd_emux_port;
struct snd_emux_voice;
struct snd_emux_effect_table;
struct snd_emux_operators ;
#define SNDRV_EMUX_MAX_PORTS		32
#define SNDRV_EMUX_MAX_VOICES		64
#define SNDRV_EMUX_MAX_MULTI_VOICES	16
#define SNDRV_EMUX_ACCEPT_ROM		(1<<0)
struct snd_emux ;
struct snd_emux_port ;
#define SNDRV_EMUX_PORT_MODE_MIDI		0
#define SNDRV_EMUX_PORT_MODE_OSS_SYNTH	1
#define SNDRV_EMUX_PORT_MODE_OSS_MIDI	2
struct snd_emux_voice ;
#define SNDRV_EMUX_UPDATE_VOLUME		(1<<0)
#define SNDRV_EMUX_UPDATE_PITCH		(1<<1)
#define SNDRV_EMUX_UPDATE_PAN		(1<<2)
#define SNDRV_EMUX_UPDATE_FMMOD		(1<<3)
#define SNDRV_EMUX_UPDATE_TREMFREQ	(1<<4)
#define SNDRV_EMUX_UPDATE_FM2FRQ2		(1<<5)
#define SNDRV_EMUX_UPDATE_Q		(1<<6)
struct snd_emux_effect_table ;
int snd_emux_new(struct snd_emux **remu);
int snd_emux_register(struct snd_emux *emu, struct snd_card *card, int index, char *name);
int snd_emux_free(struct snd_emux *emu);
void snd_emux_terminate_all(struct snd_emux *emu);
void snd_emux_lock_voice(struct snd_emux *emu, int voice);
void snd_emux_unlock_voice(struct snd_emux *emu, int voice);
