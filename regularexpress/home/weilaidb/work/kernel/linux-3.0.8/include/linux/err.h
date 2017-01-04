#define _LINUX_ERR_H
#define MAX_ERRNO	4095
#define IS_ERR_VALUE(x) unlikely((x) >= (unsigned long)-MAX_ERRNO)
static inline void * __must_check ERR_PTR(long error)
static inline long __must_check PTR_ERR(const void *ptr)
static inline long __must_check IS_ERR(const void *ptr)
static inline long __must_check IS_ERR_OR_NULL(const void *ptr)
static inline void * __must_check ERR_CAST(const void *ptr)
static inline int __must_check PTR_RET(const void *ptr)
