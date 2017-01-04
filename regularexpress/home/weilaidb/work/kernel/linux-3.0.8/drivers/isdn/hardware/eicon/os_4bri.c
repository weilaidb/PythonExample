static void *diva_xdiLoadFileFile = NULL;
static dword diva_xdiLoadFileLength = 0;
extern void prepare_qBri_functions(PISDN_ADAPTER IoAdapter);
extern void prepare_qBri2_functions(PISDN_ADAPTER IoAdapter);
extern void diva_xdi_display_adapter_features(int card);
extern void diva_add_slave_adapter(diva_os_xdi_adapter_t * a);
extern int qBri_FPGA_download(PISDN_ADAPTER IoAdapter);
extern void start_qBri_hardware(PISDN_ADAPTER IoAdapter);
extern int diva_card_read_xlog(diva_os_xdi_adapter_t * a);
static unsigned long _4bri_bar_length[4] = ;
static unsigned long _4bri_v2_bar_length[4] = ;
static unsigned long _4bri_v2_bri_bar_length[4] = ;
static int diva_4bri_cleanup_adapter(diva_os_xdi_adapter_t * a);
static int _4bri_get_serial_number(diva_os_xdi_adapter_t * a);
static int diva_4bri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd,
int length);
static int diva_4bri_cleanup_slave_adapters(diva_os_xdi_adapter_t * a);
static int diva_4bri_write_fpga_image(diva_os_xdi_adapter_t * a,
byte * data, dword length);
static int diva_4bri_reset_adapter(PISDN_ADAPTER IoAdapter);
static int diva_4bri_write_sdram_block(PISDN_ADAPTER IoAdapter,
dword address,
const byte * data,
dword length, dword limit);
static int diva_4bri_start_adapter(PISDN_ADAPTER IoAdapter,
dword start_address, dword features);
static int check_qBri_interrupt(PISDN_ADAPTER IoAdapter);
static int diva_4bri_stop_adapter(diva_os_xdi_adapter_t * a);
static int _4bri_is_rev_2_card(int card_ordinal)
static int _4bri_is_rev_2_bri_card(int card_ordinal)
static void diva_4bri_set_addresses(diva_os_xdi_adapter_t *a)
int diva_4bri_init_card(diva_os_xdi_adapter_t * a)
static int diva_4bri_cleanup_adapter(diva_os_xdi_adapter_t * a)
static int _4bri_get_serial_number(diva_os_xdi_adapter_t * a)
static int diva_4bri_cleanup_slave_adapters(diva_os_xdi_adapter_t * a)
static int
diva_4bri_cmd_card_proc(struct _diva_os_xdi_adapter *a,
diva_xdi_um_cfg_cmd_t * cmd, int length)
void *xdiLoadFile(char *FileName, dword *FileLength,
unsigned long lim)
void diva_os_set_qBri_functions(PISDN_ADAPTER IoAdapter)
void diva_os_set_qBri2_functions(PISDN_ADAPTER IoAdapter)
static int
diva_4bri_write_fpga_image(diva_os_xdi_adapter_t * a, byte * data,
dword length)
static int diva_4bri_reset_adapter(PISDN_ADAPTER IoAdapter)
static int
diva_4bri_write_sdram_block(PISDN_ADAPTER IoAdapter,
dword address,
const byte * data, dword length, dword limit)
static int
diva_4bri_start_adapter(PISDN_ADAPTER IoAdapter,
dword start_address, dword features)
static int check_qBri_interrupt(PISDN_ADAPTER IoAdapter)
static void diva_4bri_clear_interrupts(diva_os_xdi_adapter_t * a)
static int diva_4bri_stop_adapter(diva_os_xdi_adapter_t * a)
