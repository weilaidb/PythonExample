struct pci_dev;
struct pci_controller;
struct pci_iommu_arena;
#define EISA_DEFAULT_IO_BASE	0x9000
#define DEFAULT_IO_BASE		0x8000
#define XL_DEFAULT_MEM_BASE ((16+2)*1024*1024)
#define APECS_AND_LCA_DEFAULT_MEM_BASE ((16+2)*1024*1024)
#define MCPCIA_DEFAULT_MEM_BASE ((32+2)*1024*1024)
#define T2_DEFAULT_MEM_BASE ((16+1)*1024*1024)
#define DEFAULT_MEM_BASE ((128+16)*1024*1024)
#define CIA_DEFAULT_MEM_BASE ((32+2)*1024*1024)
#define IRONGATE_DEFAULT_MEM_BASE ((256*8-16)*1024*1024)
#define DEFAULT_AGP_APER_SIZE	(64*1024*1024)
#define COMMON_TABLE_LOOKUP						\
()
struct pci_iommu_arena
;
#if defined(CONFIG_ALPHA_SRM) && \
(defined(CONFIG_ALPHA_CIA) || defined(CONFIG_ALPHA_LCA))
# define NEED_SRM_SAVE_RESTORE
# undef NEED_SRM_SAVE_RESTORE
#if defined(CONFIG_ALPHA_GENERIC) || defined(NEED_SRM_SAVE_RESTORE)
# define ALPHA_RESTORE_SRM_SETUP
# undef ALPHA_RESTORE_SRM_SETUP
struct pdev_srm_saved_conf
;
extern void pci_restore_srm_config(void);
#define pdev_save_srm_config(dev)	do  while (0)
#define pci_restore_srm_config()	do  while (0)
extern struct pci_controller *hose_head, **hose_tail;
extern struct pci_controller *pci_isa_hose;
extern int pci_probe_only;
extern unsigned long alpha_agpgart_size;
extern void common_init_pci(void);
#define common_swizzle pci_common_swizzle
extern struct pci_controller *alloc_pci_controller(void);
extern struct resource *alloc_resource(void);
extern struct pci_iommu_arena *iommu_arena_new_node(int,
struct pci_controller *,
dma_addr_t, unsigned long,
unsigned long);
extern struct pci_iommu_arena *iommu_arena_new(struct pci_controller *,
dma_addr_t, unsigned long,
unsigned long);
extern const char *const pci_io_names[];
extern const char *const pci_mem_names[];
extern const char pci_hae0_name[];
extern unsigned long size_for_memory(unsigned long max);
extern int iommu_reserve(struct pci_iommu_arena *, long, long);
extern int iommu_release(struct pci_iommu_arena *, long, long);
extern int iommu_bind(struct pci_iommu_arena *, long, long, struct page **);
extern int iommu_unbind(struct pci_iommu_arena *, long, long);
