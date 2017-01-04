static void *___sym_malloc(m_pool_p mp, int size)
static void ___sym_mfree(m_pool_p mp, void *ptr, int size)
static void *__sym_calloc2(m_pool_p mp, int size, char *name, int uflags)
#define __sym_calloc(mp, s, n)	__sym_calloc2(mp, s, n, SYM_MEM_WARN)
static void __sym_mfree(m_pool_p mp, void *ptr, int size, char *name)
static void *___mp0_get_mem_cluster(m_pool_p mp)
static void ___mp0_free_mem_cluster(m_pool_p mp, void *m)
#define ___mp0_free_mem_cluster NULL
static struct sym_m_pool mp0 = ;
static void * ___get_dma_mem_cluster(m_pool_p mp)
static void ___free_dma_mem_cluster(m_pool_p mp, void *m)
static inline m_pool_p ___get_dma_pool(m_pool_ident_t dev_dmat)
static m_pool_p ___cre_dma_pool(m_pool_ident_t dev_dmat)
static void ___del_dma_pool(m_pool_p p)
static DEFINE_SPINLOCK(sym53c8xx_lock);
void *__sym_calloc_dma(m_pool_ident_t dev_dmat, int size, char *name)
void __sym_mfree_dma(m_pool_ident_t dev_dmat, void *m, int size, char *name)
dma_addr_t __vtobus(m_pool_ident_t dev_dmat, void *m)
