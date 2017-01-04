#define _VIDEO_FBCON_H
#define FBCON_FLAGS_INIT         1
#define FBCON_FLAGS_CURSOR_TIMER 2
struct display ;
struct fbcon_ops ;
#define attr_fgcol(fgshift,s)    \
(((s) >> (fgshift)) & 0x0f)
#define attr_bgcol(bgshift,s)    \
(((s) >> (bgshift)) & 0x0f)
#define attr_bold(s) \
((s) & 0x200)
#define attr_reverse(s) \
((s) & 0x800)
#define attr_underline(s) \
((s) & 0x400)
#define attr_blink(s) \
((s) & 0x8000)
static inline int mono_col(const struct fb_info *info)
static inline int attr_col_ec(int shift, struct vc_data *vc,
struct fb_info *info, int is_fg)
#define attr_bgcol_ec(bgshift, vc, info) attr_col_ec(bgshift, vc, info, 0)
#define attr_fgcol_ec(fgshift, vc, info) attr_col_ec(fgshift, vc, info, 1)
#define REFCOUNT(fd)	(((int *)(fd))[-1])
#define FNTSIZE(fd)	(((int *)(fd))[-2])
#define FNTCHARCNT(fd)	(((int *)(fd))[-3])
#define FNTSUM(fd)	(((int *)(fd))[-4])
#define FONT_EXTRA_WORDS 4
#define SCROLL_MOVE	   0x001
#define SCROLL_PAN_MOVE	   0x002
#define SCROLL_WRAP_MOVE   0x003
#define SCROLL_REDRAW	   0x004
#define SCROLL_PAN_REDRAW  0x005
extern void fbcon_set_tileops(struct vc_data *vc, struct fb_info *info);
extern void fbcon_set_bitops(struct fbcon_ops *ops);
extern int  soft_cursor(struct fb_info *info, struct fb_cursor *cursor);
#define FBCON_ATTRIBUTE_UNDERLINE 1
#define FBCON_ATTRIBUTE_REVERSE   2
#define FBCON_ATTRIBUTE_BOLD      4
static inline int real_y(struct display *p, int ypos)
static inline int get_attribute(struct fb_info *info, u16 c)
#define FBCON_SWAP(i,r,v) ()
extern void fbcon_set_rotate(struct fbcon_ops *ops);
#define fbcon_set_rotate(x) do  while(0)
