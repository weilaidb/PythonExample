#define __ASM_SH_UACCESS_32_H
#define __get_user_size(x,ptr,size,retval)			\
do  while (0)
#define __get_user_asm(x, addr, err, insn) \
()
#define __get_user_asm(x, addr, err, insn)		\
do  while (0)
extern void __get_user_unknown(void);
#define __put_user_size(x,ptr,size,retval)		\
do  while (0)
#define __put_user_asm(x, addr, err, insn)			\
do  while (0)
#define __put_user_asm(x, addr, err, insn)		\
do  while (0)
#if defined(CONFIG_CPU_LITTLE_ENDIAN)
#define __put_user_u64(val,addr,retval) \
()
#define __put_user_u64(val,addr,retval) \
()
extern void __put_user_unknown(void);
static inline int
__strncpy_from_user(unsigned long __dest, unsigned long __user __src, int __count)
static inline long __strnlen_user(const char __user *__s, long __n)
