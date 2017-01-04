#define _ASM_X86_MACH_DEFAULT_MACH_TRAPS_H
#define NMI_REASON_PORT		0x61
#define NMI_REASON_SERR		0x80
#define NMI_REASON_IOCHK	0x40
#define NMI_REASON_MASK		(NMI_REASON_SERR | NMI_REASON_IOCHK)
#define NMI_REASON_CLEAR_SERR	0x04
#define NMI_REASON_CLEAR_IOCHK	0x08
#define NMI_REASON_CLEAR_MASK	0x0f
static inline unsigned char get_nmi_reason(void)
static inline void reassert_nmi(void)
