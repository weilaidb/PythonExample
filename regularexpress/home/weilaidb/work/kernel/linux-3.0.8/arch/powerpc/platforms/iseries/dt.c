#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
extern char __dt_strings_start[];
extern char __dt_strings_end[];
#define DS(s)	()
struct iseries_flat_dt ;
static void * __initdata dt_data;
static char __initdata device_type_cpu[] = "cpu";
static char __initdata device_type_memory[] = "memory";
static char __initdata device_type_serial[] = "serial";
static char __initdata device_type_network[] = "network";
static char __initdata device_type_pci[] = "pci";
static char __initdata device_type_vdevice[] = "vdevice";
static char __initdata device_type_vscsi[] = "vscsi";
static unsigned char __init e2a(unsigned char x)
static unsigned char * __init strne2a(unsigned char *dest,
const unsigned char *src, size_t n)
static struct iseries_flat_dt * __init dt_init(void)
static void __init dt_push_u32(struct iseries_flat_dt *dt, u32 value)
static void __init dt_push_u64(struct iseries_flat_dt *dt, u64 value)
static void __init dt_push_bytes(struct iseries_flat_dt *dt, const char *data,
int len)
static void __init dt_start_node(struct iseries_flat_dt *dt, const char *name)
#define dt_end_node(dt) dt_push_u32(dt, OF_DT_END_NODE)
static void __init __dt_prop(struct iseries_flat_dt *dt, const char *name,
const void *data, int len)
#define dt_prop(dt, name, data, len)	__dt_prop((dt), DS(name), (data), (len))
#define dt_prop_str(dt, name, data)	\
dt_prop((dt), name, (data), strlen((data)) + 1);
static void __init __dt_prop_u32(struct iseries_flat_dt *dt, const char *name,
u32 data)
#define dt_prop_u32(dt, name, data)	__dt_prop_u32((dt), DS(name), (data))
static void __init __maybe_unused __dt_prop_u64(struct iseries_flat_dt *dt,
const char *name, u64 data)
#define dt_prop_u64(dt, name, data)	__dt_prop_u64((dt), DS(name), (data))
#define dt_prop_u64_list(dt, name, data, n)	\
dt_prop((dt), name, (data), sizeof(u64) * (n))
#define dt_prop_u32_list(dt, name, data, n)	\
dt_prop((dt), name, (data), sizeof(u32) * (n))
#define dt_prop_empty(dt, name)		dt_prop((dt), name, NULL, 0)
static void __init dt_cpus(struct iseries_flat_dt *dt)
static void __init dt_model(struct iseries_flat_dt *dt)
static void __init dt_initrd(struct iseries_flat_dt *dt)
static void __init dt_do_vdevice(struct iseries_flat_dt *dt,
const char *name, u32 reg, int unit,
const char *type, const char *compat, int end)
static void __init dt_vdevices(struct iseries_flat_dt *dt)
struct pci_class_name ;
static struct pci_class_name __initdata pci_class_name[] = ;
static struct pci_class_name * __init dt_find_pci_class_name(u16 class_code)
static void __init scan_bridge_slot(struct iseries_flat_dt *dt,
HvBusNumber bus, struct HvCallPci_BridgeInfo *bridge_info)
static void __init scan_bridge(struct iseries_flat_dt *dt, HvBusNumber bus,
HvSubBusNumber sub_bus, int id_sel)
static void __init scan_phb(struct iseries_flat_dt *dt, HvBusNumber bus)
static void __init dt_pci_devices(struct iseries_flat_dt *dt)
static void dt_finish(struct iseries_flat_dt *dt)
void * __init build_flat_dt(unsigned long phys_mem_size)
