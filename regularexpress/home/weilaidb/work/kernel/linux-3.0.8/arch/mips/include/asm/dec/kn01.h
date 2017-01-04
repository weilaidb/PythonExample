#define __ASM_MIPS_DEC_KN01_H
#define KN01_SLOT_BASE	0x10000000
#define KN01_SLOT_SIZE	0x01000000
#define KN01_PMASK	(0*KN01_SLOT_SIZE)
#define KN01_PCC	(1*KN01_SLOT_SIZE)
#define KN01_VDAC	(2*KN01_SLOT_SIZE)
#define KN01_RES_3	(3*KN01_SLOT_SIZE)
#define KN01_RES_4	(4*KN01_SLOT_SIZE)
#define KN01_RES_5	(5*KN01_SLOT_SIZE)
#define KN01_RES_6	(6*KN01_SLOT_SIZE)
#define KN01_ERRADDR	(7*KN01_SLOT_SIZE)
#define KN01_LANCE	(8*KN01_SLOT_SIZE)
#define KN01_LANCE_MEM	(9*KN01_SLOT_SIZE)
#define KN01_SII	(10*KN01_SLOT_SIZE)
#define KN01_SII_MEM	(11*KN01_SLOT_SIZE)
#define KN01_DZ11	(12*KN01_SLOT_SIZE)
#define KN01_RTC	(13*KN01_SLOT_SIZE)
#define KN01_ESAR	(13*KN01_SLOT_SIZE)
#define KN01_CSR	(14*KN01_SLOT_SIZE)
#define KN01_SYS_ROM	(15*KN01_SLOT_SIZE)
#define KN01_VFB_MEM	0x0fc00000
#define KN01_CPU_INR_BUS	6
#define KN01_CPU_INR_VIDEO	6
#define KN01_CPU_INR_RTC	5
#define KN01_CPU_INR_DZ11	4
#define KN01_CPU_INR_LANCE	3
#define KN01_CPU_INR_SII	2
#define KN01_CSR_MNFMOD		(1<<15)
#define KN01_CSR_STATUS		(1<<14)
#define KN01_CSR_PARDIS		(1<<13)
#define KN01_CSR_CRSRTST	(1<<12)
#define KN01_CSR_MONO		(1<<11)
#define KN01_CSR_MEMERR		(1<<10)
#define KN01_CSR_VINT		(1<<9)
#define KN01_CSR_TXDIS		(1<<8)
#define KN01_CSR_VBGTRG		(1<<2)
#define KN01_CSR_VRGTRG		(1<<1)
#define KN01_CSR_VRGTRB		(1<<0)
#define KN01_CSR_LEDS		(0xff<<0)
struct pt_regs;
extern u16 cached_kn01_csr;
extern void dec_kn01_be_init(void);
extern int dec_kn01_be_handler(struct pt_regs *regs, int is_fixup);
extern irqreturn_t dec_kn01_be_interrupt(int irq, void *dev_id);
