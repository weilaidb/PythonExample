#define EMU10K1_MIDI_MODE_INPUT		(1<<0)
#define EMU10K1_MIDI_MODE_OUTPUT	(1<<1)
static inline unsigned char mpu401_read(struct snd_emu10k1 *emu,
struct snd_emu10k1_midi *mpu, int idx)
static inline void mpu401_write(struct snd_emu10k1 *emu,
struct snd_emu10k1_midi *mpu, int data, int idx)
#define mpu401_write_data(emu, mpu, data)	mpu401_write(emu, mpu, data, 0)
#define mpu401_write_cmd(emu, mpu, data)	mpu401_write(emu, mpu, data, 1)
#define mpu401_read_data(emu, mpu)		mpu401_read(emu, mpu, 0)
#define mpu401_read_stat(emu, mpu)		mpu401_read(emu, mpu, 1)
#define mpu401_input_avail(emu,mpu)	(!(mpu401_read_stat(emu,mpu) & 0x80))
#define mpu401_output_ready(emu,mpu)	(!(mpu401_read_stat(emu,mpu) & 0x40))
#define MPU401_RESET		0xff
#define MPU401_ENTER_UART	0x3f
#define MPU401_ACK		0xfe
static void mpu401_clear_rx(struct snd_emu10k1 *emu, struct snd_emu10k1_midi *mpu)
static void do_emu10k1_midi_interrupt(struct snd_emu10k1 *emu, struct snd_emu10k1_midi *midi, unsigned int status)
static void snd_emu10k1_midi_interrupt(struct snd_emu10k1 *emu, unsigned int status)
static void snd_emu10k1_midi_interrupt2(struct snd_emu10k1 *emu, unsigned int status)
static int snd_emu10k1_midi_cmd(struct snd_emu10k1 * emu, struct snd_emu10k1_midi *midi, unsigned char cmd, int ack)
static int snd_emu10k1_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_emu10k1_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_emu10k1_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_emu10k1_midi_output_close(struct snd_rawmidi_substream *substream)
static void snd_emu10k1_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_emu10k1_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops snd_emu10k1_midi_output =
;
static struct snd_rawmidi_ops snd_emu10k1_midi_input =
;
static void snd_emu10k1_midi_free(struct snd_rawmidi *rmidi)
static int __devinit emu10k1_midi_init(struct snd_emu10k1 *emu, struct snd_emu10k1_midi *midi, int device, char *name)
int __devinit snd_emu10k1_midi(struct snd_emu10k1 *emu)
int __devinit snd_emu10k1_audigy_midi(struct snd_emu10k1 *emu)
