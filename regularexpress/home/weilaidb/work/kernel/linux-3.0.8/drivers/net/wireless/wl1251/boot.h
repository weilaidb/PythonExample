#define __BOOT_H__
int wl1251_boot_soft_reset(struct wl1251 *wl);
int wl1251_boot_init_seq(struct wl1251 *wl);
int wl1251_boot_run_firmware(struct wl1251 *wl);
void wl1251_boot_target_enable_interrupts(struct wl1251 *wl);
int wl1251_boot(struct wl1251 *wl);
#define INIT_LOOP 20000
#define INIT_LOOP_DELAY 50
