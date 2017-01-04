static const struct video_fmt  ps3av_video_fmt_table[] = ;
static const struct  ps3av_cs_video2av_table[] = ;
static u32 ps3av_cs_video2av(int cs)
static u32 ps3av_cs_video2av_bitlen(int cs)
static const struct  ps3av_vid_video2av_table[] = ;
static u32 ps3av_vid_video2av(int vid)
static int ps3av_hdmi_range(void)
int ps3av_cmd_init(void)
int ps3av_cmd_fin(void)
int ps3av_cmd_av_video_mute(int num_of_port, u32 *port, u32 mute)
int ps3av_cmd_av_video_disable_sig(u32 port)
int ps3av_cmd_av_tv_mute(u32 avport, u32 mute)
int ps3av_cmd_enable_event(void)
int ps3av_cmd_av_hdmi_mode(u8 mode)
u32 ps3av_cmd_set_av_video_cs(void *p, u32 avport, int video_vid, int cs_out,
int aspect, u32 id)
u32 ps3av_cmd_set_video_mode(void *p, u32 head, int video_vid, int video_fmt,
u32 id)
int ps3av_cmd_video_format_black(u32 head, u32 video_fmt, u32 mute)
int ps3av_cmd_av_audio_mute(int num_of_port, u32 *port, u32 mute)
static const struct  ps3av_cnv_mclk_table[] = ;
static u8 ps3av_cnv_mclk(u32 fs)
#define BASE	PS3AV_CMD_AUDIO_FS_44K
static const u32 ps3av_ns_table[][5] = ;
static void ps3av_cnv_ns(u8 *ns, u32 fs, u32 video_vid)
#undef BASE
static u8 ps3av_cnv_enable(u32 source, const u8 *enable)
static u8 ps3av_cnv_fifomap(const u8 *map)
static u8 ps3av_cnv_inputlen(u32 word_bits)
static u8 ps3av_cnv_layout(u32 num_of_ch)
static void ps3av_cnv_info(struct ps3av_audio_info_frame *info,
const struct ps3av_pkt_audio_mode *mode)
static void ps3av_cnv_chstat(u8 *chstat, const u8 *cs_info)
u32 ps3av_cmd_set_av_audio_param(void *p, u32 port,
const struct ps3av_pkt_audio_mode *audio_mode,
u32 video_vid)
u8 ps3av_mode_cs_info[] = ;
EXPORT_SYMBOL_GPL(ps3av_mode_cs_info);
#define CS_44	0x00
#define CS_48	0x02
#define CS_88	0x08
#define CS_96	0x0a
#define CS_176	0x0c
#define CS_192	0x0e
#define CS_MASK	0x0f
#define CS_BIT	0x40
void ps3av_cmd_set_audio_mode(struct ps3av_pkt_audio_mode *audio, u32 avport,
u32 ch, u32 fs, u32 word_bits, u32 format,
u32 source)
int ps3av_cmd_audio_mode(struct ps3av_pkt_audio_mode *audio_mode)
int ps3av_cmd_audio_mute(int num_of_port, u32 *port, u32 mute)
int ps3av_cmd_audio_active(int active, u32 port)
int ps3av_cmd_avb_param(struct ps3av_pkt_avb_param *avb, u32 send_len)
int ps3av_cmd_av_get_hw_conf(struct ps3av_pkt_av_get_hw_conf *hw_conf)
int ps3av_cmd_video_get_monitor_info(struct ps3av_pkt_av_get_monitor_info *info,
u32 avport)
#define PS3AV_AV_LAYOUT_0 (PS3AV_CMD_AV_LAYOUT_32 \
| PS3AV_CMD_AV_LAYOUT_44 \
| PS3AV_CMD_AV_LAYOUT_48)
#define PS3AV_AV_LAYOUT_1 (PS3AV_AV_LAYOUT_0 \
| PS3AV_CMD_AV_LAYOUT_88 \
| PS3AV_CMD_AV_LAYOUT_96 \
| PS3AV_CMD_AV_LAYOUT_176 \
| PS3AV_CMD_AV_LAYOUT_192)
