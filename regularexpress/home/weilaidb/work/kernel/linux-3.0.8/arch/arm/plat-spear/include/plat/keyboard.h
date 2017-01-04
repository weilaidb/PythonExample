#define __PLAT_KEYBOARD_H
#define DECLARE_KEYMAP(_name) \
int _name[] =
struct kbd_platform_data ;
static inline void
kbd_set_plat_data(struct platform_device *pdev, struct kbd_platform_data *data)
