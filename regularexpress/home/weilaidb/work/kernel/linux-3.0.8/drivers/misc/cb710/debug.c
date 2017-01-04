#define CB710_REG_COUNT		0x80
static const u16 allow[CB710_REG_COUNT/16] = ;
static const char *const prefix[ARRAY_SIZE(allow)] = ;
static inline int allow_reg_read(unsigned block, unsigned offset, unsigned bits)
#define CB710_READ_REGS_TEMPLATE(t)					\
static void cb710_read_regs_##t(void __iomem *iobase,			\
u##t *reg, unsigned select)					\
static const char cb710_regf_8[] = "%02X";
static const char cb710_regf_16[] = "%04X";
static const char cb710_regf_32[] = "%08X";
static const char cb710_xes[] = "xxxxxxxx";
#define CB710_DUMP_REGS_TEMPLATE(t)					\
static void cb710_dump_regs_##t(struct device *dev,			\
const u##t *reg, unsigned select)				\
#define CB710_READ_AND_DUMP_REGS_TEMPLATE(t)				\
static void cb710_read_and_dump_regs_##t(struct cb710_chip *chip,	\
unsigned select)						\
#define CB710_REG_ACCESS_TEMPLATES(t)		\
CB710_READ_REGS_TEMPLATE(t)			\
CB710_DUMP_REGS_TEMPLATE(t)			\
CB710_READ_AND_DUMP_REGS_TEMPLATE(t)
CB710_REG_ACCESS_TEMPLATES(8)
CB710_REG_ACCESS_TEMPLATES(16)
CB710_REG_ACCESS_TEMPLATES(32)
void cb710_dump_regs(struct cb710_chip *chip, unsigned select)
EXPORT_SYMBOL_GPL(cb710_dump_regs);
