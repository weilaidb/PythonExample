#define __LINUX_UACCESS_H__
static inline void pagefault_disable(void)
static inline void pagefault_enable(void)
static inline unsigned long __copy_from_user_inatomic_nocache(void *to,
const void __user *from, unsigned long n)
static inline unsigned long __copy_from_user_nocache(void *to,
const void __user *from, unsigned long n)
#define probe_kernel_address(addr, retval)		\
()
extern long probe_kernel_read(void *dst, const void *src, size_t size);
extern long __probe_kernel_read(void *dst, const void *src, size_t size);
extern long notrace probe_kernel_write(void *dst, const void *src, size_t size);
extern long notrace __probe_kernel_write(void *dst, const void *src, size_t size);
