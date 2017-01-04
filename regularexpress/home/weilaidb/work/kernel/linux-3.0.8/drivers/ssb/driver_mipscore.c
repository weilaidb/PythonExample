static inline u32 mips_read32(struct ssb_mipscore *mcore,
u16 offset)
static inline void mips_write32(struct ssb_mipscore *mcore,
u16 offset,
u32 value)
static const u32 ipsflag_irq_mask[] = ;
static const u32 ipsflag_irq_shift[] = ;
static inline u32 ssb_irqflag(struct ssb_device *dev)
static struct ssb_device *find_device(struct ssb_device *rdev, int irqflag)
unsigned int ssb_mips_irq(struct ssb_device *dev)
static void clear_irq(struct ssb_bus *bus, unsigned int irq)
static void set_irq(struct ssb_device *dev, unsigned int irq)
static void print_irq(struct ssb_device *dev, unsigned int irq)
static void dump_irq(struct ssb_bus *bus)
static void ssb_mips_serial_init(struct ssb_mipscore *mcore)
static void ssb_mips_flash_detect(struct ssb_mipscore *mcore)
u32 ssb_cpu_clock(struct ssb_mipscore *mcore)
void ssb_mipscore_init(struct ssb_mipscore *mcore)
