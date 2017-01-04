#define __MFD_WM831X_PDATA_H__
struct wm831x;
struct regulator_init_data;
struct wm831x_backlight_pdata ;
struct wm831x_backup_pdata ;
struct wm831x_battery_pdata ;
struct wm831x_buckv_pdata ;
enum wm831x_status_src ;
struct wm831x_status_pdata ;
struct wm831x_touch_pdata ;
enum wm831x_watchdog_action ;
struct wm831x_watchdog_pdata ;
#define WM831X_MAX_STATUS 2
#define WM831X_MAX_DCDC   4
#define WM831X_MAX_EPE    2
#define WM831X_MAX_LDO    11
#define WM831X_MAX_ISINK  2
#define WM831X_GPIO_CONFIGURE 0x10000
#define WM831X_GPIO_NUM 16
struct wm831x_pdata ;
