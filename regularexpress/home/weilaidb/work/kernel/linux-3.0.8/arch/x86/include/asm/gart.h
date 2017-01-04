#define _ASM_X86_GART_H
extern void set_up_gart_resume(u32, u32);
extern int fallback_aper_order;
extern int fallback_aper_force;
extern int fix_aperture;
#define GPTE_VALID	1
#define GPTE_COHERENT	2
#define GARTEN		(1<<0)
#define DISGARTCPU	(1<<4)
#define DISGARTIO	(1<<5)
#define DISTLBWALKPRB	(1<<6)
#define INVGART		(1<<0)
#define GARTPTEERR	(1<<1)
#define AMD64_GARTAPERTURECTL	0x90
#define AMD64_GARTAPERTUREBASE	0x94
#define AMD64_GARTTABLEBASE	0x98
#define AMD64_GARTCACHECTL	0x9c
extern int gart_iommu_aperture;
extern int gart_iommu_aperture_allowed;
extern int gart_iommu_aperture_disabled;
extern void early_gart_iommu_check(void);
extern int gart_iommu_init(void);
extern void __init gart_parse_options(char *);
extern int gart_iommu_hole_init(void);
#define gart_iommu_aperture            0
#define gart_iommu_aperture_allowed    0
#define gart_iommu_aperture_disabled   1
static inline void early_gart_iommu_check(void)
static inline void gart_parse_options(char *options)
static inline int gart_iommu_hole_init(void)
extern int agp_amd64_init(void);
static inline void gart_set_size_and_enable(struct pci_dev *dev, u32 order)
static inline void enable_gart_translation(struct pci_dev *dev, u64 addr)
static inline int aperture_valid(u64 aper_base, u32 aper_size, u32 min_size)
