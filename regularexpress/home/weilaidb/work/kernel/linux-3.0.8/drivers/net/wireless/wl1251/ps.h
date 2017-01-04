#define __WL1251_PS_H__
int wl1251_ps_set_mode(struct wl1251 *wl, enum wl1251_station_mode mode);
void wl1251_ps_elp_sleep(struct wl1251 *wl);
int wl1251_ps_elp_wakeup(struct wl1251 *wl);
void wl1251_elp_work(struct work_struct *work);
