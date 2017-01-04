#define __GENALLOC_H__
struct gen_pool ;
struct gen_pool_chunk ;
extern struct gen_pool *gen_pool_create(int, int);
extern phys_addr_t gen_pool_virt_to_phys(struct gen_pool *pool, unsigned long);
extern int gen_pool_add_virt(struct gen_pool *, unsigned long, phys_addr_t,
size_t, int);
static inline int gen_pool_add(struct gen_pool *pool, unsigned long addr,
size_t size, int nid)
extern void gen_pool_destroy(struct gen_pool *);
extern unsigned long gen_pool_alloc(struct gen_pool *, size_t);
extern void gen_pool_free(struct gen_pool *, unsigned long, size_t);
