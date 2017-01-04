#define _FBCON_ROTATE_H
#define GETVYRES(s,i) ()
#define GETVXRES(s,i) ()
static inline int pattern_test_bit(u32 x, u32 y, u32 pitch, const char *pat)
static inline void pattern_set_bit(u32 x, u32 y, u32 pitch, char *pat)
static inline void rotate_ud(const char *in, char *out, u32 width, u32 height)
static inline void rotate_cw(const char *in, char *out, u32 width, u32 height)
static inline void rotate_ccw(const char *in, char *out, u32 width, u32 height)
extern void fbcon_rotate_cw(struct fbcon_ops *ops);
extern void fbcon_rotate_ud(struct fbcon_ops *ops);
extern void fbcon_rotate_ccw(struct fbcon_ops *ops);
