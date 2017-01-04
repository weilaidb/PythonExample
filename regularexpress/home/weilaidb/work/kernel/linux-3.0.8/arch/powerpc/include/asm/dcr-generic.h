#define _ASM_POWERPC_DCR_GENERIC_H
enum host_type_t ;
typedef struct  dcr_host_t;
extern bool dcr_map_ok_generic(dcr_host_t host);
extern dcr_host_t dcr_map_generic(struct device_node *dev, unsigned int dcr_n,
unsigned int dcr_c);
extern void dcr_unmap_generic(dcr_host_t host, unsigned int dcr_c);
extern u32 dcr_read_generic(dcr_host_t host, unsigned int dcr_n);
extern void dcr_write_generic(dcr_host_t host, unsigned int dcr_n, u32 value);
