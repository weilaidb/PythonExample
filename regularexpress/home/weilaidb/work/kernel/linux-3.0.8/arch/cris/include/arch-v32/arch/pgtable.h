#define _ASM_CRIS_ARCH_PGTABLE_H
#define VMALLOC_START          KSEG_E
#define VMALLOC_END            KSEG_F
#define VMALLOC_START		KSEG_D
#define VMALLOC_END		KSEG_E
#define VMALLOC_VMADDR(x)	((unsigned long)(x))
