#define _CPQPHP_NVRAM_H
static inline void compaq_nvram_init (void __iomem *rom_start)
static inline int compaq_nvram_load (void __iomem *rom_start, struct controller *ctrl)
static inline int compaq_nvram_store (void __iomem *rom_start)
extern void compaq_nvram_init	(void __iomem *rom_start);
extern int compaq_nvram_load	(void __iomem *rom_start, struct controller *ctrl);
extern int compaq_nvram_store	(void __iomem *rom_start);
