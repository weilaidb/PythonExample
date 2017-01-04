struct ps3_sys_manager_header ;
#define dump_sm_header(_h) _dump_sm_header(_h, __func__, __LINE__)
static void __maybe_unused _dump_sm_header(
const struct ps3_sys_manager_header *h, const char *func, int line)
enum ;
enum ps3_sys_manager_service_id ;
enum ps3_sys_manager_attr ;
enum ps3_sys_manager_event ;
enum ps3_sys_manager_button_event ;
enum ps3_sys_manager_next_op ;
enum ps3_sys_manager_wake_source ;
static u32 user_wake_sources = PS3_SM_WAKE_DEFAULT;
enum ps3_sys_manager_cmd ;
static unsigned int ps3_sm_force_power_off;
static int ps3_sys_manager_write(struct ps3_system_bus_device *dev,
const struct ps3_sys_manager_header *header, const void *payload)
static int ps3_sys_manager_send_attr(struct ps3_system_bus_device *dev,
enum ps3_sys_manager_attr attr)
static int ps3_sys_manager_send_next_op(struct ps3_system_bus_device *dev,
enum ps3_sys_manager_next_op op,
enum ps3_sys_manager_wake_source wake_source)
static int ps3_sys_manager_send_request_shutdown(
struct ps3_system_bus_device *dev)
static int ps3_sys_manager_send_response(struct ps3_system_bus_device *dev,
u64 status)
static int ps3_sys_manager_handle_event(struct ps3_system_bus_device *dev)
static int ps3_sys_manager_handle_cmd(struct ps3_system_bus_device *dev)
static int ps3_sys_manager_handle_msg(struct ps3_system_bus_device *dev)
static void ps3_sys_manager_fin(struct ps3_system_bus_device *dev)
static void ps3_sys_manager_final_power_off(struct ps3_system_bus_device *dev)
static void ps3_sys_manager_final_restart(struct ps3_system_bus_device *dev)
int ps3_sys_manager_get_wol(void)
EXPORT_SYMBOL_GPL(ps3_sys_manager_get_wol);
void ps3_sys_manager_set_wol(int state)
EXPORT_SYMBOL_GPL(ps3_sys_manager_set_wol);
static void ps3_sys_manager_work(struct ps3_system_bus_device *dev)
static int __devinit ps3_sys_manager_probe(struct ps3_system_bus_device *dev)
static int ps3_sys_manager_remove(struct ps3_system_bus_device *dev)
static void ps3_sys_manager_shutdown(struct ps3_system_bus_device *dev)
static struct ps3_vuart_port_driver ps3_sys_manager = ;
static int __init ps3_sys_manager_init(void)
module_init(ps3_sys_manager_init);
MODULE_AUTHOR("Sony Corporation");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PS3 System Manager");
MODULE_ALIAS(PS3_MODULE_ALIAS_SYSTEM_MANAGER);
