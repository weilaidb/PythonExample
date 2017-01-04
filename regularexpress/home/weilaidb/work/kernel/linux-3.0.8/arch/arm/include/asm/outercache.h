#define __ASM_OUTERCACHE_H
struct outer_cache_fns ;
extern struct outer_cache_fns outer_cache;
static inline void outer_inv_range(phys_addr_t start, phys_addr_t end)
static inline void outer_clean_range(phys_addr_t start, phys_addr_t end)
static inline void outer_flush_range(phys_addr_t start, phys_addr_t end)
static inline void outer_flush_all(void)
static inline void outer_inv_all(void)
static inline void outer_disable(void)
static inline void outer_inv_range(phys_addr_t start, phys_addr_t end)
static inline void outer_clean_range(phys_addr_t start, phys_addr_t end)
static inline void outer_flush_range(phys_addr_t start, phys_addr_t end)
static inline void outer_flush_all(void)
static inline void outer_inv_all(void)
static inline void outer_disable(void)
static inline void outer_sync(void)
static inline void outer_sync(void)
