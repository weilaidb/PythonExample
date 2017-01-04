#define __ARCH_UM_UACCESS_H
#define __under_task_size(addr, size) \
(((unsigned long) (addr) < TASK_SIZE) && \
(((unsigned long) (addr) + (size)) < TASK_SIZE))
#define __access_ok_vsyscall(type, addr, size) \
((type == VERIFY_READ) && \
((unsigned long) (addr) >= FIXADDR_USER_START) && \
((unsigned long) (addr) + (size) <= FIXADDR_USER_END) && \
((unsigned long) (addr) + (size) >= (unsigned long)(addr)))
#define __addr_range_nowrap(addr, size) \
((unsigned long) (addr) <= ((unsigned long) (addr) + (size)))
#define access_ok(type, addr, size) \
(__addr_range_nowrap(addr, size) && \
(__under_task_size(addr, size) || \
__access_ok_vsyscall(type, addr, size) || \
segment_eq(get_fs(), KERNEL_DS)))
extern int copy_from_user(void *to, const void __user *from, int n);
extern int copy_to_user(void __user *to, const void *from, int n);
extern int __do_copy_to_user(void *to, const void *from, int n,
void **fault_addr, jmp_buf **fault_catcher);
extern int strncpy_from_user(char *dst, const char __user *src, int count);
extern int __clear_user(void __user *mem, int len);
extern int clear_user(void __user *mem, int len);
extern int strnlen_user(const void __user *str, int len);
