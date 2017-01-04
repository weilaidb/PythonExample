#define _ASM_X86_I8259_H
extern unsigned int cached_irq_mask;
#define __byte(x, y)		(((unsigned char *)&(y))[x])
#define cached_master_mask	(__byte(0, cached_irq_mask))
#define cached_slave_mask	(__byte(1, cached_irq_mask))
#define PIC_MASTER_CMD		0x20
#define PIC_MASTER_IMR		0x21
#define PIC_MASTER_ISR		PIC_MASTER_CMD
#define PIC_MASTER_POLL		PIC_MASTER_ISR
#define PIC_MASTER_OCW3		PIC_MASTER_ISR
#define PIC_SLAVE_CMD		0xa0
#define PIC_SLAVE_IMR		0xa1
#define PIC_CASCADE_IR		2
#define MASTER_ICW4_DEFAULT	0x01
#define SLAVE_ICW4_DEFAULT	0x01
#define PIC_ICW4_AEOI		2
extern raw_spinlock_t i8259A_lock;
static inline unsigned char inb_pic(unsigned int port)
static inline void outb_pic(unsigned char value, unsigned int port)
extern struct irq_chip i8259A_chip;
struct legacy_pic ;
extern struct legacy_pic *legacy_pic;
extern struct legacy_pic null_legacy_pic;
