#define __ASM_I8253_H
#define PIT_MODE		0x43
#define PIT_CH0			0x40
#define PIT_CH2			0x42
#define PIT_LATCH		LATCH
extern raw_spinlock_t i8253_lock;
extern void setup_pit_timer(void);
#define inb_pit inb_p
#define outb_pit outb_p
