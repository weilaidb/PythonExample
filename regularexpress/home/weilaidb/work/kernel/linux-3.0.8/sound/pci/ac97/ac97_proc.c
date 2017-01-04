static void snd_ac97_proc_read_functions(struct snd_ac97 *ac97, struct snd_info_buffer *buffer)
static const char *snd_ac97_stereo_enhancements[] =
;
static void snd_ac97_proc_read_main(struct snd_ac97 *ac97, struct snd_info_buffer *buffer, int subidx)
static void snd_ac97_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void snd_ac97_proc_regs_write(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void snd_ac97_proc_regs_read_main(struct snd_ac97 *ac97, struct snd_info_buffer *buffer, int subidx)
static void snd_ac97_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
void snd_ac97_proc_init(struct snd_ac97 * ac97)
void snd_ac97_proc_done(struct snd_ac97 * ac97)
void snd_ac97_bus_proc_init(struct snd_ac97_bus * bus)
void snd_ac97_bus_proc_done(struct snd_ac97_bus * bus)
