#define CARD_NAME "Portman 2x4"
#define DRIVER_NAME "portman"
#define PLATFORM_DRIVER "snd_portman2x4"
static int index[SNDRV_CARDS]  = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS]   = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static struct platform_device *platform_devices[SNDRV_CARDS];
static int device_count;
module_param_array(index, int, NULL, S_IRUGO);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, S_IRUGO);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, S_IRUGO);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
MODULE_AUTHOR("Levent Guendogdu, Tobias Gehrig, Matthias Koenig");
MODULE_DESCRIPTION("Midiman Portman2x4");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define PORTMAN_NUM_INPUT_PORTS 2
#define PORTMAN_NUM_OUTPUT_PORTS 4
struct portman ;
static int portman_free(struct portman *pm)
static int __devinit portman_create(struct snd_card *card,
struct pardevice *pardev,
struct portman **rchip)
#define	PP_STAT_BSY   	0x80
#define	PP_STAT_ACK   	0x40
#define	PP_STAT_POUT  	0x20
#define	PP_STAT_SEL   	0x10
#define	PP_STAT_ERR   	0x08
#define	PP_CMD_IEN  	0x10
#define	PP_CMD_SELI 	0x08
#define	PP_CMD_INIT 	0x04
#define	PP_CMD_FEED 	0x02
#define	PP_CMD_STB      0x01
#define	INT_EN	 	PP_CMD_IEN
#define	STROBE	        PP_CMD_STB
#define	RXDATA0		(0 << 1)
#define	RXDATA1		(1 << 1)
#define	GEN_CTL		(2 << 1)
#define	SYNC_CTL 	(3 << 1)
#define	TXDATA0		(4 << 1)
#define	TXDATA1		(5 << 1)
#define	TXDATA2		(6 << 1)
#define	TXDATA3		(7 << 1)
#define	ESTB		PP_STAT_POUT
#define	INT_REQ         PP_STAT_ACK
#define	BUSY            PP_STAT_ERR
#define	RXAVAIL		PP_STAT_SEL
#define	SYNC_STAT	PP_STAT_SEL
#define	TXEMPTY		PP_STAT_SEL
#define	RXDATA		PP_STAT_BSY
#define	SYNC_DATA       PP_STAT_BSY
#define	DATA_ECHO       PP_STAT_BSY
#define	A0_ECHO         PP_STAT_BSY
#define	A1_ECHO         PP_STAT_BSY
#define	A2_ECHO         PP_STAT_BSY
#define PORTMAN2X4_MODE_INPUT_TRIGGERED	 0x01
static inline void portman_write_command(struct portman *pm, u8 value)
static inline u8 portman_read_command(struct portman *pm)
static inline u8 portman_read_status(struct portman *pm)
static inline u8 portman_read_data(struct portman *pm)
static inline void portman_write_data(struct portman *pm, u8 value)
static void portman_write_midi(struct portman *pm,
int port, u8 mididata)
static int portman_read_midi(struct portman *pm, int port)
static int portman_data_avail(struct portman *pm, int channel)
static void portman_flush_input(struct portman *pm, unsigned char port)
static int portman_probe(struct parport *p)
static int portman_device_init(struct portman *pm)
static int snd_portman_midi_open(struct snd_rawmidi_substream *substream)
static int snd_portman_midi_close(struct snd_rawmidi_substream *substream)
static void snd_portman_midi_input_trigger(struct snd_rawmidi_substream *substream,
int up)
static void snd_portman_midi_output_trigger(struct snd_rawmidi_substream *substream,
int up)
static struct snd_rawmidi_ops snd_portman_midi_output = ;
static struct snd_rawmidi_ops snd_portman_midi_input = ;
static int __devinit snd_portman_rawmidi_create(struct snd_card *card)
static void snd_portman_interrupt(void *userdata)
static int __devinit snd_portman_probe_port(struct parport *p)
static void __devinit snd_portman_attach(struct parport *p)
static void snd_portman_detach(struct parport *p)
static struct parport_driver portman_parport_driver = ;
static void snd_portman_card_private_free(struct snd_card *card)
static int __devinit snd_portman_probe(struct platform_device *pdev)
static int __devexit snd_portman_remove(struct platform_device *pdev)
static struct platform_driver snd_portman_driver = ;
static void snd_portman_unregister_all(void)
static int __init snd_portman_module_init(void)
static void __exit snd_portman_module_exit(void)
module_init(snd_portman_module_init);
module_exit(snd_portman_module_exit);
