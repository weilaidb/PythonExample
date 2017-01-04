struct audio_operations *audio_devs[MAX_AUDIO_DEV];
EXPORT_SYMBOL(audio_devs);
int num_audiodevs;
EXPORT_SYMBOL(num_audiodevs);
struct mixer_operations *mixer_devs[MAX_MIXER_DEV];
EXPORT_SYMBOL(mixer_devs);
int num_mixers;
EXPORT_SYMBOL(num_mixers);
struct synth_operations *synth_devs[MAX_SYNTH_DEV+MAX_MIDI_DEV];
EXPORT_SYMBOL(synth_devs);
int num_synths;
struct midi_operations *midi_devs[MAX_MIDI_DEV];
EXPORT_SYMBOL(midi_devs);
int num_midis;
EXPORT_SYMBOL(num_midis);
struct sound_timer_operations *sound_timer_devs[MAX_TIMER_DEV] = ;
EXPORT_SYMBOL(sound_timer_devs);
int num_sound_timers = 1;
static int sound_alloc_audiodev(void);
int sound_install_audiodrv(int vers, char *name, struct audio_driver *driver,
int driver_size, int flags, unsigned int format_mask,
void *devc, int dma1, int dma2)
EXPORT_SYMBOL(sound_install_audiodrv);
int sound_install_mixer(int vers, char *name, struct mixer_operations *driver,
int driver_size, void *devc)
EXPORT_SYMBOL(sound_install_mixer);
void sound_unload_audiodev(int dev)
EXPORT_SYMBOL(sound_unload_audiodev);
static int sound_alloc_audiodev(void)
int sound_alloc_mididev(void)
EXPORT_SYMBOL(sound_alloc_mididev);
int sound_alloc_synthdev(void)
EXPORT_SYMBOL(sound_alloc_synthdev);
int sound_alloc_mixerdev(void)
EXPORT_SYMBOL(sound_alloc_mixerdev);
int sound_alloc_timerdev(void)
EXPORT_SYMBOL(sound_alloc_timerdev);
void sound_unload_mixerdev(int dev)
EXPORT_SYMBOL(sound_unload_mixerdev);
void sound_unload_mididev(int dev)
EXPORT_SYMBOL(sound_unload_mididev);
void sound_unload_synthdev(int dev)
EXPORT_SYMBOL(sound_unload_synthdev);
void sound_unload_timerdev(int dev)
EXPORT_SYMBOL(sound_unload_timerdev);
