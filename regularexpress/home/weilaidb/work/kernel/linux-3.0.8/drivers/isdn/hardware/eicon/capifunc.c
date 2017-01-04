#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
DIVA_CAPI_ADAPTER *adapter = (DIVA_CAPI_ADAPTER *) NULL;
APPL *application = (APPL *) NULL;
byte max_appl = MAX_APPL;
byte max_adapter = 0;
static CAPI_MSG *mapped_msg = (CAPI_MSG *) NULL;
byte UnMapController(byte);
char DRIVERRELEASE_CAPI[32];
extern void AutomaticLaw(DIVA_CAPI_ADAPTER *);
extern void callback(ENTITY *);
extern word api_remove_start(void);
extern word CapiRelease(word);
extern word CapiRegister(word);
extern word api_put(APPL *, CAPI_MSG *);
static diva_os_spin_lock_t api_lock;
static LIST_HEAD(cards);
static dword notify_handle;
static void DIRequest(ENTITY * e);
static DESCRIPTOR MAdapter;
static DESCRIPTOR DAdapter;
static byte ControllerMap[MAX_DESCRIPTORS + 1];
static void diva_register_appl(struct capi_ctr *, __u16,
capi_register_params *);
static void diva_release_appl(struct capi_ctr *, __u16);
static char *diva_procinfo(struct capi_ctr *);
static u16 diva_send_message(struct capi_ctr *,
diva_os_message_buffer_s *);
extern void diva_os_set_controller_struct(struct capi_ctr *);
extern void DIVA_DIDD_Read(DESCRIPTOR *, int);
static void no_printf(unsigned char *, ...);
static void xlog(char *x, ...)
static char *diva_procinfo(struct capi_ctr *ctrl)
static void stop_dbg(void)
static void no_printf(unsigned char *x, ...)
byte MapController(byte Controller)
byte UnMapController(byte MappedController)
static int find_free_id(void)
static diva_card *find_card_by_ctrl(word controller)
void *TransmitBufferSet(APPL * appl, dword ref)
void *TransmitBufferGet(APPL * appl, void *p)
void TransmitBufferFree(APPL * appl, void *p)
void *ReceiveBufferGet(APPL * appl, int Num)
void api_remove_complete(void)
void sendf(APPL * appl, word command, dword Id, word Number, byte * format, ...)
static void clean_adapter(int id, struct list_head *free_mem_q)
static void divacapi_remove_card(DESCRIPTOR * d)
static void divacapi_remove_cards(void)
static void sync_callback(ENTITY * e)
static int diva_add_card(DESCRIPTOR * d)
static void diva_register_appl(struct capi_ctr *ctrl, __u16 appl,
capi_register_params * rp)
static void diva_release_appl(struct capi_ctr *ctrl, __u16 appl)
static u16 diva_send_message(struct capi_ctr *ctrl,
diva_os_message_buffer_s * dmb)
static void DIRequest(ENTITY * e)
static void didd_callback(void *context, DESCRIPTOR * adapter, int removal)
static int divacapi_connect_didd(void)
static void divacapi_disconnect_didd(void)
int fax_head_line_time(char *buffer)
static int DIVA_INIT_FUNCTION init_main_structs(void)
static void remove_main_structs(void)
static void do_api_remove_start(void)
int DIVA_INIT_FUNCTION init_capifunc(void)
void DIVA_EXIT_FUNCTION finit_capifunc(void)
