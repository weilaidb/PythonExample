#define _ASM_IA64_SN_TIO_CA_AGP_PROVIDER_H
#define TIOCA_WAR_ENABLED(pv, tioca_common) \
((1 << tioca_common->ca_rev) & pv)
#define PV907908 (1 << 1)
#define PV908234 (1 << 1)
#define PV895469 (1 << 1)
#define PV910244 (1 << 1)
struct tioca_dmamap;
struct tioca_common ;
struct tioca_kernel ;
struct tioca_common ;
static inline u64
tioca_paddr_to_gart(unsigned long paddr)
static inline unsigned long
tioca_physpage_to_gart(u64 page_addr)
static inline void
tioca_tlbflush(struct tioca_kernel *tioca_kernel)
extern u32	tioca_gart_found;
extern struct list_head tioca_list;
extern int tioca_init_provider(void);
extern void tioca_fastwrite_enable(struct tioca_kernel *tioca_kern);
