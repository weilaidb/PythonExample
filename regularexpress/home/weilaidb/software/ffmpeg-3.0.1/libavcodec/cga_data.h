#define AVCODEC_CGA_DATA_H
extern const uint32_t ff_cga_palette[16];
extern const uint32_t ff_ega_palette[64];
void ff_draw_pc_font(uint8_t *dst, int linesize, const uint8_t *font, int font_height, int ch, int fg, int bg);
