typedef struct _didd_adapter_change_notification  didd_adapter_change_notification_t, \
* IDI_CALL_ENTITY_T pdidd_adapter_change_notification_t;
#define DIVA_DIDD_MAX_NOTIFICATIONS 256
static didd_adapter_change_notification_t\
NotificationTable[DIVA_DIDD_MAX_NOTIFICATIONS];
static DESCRIPTOR  HandleTable[NEW_MAX_DESCRIPTORS];
static dword Adapters = 0;
static void no_printf (unsigned char * format, ...)
static DESCRIPTOR  MAdapter =  ;
static void IDI_CALL_LINK_T diva_dadapter_request (ENTITY IDI_CALL_ENTITY_T *);
static DESCRIPTOR  DAdapter =  ;
static dword diva_register_adapter_callback (\
didd_adapter_change_callback_t callback,
void IDI_CALL_ENTITY_T* context);
static void diva_remove_adapter_callback (dword handle);
static void diva_notify_adapter_change (DESCRIPTOR* d, int removal);
static diva_os_spin_lock_t didd_spin;
void diva_didd_load_time_init (void)
void diva_didd_load_time_finit (void)
static int diva_didd_add_descriptor (DESCRIPTOR* d)
static int diva_didd_remove_descriptor (IDI_CALL request)
static int diva_didd_read_adapter_array (DESCRIPTOR* buffer, int length)
static void IDI_CALL_LINK_T diva_dadapter_request (\
ENTITY IDI_CALL_ENTITY_T *e)
static dword diva_register_adapter_callback (\
didd_adapter_change_callback_t callback,
void IDI_CALL_ENTITY_T* context)
static void diva_remove_adapter_callback (dword handle)
static void diva_notify_adapter_change (DESCRIPTOR* d, int removal)
void IDI_CALL_LINK_T DIVA_DIDD_Read (void IDI_CALL_ENTITY_T * buffer,
int length)
