extern void snd_gf1_timers_init(struct snd_gus_card * gus);
extern void snd_gf1_timers_done(struct snd_gus_card * gus);
extern int snd_gf1_synth_init(struct snd_gus_card * gus);
extern void snd_gf1_synth_done(struct snd_gus_card * gus);
static void snd_gf1_default_interrupt_handler_midi_out(struct snd_gus_card * gus)
static void snd_gf1_default_interrupt_handler_midi_in(struct snd_gus_card * gus)
static void snd_gf1_default_interrupt_handler_timer1(struct snd_gus_card * gus)
static void snd_gf1_default_interrupt_handler_timer2(struct snd_gus_card * gus)
static void snd_gf1_default_interrupt_handler_wave_and_volume(struct snd_gus_card * gus, struct snd_gus_voice * voice)
static void snd_gf1_default_interrupt_handler_dma_write(struct snd_gus_card * gus)
static void snd_gf1_default_interrupt_handler_dma_read(struct snd_gus_card * gus)
void snd_gf1_set_default_handlers(struct snd_gus_card * gus, unsigned int what)
static void snd_gf1_clear_regs(struct snd_gus_card * gus)
static void snd_gf1_look_regs(struct snd_gus_card * gus)
void snd_gf1_smart_stop_voice(struct snd_gus_card * gus, unsigned short voice)
void snd_gf1_stop_voice(struct snd_gus_card * gus, unsigned short voice)
static void snd_gf1_clear_voices(struct snd_gus_card * gus, unsigned short v_min,
unsigned short v_max)
void snd_gf1_stop_voices(struct snd_gus_card * gus, unsigned short v_min, unsigned short v_max)
static void snd_gf1_alloc_voice_use(struct snd_gus_card * gus,
struct snd_gus_voice * pvoice,
int type, int client, int port)
struct snd_gus_voice *snd_gf1_alloc_voice(struct snd_gus_card * gus, int type, int client, int port)
void snd_gf1_free_voice(struct snd_gus_card * gus, struct snd_gus_voice *voice)
int snd_gf1_start(struct snd_gus_card * gus)
int snd_gf1_stop(struct snd_gus_card * gus)
