#define OXYGEN_H_INCLUDED
#define PCM_A		0
#define PCM_B		1
#define PCM_C		2
#define PCM_SPDIF	3
#define PCM_MULTICH	4
#define PCM_AC97	5
#define PCM_COUNT	6
#define OXYGEN_MCLKS(f_single, f_double, f_quad) ((MCLK_##f_single << 0) | \
(MCLK_##f_double << 2) | \
(MCLK_##f_quad   << 4))
#define OXYGEN_IO_SIZE	0x100
#define OXYGEN_EEPROM_ID	0x434d
#define PLAYBACK_0_TO_I2S	0x0001
#define PLAYBACK_1_TO_SPDIF	0x0004
#define PLAYBACK_2_TO_AC97_1	0x0008
#define CAPTURE_0_FROM_I2S_1	0x0010
#define CAPTURE_0_FROM_I2S_2	0x0020
#define CAPTURE_1_FROM_SPDIF	0x0080
#define CAPTURE_2_FROM_I2S_2	0x0100
#define CAPTURE_2_FROM_AC97_1	0x0200
#define MIDI_OUTPUT		0x0800
#define MIDI_INPUT		0x1000
#define AC97_CD_INPUT		0x2000
#define AC97_FMIC_SWITCH	0x4000
enum ;
#define OXYGEN_PCI_SUBID(sv, sd) \
.vendor = PCI_VENDOR_ID_CMEDIA, \
.device = 0x8788, \
.subvendor = sv, \
.subdevice = sd
#define BROKEN_EEPROM_DRIVER_DATA ((unsigned long)-1)
#define OXYGEN_PCI_SUBID_BROKEN_EEPROM \
OXYGEN_PCI_SUBID(PCI_VENDOR_ID_CMEDIA, 0x8788), \
.driver_data = BROKEN_EEPROM_DRIVER_DATA
struct pci_dev;
struct pci_device_id;
struct snd_card;
struct snd_pcm_substream;
struct snd_pcm_hardware;
struct snd_pcm_hw_params;
struct snd_kcontrol_new;
struct snd_rawmidi;
struct snd_info_buffer;
struct oxygen;
struct oxygen_model ;
struct oxygen ;
int oxygen_pci_probe(struct pci_dev *pci, int index, char *id,
struct module *owner,
const struct pci_device_id *ids,
int (*get_model)(struct oxygen *chip,
const struct pci_device_id *id
)
);
void oxygen_pci_remove(struct pci_dev *pci);
int oxygen_pci_suspend(struct pci_dev *pci, pm_message_t state);
int oxygen_pci_resume(struct pci_dev *pci);
void oxygen_pci_shutdown(struct pci_dev *pci);
int oxygen_mixer_init(struct oxygen *chip);
void oxygen_update_dac_routing(struct oxygen *chip);
void oxygen_update_spdif_source(struct oxygen *chip);
int oxygen_pcm_init(struct oxygen *chip);
u8 oxygen_read8(struct oxygen *chip, unsigned int reg);
u16 oxygen_read16(struct oxygen *chip, unsigned int reg);
u32 oxygen_read32(struct oxygen *chip, unsigned int reg);
void oxygen_write8(struct oxygen *chip, unsigned int reg, u8 value);
void oxygen_write16(struct oxygen *chip, unsigned int reg, u16 value);
void oxygen_write32(struct oxygen *chip, unsigned int reg, u32 value);
void oxygen_write8_masked(struct oxygen *chip, unsigned int reg,
u8 value, u8 mask);
void oxygen_write16_masked(struct oxygen *chip, unsigned int reg,
u16 value, u16 mask);
void oxygen_write32_masked(struct oxygen *chip, unsigned int reg,
u32 value, u32 mask);
u16 oxygen_read_ac97(struct oxygen *chip, unsigned int codec,
unsigned int index);
void oxygen_write_ac97(struct oxygen *chip, unsigned int codec,
unsigned int index, u16 data);
void oxygen_write_ac97_masked(struct oxygen *chip, unsigned int codec,
unsigned int index, u16 data, u16 mask);
void oxygen_write_spi(struct oxygen *chip, u8 control, unsigned int data);
void oxygen_write_i2c(struct oxygen *chip, u8 device, u8 map, u8 data);
void oxygen_reset_uart(struct oxygen *chip);
void oxygen_write_uart(struct oxygen *chip, u8 data);
u16 oxygen_read_eeprom(struct oxygen *chip, unsigned int index);
void oxygen_write_eeprom(struct oxygen *chip, unsigned int index, u16 value);
static inline void oxygen_set_bits8(struct oxygen *chip,
unsigned int reg, u8 value)
static inline void oxygen_set_bits16(struct oxygen *chip,
unsigned int reg, u16 value)
static inline void oxygen_set_bits32(struct oxygen *chip,
unsigned int reg, u32 value)
static inline void oxygen_clear_bits8(struct oxygen *chip,
unsigned int reg, u8 value)
static inline void oxygen_clear_bits16(struct oxygen *chip,
unsigned int reg, u16 value)
static inline void oxygen_clear_bits32(struct oxygen *chip,
unsigned int reg, u32 value)
static inline void oxygen_ac97_set_bits(struct oxygen *chip, unsigned int codec,
unsigned int index, u16 value)
static inline void oxygen_ac97_clear_bits(struct oxygen *chip,
unsigned int codec,
unsigned int index, u16 value)
