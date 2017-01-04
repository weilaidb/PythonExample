#define acornfb_bandwidth(var) ((var)->pixclock * 8 / (var)->bits_per_pixel)
static inline int
acornfb_valid_pixrate(struct fb_var_screeninfo *var)
static inline u_int
acornfb_vidc20_find_pll(u_int pixclk)
static inline void
acornfb_vidc20_find_rates(struct vidc_timing *vidc,
struct fb_var_screeninfo *var)
#define acornfb_default_control()	(VIDC20_CTRL_PIX_VCLK)
#define acornfb_default_econtrol()	(VIDC20_ECTL_DAC | VIDC20_ECTL_REG(3))
