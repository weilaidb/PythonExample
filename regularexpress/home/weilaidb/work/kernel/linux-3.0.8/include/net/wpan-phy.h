#define WPAN_PHY_H
struct wpan_phy ;
#define to_phy(_dev)	container_of(_dev, struct wpan_phy, dev)
struct wpan_phy *wpan_phy_alloc(size_t priv_size);
static inline void wpan_phy_set_dev(struct wpan_phy *phy, struct device *dev)
int wpan_phy_register(struct wpan_phy *phy);
void wpan_phy_unregister(struct wpan_phy *phy);
void wpan_phy_free(struct wpan_phy *phy);
int wpan_phy_for_each(int (*fn)(struct wpan_phy *phy, void *data), void *data);
static inline void *wpan_phy_priv(struct wpan_phy *phy)
struct wpan_phy *wpan_phy_find(const char *str);
static inline void wpan_phy_put(struct wpan_phy *phy)
static inline const char *wpan_phy_name(struct wpan_phy *phy)
