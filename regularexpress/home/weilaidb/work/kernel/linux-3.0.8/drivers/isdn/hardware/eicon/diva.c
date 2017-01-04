#define CARDTYPE_H_WANT_DATA            1
#define CARDTYPE_H_WANT_IDI_DATA        0
#define CARDTYPE_H_WANT_RESOURCE_DATA   0
#define CARDTYPE_H_WANT_FILE_DATA       0
PISDN_ADAPTER IoAdapters[MAX_ADAPTER];
extern IDI_CALL Requests[MAX_ADAPTER];
extern int create_adapter_proc(diva_os_xdi_adapter_t * a);
extern void remove_adapter_proc(diva_os_xdi_adapter_t * a);
#define DivaIdiReqFunc(N) \
static void DivaIdiRequest##N(ENTITY *e) \
DivaIdiReqFunc(0)
DivaIdiReqFunc(1)
DivaIdiReqFunc(2)
DivaIdiReqFunc(3)
DivaIdiReqFunc(4)
DivaIdiReqFunc(5)
DivaIdiReqFunc(6)
DivaIdiReqFunc(7)
DivaIdiReqFunc(8)
DivaIdiReqFunc(9)
DivaIdiReqFunc(10)
DivaIdiReqFunc(11)
DivaIdiReqFunc(12)
DivaIdiReqFunc(13)
DivaIdiReqFunc(14)
DivaIdiReqFunc(15)
DivaIdiReqFunc(16)
DivaIdiReqFunc(17)
DivaIdiReqFunc(18)
DivaIdiReqFunc(19)
DivaIdiReqFunc(20)
DivaIdiReqFunc(21)
DivaIdiReqFunc(22)
DivaIdiReqFunc(23)
DivaIdiReqFunc(24)
DivaIdiReqFunc(25)
DivaIdiReqFunc(26)
DivaIdiReqFunc(27)
DivaIdiReqFunc(28)
DivaIdiReqFunc(29)
DivaIdiReqFunc(30)
DivaIdiReqFunc(31)
static LIST_HEAD(adapter_queue);
typedef struct _diva_get_xlog  diva_get_xlog_t;
typedef struct _diva_supported_cards_info  diva_supported_cards_info_t;
static diva_supported_cards_info_t divas_supported_cards[] = ;
static void diva_init_request_array(void);
static void *divas_create_pci_card(int handle, void *pci_dev_handle);
static diva_os_spin_lock_t adapter_lock;
static int diva_find_free_adapters(int base, int nr)
static diva_os_xdi_adapter_t *diva_q_get_next(struct list_head * what)
void *diva_driver_add_card(void *pdev, unsigned long CardOrdinal)
int divasa_xdi_driver_entry(void)
static diva_os_xdi_adapter_t *get_and_remove_from_queue(void)
void diva_driver_remove_card(void *pdiva)
static void *divas_create_pci_card(int handle, void *pci_dev_handle)
void divasa_xdi_driver_unload(void)
void *diva_xdi_open_adapter(void *os_handle, const void __user *src,
int length,
divas_xdi_copy_from_user_fn_t cp_fn)
void diva_xdi_close_adapter(void *adapter, void *os_handle)
int
diva_xdi_write(void *adapter, void *os_handle, const void __user *src,
int length, divas_xdi_copy_from_user_fn_t cp_fn)
int
diva_xdi_read(void *adapter, void *os_handle, void __user *dst,
int max_length, divas_xdi_copy_to_user_fn_t cp_fn)
irqreturn_t diva_os_irq_wrapper(int irq, void *context)
static void diva_init_request_array(void)
void diva_xdi_display_adapter_features(int card)
void diva_add_slave_adapter(diva_os_xdi_adapter_t * a)
int diva_card_read_xlog(diva_os_xdi_adapter_t * a)
void xdiFreeFile(void *handle)
