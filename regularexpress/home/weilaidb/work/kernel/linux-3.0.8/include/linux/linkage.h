#define _LINUX_LINKAGE_H
#define asmlinkage CPP_ASMLINKAGE
#define __page_aligned_data	__section(.data..page_aligned) __aligned(PAGE_SIZE)
#define __page_aligned_bss	__section(.bss..page_aligned) __aligned(PAGE_SIZE)
#define __PAGE_ALIGNED_DATA	.section ".data..page_aligned", "aw"
#define __PAGE_ALIGNED_BSS	.section ".bss..page_aligned", "aw"
# define asmlinkage_protect(n, ret, args...)	do  while (0)
#define __ALIGN		.align 4,0x90
#define __ALIGN_STR	".align 4,0x90"
#define ALIGN __ALIGN
#define ALIGN_STR __ALIGN_STR
#define ENTRY(name) \
.globl name; \
ALIGN; \
name:
#define WEAK(name)	   \
.weak name;	   \
name:
#define END(name) \
.size name, .-name
#define ENDPROC(name) \
.type name, @function; \
END(name)
#define NORET_TYPE
#define ATTRIB_NORET  __attribute__((noreturn))
#define NORET_AND     noreturn,
