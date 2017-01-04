#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
static int debugmask;
extern void DIVA_DIDD_Read(void *, int);
extern PISDN_ADAPTER IoAdapters[MAX_ADAPTER];
extern char *DRIVERRELEASE_DIVAS;
static dword notify_handle;
static DESCRIPTOR DAdapter;
static DESCRIPTOR MAdapter;
static void no_printf(unsigned char *x, ...)
void diva_get_vserial_number(PISDN_ADAPTER IoAdapter, char *buf)
void diva_xdi_didd_register_adapter(int card)
void diva_xdi_didd_remove_adapter(int card)
static void start_dbg(void)
static void stop_dbg(void)
static void *didd_callback(void *context, DESCRIPTOR * adapter,
int removal)
static int DIVA_INIT_FUNCTION connect_didd(void)
static void disconnect_didd(void)
int DIVA_INIT_FUNCTION divasfunc_init(int dbgmask)
void divasfunc_exit(void)
