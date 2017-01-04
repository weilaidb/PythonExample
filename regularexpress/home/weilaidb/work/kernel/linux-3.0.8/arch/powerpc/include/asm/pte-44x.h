#define _ASM_POWERPC_PTE_44x_H
#define _PAGE_PRESENT	0x00000001
#define _PAGE_RW	0x00000002
#define _PAGE_FILE	0x00000004
#define _PAGE_EXEC	0x00000004
#define _PAGE_ACCESSED	0x00000008
#define _PAGE_DIRTY	0x00000010
#define _PAGE_SPECIAL	0x00000020
#define _PAGE_USER	0x00000040
#define _PAGE_ENDIAN	0x00000080
#define _PAGE_GUARDED	0x00000100
#define _PAGE_COHERENT	0x00000200
#define _PAGE_NO_CACHE	0x00000400
#define _PAGE_WRITETHRU	0x00000800
#define _PMD_PRESENT	0
#define _PMD_PRESENT_MASK (PAGE_MASK)
#define _PMD_BAD	(~PAGE_MASK)
#define _PTE_NONE_MASK	0xffffffff00000000ULL