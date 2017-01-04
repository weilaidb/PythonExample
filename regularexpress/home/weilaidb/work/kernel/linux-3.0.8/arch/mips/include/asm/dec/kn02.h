#define __ASM_MIPS_DEC_KN02_H
#define KN02_SLOT_BASE	0x1fc00000
#define KN02_SLOT_SIZE	0x00080000
#define KN02_SYS_ROM	(0*KN02_SLOT_SIZE)
#define KN02_RES_1	(1*KN02_SLOT_SIZE)
#define KN02_CHKSYN	(2*KN02_SLOT_SIZE)
#define KN02_ERRADDR	(3*KN02_SLOT_SIZE)
#define KN02_DZ11	(4*KN02_SLOT_SIZE)
#define KN02_RTC	(5*KN02_SLOT_SIZE)
#define KN02_CSR	(6*KN02_SLOT_SIZE)
#define KN02_SYS_ROM_7	(7*KN02_SLOT_SIZE)
#define KN02_CSR_RES_28		(0xf<<28)
#define KN02_CSR_PSU		(1<<27)
#define KN02_CSR_NVRAM		(1<<26)
#define KN02_CSR_REFEVEN	(1<<25)
#define KN02_CSR_NRMOD		(1<<24)
#define KN02_CSR_IOINTEN	(0xff<<16)
#define KN02_CSR_DIAGCHK	(1<<15)
#define KN02_CSR_DIAGGEN	(1<<14)
#define KN02_CSR_CORRECT	(1<<13)
#define KN02_CSR_LEDIAG		(1<<12)
#define KN02_CSR_TXDIS		(1<<11)
#define KN02_CSR_BNK32M		(1<<10)
#define KN02_CSR_DIAGDN		(1<<9)
#define KN02_CSR_BAUD38		(1<<8)
#define KN02_CSR_IOINT		(0xff<<0)
#define KN02_CSR_LEDS		(0xff<<0)
#define KN02_CPU_INR_RES_6	6
#define KN02_CPU_INR_BUS	5
#define KN02_CPU_INR_RES_4	4
#define KN02_CPU_INR_RTC	3
#define KN02_CPU_INR_CASCADE	2
#define KN02_CSR_INR_DZ11	7
#define KN02_CSR_INR_LANCE	6
#define KN02_CSR_INR_ASC	5
#define KN02_CSR_INR_RES_4	4
#define KN02_CSR_INR_RES_3	3
#define KN02_CSR_INR_TC2	2
#define KN02_CSR_INR_TC1	1
#define KN02_CSR_INR_TC0	0
#define KN02_IRQ_BASE		8
#define KN02_IRQ_LINES		8
#define KN02_IRQ_NR(n)		((n) + KN02_IRQ_BASE)
#define KN02_IRQ_MASK(n)	(1 << (n))
#define KN02_IRQ_ALL		0xff
extern u32 cached_kn02_csr;
extern void init_kn02_irqs(int base);
