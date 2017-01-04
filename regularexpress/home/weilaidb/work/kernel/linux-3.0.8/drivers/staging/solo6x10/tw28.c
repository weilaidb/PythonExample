#define DEFAULT_HDELAY_NTSC		(32 - 4)
#define DEFAULT_HACTIVE_NTSC		(720 + 16)
#define DEFAULT_VDELAY_NTSC		(7 - 2)
#define DEFAULT_VACTIVE_NTSC		(240 + 4)
#define DEFAULT_HDELAY_PAL		(32 + 4)
#define DEFAULT_HACTIVE_PAL		(864-DEFAULT_HDELAY_PAL)
#define DEFAULT_VDELAY_PAL		(6)
#define DEFAULT_VACTIVE_PAL		(312-DEFAULT_VDELAY_PAL)
static u8 tbl_tw2864_template[] = ;
static u8 tbl_tw2865_ntsc_template[] = ;
static u8 tbl_tw2865_pal_template[] = ;
#define is_tw286x(__solo, __id) (!(__solo->tw2815 & (1 << __id)))
static u8 tw_readbyte(struct solo_dev *solo_dev, int chip_id, u8 tw6x_off,
u8 tw_off)
static void tw_writebyte(struct solo_dev *solo_dev, int chip_id,
u8 tw6x_off, u8 tw_off, u8 val)
static void tw_write_and_verify(struct solo_dev *solo_dev, u8 addr, u8 off,
u8 val)
static int tw2865_setup(struct solo_dev *solo_dev, u8 dev_addr)
static int tw2864_setup(struct solo_dev *solo_dev, u8 dev_addr)
static int tw2815_setup(struct solo_dev *solo_dev, u8 dev_addr)
#define FIRST_ACTIVE_LINE	0x0008
#define LAST_ACTIVE_LINE	0x0102
static void saa7128_setup(struct solo_dev *solo_dev)
int solo_tw28_init(struct solo_dev *solo_dev)
int tw28_get_video_status(struct solo_dev *solo_dev, u8 ch)
int tw28_set_ctrl_val(struct solo_dev *solo_dev, u32 ctrl, u8 ch, s32 val)
int tw28_get_ctrl_val(struct solo_dev *solo_dev, u32 ctrl, u8 ch,
s32 *val)
u8 tw28_get_audio_gain(struct solo_dev *solo_dev, u8 ch)
void tw28_set_audio_gain(struct solo_dev *solo_dev, u8 ch, u8 val)
