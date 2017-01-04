#define _CRIS_ARCH_PAGE_H
#define PAGE_OFFSET		KSEG_6
#define PAGE_OFFSET		KSEG_C
#define __pa(x)                 ((unsigned long)(x) & 0xdfffffff)
#define __va(x)                 ((void *)((unsigned long)(x) | 0x20000000))
#define __pa(x)                 ((unsigned long)(x) & 0x7fffffff)
#define __va(x)                 ((void *)((unsigned long)(x) | 0x80000000))
