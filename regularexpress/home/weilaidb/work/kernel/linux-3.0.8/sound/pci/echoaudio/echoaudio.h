#define _ECHOAUDIO_H_
#define TRUE 1
#define FALSE 0
#define VENDOR_ID		0x1057
#define DEVICE_ID_56301		0x1801
#define DEVICE_ID_56361		0x3410
#define SUBVENDOR_ID		0xECC0
#define DARLA20			0x0010
#define GINA20			0x0020
#define LAYLA20			0x0030
#define DARLA24			0x0040
#define GINA24			0x0050
#define LAYLA24			0x0060
#define MONA			0x0070
#define MIA			0x0080
#define INDIGO			0x0090
#define INDIGO_IO		0x00a0
#define INDIGO_DJ		0x00b0
#define DC8			0x00c0
#define INDIGO_IOX		0x00d0
#define INDIGO_DJX		0x00e0
#define ECHO3G			0x0100
#define ECHO_MAXAUDIOINPUTS	32
#define ECHO_MAXAUDIOOUTPUTS	32
#define ECHO_MAXAUDIOPIPES	32
#define E3G_MAX_OUTPUTS		16
#define ECHO_MAXMIDIJACKS	1
#define ECHO_MIDI_QUEUE_SZ 	512
#define ECHO_MTC_QUEUE_SZ	32
#define MIDI_ACTIVITY_TIMEOUT_USEC	200000
#define ECHO_CLOCK_INTERNAL		0
#define ECHO_CLOCK_WORD			1
#define ECHO_CLOCK_SUPER		2
#define ECHO_CLOCK_SPDIF		3
#define ECHO_CLOCK_ADAT			4
#define ECHO_CLOCK_ESYNC		5
#define ECHO_CLOCK_ESYNC96		6
#define ECHO_CLOCK_MTC			7
#define ECHO_CLOCK_NUMBER		8
#define ECHO_CLOCKS			0xffff
#define ECHO_CLOCK_BIT_INTERNAL		(1 << ECHO_CLOCK_INTERNAL)
#define ECHO_CLOCK_BIT_WORD		(1 << ECHO_CLOCK_WORD)
#define ECHO_CLOCK_BIT_SUPER		(1 << ECHO_CLOCK_SUPER)
#define ECHO_CLOCK_BIT_SPDIF		(1 << ECHO_CLOCK_SPDIF)
#define ECHO_CLOCK_BIT_ADAT		(1 << ECHO_CLOCK_ADAT)
#define ECHO_CLOCK_BIT_ESYNC		(1 << ECHO_CLOCK_ESYNC)
#define ECHO_CLOCK_BIT_ESYNC96		(1 << ECHO_CLOCK_ESYNC96)
#define ECHO_CLOCK_BIT_MTC		(1<<ECHO_CLOCK_MTC)
#define DIGITAL_MODE_NONE			0xFF
#define DIGITAL_MODE_SPDIF_RCA			0
#define DIGITAL_MODE_SPDIF_OPTICAL		1
#define DIGITAL_MODE_ADAT			2
#define DIGITAL_MODE_SPDIF_CDROM		3
#define DIGITAL_MODES				4
#define ECHOCAPS_HAS_DIGITAL_MODE_SPDIF_RCA	(1 << DIGITAL_MODE_SPDIF_RCA)
#define ECHOCAPS_HAS_DIGITAL_MODE_SPDIF_OPTICAL	(1 << DIGITAL_MODE_SPDIF_OPTICAL)
#define ECHOCAPS_HAS_DIGITAL_MODE_ADAT		(1 << DIGITAL_MODE_ADAT)
#define ECHOCAPS_HAS_DIGITAL_MODE_SPDIF_CDROM	(1 << DIGITAL_MODE_SPDIF_CDROM)
#define EXT_3GBOX_NC			0x01
#define EXT_3GBOX_NOT_SET		0x02
#define ECHOGAIN_MUTED		(-128)
#define ECHOGAIN_MINOUT		(-128)
#define ECHOGAIN_MAXOUT		(6)
#define ECHOGAIN_MININP		(-50)
#define ECHOGAIN_MAXINP		(50)
#define PIPE_STATE_STOPPED	0
#define PIPE_STATE_PAUSED	1
#define PIPE_STATE_STARTED	2
#define PIPE_STATE_PENDING	3
#define DE_INIT(x) snd_printk x
#define DE_INIT(x)
#define DE_HWP(x) snd_printk x
#define DE_HWP(x)
#define DE_ACT(x) snd_printk x
#define DE_ACT(x)
#define DE_MID(x) snd_printk x
#define DE_MID(x)
struct audiopipe ;
struct audioformat ;
struct echoaudio ;
static int init_dsp_comm_page(struct echoaudio *chip);
static int init_line_levels(struct echoaudio *chip);
static int free_pipes(struct echoaudio *chip, struct audiopipe *pipe);
static int load_firmware(struct echoaudio *chip);
static int wait_handshake(struct echoaudio *chip);
static int send_vector(struct echoaudio *chip, u32 command);
static int get_firmware(const struct firmware **fw_entry,
struct echoaudio *chip, const short fw_index);
static void free_firmware(const struct firmware *fw_entry);
static int enable_midi_input(struct echoaudio *chip, char enable);
static void snd_echo_midi_output_trigger(
struct snd_rawmidi_substream *substream, int up);
static int midi_service_irq(struct echoaudio *chip);
static int __devinit snd_echo_midi_create(struct snd_card *card,
struct echoaudio *chip);
static inline void clear_handshake(struct echoaudio *chip)
static inline u32 get_dsp_register(struct echoaudio *chip, u32 index)
static inline void set_dsp_register(struct echoaudio *chip, u32 index,
u32 value)
static inline int px_digital_out(const struct echoaudio *chip)
static inline int px_analog_in(const struct echoaudio *chip)
static inline int px_digital_in(const struct echoaudio *chip)
static inline int px_num(const struct echoaudio *chip)
static inline int bx_digital_out(const struct echoaudio *chip)
static inline int bx_analog_in(const struct echoaudio *chip)
static inline int bx_digital_in(const struct echoaudio *chip)
static inline int bx_num(const struct echoaudio *chip)
static inline int num_pipes_out(const struct echoaudio *chip)
static inline int num_pipes_in(const struct echoaudio *chip)
static inline int num_busses_out(const struct echoaudio *chip)
static inline int num_busses_in(const struct echoaudio *chip)
static inline int num_analog_busses_out(const struct echoaudio *chip)
static inline int num_analog_busses_in(const struct echoaudio *chip)
static inline int num_digital_busses_out(const struct echoaudio *chip)
static inline int num_digital_busses_in(const struct echoaudio *chip)
static inline int monitor_index(const struct echoaudio *chip, int out, int in)
#define pci_device(chip) (&chip->pci->dev)
