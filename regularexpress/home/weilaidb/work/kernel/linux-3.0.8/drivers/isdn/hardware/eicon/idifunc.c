#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
extern char *DRIVERRELEASE_IDI;
extern void DIVA_DIDD_Read(void *, int);
extern int diva_user_mode_idi_create_adapter(const DESCRIPTOR *, int);
extern void diva_user_mode_idi_remove_adapter(int);
static dword notify_handle;
static DESCRIPTOR DAdapter;
static DESCRIPTOR MAdapter;
static void no_printf(unsigned char *x, ...)
static void stop_dbg(void)
typedef struct _udiva_card  udiva_card;
static LIST_HEAD(cards);
static diva_os_spin_lock_t ll_lock;
static udiva_card *find_card_in_list(DESCRIPTOR * d)
static void um_new_card(DESCRIPTOR * d)
static void um_remove_card(DESCRIPTOR * d)
static void DIVA_EXIT_FUNCTION remove_all_idi_proc(void)
static void *didd_callback(void *context, DESCRIPTOR * adapter,
int removal)
static int DIVA_INIT_FUNCTION connect_didd(void)
static void DIVA_EXIT_FUNCTION disconnect_didd(void)
int DIVA_INIT_FUNCTION idifunc_init(void)
void DIVA_EXIT_FUNCTION idifunc_finit(void)
