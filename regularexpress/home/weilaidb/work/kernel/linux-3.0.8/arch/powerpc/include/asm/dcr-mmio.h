#define _ASM_POWERPC_DCR_MMIO_H
typedef struct  dcr_host_mmio_t;
static inline bool dcr_map_ok_mmio(dcr_host_mmio_t host)
extern dcr_host_mmio_t dcr_map_mmio(struct device_node *dev,
unsigned int dcr_n,
unsigned int dcr_c);
extern void dcr_unmap_mmio(dcr_host_mmio_t host, unsigned int dcr_c);
static inline u32 dcr_read_mmio(dcr_host_mmio_t host, unsigned int dcr_n)
static inline void dcr_write_mmio(dcr_host_mmio_t host,
unsigned int dcr_n,
u32 value)
extern u64 of_translate_dcr_address(struct device_node *dev,
unsigned int dcr_n,
unsigned int *stride);
