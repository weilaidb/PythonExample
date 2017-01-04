#define __ASM_POWERPC_FSL_85XX_CACHE_SRAM_H__
struct mpc85xx_cache_sram ;
extern void mpc85xx_cache_sram_free(void *ptr);
extern void *mpc85xx_cache_sram_alloc(unsigned int size,
phys_addr_t *phys, unsigned int align);
