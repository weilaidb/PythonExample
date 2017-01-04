#define _ASM_MICROBLAZE_SECTIONS_H
# ifndef __ASSEMBLY__
extern char _ssbss[], _esbss[];
extern unsigned long __ivt_start[], __ivt_end[];
extern char _etext[], _stext[];
#  ifdef CONFIG_MTD_UCLINUX
extern char *_ebss;
#  endif
extern u32 _fdt_start[], _fdt_end[];
# endif
