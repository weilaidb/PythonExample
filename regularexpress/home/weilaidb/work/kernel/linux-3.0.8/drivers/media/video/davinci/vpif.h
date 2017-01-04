#define VPIF_H
#define VPIF_NUM_CHANNELS		(4)
#define VPIF_CAPTURE_NUM_CHANNELS	(2)
#define VPIF_DISPLAY_NUM_CHANNELS	(2)
extern void __iomem *vpif_base;
extern spinlock_t vpif_lock;
#define regr(reg)               readl((reg) + vpif_base)
#define regw(value, reg)        writel(value, (reg + vpif_base))
#define VPIF_PID			(0x0000)
#define VPIF_CH0_CTRL			(0x0004)
#define VPIF_CH1_CTRL			(0x0008)
#define VPIF_CH2_CTRL			(0x000C)
#define VPIF_CH3_CTRL			(0x0010)
#define VPIF_INTEN			(0x0020)
#define VPIF_INTEN_SET			(0x0024)
#define VPIF_INTEN_CLR			(0x0028)
#define VPIF_STATUS			(0x002C)
#define VPIF_STATUS_CLR			(0x0030)
#define VPIF_EMULATION_CTRL		(0x0034)
#define VPIF_REQ_SIZE			(0x0038)
#define VPIF_CH0_TOP_STRT_ADD_LUMA	(0x0040)
#define VPIF_CH0_BTM_STRT_ADD_LUMA	(0x0044)
#define VPIF_CH0_TOP_STRT_ADD_CHROMA	(0x0048)
#define VPIF_CH0_BTM_STRT_ADD_CHROMA	(0x004c)
#define VPIF_CH0_TOP_STRT_ADD_HANC	(0x0050)
#define VPIF_CH0_BTM_STRT_ADD_HANC	(0x0054)
#define VPIF_CH0_TOP_STRT_ADD_VANC	(0x0058)
#define VPIF_CH0_BTM_STRT_ADD_VANC	(0x005c)
#define VPIF_CH0_SP_CFG			(0x0060)
#define VPIF_CH0_IMG_ADD_OFST		(0x0064)
#define VPIF_CH0_HANC_ADD_OFST		(0x0068)
#define VPIF_CH0_H_CFG			(0x006c)
#define VPIF_CH0_V_CFG_00		(0x0070)
#define VPIF_CH0_V_CFG_01		(0x0074)
#define VPIF_CH0_V_CFG_02		(0x0078)
#define VPIF_CH0_V_CFG_03		(0x007c)
#define VPIF_CH1_TOP_STRT_ADD_LUMA	(0x0080)
#define VPIF_CH1_BTM_STRT_ADD_LUMA	(0x0084)
#define VPIF_CH1_TOP_STRT_ADD_CHROMA	(0x0088)
#define VPIF_CH1_BTM_STRT_ADD_CHROMA	(0x008c)
#define VPIF_CH1_TOP_STRT_ADD_HANC	(0x0090)
#define VPIF_CH1_BTM_STRT_ADD_HANC	(0x0094)
#define VPIF_CH1_TOP_STRT_ADD_VANC	(0x0098)
#define VPIF_CH1_BTM_STRT_ADD_VANC	(0x009c)
#define VPIF_CH1_SP_CFG			(0x00a0)
#define VPIF_CH1_IMG_ADD_OFST		(0x00a4)
#define VPIF_CH1_HANC_ADD_OFST		(0x00a8)
#define VPIF_CH1_H_CFG			(0x00ac)
#define VPIF_CH1_V_CFG_00		(0x00b0)
#define VPIF_CH1_V_CFG_01		(0x00b4)
#define VPIF_CH1_V_CFG_02		(0x00b8)
#define VPIF_CH1_V_CFG_03		(0x00bc)
#define VPIF_CH2_TOP_STRT_ADD_LUMA	(0x00c0)
#define VPIF_CH2_BTM_STRT_ADD_LUMA	(0x00c4)
#define VPIF_CH2_TOP_STRT_ADD_CHROMA	(0x00c8)
#define VPIF_CH2_BTM_STRT_ADD_CHROMA	(0x00cc)
#define VPIF_CH2_TOP_STRT_ADD_HANC	(0x00d0)
#define VPIF_CH2_BTM_STRT_ADD_HANC	(0x00d4)
#define VPIF_CH2_TOP_STRT_ADD_VANC	(0x00d8)
#define VPIF_CH2_BTM_STRT_ADD_VANC	(0x00dc)
#define VPIF_CH2_SP_CFG			(0x00e0)
#define VPIF_CH2_IMG_ADD_OFST		(0x00e4)
#define VPIF_CH2_HANC_ADD_OFST		(0x00e8)
#define VPIF_CH2_H_CFG			(0x00ec)
#define VPIF_CH2_V_CFG_00		(0x00f0)
#define VPIF_CH2_V_CFG_01		(0x00f4)
#define VPIF_CH2_V_CFG_02		(0x00f8)
#define VPIF_CH2_V_CFG_03		(0x00fc)
#define VPIF_CH2_HANC0_STRT		(0x0100)
#define VPIF_CH2_HANC0_SIZE		(0x0104)
#define VPIF_CH2_HANC1_STRT		(0x0108)
#define VPIF_CH2_HANC1_SIZE		(0x010c)
#define VPIF_CH2_VANC0_STRT		(0x0110)
#define VPIF_CH2_VANC0_SIZE		(0x0114)
#define VPIF_CH2_VANC1_STRT		(0x0118)
#define VPIF_CH2_VANC1_SIZE		(0x011c)
#define VPIF_CH3_TOP_STRT_ADD_LUMA	(0x0140)
#define VPIF_CH3_BTM_STRT_ADD_LUMA	(0x0144)
#define VPIF_CH3_TOP_STRT_ADD_CHROMA	(0x0148)
#define VPIF_CH3_BTM_STRT_ADD_CHROMA	(0x014c)
#define VPIF_CH3_TOP_STRT_ADD_HANC	(0x0150)
#define VPIF_CH3_BTM_STRT_ADD_HANC	(0x0154)
#define VPIF_CH3_TOP_STRT_ADD_VANC	(0x0158)
#define VPIF_CH3_BTM_STRT_ADD_VANC	(0x015c)
#define VPIF_CH3_SP_CFG			(0x0160)
#define VPIF_CH3_IMG_ADD_OFST		(0x0164)
#define VPIF_CH3_HANC_ADD_OFST		(0x0168)
#define VPIF_CH3_H_CFG			(0x016c)
#define VPIF_CH3_V_CFG_00		(0x0170)
#define VPIF_CH3_V_CFG_01		(0x0174)
#define VPIF_CH3_V_CFG_02		(0x0178)
#define VPIF_CH3_V_CFG_03		(0x017c)
#define VPIF_CH3_HANC0_STRT		(0x0180)
#define VPIF_CH3_HANC0_SIZE		(0x0184)
#define VPIF_CH3_HANC1_STRT		(0x0188)
#define VPIF_CH3_HANC1_SIZE		(0x018c)
#define VPIF_CH3_VANC0_STRT		(0x0190)
#define VPIF_CH3_VANC0_SIZE		(0x0194)
#define VPIF_CH3_VANC1_STRT		(0x0198)
#define VPIF_CH3_VANC1_SIZE		(0x019c)
#define VPIF_IODFT_CTRL			(0x01c0)
static inline void vpif_set_bit(u32 reg, u32 bit)
static inline void vpif_clr_bit(u32 reg, u32 bit)
#undef GENERATE_MASK
#define GENERATE_MASK(bits, pos) \
((((0xFFFFFFFF) << (32 - bits)) >> (32 - bits)) << pos)
#define VPIF_CH_DATA_MODE_BIT	(2)
#define VPIF_CH_YC_MUX_BIT	(3)
#define VPIF_CH_SDR_FMT_BIT	(4)
#define VPIF_CH_HANC_EN_BIT	(8)
#define VPIF_CH_VANC_EN_BIT	(9)
#define VPIF_CAPTURE_CH_NIP	(10)
#define VPIF_DISPLAY_CH_NIP	(11)
#define VPIF_DISPLAY_PIX_EN_BIT	(10)
#define VPIF_CH_INPUT_FIELD_FRAME_BIT	(12)
#define VPIF_CH_FID_POLARITY_BIT	(15)
#define VPIF_CH_V_VALID_POLARITY_BIT	(14)
#define VPIF_CH_H_VALID_POLARITY_BIT	(13)
#define VPIF_CH_DATA_WIDTH_BIT		(28)
#define VPIF_CH_CLK_EDGE_CTRL_BIT	(31)
#define VPIF_CH_EAVSAV_MASK	GENERATE_MASK(13, 0)
#define VPIF_CH_LEN_MASK	GENERATE_MASK(12, 0)
#define VPIF_CH_WIDTH_MASK	GENERATE_MASK(13, 0)
#define VPIF_CH_LEN_SHIFT	(16)
#define VPIF_REQ_SIZE_MASK	(0x1ff)
#define VPIF_INTEN_FRAME_CH0	(0x00000001)
#define VPIF_INTEN_FRAME_CH1	(0x00000002)
#define VPIF_INTEN_FRAME_CH2	(0x00000004)
#define VPIF_INTEN_FRAME_CH3	(0x00000008)
#define VPIF_CH0_CLK_EN		(0x00000002)
#define VPIF_CH0_EN		(0x00000001)
#define VPIF_CH1_CLK_EN		(0x00000002)
#define VPIF_CH1_EN		(0x00000001)
#define VPIF_CH2_CLK_EN		(0x00000002)
#define VPIF_CH2_EN		(0x00000001)
#define VPIF_CH3_CLK_EN		(0x00000002)
#define VPIF_CH3_EN		(0x00000001)
#define VPIF_CH_CLK_EN		(0x00000002)
#define VPIF_CH_EN		(0x00000001)
#define VPIF_INT_TOP	(0x00)
#define VPIF_INT_BOTTOM	(0x01)
#define VPIF_INT_BOTH	(0x02)
#define VPIF_CH0_INT_CTRL_SHIFT	(6)
#define VPIF_CH1_INT_CTRL_SHIFT	(6)
#define VPIF_CH2_INT_CTRL_SHIFT	(6)
#define VPIF_CH3_INT_CTRL_SHIFT	(6)
#define VPIF_CH_INT_CTRL_SHIFT	(6)
#define channel0_intr_assert()	(regw((regr(VPIF_CH0_CTRL)|\
(VPIF_INT_BOTH << VPIF_CH0_INT_CTRL_SHIFT)), VPIF_CH0_CTRL))
#define channel1_intr_assert()	(regw((regr(VPIF_CH1_CTRL)|\
(VPIF_INT_BOTH << VPIF_CH1_INT_CTRL_SHIFT)), VPIF_CH1_CTRL))
#define channel2_intr_assert() 	(regw((regr(VPIF_CH2_CTRL)|\
(VPIF_INT_BOTH << VPIF_CH2_INT_CTRL_SHIFT)), VPIF_CH2_CTRL))
#define channel3_intr_assert() 	(regw((regr(VPIF_CH3_CTRL)|\
(VPIF_INT_BOTH << VPIF_CH3_INT_CTRL_SHIFT)), VPIF_CH3_CTRL))
#define VPIF_CH_FID_MASK	(0x20)
#define VPIF_CH_FID_SHIFT	(5)
#define VPIF_NTSC_VBI_START_FIELD0	(1)
#define VPIF_NTSC_VBI_START_FIELD1	(263)
#define VPIF_PAL_VBI_START_FIELD0	(624)
#define VPIF_PAL_VBI_START_FIELD1	(311)
#define VPIF_NTSC_HBI_START_FIELD0	(1)
#define VPIF_NTSC_HBI_START_FIELD1	(263)
#define VPIF_PAL_HBI_START_FIELD0	(624)
#define VPIF_PAL_HBI_START_FIELD1	(311)
#define VPIF_NTSC_VBI_COUNT_FIELD0	(20)
#define VPIF_NTSC_VBI_COUNT_FIELD1	(19)
#define VPIF_PAL_VBI_COUNT_FIELD0	(24)
#define VPIF_PAL_VBI_COUNT_FIELD1	(25)
#define VPIF_NTSC_HBI_COUNT_FIELD0	(263)
#define VPIF_NTSC_HBI_COUNT_FIELD1	(262)
#define VPIF_PAL_HBI_COUNT_FIELD0	(312)
#define VPIF_PAL_HBI_COUNT_FIELD1	(313)
#define VPIF_NTSC_VBI_SAMPLES_PER_LINE	(720)
#define VPIF_PAL_VBI_SAMPLES_PER_LINE	(720)
#define VPIF_NTSC_HBI_SAMPLES_PER_LINE	(268)
#define VPIF_PAL_HBI_SAMPLES_PER_LINE	(280)
#define VPIF_CH_VANC_EN			(0x20)
#define VPIF_DMA_REQ_SIZE		(0x080)
#define VPIF_EMULATION_DISABLE		(0x01)
extern u8 irq_vpif_capture_channel[VPIF_NUM_CHANNELS];
static inline void enable_channel0(int enable)
static inline void enable_channel1(int enable)
static inline void channel0_intr_enable(int enable)
static inline void channel1_intr_enable(int enable)
static inline void ch0_set_videobuf_addr_yc_nmux(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch0_set_videobuf_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch1_set_videobuf_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch0_set_vbi_addr(unsigned long top_vbi,
unsigned long btm_vbi, unsigned long a, unsigned long b)
static inline void ch0_set_hbi_addr(unsigned long top_vbi,
unsigned long btm_vbi, unsigned long a, unsigned long b)
static inline void ch1_set_vbi_addr(unsigned long top_vbi,
unsigned long btm_vbi, unsigned long a, unsigned long b)
static inline void ch1_set_hbi_addr(unsigned long top_vbi,
unsigned long btm_vbi, unsigned long a, unsigned long b)
static inline void disable_raw_feature(u8 channel_id, u8 index)
static inline void enable_raw_feature(u8 channel_id, u8 index)
static inline void enable_channel2(int enable)
static inline void enable_channel3(int enable)
static inline void channel2_intr_enable(int enable)
static inline void channel3_intr_enable(int enable)
static inline void channel2_raw_enable(int enable, u8 index)
static inline void channel3_raw_enable(int enable, u8 index)
static inline void ch2_set_videobuf_addr_yc_nmux(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch2_set_videobuf_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch3_set_videobuf_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch2_set_vbi_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
static inline void ch3_set_vbi_addr(unsigned long top_strt_luma,
unsigned long btm_strt_luma,
unsigned long top_strt_chroma,
unsigned long btm_strt_chroma)
#define VPIF_MAX_NAME	(30)
struct vpif_channel_config_params ;
extern const unsigned int vpif_ch_params_count;
extern const struct vpif_channel_config_params ch_params[];
struct vpif_video_params;
struct vpif_params;
struct vpif_vbi_params;
int vpif_set_video_params(struct vpif_params *vpifparams, u8 channel_id);
void vpif_set_vbi_display_params(struct vpif_vbi_params *vbiparams,
u8 channel_id);
int vpif_channel_getfid(u8 channel_id);
enum data_size ;
struct vpif_vbi_params ;
struct vpif_video_params ;
struct vpif_params ;
