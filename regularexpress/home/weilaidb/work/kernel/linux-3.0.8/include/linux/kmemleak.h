#define __KMEMLEAK_H
extern void kmemleak_init(void) __ref;
extern void kmemleak_alloc(const void *ptr, size_t size, int min_count,
gfp_t gfp) __ref;
extern void kmemleak_free(const void *ptr) __ref;
extern void kmemleak_free_part(const void *ptr, size_t size) __ref;
extern void kmemleak_padding(const void *ptr, unsigned long offset,
size_t size) __ref;
extern void kmemleak_not_leak(const void *ptr) __ref;
extern void kmemleak_ignore(const void *ptr) __ref;
extern void kmemleak_scan_area(const void *ptr, size_t size, gfp_t gfp) __ref;
extern void kmemleak_no_scan(const void *ptr) __ref;
static inline void kmemleak_alloc_recursive(const void *ptr, size_t size,
int min_count, unsigned long flags,
gfp_t gfp)
static inline void kmemleak_free_recursive(const void *ptr, unsigned long flags)
static inline void kmemleak_erase(void **ptr)
static inline void kmemleak_init(void)
static inline void kmemleak_alloc(const void *ptr, size_t size, int min_count,
gfp_t gfp)
static inline void kmemleak_alloc_recursive(const void *ptr, size_t size,
int min_count, unsigned long flags,
gfp_t gfp)
static inline void kmemleak_free(const void *ptr)
static inline void kmemleak_free_part(const void *ptr, size_t size)
static inline void kmemleak_free_recursive(const void *ptr, unsigned long flags)
static inline void kmemleak_not_leak(const void *ptr)
static inline void kmemleak_ignore(const void *ptr)
static inline void kmemleak_scan_area(const void *ptr, size_t size, gfp_t gfp)
static inline void kmemleak_erase(void **ptr)
static inline void kmemleak_no_scan(const void *ptr)
