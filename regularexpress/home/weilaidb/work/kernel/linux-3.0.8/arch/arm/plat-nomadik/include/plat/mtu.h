#define __PLAT_MTU_H
#define MTU_MIN_RANGE 4
extern void __iomem *mtu_base;
#define MTU_IMSC	0x00
#define MTU_RIS		0x04
#define MTU_MIS		0x08
#define MTU_ICR		0x0C
#define MTU_LR(x)	(0x10 + 0x10 * (x) + 0x00)
#define MTU_VAL(x)	(0x10 + 0x10 * (x) + 0x04)
#define MTU_CR(x)	(0x10 + 0x10 * (x) + 0x08)
#define MTU_BGLR(x)	(0x10 + 0x10 * (x) + 0x0c)
#define MTU_CRn_ENA		0x80
#define MTU_CRn_PERIODIC	0x40
#define MTU_CRn_PRESCALE_MASK	0x0c
#define MTU_CRn_PRESCALE_1		0x00
#define MTU_CRn_PRESCALE_16		0x04
#define MTU_CRn_PRESCALE_256		0x08
#define MTU_CRn_32BITS		0x02
#define MTU_CRn_ONESHOT		0x01
#define MTU_ITCR	0xff0
#define MTU_ITOP	0xff4
#define MTU_PERIPH_ID0	0xfe0
#define MTU_PERIPH_ID1	0xfe4
#define MTU_PERIPH_ID2	0xfe8
#define MTU_PERIPH_ID3	0xfeC
#define MTU_PCELL0	0xff0
#define MTU_PCELL1	0xff4
#define MTU_PCELL2	0xff8
#define MTU_PCELL3	0xffC
