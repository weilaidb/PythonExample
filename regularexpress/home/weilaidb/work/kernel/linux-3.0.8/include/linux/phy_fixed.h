#define __PHY_FIXED_H
struct fixed_phy_status ;
extern int fixed_phy_add(unsigned int irq, int phy_id,
struct fixed_phy_status *status);
static inline int fixed_phy_add(unsigned int irq, int phy_id,
struct fixed_phy_status *status)
extern int fixed_phy_set_link_update(struct phy_device *phydev,
int (*link_update)(struct net_device *,
struct fixed_phy_status *));
