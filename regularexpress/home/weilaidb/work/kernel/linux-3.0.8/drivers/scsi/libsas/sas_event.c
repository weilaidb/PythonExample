static void notify_ha_event(struct sas_ha_struct *sas_ha, enum ha_event event)
static void notify_port_event(struct asd_sas_phy *phy, enum port_event event)
static void notify_phy_event(struct asd_sas_phy *phy, enum phy_event event)
int sas_init_events(struct sas_ha_struct *sas_ha)
