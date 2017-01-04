#define _ASM_X86_PGTABLE_32_DEFS_H
# include <asm/pgtable-3level_types.h>
# define PMD_SIZE	(1UL << PMD_SHIFT)
# define PMD_MASK	(~(PMD_SIZE - 1))
# include <asm/pgtable-2level_types.h>
#define PGDIR_SIZE	(1UL << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE - 1))
#define VMALLOC_OFFSET	(8 * 1024 * 1024)
extern bool __vmalloc_start_set;
#define VMALLOC_START	((unsigned long)high_memory + VMALLOC_OFFSET)
#define LAST_PKMAP 512
#define LAST_PKMAP 1024
#define PKMAP_BASE ((FIXADDR_BOOT_START - PAGE_SIZE * (LAST_PKMAP + 1))	\
& PMD_MASK)
# define VMALLOC_END	(PKMAP_BASE - 2 * PAGE_SIZE)
# define VMALLOC_END	(FIXADDR_START - 2 * PAGE_SIZE)
#define MODULES_VADDR	VMALLOC_START
#define MODULES_END	VMALLOC_END
#define MODULES_LEN	(MODULES_VADDR - MODULES_END)
#define MAXMEM	(VMALLOC_END - PAGE_OFFSET - __VMALLOC_RESERVE)
