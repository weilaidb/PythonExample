#define ATPX_VERSION 0
#define ATPX_GPU_PWR 2
#define ATPX_MUX_SELECT 3
#define ATPX_I2C_MUX_SELECT 4
#define ATPX_SWITCH_START 5
#define ATPX_SWITCH_END 6
#define ATPX_INTEGRATED 0
#define ATPX_DISCRETE 1
#define ATPX_MUX_IGD 0
#define ATPX_MUX_DISCRETE 1
static struct radeon_atpx_priv  radeon_atpx_priv;
static int radeon_atrm_call(acpi_handle atrm_handle, uint8_t *bios,
int offset, int len)
bool radeon_atrm_supported(struct pci_dev *pdev)
int radeon_atrm_get_bios_chunk(uint8_t *bios, int offset, int len)
static int radeon_atpx_get_version(acpi_handle handle)
static int radeon_atpx_execute(acpi_handle handle, int cmd_id, u16 value)
static int radeon_atpx_set_discrete_state(acpi_handle handle, int state)
static int radeon_atpx_switch_mux(acpi_handle handle, int mux_id)
static int radeon_atpx_switch_i2c_mux(acpi_handle handle, int mux_id)
static int radeon_atpx_switch_start(acpi_handle handle, int gpu_id)
static int radeon_atpx_switch_end(acpi_handle handle, int gpu_id)
static int radeon_atpx_switchto(enum vga_switcheroo_client_id id)
static int radeon_atpx_power_state(enum vga_switcheroo_client_id id,
enum vga_switcheroo_state state)
static bool radeon_atpx_pci_probe_handle(struct pci_dev *pdev)
static int radeon_atpx_init(void)
static int radeon_atpx_get_client_id(struct pci_dev *pdev)
static struct vga_switcheroo_handler radeon_atpx_handler = ;
static bool radeon_atpx_detect(void)
void radeon_register_atpx_handler(void)
void radeon_unregister_atpx_handler(void)
