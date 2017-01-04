#define CX18_IO_H
static inline u32 cx18_raw_readl(struct cx18 *cx, const void __iomem *addr)
static inline
void cx18_raw_writel_noretry(struct cx18 *cx, u32 val, void __iomem *addr)
static inline void cx18_raw_writel(struct cx18 *cx, u32 val, void __iomem *addr)
static inline u32 cx18_readl(struct cx18 *cx, const void __iomem *addr)
static inline
void cx18_writel_noretry(struct cx18 *cx, u32 val, void __iomem *addr)
static inline void cx18_writel(struct cx18 *cx, u32 val, void __iomem *addr)
static inline
void cx18_writel_expect(struct cx18 *cx, u32 val, void __iomem *addr,
u32 eval, u32 mask)
static inline u16 cx18_readw(struct cx18 *cx, const void __iomem *addr)
static inline
void cx18_writew_noretry(struct cx18 *cx, u16 val, void __iomem *addr)
static inline void cx18_writew(struct cx18 *cx, u16 val, void __iomem *addr)
static inline u8 cx18_readb(struct cx18 *cx, const void __iomem *addr)
static inline
void cx18_writeb_noretry(struct cx18 *cx, u8 val, void __iomem *addr)
static inline void cx18_writeb(struct cx18 *cx, u8 val, void __iomem *addr)
static inline
void cx18_memcpy_fromio(struct cx18 *cx, void *to,
const void __iomem *from, unsigned int len)
void cx18_memset_io(struct cx18 *cx, void __iomem *addr, int val, size_t count);
static inline void cx18_write_reg_noretry(struct cx18 *cx, u32 val, u32 reg)
static inline void cx18_write_reg(struct cx18 *cx, u32 val, u32 reg)
static inline void cx18_write_reg_expect(struct cx18 *cx, u32 val, u32 reg,
u32 eval, u32 mask)
static inline u32 cx18_read_reg(struct cx18 *cx, u32 reg)
static inline void cx18_write_enc(struct cx18 *cx, u32 val, u32 addr)
static inline u32 cx18_read_enc(struct cx18 *cx, u32 addr)
void cx18_sw1_irq_enable(struct cx18 *cx, u32 val);
void cx18_sw1_irq_disable(struct cx18 *cx, u32 val);
void cx18_sw2_irq_enable(struct cx18 *cx, u32 val);
void cx18_sw2_irq_disable(struct cx18 *cx, u32 val);
void cx18_sw2_irq_disable_cpu(struct cx18 *cx, u32 val);
void cx18_setup_page(struct cx18 *cx, u32 addr);
