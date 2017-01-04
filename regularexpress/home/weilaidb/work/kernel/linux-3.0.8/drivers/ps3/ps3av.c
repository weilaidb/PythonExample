#define BUFSIZE          4096
#define PS3AV_BUF_SIZE   512
static int safe_mode;
static int timeout = 5000;
module_param(timeout, int, 0644);
static struct ps3av  *ps3av;
#define YUV444 PS3AV_CMD_VIDEO_CS_YUV444_8
#define RGB8   PS3AV_CMD_VIDEO_CS_RGB_8
#define XRGB   PS3AV_CMD_VIDEO_FMT_X8R8G8B8
#define A_N    PS3AV_CMD_AV_ASPECT_4_3
#define A_W    PS3AV_CMD_AV_ASPECT_16_9
static const struct avset_video_mode  video_mode_table[] = ;
static u32 cmd_table[] = ;
#define PS3AV_EVENT_CMD_MASK           0x10000000
#define PS3AV_EVENT_ID_MASK            0x0000ffff
#define PS3AV_CID_MASK                 0xffffffff
#define PS3AV_REPLY_BIT                0x80000000
#define ps3av_event_get_port_id(cid)   ((cid >> 16) & 0xff)
static u32 *ps3av_search_cmd_table(u32 cid, u32 mask)
static int ps3av_parse_event_packet(const struct ps3av_reply_hdr *hdr)
#define POLLING_INTERVAL  25
static int ps3av_vuart_write(struct ps3_system_bus_device *dev,
const void *buf, unsigned long size)
static int ps3av_vuart_read(struct ps3_system_bus_device *dev, void *buf,
unsigned long size, int timeout)
static int ps3av_send_cmd_pkt(const struct ps3av_send_hdr *send_buf,
struct ps3av_reply_hdr *recv_buf, int write_len,
int read_len)
static int ps3av_process_reply_packet(struct ps3av_send_hdr *cmd_buf,
const struct ps3av_reply_hdr *recv_buf,
int user_buf_size)
void ps3av_set_hdr(u32 cid, u16 size, struct ps3av_send_hdr *hdr)
int ps3av_do_pkt(u32 cid, u16 send_len, size_t usr_buf_size,
struct ps3av_send_hdr *buf)
static int ps3av_set_av_video_mute(u32 mute)
static int ps3av_set_video_disable_sig(void)
static int ps3av_set_audio_mute(u32 mute)
int ps3av_set_audio_mode(u32 ch, u32 fs, u32 word_bits, u32 format, u32 source)
EXPORT_SYMBOL_GPL(ps3av_set_audio_mode);
static int ps3av_set_videomode(void)
static void ps3av_set_videomode_packet(u32 id)
static void ps3av_set_videomode_cont(u32 id, u32 old_id)
static void ps3avd(struct work_struct *work)
#define SHIFT_50	0
#define SHIFT_60	4
#define SHIFT_VESA	8
static const struct  ps3av_preferred_modes[] = ;
static enum ps3av_mode_num ps3av_resbit2id(u32 res_50, u32 res_60,
u32 res_vesa)
static enum ps3av_mode_num ps3av_hdmi_get_id(struct ps3av_info_monitor *info)
static void ps3av_monitor_info_dump(const struct ps3av_pkt_av_get_monitor_info *monitor_info)
static const struct ps3av_monitor_quirk  ps3av_monitor_quirks[] = ;
static void ps3av_fixup_monitor_info(struct ps3av_info_monitor *info)
static int ps3av_auto_videomode(struct ps3av_pkt_av_get_hw_conf *av_hw_conf)
static int ps3av_get_hw_conf(struct ps3av *ps3av)
int ps3av_set_video_mode(int id)
EXPORT_SYMBOL_GPL(ps3av_set_video_mode);
int ps3av_get_auto_mode(void)
EXPORT_SYMBOL_GPL(ps3av_get_auto_mode);
int ps3av_get_mode(void)
EXPORT_SYMBOL_GPL(ps3av_get_mode);
int ps3av_video_mode2res(u32 id, u32 *xres, u32 *yres)
EXPORT_SYMBOL_GPL(ps3av_video_mode2res);
int ps3av_video_mute(int mute)
EXPORT_SYMBOL_GPL(ps3av_video_mute);
int ps3av_audio_mute_analog(int mute)
EXPORT_SYMBOL_GPL(ps3av_audio_mute_analog);
int ps3av_audio_mute(int mute)
EXPORT_SYMBOL_GPL(ps3av_audio_mute);
static int __devinit ps3av_probe(struct ps3_system_bus_device *dev)
static int ps3av_remove(struct ps3_system_bus_device *dev)
static void ps3av_shutdown(struct ps3_system_bus_device *dev)
static struct ps3_vuart_port_driver ps3av_driver = ;
static int __init ps3av_module_init(void)
static void __exit ps3av_module_exit(void)
subsys_initcall(ps3av_module_init);
module_exit(ps3av_module_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PS3 AV Settings Driver");
MODULE_AUTHOR("Sony Computer Entertainment Inc.");
MODULE_ALIAS(PS3_MODULE_ALIAS_AV_SETTINGS);
