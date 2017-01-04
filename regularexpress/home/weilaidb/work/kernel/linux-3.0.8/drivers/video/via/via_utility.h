#define __VIAUTILITY_H__
void viafb_get_device_support_state(u32 *support_state);
void viafb_get_device_connect_state(u32 *connect_state);
bool viafb_lcd_get_support_expand_state(u32 xres, u32 yres);
void viafb_set_gamma_table(int bpp, unsigned int *gamma_table);
void viafb_get_gamma_table(unsigned int *gamma_table);
void viafb_get_gamma_support_state(int bpp, unsigned int *support_state);
