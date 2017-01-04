#define __SYSDEP_X86_64_BARRIER_H
#define mb() 	asm volatile("mfence":::"memory")
