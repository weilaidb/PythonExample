#define _ASM_TILE_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define MAKE_MM_SEG(a)  ((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(-1UL)
#define USER_DS		MAKE_MM_SEG(PAGE_OFFSET)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define segment_eq(a, b) ((a).seg == (b).seg)
static inline int is_arch_mappable_range(unsigned long addr,
unsigned long size)
#define is_arch_mappable_range is_arch_mappable_range
#define is_arch_mappable_range(addr, size) 0
int __range_ok(unsigned long addr, unsigned long size);
#define access_ok(type, addr, size) ()
struct exception_table_entry ;
extern int fixup_exception(struct pt_regs *regs);
struct __get_user ;
extern struct __get_user __get_user_1(const void __user *);
extern struct __get_user __get_user_2(const void __user *);
extern struct __get_user __get_user_4(const void __user *);
extern struct __get_user __get_user_8(const void __user *);
extern int __put_user_1(long, void __user *);
extern int __put_user_2(long, void __user *);
extern int __put_user_4(long, void __user *);
extern int __put_user_8(long long, void __user *);
extern struct __get_user __get_user_bad(void);
extern int __put_user_bad(void);
#define __get_user(x, ptr)						\
()
#define __put_user(x, ptr)						\
()
#define put_user(x, ptr)						\
()
#define get_user(x, ptr)						\
()
extern unsigned long __must_check __copy_to_user_inatomic(
void __user *to, const void *from, unsigned long n);
static inline unsigned long __must_check
__copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long __must_check
copy_to_user(void __user *to, const void *from, unsigned long n)
extern unsigned long __must_check __copy_from_user_inatomic(
void *to, const void __user *from, unsigned long n);
extern unsigned long __must_check __copy_from_user_zeroing(
void *to, const void __user *from, unsigned long n);
static inline unsigned long __must_check
__copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check
_copy_from_user(void *to, const void __user *from, unsigned long n)
extern void copy_from_user_overflow(void)
__compiletime_warning("copy_from_user() size is not provably correct");
static inline unsigned long __must_check copy_from_user(void *to,
const void __user *from,
unsigned long n)
#define copy_from_user _copy_from_user
extern unsigned long __copy_in_user_inatomic(
void __user *to, const void __user *from, unsigned long n);
static inline unsigned long __must_check
__copy_in_user(void __user *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check
copy_in_user(void __user *to, const void __user *from, unsigned long n)
extern long strnlen_user_asm(const char __user *str, long n);
static inline long __must_check strnlen_user(const char __user *str, long n)
#define strlen_user(str) strnlen_user(str, LONG_MAX)
extern long strncpy_from_user_asm(char *dst, const char __user *src, long);
static inline long __must_check __strncpy_from_user(
char *dst, const char __user *src, long count)
static inline long __must_check strncpy_from_user(
char *dst, const char __user *src, long count)
extern unsigned long clear_user_asm(void __user *mem, unsigned long len);
static inline unsigned long __must_check __clear_user(
void __user *mem, unsigned long len)
static inline unsigned long __must_check clear_user(
void __user *mem, unsigned long len)
extern unsigned long flush_user_asm(void __user *mem, unsigned long len);
static inline unsigned long __must_check __flush_user(
void __user *mem, unsigned long len)
static inline unsigned long __must_check flush_user(
void __user *mem, unsigned long len)
extern unsigned long inv_user_asm(void __user *mem, unsigned long len);
static inline unsigned long __must_check __inv_user(
void __user *mem, unsigned long len)
static inline unsigned long __must_check inv_user(
void __user *mem, unsigned long len)
extern unsigned long finv_user_asm(void __user *mem, unsigned long len);
static inline unsigned long __must_check __finv_user(
void __user *mem, unsigned long len)
static inline unsigned long __must_check finv_user(
void __user *mem, unsigned long len)
