static int my3126_reset(struct cphy *cphy, int wait)
static int my3126_interrupt_enable(struct cphy *cphy)
static int my3126_interrupt_disable(struct cphy *cphy)
static int my3126_interrupt_clear(struct cphy *cphy)
#define OFFSET(REG_ADDR)    (REG_ADDR << 2)
static int my3126_interrupt_handler(struct cphy *cphy)
static void my3216_poll(struct work_struct *work)
static int my3126_set_loopback(struct cphy *cphy, int on)
static int my3126_get_link_status(struct cphy *cphy,
int *link_ok, int *speed, int *duplex, int *fc)
static void my3126_destroy(struct cphy *cphy)
static struct cphy_ops my3126_ops = ;
static struct cphy *my3126_phy_create(struct net_device *dev,
int phy_addr, const struct mdio_ops *mdio_ops)
static int my3126_phy_reset(adapter_t * adapter)
const struct gphy t1_my3126_ops = ;
