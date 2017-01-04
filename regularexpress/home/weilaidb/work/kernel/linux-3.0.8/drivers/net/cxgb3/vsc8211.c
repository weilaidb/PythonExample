enum ;
enum ;
enum ;
#define CFG_CHG_INTR_MASK (VSC_INTR_LINK_CHG | VSC_INTR_NEG_ERR | \
VSC_INTR_DPLX_CHG | VSC_INTR_SPD_CHG | \
VSC_INTR_NEG_DONE)
#define INTR_MASK (CFG_CHG_INTR_MASK | VSC_INTR_TX_FIFO | VSC_INTR_RX_FIFO | \
VSC_INTR_ENABLE)
#define S_ACSR_ACTIPHY_TMR    0
#define M_ACSR_ACTIPHY_TMR    0x3
#define V_ACSR_ACTIPHY_TMR(x) ((x) << S_ACSR_ACTIPHY_TMR)
#define S_ACSR_SPEED    3
#define M_ACSR_SPEED    0x3
#define G_ACSR_SPEED(x) (((x) >> S_ACSR_SPEED) & M_ACSR_SPEED)
#define S_ACSR_DUPLEX 5
#define F_ACSR_DUPLEX (1 << S_ACSR_DUPLEX)
#define S_ACSR_ACTIPHY 6
#define F_ACSR_ACTIPHY (1 << S_ACSR_ACTIPHY)
static int vsc8211_reset(struct cphy *cphy, int wait)
static int vsc8211_intr_enable(struct cphy *cphy)
static int vsc8211_intr_disable(struct cphy *cphy)
static int vsc8211_intr_clear(struct cphy *cphy)
static int vsc8211_autoneg_enable(struct cphy *cphy)
static int vsc8211_autoneg_restart(struct cphy *cphy)
static int vsc8211_get_link_status(struct cphy *cphy, int *link_ok,
int *speed, int *duplex, int *fc)
static int vsc8211_get_link_status_fiber(struct cphy *cphy, int *link_ok,
int *speed, int *duplex, int *fc)
static int vsc8211_set_automdi(struct cphy *phy, int enable)
int vsc8211_set_speed_duplex(struct cphy *phy, int speed, int duplex)
static int vsc8211_power_down(struct cphy *cphy, int enable)
static int vsc8211_intr_handler(struct cphy *cphy)
static struct cphy_ops vsc8211_ops = ;
static struct cphy_ops vsc8211_fiber_ops = ;
int t3_vsc8211_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
