#define _ASM_POWERPC_PPC_OPCODE_H
#define PPC_INST_DCBA			0x7c0005ec
#define PPC_INST_DCBA_MASK		0xfc0007fe
#define PPC_INST_DCBAL			0x7c2005ec
#define PPC_INST_DCBZL			0x7c2007ec
#define PPC_INST_ISEL			0x7c00001e
#define PPC_INST_ISEL_MASK		0xfc00003e
#define PPC_INST_LDARX			0x7c0000a8
#define PPC_INST_LSWI			0x7c0004aa
#define PPC_INST_LSWX			0x7c00042a
#define PPC_INST_LWARX			0x7c000028
#define PPC_INST_LWSYNC			0x7c2004ac
#define PPC_INST_LXVD2X			0x7c000698
#define PPC_INST_MCRXR			0x7c000400
#define PPC_INST_MCRXR_MASK		0xfc0007fe
#define PPC_INST_MFSPR_PVR		0x7c1f42a6
#define PPC_INST_MFSPR_PVR_MASK		0xfc1fffff
#define PPC_INST_MSGSND			0x7c00019c
#define PPC_INST_NOP			0x60000000
#define PPC_INST_POPCNTB		0x7c0000f4
#define PPC_INST_POPCNTB_MASK		0xfc0007fe
#define PPC_INST_POPCNTD		0x7c0003f4
#define PPC_INST_POPCNTW		0x7c0002f4
#define PPC_INST_RFCI			0x4c000066
#define PPC_INST_RFDI			0x4c00004e
#define PPC_INST_RFMCI			0x4c00004c
#define PPC_INST_MFSPR_DSCR		0x7c1102a6
#define PPC_INST_MFSPR_DSCR_MASK	0xfc1fffff
#define PPC_INST_MTSPR_DSCR		0x7c1103a6
#define PPC_INST_MTSPR_DSCR_MASK	0xfc1fffff
#define PPC_INST_STRING			0x7c00042a
#define PPC_INST_STRING_MASK		0xfc0007fe
#define PPC_INST_STRING_GEN_MASK	0xfc00067e
#define PPC_INST_STSWI			0x7c0005aa
#define PPC_INST_STSWX			0x7c00052a
#define PPC_INST_STXVD2X		0x7c000798
#define PPC_INST_TLBIE			0x7c000264
#define PPC_INST_TLBILX			0x7c000024
#define PPC_INST_WAIT			0x7c00007c
#define PPC_INST_TLBIVAX		0x7c000624
#define PPC_INST_TLBSRX_DOT		0x7c0006a5
#define PPC_INST_XXLOR			0xf0000510
#define PPC_INST_NAP			0x4c000364
#define PPC_INST_SLEEP			0x4c0003a4
#define PPC_INST_ERATWE			0x7c0001a6
#define PPC_INST_ERATRE			0x7c000166
#define PPC_INST_ERATILX		0x7c000066
#define PPC_INST_ERATIVAX		0x7c000666
#define PPC_INST_ERATSX			0x7c000126
#define PPC_INST_ERATSX_DOT		0x7c000127
#define __PPC_RA(a)	(((a) & 0x1f) << 16)
#define __PPC_RB(b)	(((b) & 0x1f) << 11)
#define __PPC_RS(s)	(((s) & 0x1f) << 21)
#define __PPC_RT(s)	__PPC_RS(s)
#define __PPC_XA(a)	((((a) & 0x1f) << 16) | (((a) & 0x20) >> 3))
#define __PPC_XB(b)	((((b) & 0x1f) << 11) | (((b) & 0x20) >> 4))
#define __PPC_XS(s)	((((s) & 0x1f) << 21) | (((s) & 0x20) >> 5))
#define __PPC_XT(s)	__PPC_XS(s)
#define __PPC_T_TLB(t)	(((t) & 0x3) << 21)
#define __PPC_WC(w)	(((w) & 0x3) << 21)
#define __PPC_WS(w)	(((w) & 0x1f) << 11)
#define __PPC_EH(eh)	(((eh) & 0x1) << 0)
#define __PPC_EH(eh)	0
#define	PPC_DCBAL(a, b)		stringify_in_c(.long PPC_INST_DCBAL | \
__PPC_RA(a) | __PPC_RB(b))
#define	PPC_DCBZL(a, b)		stringify_in_c(.long PPC_INST_DCBZL | \
__PPC_RA(a) | __PPC_RB(b))
#define PPC_LDARX(t, a, b, eh)	stringify_in_c(.long PPC_INST_LDARX | \
__PPC_RT(t) | __PPC_RA(a) | \
__PPC_RB(b) | __PPC_EH(eh))
#define PPC_LWARX(t, a, b, eh)	stringify_in_c(.long PPC_INST_LWARX | \
__PPC_RT(t) | __PPC_RA(a) | \
__PPC_RB(b) | __PPC_EH(eh))
#define PPC_MSGSND(b)		stringify_in_c(.long PPC_INST_MSGSND | \
__PPC_RB(b))
#define PPC_POPCNTB(a, s)	stringify_in_c(.long PPC_INST_POPCNTB | \
__PPC_RA(a) | __PPC_RS(s))
#define PPC_POPCNTD(a, s)	stringify_in_c(.long PPC_INST_POPCNTD | \
__PPC_RA(a) | __PPC_RS(s))
#define PPC_POPCNTW(a, s)	stringify_in_c(.long PPC_INST_POPCNTW | \
__PPC_RA(a) | __PPC_RS(s))
#define PPC_RFCI		stringify_in_c(.long PPC_INST_RFCI)
#define PPC_RFDI		stringify_in_c(.long PPC_INST_RFDI)
#define PPC_RFMCI		stringify_in_c(.long PPC_INST_RFMCI)
#define PPC_TLBILX(t, a, b)	stringify_in_c(.long PPC_INST_TLBILX | \
__PPC_T_TLB(t) | __PPC_RA(a) | __PPC_RB(b))
#define PPC_TLBILX_ALL(a, b)	PPC_TLBILX(0, a, b)
#define PPC_TLBILX_PID(a, b)	PPC_TLBILX(1, a, b)
#define PPC_TLBILX_VA(a, b)	PPC_TLBILX(3, a, b)
#define PPC_WAIT(w)		stringify_in_c(.long PPC_INST_WAIT | \
__PPC_WC(w))
#define PPC_TLBIE(lp,a) 	stringify_in_c(.long PPC_INST_TLBIE | \
__PPC_RB(a) | __PPC_RS(lp))
#define PPC_TLBSRX_DOT(a,b)	stringify_in_c(.long PPC_INST_TLBSRX_DOT | \
__PPC_RA(a) | __PPC_RB(b))
#define PPC_TLBIVAX(a,b)	stringify_in_c(.long PPC_INST_TLBIVAX | \
__PPC_RA(a) | __PPC_RB(b))
#define PPC_ERATWE(s, a, w)	stringify_in_c(.long PPC_INST_ERATWE | \
__PPC_RS(s) | __PPC_RA(a) | __PPC_WS(w))
#define PPC_ERATRE(s, a, w)	stringify_in_c(.long PPC_INST_ERATRE | \
__PPC_RS(s) | __PPC_RA(a) | __PPC_WS(w))
#define PPC_ERATILX(t, a, b)	stringify_in_c(.long PPC_INST_ERATILX | \
__PPC_T_TLB(t) | __PPC_RA(a) | \
__PPC_RB(b))
#define PPC_ERATIVAX(s, a, b)	stringify_in_c(.long PPC_INST_ERATIVAX | \
__PPC_RS(s) | __PPC_RA(a) | __PPC_RB(b))
#define PPC_ERATSX(t, a, w)	stringify_in_c(.long PPC_INST_ERATSX | \
__PPC_RS(t) | __PPC_RA(a) | __PPC_RB(b))
#define PPC_ERATSX_DOT(t, a, w)	stringify_in_c(.long PPC_INST_ERATSX_DOT | \
__PPC_RS(t) | __PPC_RA(a) | __PPC_RB(b))
#define VSX_XX1(s, a, b)	(__PPC_XS(s) | __PPC_RA(a) | __PPC_RB(b))
#define VSX_XX3(t, a, b)	(__PPC_XT(t) | __PPC_XA(a) | __PPC_XB(b))
#define STXVD2X(s, a, b)	stringify_in_c(.long PPC_INST_STXVD2X | \
VSX_XX1((s), (a), (b)))
#define LXVD2X(s, a, b)		stringify_in_c(.long PPC_INST_LXVD2X | \
VSX_XX1((s), (a), (b)))
#define XXLOR(t, a, b)		stringify_in_c(.long PPC_INST_XXLOR | \
VSX_XX3((t), (a), (b)))
#define PPC_NAP			stringify_in_c(.long PPC_INST_NAP)
#define PPC_SLEEP		stringify_in_c(.long PPC_INST_SLEEP)
