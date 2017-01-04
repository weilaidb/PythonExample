#define __ASM_ARM_HARDWARE_VIC_H
#define VIC_IRQ_STATUS			0x00
#define VIC_FIQ_STATUS			0x04
#define VIC_RAW_STATUS			0x08
#define VIC_INT_SELECT			0x0c
#define VIC_INT_ENABLE			0x10
#define VIC_INT_ENABLE_CLEAR		0x14
#define VIC_INT_SOFT			0x18
#define VIC_INT_SOFT_CLEAR		0x1c
#define VIC_PROTECT			0x20
#define VIC_PL190_VECT_ADDR		0x30
#define VIC_PL190_DEF_VECT_ADDR		0x34
#define VIC_VECT_ADDR0			0x100
#define VIC_VECT_CNTL0			0x200
#define VIC_ITCR			0x300
#define VIC_VECT_CNTL_ENABLE		(1 << 5)
#define VIC_PL192_VECT_ADDR		0xF00
void vic_init(void __iomem *base, unsigned int irq_start, u32 vic_sources, u32 resume_sources);
