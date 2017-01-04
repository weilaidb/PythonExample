#define INTEL_DSM_REVISION_ID 1
#define INTEL_DSM_FN_SUPPORTED_FUNCTIONS 0
#define INTEL_DSM_FN_PLATFORM_MUX_INFO 1
static struct intel_dsm_priv  intel_dsm_priv;
static const u8 intel_dsm_guid[] = ;
static int intel_dsm(acpi_handle handle, int func, int arg)
static char *intel_dsm_port_name(u8 id)
static char *intel_dsm_mux_type(u8 type)
static void intel_dsm_platform_mux_info(void)
static bool intel_dsm_pci_probe(struct pci_dev *pdev)
static bool intel_dsm_detect(void)
void intel_register_dsm_handler(void)
void intel_unregister_dsm_handler(void)
