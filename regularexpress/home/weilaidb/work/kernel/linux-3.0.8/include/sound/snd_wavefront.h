#define __SOUND_SND_WAVEFRONT_H__
struct _snd_wavefront_midi;
struct _snd_wavefront_card;
struct _snd_wavefront;
typedef struct _snd_wavefront_midi snd_wavefront_midi_t;
typedef struct _snd_wavefront_card snd_wavefront_card_t;
typedef struct _snd_wavefront snd_wavefront_t;
typedef enum  snd_wavefront_mpu_id;
struct _snd_wavefront_midi ;
#define	OUTPUT_READY	0x40
#define	INPUT_AVAIL	0x80
#define	MPU_ACK		0xFE
#define	UART_MODE_ON	0x3F
extern struct snd_rawmidi_ops snd_wavefront_midi_output;
extern struct snd_rawmidi_ops snd_wavefront_midi_input;
extern void   snd_wavefront_midi_enable_virtual (snd_wavefront_card_t *);
extern void   snd_wavefront_midi_disable_virtual (snd_wavefront_card_t *);
extern void   snd_wavefront_midi_interrupt (snd_wavefront_card_t *);
extern int    snd_wavefront_midi_start (snd_wavefront_card_t *);
struct _snd_wavefront ;
struct _snd_wavefront_card ;
extern void snd_wavefront_internal_interrupt (snd_wavefront_card_t *card);
extern int  snd_wavefront_detect_irq (snd_wavefront_t *dev) ;
extern int  snd_wavefront_check_irq (snd_wavefront_t *dev, int irq);
extern int  snd_wavefront_restart (snd_wavefront_t *dev);
extern int  snd_wavefront_start (snd_wavefront_t *dev);
extern int  snd_wavefront_detect (snd_wavefront_card_t *card);
extern int  snd_wavefront_config_midi (snd_wavefront_t *dev) ;
extern int  snd_wavefront_cmd (snd_wavefront_t *, int, unsigned char *,
unsigned char *);
extern int snd_wavefront_synth_ioctl   (struct snd_hwdep *,
struct file *,
unsigned int cmd,
unsigned long arg);
extern int  snd_wavefront_synth_open    (struct snd_hwdep *, struct file *);
extern int  snd_wavefront_synth_release (struct snd_hwdep *, struct file *);
extern int  snd_wavefront_fx_start  (snd_wavefront_t *);
extern int  snd_wavefront_fx_detect (snd_wavefront_t *);
extern int  snd_wavefront_fx_ioctl  (struct snd_hwdep *,
struct file *,
unsigned int cmd,
unsigned long arg);
extern int snd_wavefront_fx_open    (struct snd_hwdep *, struct file *);
extern int snd_wavefront_fx_release (struct snd_hwdep *, struct file *);
#define LOGNAME "WaveFront: "
