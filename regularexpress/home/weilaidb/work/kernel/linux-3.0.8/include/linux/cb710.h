#define LINUX_CB710_DRIVER_H
struct cb710_slot;
typedef int (*cb710_irq_handler_t)(struct cb710_slot *);
struct cb710_slot ;
struct cb710_chip ;
#define CB710_SLOT_MMC		1
#define CB710_SLOT_MS		2
#define CB710_SLOT_SM		4
#define CB710_PORT_ACCESSORS(t) \
static inline void cb710_write_port_##t(struct cb710_slot *slot,	\
unsigned port, u##t value)					\
\
\
static inline u##t cb710_read_port_##t(struct cb710_slot *slot,		\
unsigned port)							\
\
\
static inline void cb710_modify_port_##t(struct cb710_slot *slot,	\
unsigned port, u##t set, u##t clear)				\
CB710_PORT_ACCESSORS(8)
CB710_PORT_ACCESSORS(16)
CB710_PORT_ACCESSORS(32)
void cb710_pci_update_config_reg(struct pci_dev *pdev,
int reg, uint32_t and, uint32_t xor);
void cb710_set_irq_handler(struct cb710_slot *slot,
cb710_irq_handler_t handler);
static inline struct cb710_slot *cb710_pdev_to_slot(
struct platform_device *pdev)
static inline struct cb710_chip *cb710_slot_to_chip(struct cb710_slot *slot)
static inline struct device *cb710_slot_dev(struct cb710_slot *slot)
static inline struct device *cb710_chip_dev(struct cb710_chip *chip)
void cb710_dump_regs(struct cb710_chip *chip, unsigned dump);
#define cb710_dump_regs(c, d) do  while (0)
#define CB710_DUMP_REGS_MMC	0x0F
#define CB710_DUMP_REGS_MS	0x30
#define CB710_DUMP_REGS_SM	0xC0
#define CB710_DUMP_REGS_ALL	0xFF
#define CB710_DUMP_REGS_MASK	0xFF
#define CB710_DUMP_ACCESS_8	0x100
#define CB710_DUMP_ACCESS_16	0x200
#define CB710_DUMP_ACCESS_32	0x400
#define CB710_DUMP_ACCESS_ALL	0x700
#define CB710_DUMP_ACCESS_MASK	0x700
#define LINUX_CB710_SG_H
uint32_t cb710_sg_dwiter_read_next_block(struct sg_mapping_iter *miter);
void cb710_sg_dwiter_write_next_block(struct sg_mapping_iter *miter, uint32_t data);
static inline void cb710_sg_dwiter_write_from_io(struct sg_mapping_iter *miter,
void __iomem *port, size_t count)
static inline void cb710_sg_dwiter_read_to_io(struct sg_mapping_iter *miter,
void __iomem *port, size_t count)
