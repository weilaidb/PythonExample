#define NOUVEAU_DSM_SUPPORTED 0x00
#define NOUVEAU_DSM_SUPPORTED_FUNCTIONS 0x00
#define NOUVEAU_DSM_ACTIVE 0x01
#define NOUVEAU_DSM_ACTIVE_QUERY 0x00
#define NOUVEAU_DSM_LED 0x02
#define NOUVEAU_DSM_LED_STATE 0x00
#define NOUVEAU_DSM_LED_OFF 0x10
#define NOUVEAU_DSM_LED_STAMINA 0x11
#define NOUVEAU_DSM_LED_SPEED 0x12
#define NOUVEAU_DSM_POWER 0x03
#define NOUVEAU_DSM_POWER_STATE 0x00
#define NOUVEAU_DSM_POWER_SPEED 0x01
#define NOUVEAU_DSM_POWER_STAMINA 0x02
static struct nouveau_dsm_priv  nouveau_dsm_priv;
#define NOUVEAU_DSM_HAS_MUX 0x1
#define NOUVEAU_DSM_HAS_OPT 0x2
static const char nouveau_dsm_muid[] = ;
static const char nouveau_op_dsm_muid[] = ;
static int nouveau_optimus_dsm(acpi_handle handle, int func, int arg, uint32_t *result)
static int nouveau_dsm(acpi_handle handle, int func, int arg, uint32_t *result)
static int nouveau_dsm_switch_mux(acpi_handle handle, int mux_id)
static int nouveau_dsm_set_discrete_state(acpi_handle handle, enum vga_switcheroo_state state)
static int nouveau_dsm_switchto(enum vga_switcheroo_client_id id)
static int nouveau_dsm_power_state(enum vga_switcheroo_client_id id,
enum vga_switcheroo_state state)
static int nouveau_dsm_init(void)
static int nouveau_dsm_get_client_id(struct pci_dev *pdev)
static struct vga_switcheroo_handler nouveau_dsm_handler = ;
static int nouveau_dsm_pci_probe(struct pci_dev *pdev)
static bool nouveau_dsm_detect(void)
void nouveau_register_dsm_handler(void)
void nouveau_unregister_dsm_handler(void)
static int nouveau_rom_call(acpi_handle rom_handle, uint8_t *bios,
int offset, int len)
bool nouveau_acpi_rom_supported(struct pci_dev *pdev)
int nouveau_acpi_get_bios_chunk(uint8_t *bios, int offset, int len)
int
nouveau_acpi_edid(struct drm_device *dev, struct drm_connector *connector)
