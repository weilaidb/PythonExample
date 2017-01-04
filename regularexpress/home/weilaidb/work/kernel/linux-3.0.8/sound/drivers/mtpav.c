MODULE_AUTHOR("Michael T. Mayers");
MODULE_DESCRIPTION("MOTU MidiTimePiece AV multiport MIDI");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define MTPAV_IOBASE		0x378
#define MTPAV_IRQ		7
#define MTPAV_MAX_PORTS		8
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
static long port = MTPAV_IOBASE;
static int irq = MTPAV_IRQ;
static int hwports = MTPAV_MAX_PORTS;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for MotuMTPAV MIDI.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for MotuMTPAV MIDI.");
module_param(port, long, 0444);
MODULE_PARM_DESC(port, "Parallel port # for MotuMTPAV MIDI.");
module_param(irq, int, 0444);
MODULE_PARM_DESC(irq, "Parallel IRQ # for MotuMTPAV MIDI.");
module_param(hwports, int, 0444);
MODULE_PARM_DESC(hwports, "Hardware ports # for MotuMTPAV MIDI.");
static struct platform_device *device;
#define SIGS_BYTE 0x08
#define SIGS_RFD 0x80
#define SIGS_IRQ 0x40
#define SIGS_IN0 0x10
#define SIGS_IN1 0x20
#define SIGC_WRITE 0x04
#define SIGC_READ 0x08
#define SIGC_INTEN 0x10
#define DREG 0
#define SREG 1
#define CREG 2
#define MTPAV_MODE_INPUT_OPENED		0x01
#define MTPAV_MODE_OUTPUT_OPENED	0x02
#define MTPAV_MODE_INPUT_TRIGGERED	0x04
#define MTPAV_MODE_OUTPUT_TRIGGERED	0x08
#define NUMPORTS (0x12+1)
struct mtpav_port ;
struct mtpav ;
#define MTPAV_PIDX_COMPUTER	0
#define MTPAV_PIDX_ADAT		1
#define MTPAV_PIDX_BROADCAST	2
static int translate_subdevice_to_hwport(struct mtpav *chip, int subdev)
static int translate_hwport_to_subdevice(struct mtpav *chip, int hwport)
static u8 snd_mtpav_getreg(struct mtpav *chip, u16 reg)
static inline void snd_mtpav_mputreg(struct mtpav *chip, u16 reg, u8 val)
static void snd_mtpav_wait_rfdhi(struct mtpav *chip)
static void snd_mtpav_send_byte(struct mtpav *chip, u8 byte)
static void snd_mtpav_output_port_write(struct mtpav *mtp_card,
struct mtpav_port *portp,
struct snd_rawmidi_substream *substream)
static void snd_mtpav_output_write(struct snd_rawmidi_substream *substream)
static void snd_mtpav_portscan(struct mtpav *chip)
static int snd_mtpav_input_open(struct snd_rawmidi_substream *substream)
static int snd_mtpav_input_close(struct snd_rawmidi_substream *substream)
static void snd_mtpav_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_mtpav_output_timer(unsigned long data)
static void snd_mtpav_add_output_timer(struct mtpav *chip)
static void snd_mtpav_remove_output_timer(struct mtpav *chip)
static int snd_mtpav_output_open(struct snd_rawmidi_substream *substream)
;
static int snd_mtpav_output_close(struct snd_rawmidi_substream *substream)
;
static void snd_mtpav_output_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_mtpav_inmidi_process(struct mtpav *mcrd, u8 inbyte)
static void snd_mtpav_inmidi_h(struct mtpav *mcrd, u8 inbyte)
static void snd_mtpav_read_bytes(struct mtpav *mcrd)
static irqreturn_t snd_mtpav_irqh(int irq, void *dev_id)
static int __devinit snd_mtpav_get_ISA(struct mtpav * mcard)
static struct snd_rawmidi_ops snd_mtpav_output = ;
static struct snd_rawmidi_ops snd_mtpav_input = ;
static void __devinit snd_mtpav_set_name(struct mtpav *chip,
struct snd_rawmidi_substream *substream)
static int __devinit snd_mtpav_get_RAWMIDI(struct mtpav *mcard)
static void snd_mtpav_free(struct snd_card *card)
static int __devinit snd_mtpav_probe(struct platform_device *dev)
static int __devexit snd_mtpav_remove(struct platform_device *devptr)
#define SND_MTPAV_DRIVER	"snd_mtpav"
static struct platform_driver snd_mtpav_driver = ;
static int __init alsa_card_mtpav_init(void)
static void __exit alsa_card_mtpav_exit(void)
module_init(alsa_card_mtpav_init)
module_exit(alsa_card_mtpav_exit)
