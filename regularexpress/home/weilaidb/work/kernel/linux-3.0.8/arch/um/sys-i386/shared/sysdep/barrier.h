#define __SYSDEP_I386_BARRIER_H
#define mb() asm volatile("lock; addl $0,0(%esp)")
