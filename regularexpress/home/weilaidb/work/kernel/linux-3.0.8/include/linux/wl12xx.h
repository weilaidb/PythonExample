#define _LINUX_WL12XX_H
enum ;
enum ;
struct wl12xx_platform_data ;
#define WL12XX_PLATFORM_QUIRK_EDGE_IRQ	BIT(0)
int wl12xx_set_platform_data(const struct wl12xx_platform_data *data);
static inline
int wl12xx_set_platform_data(const struct wl12xx_platform_data *data)
const struct wl12xx_platform_data *wl12xx_get_platform_data(void);
