#define __ASM_SH_ADDRSPACE_H
#define PXSEG(a)	(((unsigned long)(a)) & 0xe0000000)
#define P1SEGADDR(a)	\
((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P1SEG))
#define P2SEGADDR(a)	\
((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P2SEG))
#define P3SEGADDR(a)	\
((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P3SEG))
#define P4SEGADDR(a)	\
((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P4SEG))
#define P1SEGADDR(a)	()
#define P2SEGADDR(a)	()
#define P3SEGADDR(a)	()
#define P4SEGADDR(a)	()
#define IS_29BIT(a)	(((unsigned long)(a)) < 0x20000000)
#define P3_ADDR_MAX		(P4SEG_STORE_QUE + 0x04000000)
#define P3_ADDR_MAX		P4SEG
