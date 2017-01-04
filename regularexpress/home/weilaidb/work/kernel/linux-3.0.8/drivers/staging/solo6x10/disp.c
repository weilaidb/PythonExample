#define SOLO_VCLK_DELAY			3
#define SOLO_PROGRESSIVE_VSIZE		1024
#define SOLO_MOT_THRESH_W		64
#define SOLO_MOT_THRESH_H		64
#define SOLO_MOT_THRESH_SIZE		8192
#define SOLO_MOT_THRESH_REAL		(SOLO_MOT_THRESH_W * SOLO_MOT_THRESH_H)
#define SOLO_MOT_FLAG_SIZE		512
#define SOLO_MOT_FLAG_AREA		(SOLO_MOT_FLAG_SIZE * 32)
static unsigned video_type;
module_param(video_type, uint, 0644);
MODULE_PARM_DESC(video_type, "video_type (0 = NTSC/Default, 1 = PAL)");
static void solo_vin_config(struct solo_dev *solo_dev)
static void solo_disp_config(struct solo_dev *solo_dev)
static int solo_dma_vin_region(struct solo_dev *solo_dev, u32 off,
u16 val, int reg_size)
void solo_set_motion_threshold(struct solo_dev *solo_dev, u8 ch, u16 val)
static void solo_motion_config(struct solo_dev *solo_dev)
int solo_disp_init(struct solo_dev *solo_dev)
void solo_disp_exit(struct solo_dev *solo_dev)
