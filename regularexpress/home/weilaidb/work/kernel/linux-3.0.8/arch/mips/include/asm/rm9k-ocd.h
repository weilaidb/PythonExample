#if !defined(_ASM_RM9K_OCD_H)
#define _ASM_RM9K_OCD_H
extern volatile void __iomem * const ocd_base;
extern volatile void __iomem * const titan_base;
#define ocd_addr(__x__)		(ocd_base + (__x__))
#define titan_addr(__x__)	(titan_base + (__x__))
#define scram_addr(__x__)	(scram_base + (__x__))
#define ocd_readl(__offs__) __raw_readl(ocd_addr(__offs__))
#define ocd_readw(__offs__) __raw_readw(ocd_addr(__offs__))
#define ocd_readb(__offs__) __raw_readb(ocd_addr(__offs__))
#define ocd_writel(__val__, __offs__) \
__raw_writel((__val__), ocd_addr(__offs__))
#define ocd_writew(__val__, __offs__) \
__raw_writew((__val__), ocd_addr(__offs__))
#define ocd_writeb(__val__, __offs__) \
__raw_writeb((__val__), ocd_addr(__offs__))
#define titan_readl(__offs__) __raw_readl(titan_addr(__offs__))
#define titan_writel(__val__, __offs__) \
__raw_writel((__val__), titan_addr(__offs__))
extern spinlock_t titan_lock;
extern int titan_irqflags;
#define lock_titan_regs() spin_lock_irqsave(&titan_lock, titan_irqflags)
#define unlock_titan_regs() spin_unlock_irqrestore(&titan_lock, titan_irqflags)
