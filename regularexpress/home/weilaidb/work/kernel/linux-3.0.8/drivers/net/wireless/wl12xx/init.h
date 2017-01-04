#define __INIT_H__
int wl1271_hw_init_power_auth(struct wl1271 *wl);
int wl1271_sta_init_templates_config(struct wl1271 *wl);
int wl1271_init_phy_config(struct wl1271 *wl);
int wl1271_init_pta(struct wl1271 *wl);
int wl1271_init_energy_detection(struct wl1271 *wl);
int wl1271_chip_specific_init(struct wl1271 *wl);
int wl1271_hw_init(struct wl1271 *wl);
int wl1271_init_ap_rates(struct wl1271 *wl);
int wl1271_ap_init_templates(struct wl1271 *wl);
