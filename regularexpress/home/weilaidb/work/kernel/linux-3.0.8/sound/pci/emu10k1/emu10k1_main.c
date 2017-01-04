#define HANA_FILENAME "emu/hana.fw"
#define DOCK_FILENAME "emu/audio_dock.fw"
#define EMU1010B_FILENAME "emu/emu1010b.fw"
#define MICRO_DOCK_FILENAME "emu/micro_dock.fw"
#define EMU0404_FILENAME "emu/emu0404.fw"
#define EMU1010_NOTEBOOK_FILENAME "emu/emu1010_notebook.fw"
MODULE_FIRMWARE(HANA_FILENAME);
MODULE_FIRMWARE(DOCK_FILENAME);
MODULE_FIRMWARE(EMU1010B_FILENAME);
MODULE_FIRMWARE(MICRO_DOCK_FILENAME);
MODULE_FIRMWARE(EMU0404_FILENAME);
MODULE_FIRMWARE(EMU1010_NOTEBOOK_FILENAME);
void snd_emu10k1_voice_init(struct snd_emu10k1 *emu, int ch)
static unsigned int spi_dac_init[] = ;
static unsigned int i2c_adc_init[][2] = ;
static int snd_emu10k1_init(struct snd_emu10k1 *emu, int enable_ir, int resume)
static void snd_emu10k1_audio_enable(struct snd_emu10k1 *emu)
int snd_emu10k1_done(struct snd_emu10k1 *emu)
#define HOOKN_BIT		(1L << 12)
#define HANDN_BIT		(1L << 11)
#define PULSEN_BIT		(1L << 10)
#define EC_GDI1			(1 << 13)
#define EC_GDI0			(1 << 14)
#define EC_NUM_CONTROL_BITS	20
#define EC_AC3_DATA_SELN	0x0001L
#define EC_EE_DATA_SEL		0x0002L
#define EC_EE_CNTRL_SELN	0x0004L
#define EC_EECLK		0x0008L
#define EC_EECS			0x0010L
#define EC_EESDO		0x0020L
#define EC_TRIM_CSN		0x0040L
#define EC_TRIM_SCLK		0x0080L
#define EC_TRIM_SDATA		0x0100L
#define EC_TRIM_MUTEN		0x0200L
#define EC_ADCCAL		0x0400L
#define EC_ADCRSTN		0x0800L
#define EC_DACCAL		0x1000L
#define EC_DACMUTEN		0x2000L
#define EC_LEDN			0x4000L
#define EC_SPDIF0_SEL_SHIFT	15
#define EC_SPDIF1_SEL_SHIFT	17
#define EC_SPDIF0_SEL_MASK	(0x3L << EC_SPDIF0_SEL_SHIFT)
#define EC_SPDIF1_SEL_MASK	(0x7L << EC_SPDIF1_SEL_SHIFT)
#define EC_SPDIF0_SELECT(_x)	(((_x) << EC_SPDIF0_SEL_SHIFT) & EC_SPDIF0_SEL_MASK)
#define EC_SPDIF1_SELECT(_x)	(((_x) << EC_SPDIF1_SEL_SHIFT) & EC_SPDIF1_SEL_MASK)
#define EC_CURRENT_PROM_VERSION 0x01
#define EC_EEPROM_SIZE		0x40
#define EC_PROM_VERSION_ADDR	0x20
#define EC_BOARDREV0_ADDR	0x21
#define EC_BOARDREV1_ADDR	0x22
#define EC_LAST_PROMFILE_ADDR	0x2f
#define EC_SERIALNUM_ADDR	0x30
#define EC_CHECKSUM_ADDR	0x3f
#define EC_RAW_RUN_MODE		(EC_DACMUTEN | EC_ADCRSTN | EC_TRIM_MUTEN | \
EC_TRIM_CSN)
#define EC_DEFAULT_ADC_GAIN	0xC4C4
#define EC_DEFAULT_SPDIF0_SEL	0x0
#define EC_DEFAULT_SPDIF1_SEL	0x4
static void snd_emu10k1_ecard_write(struct snd_emu10k1 *emu, unsigned int value)
static void snd_emu10k1_ecard_setadcgain(struct snd_emu10k1 *emu,
unsigned short gain)
static int snd_emu10k1_ecard_init(struct snd_emu10k1 *emu)
static int snd_emu10k1_cardbus_init(struct snd_emu10k1 *emu)
static int snd_emu1010_load_firmware(struct snd_emu10k1 *emu, const char *filename)
static int emu1010_firmware_thread(void *data)
static int snd_emu10k1_emu1010_init(struct snd_emu10k1 *emu)
static int alloc_pm_buffer(struct snd_emu10k1 *emu);
static void free_pm_buffer(struct snd_emu10k1 *emu);
static int snd_emu10k1_free(struct snd_emu10k1 *emu)
static int snd_emu10k1_dev_free(struct snd_device *device)
static struct snd_emu_chip_details emu_chip_details[] = ;
int __devinit snd_emu10k1_create(struct snd_card *card,
struct pci_dev *pci,
unsigned short extin_mask,
unsigned short extout_mask,
long max_cache_bytes,
int enable_ir,
uint subsystem,
struct snd_emu10k1 **remu)
static unsigned char saved_regs[] = ;
static unsigned char saved_regs_audigy[] = ;
static int __devinit alloc_pm_buffer(struct snd_emu10k1 *emu)
static void free_pm_buffer(struct snd_emu10k1 *emu)
void snd_emu10k1_suspend_regs(struct snd_emu10k1 *emu)
void snd_emu10k1_resume_init(struct snd_emu10k1 *emu)
void snd_emu10k1_resume_regs(struct snd_emu10k1 *emu)
