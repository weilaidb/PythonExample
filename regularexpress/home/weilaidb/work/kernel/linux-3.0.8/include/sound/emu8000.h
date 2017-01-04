#define __SOUND_EMU8000_H
#define EMU8000_MAX_DRAM (28 * 1024 * 1024)
#define EMU8000_DRAM_OFFSET 0x200000
#define EMU8000_CHANNELS   32
#define EMU8000_DRAM_VOICES	30
#define EMU8000_RAM_READ   0
#define EMU8000_RAM_WRITE  1
#define EMU8000_RAM_CLOSE  2
#define EMU8000_RAM_MODE_MASK	0x03
#define EMU8000_RAM_RIGHT	0x10
enum ;
struct snd_emu8000 ;
#define SNDRV_SEQ_DEV_ID_EMU8000	"emu8000-synth"
int snd_emu8000_new(struct snd_card *card, int device, long port, int seq_ports,
struct snd_seq_device **ret);
void snd_emu8000_poke(struct snd_emu8000 *emu, unsigned int port, unsigned int reg,
unsigned int val);
unsigned short snd_emu8000_peek(struct snd_emu8000 *emu, unsigned int port,
unsigned int reg);
void snd_emu8000_poke_dw(struct snd_emu8000 *emu, unsigned int port, unsigned int reg,
unsigned int val);
unsigned int snd_emu8000_peek_dw(struct snd_emu8000 *emu, unsigned int port,
unsigned int reg);
void snd_emu8000_dma_chan(struct snd_emu8000 *emu, int ch, int mode);
void snd_emu8000_init_fm(struct snd_emu8000 *emu);
void snd_emu8000_update_chorus_mode(struct snd_emu8000 *emu);
void snd_emu8000_update_reverb_mode(struct snd_emu8000 *emu);
void snd_emu8000_update_equalizer(struct snd_emu8000 *emu);
int snd_emu8000_load_chorus_fx(struct snd_emu8000 *emu, int mode, const void __user *buf, long len);
int snd_emu8000_load_reverb_fx(struct snd_emu8000 *emu, int mode, const void __user *buf, long len);
