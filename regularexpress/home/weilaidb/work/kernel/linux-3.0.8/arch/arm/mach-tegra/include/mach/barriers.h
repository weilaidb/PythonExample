#define __MACH_BARRIERS_H
#define rmb()		dsb()
#define wmb()		do  while (0)
#define mb()		wmb()
