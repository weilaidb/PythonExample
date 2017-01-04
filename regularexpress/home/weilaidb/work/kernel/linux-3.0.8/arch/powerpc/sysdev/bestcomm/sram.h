#define __BESTCOMM_SRAM_H__
struct bcom_sram ;
extern struct bcom_sram *bcom_sram;
extern int  bcom_sram_init(struct device_node *sram_node, char *owner);
extern void bcom_sram_cleanup(void);
extern void* bcom_sram_alloc(int size, int align, phys_addr_t *phys);
extern void  bcom_sram_free(void *ptr);
static inline phys_addr_t bcom_sram_va2pa(void *va)
static inline void *bcom_sram_pa2va(phys_addr_t pa)
