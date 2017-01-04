#define _ASM_POWERPC_DCR_H
#if defined(CONFIG_PPC_DCR_NATIVE) && defined(CONFIG_PPC_DCR_MMIO)
#define DCR_MAP_OK(host)	dcr_map_ok_generic(host)
#define dcr_map(dev, dcr_n, dcr_c) dcr_map_generic(dev, dcr_n, dcr_c)
#define dcr_unmap(host, dcr_c) dcr_unmap_generic(host, dcr_c)
#define dcr_read(host, dcr_n) dcr_read_generic(host, dcr_n)
#define dcr_write(host, dcr_n, value) dcr_write_generic(host, dcr_n, value)
typedef dcr_host_native_t dcr_host_t;
#define DCR_MAP_OK(host)	dcr_map_ok_native(host)
#define dcr_map(dev, dcr_n, dcr_c) dcr_map_native(dev, dcr_n, dcr_c)
#define dcr_unmap(host, dcr_c) dcr_unmap_native(host, dcr_c)
#define dcr_read(host, dcr_n) dcr_read_native(host, dcr_n)
#define dcr_write(host, dcr_n, value) dcr_write_native(host, dcr_n, value)
typedef dcr_host_mmio_t dcr_host_t;
#define DCR_MAP_OK(host)	dcr_map_ok_mmio(host)
#define dcr_map(dev, dcr_n, dcr_c) dcr_map_mmio(dev, dcr_n, dcr_c)
#define dcr_unmap(host, dcr_c) dcr_unmap_mmio(host, dcr_c)
#define dcr_read(host, dcr_n) dcr_read_mmio(host, dcr_n)
#define dcr_write(host, dcr_n, value) dcr_write_mmio(host, dcr_n, value)
struct device_node;
extern unsigned int dcr_resource_start(const struct device_node *np,
unsigned int index);
extern unsigned int dcr_resource_len(const struct device_node *np,
unsigned int index);
