#define _CXGB_CPHY_H_
struct mdio_ops ;
enum ;
enum ;
struct cphy;
struct cphy_ops ;
struct cphy ;
static inline int cphy_mdio_read(struct cphy *cphy, int mmd, int reg,
unsigned int *valp)
static inline int cphy_mdio_write(struct cphy *cphy, int mmd, int reg,
unsigned int val)
static inline int simple_mdio_read(struct cphy *cphy, int reg,
unsigned int *valp)
static inline int simple_mdio_write(struct cphy *cphy, int reg,
unsigned int val)
static inline void cphy_init(struct cphy *phy, struct net_device *dev,
int phy_addr, struct cphy_ops *phy_ops,
const struct mdio_ops *mdio_ops)
struct gphy ;
extern const struct gphy t1_my3126_ops;
extern const struct gphy t1_mv88e1xxx_ops;
extern const struct gphy t1_vsc8244_ops;
extern const struct gphy t1_mv88x201x_ops;
