#define MAILBOX_H
typedef u32 mbox_msg_t;
struct omap_mbox;
typedef int __bitwise omap_mbox_irq_t;
#define IRQ_TX ((__force omap_mbox_irq_t) 1)
#define IRQ_RX ((__force omap_mbox_irq_t) 2)
typedef int __bitwise omap_mbox_type_t;
#define OMAP_MBOX_TYPE1 ((__force omap_mbox_type_t) 1)
#define OMAP_MBOX_TYPE2 ((__force omap_mbox_type_t) 2)
struct omap_mbox_ops ;
struct omap_mbox_queue ;
struct omap_mbox ;
int omap_mbox_msg_send(struct omap_mbox *, mbox_msg_t msg);
void omap_mbox_init_seq(struct omap_mbox *);
struct omap_mbox *omap_mbox_get(const char *, struct notifier_block *nb);
void omap_mbox_put(struct omap_mbox *mbox, struct notifier_block *nb);
int omap_mbox_register(struct device *parent, struct omap_mbox **);
int omap_mbox_unregister(void);
static inline void omap_mbox_save_ctx(struct omap_mbox *mbox)
static inline void omap_mbox_restore_ctx(struct omap_mbox *mbox)
static inline void omap_mbox_enable_irq(struct omap_mbox *mbox,
omap_mbox_irq_t irq)
static inline void omap_mbox_disable_irq(struct omap_mbox *mbox,
omap_mbox_irq_t irq)
