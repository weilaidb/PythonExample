static int read_eeprom_byte(struct mantis_pci *mantis, u8 *data, u8 length)
static int write_eeprom_byte(struct mantis_pci *mantis, u8 *data, u8 length)
static int get_mac_address(struct mantis_pci *mantis)
#define MANTIS_MODEL_UNKNOWN	"UNKNOWN"
#define MANTIS_DEV_UNKNOWN	"UNKNOWN"
struct mantis_hwconfig unknown_device = ;
static void mantis_load_config(struct mantis_pci *mantis)
int mantis_core_init(struct mantis_pci *mantis)
int mantis_core_exit(struct mantis_pci *mantis)
void gpio_set_bits(struct mantis_pci *mantis, u32 bitpos, u8 value)
void mantis_set_direction(struct mantis_pci *mantis, int direction)
