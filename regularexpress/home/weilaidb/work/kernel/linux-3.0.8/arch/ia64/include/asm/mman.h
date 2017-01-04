#define _ASM_IA64_MMAN_H
#define MAP_GROWSUP	0x0200
#define arch_mmap_check	ia64_mmap_check
int ia64_mmap_check(unsigned long addr, unsigned long len,
unsigned long flags);
