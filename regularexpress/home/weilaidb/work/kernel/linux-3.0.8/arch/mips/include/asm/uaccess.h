#define _ASM_UACCESS_H
#define __UA_LIMIT	0x80000000UL
#define __UA_ADDR	".word"
#define __UA_LA		"la"
#define __UA_ADDU	"addu"
#define __UA_t0		"$8"
#define __UA_t1		"$9"
extern u64 __ua_limit;
#define __UA_LIMIT	__ua_limit
#define __UA_ADDR	".dword"
#define __UA_LA		"dla"
#define __UA_ADDU	"daddu"
#define __UA_t0		"$12"
#define __UA_t1		"$13"
#define KERNEL_DS	((mm_segment_t) )
#define USER_DS		((mm_segment_t) )
#define VERIFY_READ    0
#define VERIFY_WRITE   1
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define segment_eq(a, b)	((a).seg == (b).seg)
#define __ua_size(size)							\
((__builtin_constant_p(size) && (signed long) (size) > 0) ? 0 : (size))
#define __access_mask get_fs().seg
#define __access_ok(addr, size, mask)					\
()
#define access_ok(type, addr, size)					\
likely(__access_ok((addr), (size), __access_mask))
#define put_user(x,ptr)	\
__put_user_check((x), (ptr), sizeof(*(ptr)))
#define get_user(x,ptr) \
__get_user_check((x), (ptr), sizeof(*(ptr)))
#define __put_user(x,ptr) \
__put_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __get_user(x,ptr) \
__get_user_nocheck((x), (ptr), sizeof(*(ptr)))
struct __large_struct ;
#define __m(x) (*(struct __large_struct __user *)(x))
#define __GET_USER_DW(val, ptr) __get_user_asm_ll32(val, ptr)
#define __GET_USER_DW(val, ptr) __get_user_asm(val, "ld", ptr)
extern void __get_user_unknown(void);
#define __get_user_common(val, size, ptr)				\
do  while (0)
#define __get_user_nocheck(x, ptr, size)				\
()
#define __get_user_check(x, ptr, size)					\
()
#define __get_user_asm(val, insn, addr)					\
#define __get_user_asm_ll32(val, addr)					\
#define __PUT_USER_DW(ptr) __put_user_asm_ll32(ptr)
#define __PUT_USER_DW(ptr) __put_user_asm("sd", ptr)
#define __put_user_nocheck(x, ptr, size)				\
()
#define __put_user_check(x, ptr, size)					\
()
#define __put_user_asm(insn, ptr)					\
#define __put_user_asm_ll32(ptr)					\
extern void __put_user_unknown(void);
#define put_user_unaligned(x,ptr)	\
__put_user_unaligned_check((x),(ptr),sizeof(*(ptr)))
#define get_user_unaligned(x,ptr) \
__get_user_unaligned_check((x),(ptr),sizeof(*(ptr)))
#define __put_user_unaligned(x,ptr) \
__put_user_unaligned_nocheck((x),(ptr),sizeof(*(ptr)))
#define __get_user_unaligned(x,ptr) \
__get_user__unalignednocheck((x),(ptr),sizeof(*(ptr)))
#define __GET_USER_UNALIGNED_DW(val, ptr)				\
__get_user_unaligned_asm_ll32(val, ptr)
#define __GET_USER_UNALIGNED_DW(val, ptr)				\
__get_user_unaligned_asm(val, "uld", ptr)
extern void __get_user_unaligned_unknown(void);
#define __get_user_unaligned_common(val, size, ptr)			\
do  while (0)
#define __get_user_unaligned_nocheck(x,ptr,size)			\
()
#define __get_user_unaligned_check(x,ptr,size)				\
()
#define __get_user_unaligned_asm(val, insn, addr)			\
#define __get_user_unaligned_asm_ll32(val, addr)			\
#define __PUT_USER_UNALIGNED_DW(ptr) __put_user_unaligned_asm_ll32(ptr)
#define __PUT_USER_UNALIGNED_DW(ptr) __put_user_unaligned_asm("usd", ptr)
#define __put_user_unaligned_nocheck(x,ptr,size)			\
()
#define __put_user_unaligned_check(x,ptr,size)				\
()
#define __put_user_unaligned_asm(insn, ptr)				\
#define __put_user_unaligned_asm_ll32(ptr)				\
extern void __put_user_unaligned_unknown(void);
#define __MODULE_JAL(destination)					\
".set\tnoat\n\t"						\
__UA_LA "\t$1, " #destination "\n\t" 				\
"jalr\t$1\n\t"							\
".set\tat\n\t"
#define __MODULE_JAL(destination)					\
"jal\t" #destination "\n\t"
#define DADDI_SCRATCH "$0"
#define DADDI_SCRATCH "$3"
extern size_t __copy_user(void *__to, const void *__from, size_t __n);
#define __invoke_copy_to_user(to, from, n)				\
()
#define __copy_to_user(to, from, n)					\
()
extern size_t __copy_user_inatomic(void *__to, const void *__from, size_t __n);
#define __copy_to_user_inatomic(to, from, n)				\
()
#define __copy_from_user_inatomic(to, from, n)				\
()
#define copy_to_user(to, from, n)					\
()
#define __invoke_copy_from_user(to, from, n)				\
()
#define __invoke_copy_from_user_inatomic(to, from, n)			\
()
#define __copy_from_user(to, from, n)					\
()
#define copy_from_user(to, from, n)					\
()
#define __copy_in_user(to, from, n)					\
()
#define copy_in_user(to, from, n)					\
()
static inline __kernel_size_t
__clear_user(void __user *addr, __kernel_size_t size)
#define clear_user(addr,n)						\
()
static inline long
__strncpy_from_user(char *__to, const char __user *__from, long __len)
static inline long
strncpy_from_user(char *__to, const char __user *__from, long __len)
static inline long __strlen_user(const char __user *s)
static inline long strlen_user(const char __user *s)
static inline long __strnlen_user(const char __user *s, long n)
static inline long strnlen_user(const char __user *s, long n)
struct exception_table_entry
;
extern int fixup_exception(struct pt_regs *regs);
