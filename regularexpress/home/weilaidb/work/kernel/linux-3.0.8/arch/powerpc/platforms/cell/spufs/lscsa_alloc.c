#undef DEBUG
static int spu_alloc_lscsa_std(struct spu_state *csa)
static void spu_free_lscsa_std(struct spu_state *csa)
#define SPU_64K_PAGE_SHIFT	16
#define SPU_64K_PAGE_ORDER	(SPU_64K_PAGE_SHIFT - PAGE_SHIFT)
#define SPU_64K_PAGE_COUNT	(1ul << SPU_64K_PAGE_ORDER)
int spu_alloc_lscsa(struct spu_state *csa)
void spu_free_lscsa(struct spu_state *csa)
int spu_alloc_lscsa(struct spu_state *csa)
void spu_free_lscsa(struct spu_state *csa)
