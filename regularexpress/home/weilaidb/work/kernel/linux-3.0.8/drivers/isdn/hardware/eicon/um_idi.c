#define DIVAS_MAX_XDI_ADAPTERS	64
extern void diva_os_wakeup_read(void *os_context);
extern void diva_os_wakeup_close(void *os_context);
static LIST_HEAD(adapter_q);
static diva_os_spin_lock_t adapter_lock;
static diva_um_idi_adapter_t *diva_um_idi_find_adapter(dword nr);
static void cleanup_adapter(diva_um_idi_adapter_t * a);
static void cleanup_entity(divas_um_idi_entity_t * e);
static int diva_user_mode_idi_adapter_features(diva_um_idi_adapter_t * a,
diva_um_idi_adapter_features_t
* features);
static int process_idi_request(divas_um_idi_entity_t * e,
const diva_um_idi_req_hdr_t * req);
static int process_idi_rc(divas_um_idi_entity_t * e, byte rc);
static int process_idi_ind(divas_um_idi_entity_t * e, byte ind);
static int write_return_code(divas_um_idi_entity_t * e, byte rc);
int diva_user_mode_idi_init(void)
static int
diva_user_mode_idi_adapter_features(diva_um_idi_adapter_t * a,
diva_um_idi_adapter_features_t *
features)
void diva_user_mode_idi_remove_adapter(int adapter_nr)
void diva_user_mode_idi_finit(void)
int diva_user_mode_idi_create_adapter(const DESCRIPTOR * d, int adapter_nr)
static diva_um_idi_adapter_t *diva_um_idi_find_adapter(dword nr)
static void cleanup_adapter(diva_um_idi_adapter_t * a)
static void cleanup_entity(divas_um_idi_entity_t * e)
void *divas_um_idi_create_entity(dword adapter_nr, void *file)
int divas_um_idi_delete_entity(int adapter_nr, void *entity)
int diva_um_idi_read(void *entity,
void *os_handle,
void *dst,
int max_length, divas_um_idi_copy_to_user_fn_t cp_fn)
int diva_um_idi_write(void *entity,
void *os_handle,
const void *src,
int length, divas_um_idi_copy_from_user_fn_t cp_fn)
static void diva_um_idi_xdi_callback(ENTITY * entity)
static int process_idi_request(divas_um_idi_entity_t * e,
const diva_um_idi_req_hdr_t * req)
static int process_idi_rc(divas_um_idi_entity_t * e, byte rc)
static int process_idi_ind(divas_um_idi_entity_t * e, byte ind)
static int write_return_code(divas_um_idi_entity_t * e, byte rc)
int diva_user_mode_idi_ind_ready(void *entity, void *os_handle)
void *diva_um_id_get_os_context(void *entity)
int divas_um_idi_entity_assigned(void *entity)
int divas_um_idi_entity_start_remove(void *entity)
