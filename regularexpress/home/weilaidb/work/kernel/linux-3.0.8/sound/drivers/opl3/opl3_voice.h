#define __OPL3_VOICE_H
int snd_opl3_synth_use_inc(struct snd_opl3 * opl3);
void snd_opl3_synth_use_dec(struct snd_opl3 * opl3);
int snd_opl3_synth_setup(struct snd_opl3 * opl3);
void snd_opl3_synth_cleanup(struct snd_opl3 * opl3);
void snd_opl3_note_on(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_opl3_note_off(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_opl3_key_press(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_opl3_terminate_note(void *p, int note, struct snd_midi_channel *chan);
void snd_opl3_control(void *p, int type, struct snd_midi_channel *chan);
void snd_opl3_nrpn(void *p, struct snd_midi_channel *chan, struct snd_midi_channel_set *chset);
void snd_opl3_sysex(void *p, unsigned char *buf, int len, int parsed, struct snd_midi_channel_set *chset);
void snd_opl3_calc_volume(unsigned char *reg, int vel, struct snd_midi_channel *chan);
void snd_opl3_timer_func(unsigned long data);
void snd_opl3_load_drums(struct snd_opl3 *opl3);
void snd_opl3_drum_switch(struct snd_opl3 *opl3, int note, int on_off, int vel, struct snd_midi_channel *chan);
void snd_opl3_init_seq_oss(struct snd_opl3 *opl3, char *name);
void snd_opl3_free_seq_oss(struct snd_opl3 *opl3);
