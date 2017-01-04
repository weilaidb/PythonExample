#define DIVA_PRI_NO_PCI_BIOS_WORKAROUND 1
extern int diva_card_read_xlog(diva_os_xdi_adapter_t * a);
extern void prepare_pri_functions(PISDN_ADAPTER IoAdapter);
extern void prepare_pri2_functions(PISDN_ADAPTER IoAdapter);
extern void diva_xdi_display_adapter_features(int card);
static int diva_pri_cleanup_adapter(diva_os_xdi_adapter_t * a);
static int diva_pri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd, int length);
static int pri_get_serial_number(diva_os_xdi_adapter_t * a);
static int diva_pri_stop_adapter(diva_os_xdi_adapter_t * a);
static dword diva_pri_detect_dsps(diva_os_xdi_adapter_t * a);
static int pri_is_rev_2_card(int card_ordinal)
static void diva_pri_set_addresses(diva_os_xdi_adapter_t * a)
int diva_pri_init_card(diva_os_xdi_adapter_t * a)
static int diva_pri_cleanup_adapter(diva_os_xdi_adapter_t * a)
static int diva_pri_reset_adapter(PISDN_ADAPTER IoAdapter)
static int
diva_pri_write_sdram_block(PISDN_ADAPTER IoAdapter,
dword address,
const byte * data, dword length, dword limit)
static int
diva_pri_start_adapter(PISDN_ADAPTER IoAdapter,
dword start_address, dword features)
static void diva_pri_clear_interrupts(diva_os_xdi_adapter_t * a)
static int diva_pri_stop_adapter(diva_os_xdi_adapter_t * a)
static int
diva_pri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd, int length)
static int pri_get_serial_number(diva_os_xdi_adapter_t * a)
void diva_os_prepare_pri2_functions(PISDN_ADAPTER IoAdapter)
void diva_os_prepare_pri_functions(PISDN_ADAPTER IoAdapter)
static int
dsp_check_presence(volatile byte __iomem * addr, volatile byte __iomem * data, int dsp)
static dword diva_pri_detect_dsps(diva_os_xdi_adapter_t * a)
