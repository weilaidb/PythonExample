static irqreturn_t aac_sa_intr(int irq, void *dev_id)
static void aac_sa_disable_interrupt (struct aac_dev *dev)
static void aac_sa_enable_interrupt (struct aac_dev *dev)
static void aac_sa_notify_adapter(struct aac_dev *dev, u32 event)
static int sa_sync_cmd(struct aac_dev *dev, u32 command,
u32 p1, u32 p2, u32 p3, u32 p4, u32 p5, u32 p6,
u32 *ret, u32 *r1, u32 *r2, u32 *r3, u32 *r4)
static void aac_sa_interrupt_adapter (struct aac_dev *dev)
static void aac_sa_start_adapter(struct aac_dev *dev)
static int aac_sa_restart_adapter(struct aac_dev *dev, int bled)
static int aac_sa_check_health(struct aac_dev *dev)
static int aac_sa_ioremap(struct aac_dev * dev, u32 size)
int aac_sa_init(struct aac_dev *dev)
