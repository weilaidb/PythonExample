extern char *DRIVERRELEASE_MNT;
#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
extern void DIVA_DIDD_Read(void *, int);
static dword notify_handle;
static DESCRIPTOR DAdapter;
static DESCRIPTOR MAdapter;
static DESCRIPTOR MaintDescriptor =
;
extern int diva_os_copy_to_user(void *os_handle, void __user *dst,
const void *src, int length);
extern int diva_os_copy_from_user(void *os_handle, void *dst,
const void __user *src, int length);
static void no_printf(unsigned char *x, ...)
static void *didd_callback(void *context, DESCRIPTOR * adapter,
int removal)
static int DIVA_INIT_FUNCTION connect_didd(void)
static void DIVA_EXIT_FUNCTION disconnect_didd(void)
int maint_read_write(void __user *buf, int count)
int DIVA_INIT_FUNCTION mntfunc_init(int *buffer_length, void **buffer,
unsigned long diva_dbg_mem)
void DIVA_EXIT_FUNCTION mntfunc_finit(void)
