#define CFCNFG_H_
struct cfcnfg;
enum cfcnfg_phy_type ;
enum cfcnfg_phy_preference ;
struct cfcnfg *get_cfcnfg(struct net *net);
struct cfcnfg *cfcnfg_create(void);
void cfcnfg_remove(struct cfcnfg *cfg);
void
cfcnfg_add_phy_layer(struct cfcnfg *cnfg, enum cfcnfg_phy_type phy_type,
struct net_device *dev, struct cflayer *phy_layer,
enum cfcnfg_phy_preference pref,
bool fcs, bool stx);
int cfcnfg_del_phy_layer(struct cfcnfg *cnfg, struct cflayer *phy_layer);
int cfcnfg_set_phy_state(struct cfcnfg *cnfg, struct cflayer *phy_layer,
bool up);
