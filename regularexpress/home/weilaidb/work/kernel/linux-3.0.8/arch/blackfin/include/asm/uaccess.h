#define __BLACKFIN_UACCESS_H
#define get_ds()        (KERNEL_DS)
#define get_fs()        (current_thread_info()->addr_limit)
static inline void set_fs(mm_segment_t fs)
#define segment_eq(a,b) ((a) == (b))
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define access_ok(type, addr, size) _access_ok((unsigned long)(addr), (size))
static inline int is_in_rom(unsigned long addr)
static inline int _access_ok(unsigned long addr, unsigned long size)
extern int _access_ok(unsigned long addr, unsigned long size);
struct exception_table_entry ;
#define put_user(x,p)						\
()
#define __put_user(x,p) put_user(x,p)
static inline int bad_user_access_length(void)
#define __put_user_bad() (printk(KERN_INFO "put_user_bad %s:%d %s\n",\
__FILE__, __LINE__, __func__),\
bad_user_access_length(), (-EFAULT))
#define __ptr(x) ((unsigned long *)(x))
#define __put_user_asm(x,p,bhw)				\
__asm__ (#bhw"[%1] = %0;\n\t"			\
:			\
:"d" (x),"a" (__ptr(p)) : "memory")
#define get_user(x, ptr)					\
()
#define __get_user(x,p) get_user(x,p)
#define __get_user_bad() (bad_user_access_length(), (-EFAULT))
#define __get_user_asm(x, ptr, bhw, option)	\
()
#define __copy_from_user(to, from, n) copy_from_user(to, from, n)
#define __copy_to_user(to, from, n) copy_to_user(to, from, n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define copy_to_user_ret(to,from,n,retval) ()
#define copy_from_user_ret(to,from,n,retval) ()
static inline unsigned long __must_check
copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check
copy_to_user(void *to, const void __user *from, unsigned long n)
static inline long __must_check
strncpy_from_user(char *dst, const char *src, long count)
static inline long __must_check strnlen_user(const char *src, long n)
static inline long __must_check strlen_user(const char *src)
static inline unsigned long __must_check
__clear_user(void *to, unsigned long n)
#define clear_user(to, n) __clear_user(to, n)
enum ;
int bfin_mem_access_type(unsigned long addr, unsigned long size);
