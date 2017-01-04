#define CX2341X_H
enum cx2341x_port ;
enum cx2341x_cap ;
struct cx2341x_mpeg_params ;
#define CX2341X_MBOX_MAX_DATA 16
extern const u32 cx2341x_mpeg_ctrls[];
typedef int (*cx2341x_mbox_func)(void *priv, u32 cmd, int in, int out,
u32 data[CX2341X_MBOX_MAX_DATA]);
int cx2341x_update(void *priv, cx2341x_mbox_func func,
const struct cx2341x_mpeg_params *old,
const struct cx2341x_mpeg_params *new);
int cx2341x_ctrl_query(const struct cx2341x_mpeg_params *params,
struct v4l2_queryctrl *qctrl);
const char * const *cx2341x_ctrl_get_menu(const struct cx2341x_mpeg_params *p, u32 id);
int cx2341x_ext_ctrls(struct cx2341x_mpeg_params *params, int busy,
struct v4l2_ext_controls *ctrls, unsigned int cmd);
void cx2341x_fill_defaults(struct cx2341x_mpeg_params *p);
void cx2341x_log_status(const struct cx2341x_mpeg_params *p, const char *prefix);
struct cx2341x_handler;
struct cx2341x_handler_ops ;
struct cx2341x_handler ;
int cx2341x_handler_init(struct cx2341x_handler *cxhdl,
unsigned nr_of_controls_hint);
void cx2341x_handler_set_50hz(struct cx2341x_handler *cxhdl, int is_50hz);
int cx2341x_handler_setup(struct cx2341x_handler *cxhdl);
void cx2341x_handler_set_busy(struct cx2341x_handler *cxhdl, int busy);
#define CX2341X_FIRM_ENC_FILENAME "v4l-cx2341x-enc.fw"
#define CX2341X_FIRM_DEC_FILENAME "v4l-cx2341x-dec.fw"
#define CX2341X_DEC_PING_FW 			0x00
#define CX2341X_DEC_START_PLAYBACK 		0x01
#define CX2341X_DEC_STOP_PLAYBACK 		0x02
#define CX2341X_DEC_SET_PLAYBACK_SPEED 		0x03
#define CX2341X_DEC_STEP_VIDEO 			0x05
#define CX2341X_DEC_SET_DMA_BLOCK_SIZE 		0x08
#define CX2341X_DEC_GET_XFER_INFO		0x09
#define CX2341X_DEC_GET_DMA_STATUS		0x0a
#define CX2341X_DEC_SCHED_DMA_FROM_HOST		0x0b
#define CX2341X_DEC_PAUSE_PLAYBACK 		0x0d
#define CX2341X_DEC_HALT_FW 			0x0e
#define CX2341X_DEC_SET_STANDARD 		0x10
#define CX2341X_DEC_GET_VERSION			0x11
#define CX2341X_DEC_SET_STREAM_INPUT 		0x14
#define CX2341X_DEC_GET_TIMING_INFO 		0x15
#define CX2341X_DEC_SET_AUDIO_MODE 		0x16
#define CX2341X_DEC_SET_EVENT_NOTIFICATION	0x17
#define CX2341X_DEC_SET_DISPLAY_BUFFERS		0x18
#define CX2341X_DEC_EXTRACT_VBI 		0x19
#define CX2341X_DEC_SET_DECODER_SOURCE 		0x1a
#define CX2341X_DEC_SET_PREBUFFERING		0x1e
#define CX2341X_ENC_PING_FW 			0x80
#define CX2341X_ENC_START_CAPTURE 		0x81
#define CX2341X_ENC_STOP_CAPTURE 		0x82
#define CX2341X_ENC_SET_AUDIO_ID 		0x89
#define CX2341X_ENC_SET_VIDEO_ID 		0x8b
#define CX2341X_ENC_SET_PCR_ID 			0x8d
#define CX2341X_ENC_SET_FRAME_RATE 		0x8f
#define CX2341X_ENC_SET_FRAME_SIZE 		0x91
#define CX2341X_ENC_SET_BIT_RATE 		0x95
#define CX2341X_ENC_SET_GOP_PROPERTIES 		0x97
#define CX2341X_ENC_SET_ASPECT_RATIO 		0x99
#define CX2341X_ENC_SET_DNR_FILTER_MODE 	0x9b
#define CX2341X_ENC_SET_DNR_FILTER_PROPS 	0x9d
#define CX2341X_ENC_SET_CORING_LEVELS 		0x9f
#define CX2341X_ENC_SET_SPATIAL_FILTER_TYPE 	0xa1
#define CX2341X_ENC_SET_VBI_LINE 		0xb7
#define CX2341X_ENC_SET_STREAM_TYPE 		0xb9
#define CX2341X_ENC_SET_OUTPUT_PORT 		0xbb
#define CX2341X_ENC_SET_AUDIO_PROPERTIES 	0xbd
#define CX2341X_ENC_HALT_FW 			0xc3
#define CX2341X_ENC_GET_VERSION			0xc4
#define CX2341X_ENC_SET_GOP_CLOSURE 		0xc5
#define CX2341X_ENC_GET_SEQ_END 		0xc6
#define CX2341X_ENC_SET_PGM_INDEX_INFO 		0xc7
#define CX2341X_ENC_SET_VBI_CONFIG		0xc8
#define CX2341X_ENC_SET_DMA_BLOCK_SIZE 		0xc9
#define CX2341X_ENC_GET_PREV_DMA_INFO_MB_10	0xca
#define CX2341X_ENC_GET_PREV_DMA_INFO_MB_9	0xcb
#define CX2341X_ENC_SCHED_DMA_TO_HOST 		0xcc
#define CX2341X_ENC_INITIALIZE_INPUT 		0xcd
#define CX2341X_ENC_SET_FRAME_DROP_RATE 	0xd0
#define CX2341X_ENC_PAUSE_ENCODER 		0xd2
#define CX2341X_ENC_REFRESH_INPUT 		0xd3
#define CX2341X_ENC_SET_COPYRIGHT		0xd4
#define CX2341X_ENC_SET_EVENT_NOTIFICATION 	0xd5
#define CX2341X_ENC_SET_NUM_VSYNC_LINES 	0xd6
#define CX2341X_ENC_SET_PLACEHOLDER 		0xd7
#define CX2341X_ENC_MUTE_VIDEO 			0xd9
#define CX2341X_ENC_MUTE_AUDIO 			0xda
#define CX2341X_ENC_SET_VERT_CROP_LINE		0xdb
#define CX2341X_ENC_MISC 			0xdc
#define CX2341X_OSD_GET_FRAMEBUFFER 		0x41
#define CX2341X_OSD_GET_PIXEL_FORMAT 		0x42
#define CX2341X_OSD_SET_PIXEL_FORMAT 		0x43
#define CX2341X_OSD_GET_STATE 			0x44
#define CX2341X_OSD_SET_STATE 			0x45
#define CX2341X_OSD_GET_OSD_COORDS 		0x46
#define CX2341X_OSD_SET_OSD_COORDS 		0x47
#define CX2341X_OSD_GET_SCREEN_COORDS 		0x48
#define CX2341X_OSD_SET_SCREEN_COORDS 		0x49
#define CX2341X_OSD_GET_GLOBAL_ALPHA 		0x4a
#define CX2341X_OSD_SET_GLOBAL_ALPHA 		0x4b
#define CX2341X_OSD_SET_BLEND_COORDS 		0x4c
#define CX2341X_OSD_GET_FLICKER_STATE 		0x4f
#define CX2341X_OSD_SET_FLICKER_STATE 		0x50
#define CX2341X_OSD_BLT_COPY 			0x52
#define CX2341X_OSD_BLT_FILL 			0x53
#define CX2341X_OSD_BLT_TEXT 			0x54
#define CX2341X_OSD_SET_FRAMEBUFFER_WINDOW 	0x56
#define CX2341X_OSD_SET_CHROMA_KEY 		0x60
#define CX2341X_OSD_GET_ALPHA_CONTENT_INDEX 	0x61
#define CX2341X_OSD_SET_ALPHA_CONTENT_INDEX 	0x62
