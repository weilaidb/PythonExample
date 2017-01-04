#define _ASM_PACCESS_H
#define __PA_ADDR	".word"
#define __PA_ADDR	".dword"
extern asmlinkage void handle_ibe(void);
extern asmlinkage void handle_dbe(void);
#define put_dbe(x, ptr) __put_dbe((x), (ptr), sizeof(*(ptr)))
#define get_dbe(x, ptr) __get_dbe((x), (ptr), sizeof(*(ptr)))
struct __large_pstruct ;
#define __mp(x) (*(struct __large_pstruct *)(x))
#define __get_dbe(x, ptr, size)						\
()
#define __get_dbe_asm(insn)						\
extern void __get_dbe_unknown(void);
#define __put_dbe(x, ptr, size)						\
()
#define __put_dbe_asm(insn)						\
extern void __put_dbe_unknown(void);
extern unsigned long search_dbe_table(unsigned long addr);
