extern void prepare_maestra_functions(PISDN_ADAPTER IoAdapter);
extern void diva_xdi_display_adapter_features(int card);
extern int diva_card_read_xlog(diva_os_xdi_adapter_t * a);
static int bri_bar_length[3] = ;
static int diva_bri_cleanup_adapter(diva_os_xdi_adapter_t * a);
static dword diva_bri_get_serial_number(diva_os_xdi_adapter_t * a);
static int diva_bri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd, int length);
static int diva_bri_reregister_io(diva_os_xdi_adapter_t * a);
static int diva_bri_reset_adapter(PISDN_ADAPTER IoAdapter);
static int diva_bri_write_sdram_block(PISDN_ADAPTER IoAdapter,
dword address,
const byte * data, dword length);
static int diva_bri_start_adapter(PISDN_ADAPTER IoAdapter,
dword start_address, dword features);
static int diva_bri_stop_adapter(diva_os_xdi_adapter_t * a);
static void diva_bri_set_addresses(diva_os_xdi_adapter_t * a)
int diva_bri_init_card(diva_os_xdi_adapter_t * a)
static int diva_bri_cleanup_adapter(diva_os_xdi_adapter_t * a)
void diva_os_prepare_maestra_functions(PISDN_ADAPTER IoAdapter)
static dword diva_bri_get_serial_number(diva_os_xdi_adapter_t * a)
static int diva_bri_reregister_io(diva_os_xdi_adapter_t * a)
static int
diva_bri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd, int length)
static int diva_bri_reset_adapter(PISDN_ADAPTER IoAdapter)
static int
diva_bri_write_sdram_block(PISDN_ADAPTER IoAdapter,
dword address, const byte * data, dword length)
static int
diva_bri_start_adapter(PISDN_ADAPTER IoAdapter,
dword start_address, dword features)
static void diva_bri_clear_interrupts(diva_os_xdi_adapter_t * a)
static int diva_bri_stop_adapter(diva_os_xdi_adapter_t * a)
