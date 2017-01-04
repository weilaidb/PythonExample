#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
extern void DIVA_DIDD_Read(void *, int);
extern char *DRIVERRELEASE_DIDD;
static dword notify_handle;
static DESCRIPTOR _DAdapter;
static void *didd_callback(void *context, DESCRIPTOR * adapter,
int removal)
static int DIVA_INIT_FUNCTION connect_didd(void)
static void DIVA_EXIT_FUNCTION disconnect_didd(void)
int DIVA_INIT_FUNCTION diddfunc_init(void)
void DIVA_EXIT_FUNCTION diddfunc_finit(void)
