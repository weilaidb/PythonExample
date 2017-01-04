#define KMSG_COMPONENT "dasd-eckd"
#undef PRINTK_HEADER
#define PRINTK_HEADER "dasd(eckd):"
static void summary_unit_check_handling_work(struct work_struct *);
static void lcu_update_work(struct work_struct *);
static int _schedule_lcu_update(struct alias_lcu *, struct dasd_device *);
static struct alias_root aliastree = ;
static struct alias_server *_find_server(struct dasd_uid *uid)
static struct alias_lcu *_find_lcu(struct alias_server *server,
struct dasd_uid *uid)
static struct alias_pav_group *_find_group(struct alias_lcu *lcu,
struct dasd_uid *uid)
static struct alias_server *_allocate_server(struct dasd_uid *uid)
static void _free_server(struct alias_server *server)
static struct alias_lcu *_allocate_lcu(struct dasd_uid *uid)
static void _free_lcu(struct alias_lcu *lcu)
int dasd_alias_make_device_known_to_lcu(struct dasd_device *device)
void dasd_alias_lcu_setup_complete(struct dasd_device *device)
void dasd_alias_wait_for_lcu_setup(struct dasd_device *device)
void dasd_alias_disconnect_device_from_lcu(struct dasd_device *device)
static int _add_device_to_lcu(struct alias_lcu *lcu,
struct dasd_device *device,
struct dasd_device *pos)
;
static void _remove_device_from_lcu(struct alias_lcu *lcu,
struct dasd_device *device)
;
static int read_unit_address_configuration(struct dasd_device *device,
struct alias_lcu *lcu)
static int _lcu_update(struct dasd_device *refdev, struct alias_lcu *lcu)
static void lcu_update_work(struct work_struct *work)
static int _schedule_lcu_update(struct alias_lcu *lcu,
struct dasd_device *device)
int dasd_alias_add_device(struct dasd_device *device)
int dasd_alias_update_add_device(struct dasd_device *device)
int dasd_alias_remove_device(struct dasd_device *device)
struct dasd_device *dasd_alias_get_start_dev(struct dasd_device *base_device)
static int reset_summary_unit_check(struct alias_lcu *lcu,
struct dasd_device *device,
char reason)
static void _restart_all_base_devices_on_lcu(struct alias_lcu *lcu)
static void flush_all_alias_devices_on_lcu(struct alias_lcu *lcu)
static void __stop_device_on_lcu(struct dasd_device *device,
struct dasd_device *pos)
static void _stop_all_devices_on_lcu(struct alias_lcu *lcu,
struct dasd_device *device)
static void _unstop_all_devices_on_lcu(struct alias_lcu *lcu)
static void summary_unit_check_handling_work(struct work_struct *work)
void dasd_alias_handle_summary_unit_check(struct dasd_device *device,
struct irb *irb)
;
