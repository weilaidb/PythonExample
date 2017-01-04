struct bcma_device_id_name ;
struct bcma_device_id_name bcma_device_names[] = ;
const char *bcma_device_name(struct bcma_device_id *id)
static u32 bcma_scan_read32(struct bcma_bus *bus, u8 current_coreidx,
u16 offset)
static void bcma_scan_switch_core(struct bcma_bus *bus, u32 addr)
static u32 bcma_erom_get_ent(struct bcma_bus *bus, u32 **eromptr)
static void bcma_erom_push_ent(u32 **eromptr)
static s32 bcma_erom_get_ci(struct bcma_bus *bus, u32 **eromptr)
static bool bcma_erom_is_end(struct bcma_bus *bus, u32 **eromptr)
static bool bcma_erom_is_bridge(struct bcma_bus *bus, u32 **eromptr)
static void bcma_erom_skip_component(struct bcma_bus *bus, u32 **eromptr)
static s32 bcma_erom_get_mst_port(struct bcma_bus *bus, u32 **eromptr)
static s32 bcma_erom_get_addr_desc(struct bcma_bus *bus, u32 **eromptr,
u32 type, u8 port)
int bcma_bus_scan(struct bcma_bus *bus)
