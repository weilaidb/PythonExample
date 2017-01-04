#define __COW_SYS_H__
static inline void *cow_malloc(int size)
static inline void cow_free(void *ptr)
#define cow_printf printk
static inline char *cow_strdup(char *str)
static inline int cow_seek_file(int fd, __u64 offset)
static inline int cow_file_size(char *file, unsigned long long *size_out)
static inline int cow_write_file(int fd, void *buf, int size)
