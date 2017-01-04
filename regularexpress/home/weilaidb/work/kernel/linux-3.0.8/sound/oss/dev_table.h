#define _DEV_TABLE_H_
#define SNDCARD_DESKPROXL		27
#define SNDCARD_VIDC			28
#define SNDCARD_SBPNP			29
#define SNDCARD_SOFTOSS			36
#define SNDCARD_VMIDI			37
#define SNDCARD_OPL3SA1			38
#define SNDCARD_OPL3SA1_SB		39
#define SNDCARD_OPL3SA1_MPU		40
#define SNDCARD_WAVEFRONT               41
#define SNDCARD_OPL3SA2                 42
#define SNDCARD_OPL3SA2_MPU             43
#define SNDCARD_WAVEARTIST              44
#define SNDCARD_OPL3SA2_MSS             45
#define SNDCARD_AD1816                  88
struct driver_info
;
struct card_info
;
#define MAX_SUB_BUFFERS		(32*MAX_REALTIME_FACTOR)
#define DMODE_NONE		0
#define DMODE_OUTPUT		PCM_ENABLE_OUTPUT
#define DMODE_INPUT		PCM_ENABLE_INPUT
struct dma_buffparms
;
typedef struct coproc_operations
coproc_operations;
struct audio_driver
;
struct audio_operations
;
int *load_mixer_volumes(char *name, int *levels, int present);
struct mixer_operations
;
struct synth_operations
;
struct midi_input_info
;
struct midi_operations
;
struct sound_lowlev_timer
;
struct sound_timer_operations
;
extern struct sound_timer_operations default_sound_timer;
extern struct audio_operations *audio_devs[MAX_AUDIO_DEV];
extern int num_audiodevs;
extern struct mixer_operations *mixer_devs[MAX_MIXER_DEV];
extern int num_mixers;
extern struct synth_operations *synth_devs[MAX_SYNTH_DEV+MAX_MIDI_DEV];
extern int num_synths;
extern struct midi_operations *midi_devs[MAX_MIDI_DEV];
extern int num_midis;
extern struct sound_timer_operations * sound_timer_devs[MAX_TIMER_DEV];
extern int num_sound_timers;
extern int sound_map_buffer (int dev, struct dma_buffparms *dmap, buffmem_desc *info);
void sound_timer_init (struct sound_lowlev_timer *t, char *name);
void sound_dma_intr (int dev, struct dma_buffparms *dmap, int chan);
#define AUDIO_DRIVER_VERSION	2
#define MIXER_DRIVER_VERSION	2
int sound_install_audiodrv(int vers, char *name, struct audio_driver *driver,
int driver_size, int flags, unsigned int format_mask,
void *devc, int dma1, int dma2);
int sound_install_mixer(int vers, char *name, struct mixer_operations *driver,
int driver_size, void *devc);
void sound_unload_audiodev(int dev);
void sound_unload_mixerdev(int dev);
void sound_unload_mididev(int dev);
void sound_unload_synthdev(int dev);
void sound_unload_timerdev(int dev);
int sound_alloc_mixerdev(void);
int sound_alloc_timerdev(void);
int sound_alloc_synthdev(void);
int sound_alloc_mididev(void);
