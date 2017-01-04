int adjust_standard(struct easycap *peasycap, v4l2_std_id std_id)
int adjust_format(struct easycap *peasycap,
u32 width, u32 height, u32 pixelformat, int field, bool try)
int adjust_brightness(struct easycap *peasycap, int value)
int adjust_contrast(struct easycap *peasycap, int value)
int adjust_saturation(struct easycap *peasycap, int value)
int adjust_hue(struct easycap *peasycap, int value)
int adjust_volume(struct easycap *peasycap, int value)
static int adjust_mute(struct easycap *peasycap, int value)
long easycap_unlocked_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
