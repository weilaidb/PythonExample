#define __ASM_PARISC_BITSPERLONG_H
#if (defined(__KERNEL__) && defined(CONFIG_64BIT)) || defined (__LP64__)
#define __BITS_PER_LONG 64
#define SHIFT_PER_LONG 6
#define __BITS_PER_LONG 32
#define SHIFT_PER_LONG 5
