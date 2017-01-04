#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void medusa_enable_bluefield_output(struct cx25821_dev *dev, int channel,
int enable)
static int medusa_initialize_ntsc(struct cx25821_dev *dev)
static int medusa_PALCombInit(struct cx25821_dev *dev, int dec)
static int medusa_initialize_pal(struct cx25821_dev *dev)
int medusa_set_videostandard(struct cx25821_dev *dev)
void medusa_set_resolution(struct cx25821_dev *dev, int width,
int decoder_select)
static void medusa_set_decoderduration(struct cx25821_dev *dev, int decoder,
int duration)
static int mapM(int srcMin,
int srcMax, int srcVal, int dstMin, int dstMax, int *dstVal)
static unsigned long convert_to_twos(long numeric, unsigned long bits_len)
int medusa_set_brightness(struct cx25821_dev *dev, int brightness, int decoder)
int medusa_set_contrast(struct cx25821_dev *dev, int contrast, int decoder)
int medusa_set_hue(struct cx25821_dev *dev, int hue, int decoder)
int medusa_set_saturation(struct cx25821_dev *dev, int saturation, int decoder)
int medusa_video_init(struct cx25821_dev *dev)
