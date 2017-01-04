#if defined(__mc68000__)
#define NO_FONTS
static const struct font_desc *fonts[] = ;
#define num_fonts ARRAY_SIZE(fonts)
#error No fonts configured.
const struct font_desc *find_font(const char *name)
const struct font_desc *get_default_font(int xres, int yres, u32 font_w,
u32 font_h)
EXPORT_SYMBOL(find_font);
EXPORT_SYMBOL(get_default_font);
MODULE_AUTHOR("James Simmons <jsimmons@users.sf.net>");
MODULE_DESCRIPTION("Console Fonts");
MODULE_LICENSE("GPL");
