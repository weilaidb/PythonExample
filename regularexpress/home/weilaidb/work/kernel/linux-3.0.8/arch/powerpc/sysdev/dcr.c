#undef DEBUG
static struct device_node *find_dcr_parent(struct device_node *node)
#if defined(CONFIG_PPC_DCR_NATIVE) && defined(CONFIG_PPC_DCR_MMIO)
bool dcr_map_ok_generic(dcr_host_t host)
EXPORT_SYMBOL_GPL(dcr_map_ok_generic);
dcr_host_t dcr_map_generic(struct device_node *dev,
unsigned int dcr_n,
unsigned int dcr_c)
EXPORT_SYMBOL_GPL(dcr_map_generic);
void dcr_unmap_generic(dcr_host_t host, unsigned int dcr_c)
EXPORT_SYMBOL_GPL(dcr_unmap_generic);
u32 dcr_read_generic(dcr_host_t host, unsigned int dcr_n)
EXPORT_SYMBOL_GPL(dcr_read_generic);
void dcr_write_generic(dcr_host_t host, unsigned int dcr_n, u32 value)
EXPORT_SYMBOL_GPL(dcr_write_generic);
unsigned int dcr_resource_start(const struct device_node *np,
unsigned int index)
EXPORT_SYMBOL_GPL(dcr_resource_start);
unsigned int dcr_resource_len(const struct device_node *np, unsigned int index)
EXPORT_SYMBOL_GPL(dcr_resource_len);
u64 of_translate_dcr_address(struct device_node *dev,
unsigned int dcr_n,
unsigned int *out_stride)
dcr_host_mmio_t dcr_map_mmio(struct device_node *dev,
unsigned int dcr_n,
unsigned int dcr_c)
EXPORT_SYMBOL_GPL(dcr_map_mmio);
void dcr_unmap_mmio(dcr_host_mmio_t host, unsigned int dcr_c)
EXPORT_SYMBOL_GPL(dcr_unmap_mmio);
DEFINE_SPINLOCK(dcr_ind_lock);
