#define DEBUG 1
#define	BREAK asm volatile ("halt")
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
