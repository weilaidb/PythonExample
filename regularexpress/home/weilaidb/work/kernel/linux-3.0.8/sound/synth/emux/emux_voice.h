#define __EMUX_VOICE_H
int snd_emux_init_seq(struct snd_emux *emu, struct snd_card *card, int index);
void snd_emux_detach_seq(struct snd_emux *emu);
struct snd_emux_port *snd_emux_create_port(struct snd_emux *emu, char *name,
int max_channels, int type,
struct snd_seq_port_callback *callback);
void snd_emux_reset_port(struct snd_emux_port *port);
int snd_emux_event_input(struct snd_seq_event *ev, int direct, void *private,
int atomic, int hop);
int snd_emux_inc_count(struct snd_emux *emu);
void snd_emux_dec_count(struct snd_emux *emu);
int snd_emux_init_virmidi(struct snd_emux *emu, struct snd_card *card);
int snd_emux_delete_virmidi(struct snd_emux *emu);
void snd_emux_init_voices(struct snd_emux *emu);
void snd_emux_note_on(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_emux_note_off(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_emux_key_press(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_emux_terminate_note(void *p, int note, struct snd_midi_channel *chan);
void snd_emux_control(void *p, int type, struct snd_midi_channel *chan);
void snd_emux_sounds_off_all(struct snd_emux_port *port);
void snd_emux_update_channel(struct snd_emux_port *port,
struct snd_midi_channel *chan, int update);
void snd_emux_update_port(struct snd_emux_port *port, int update);
void snd_emux_timer_callback(unsigned long data);
void snd_emux_create_effect(struct snd_emux_port *p);
void snd_emux_delete_effect(struct snd_emux_port *p);
void snd_emux_clear_effect(struct snd_emux_port *p);
void snd_emux_setup_effect(struct snd_emux_voice *vp);
void snd_emux_send_effect_oss(struct snd_emux_port *port,
struct snd_midi_channel *chan, int type, int val);
void snd_emux_send_effect(struct snd_emux_port *port,
struct snd_midi_channel *chan, int type, int val, int mode);
void snd_emux_sysex(void *private_data, unsigned char *buf, int len,
int parsed, struct snd_midi_channel_set *chset);
int snd_emux_xg_control(struct snd_emux_port *port,
struct snd_midi_channel *chan, int param);
void snd_emux_nrpn(void *private_data, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset);
void snd_emux_init_seq_oss(struct snd_emux *emu);
void snd_emux_detach_seq_oss(struct snd_emux *emu);
void snd_emux_proc_init(struct snd_emux *emu, struct snd_card *card, int device);
void snd_emux_proc_free(struct snd_emux *emu);
#define STATE_IS_PLAYING(s) ((s) & SNDRV_EMUX_ST_ON)
int snd_emux_init_hwdep(struct snd_emux *emu);
void snd_emux_delete_hwdep(struct snd_emux *emu);
