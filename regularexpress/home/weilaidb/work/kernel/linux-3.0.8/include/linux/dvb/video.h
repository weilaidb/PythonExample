#define _DVBVIDEO_H_
typedef enum  video_format_t;
typedef enum  video_system_t;
typedef enum  video_displayformat_t;
typedef struct  video_size_t;
typedef enum  video_stream_source_t;
typedef enum  video_play_state_t;
#define VIDEO_CMD_PLAY        (0)
#define VIDEO_CMD_STOP        (1)
#define VIDEO_CMD_FREEZE      (2)
#define VIDEO_CMD_CONTINUE    (3)
#define VIDEO_CMD_FREEZE_TO_BLACK     	(1 << 0)
#define VIDEO_CMD_STOP_TO_BLACK      	(1 << 0)
#define VIDEO_CMD_STOP_IMMEDIATELY     	(1 << 1)
#define VIDEO_PLAY_FMT_NONE         (0)
#define VIDEO_PLAY_FMT_GOP          (1)
struct video_command ;
#define VIDEO_VSYNC_FIELD_UNKNOWN  	(0)
#define VIDEO_VSYNC_FIELD_ODD 		(1)
#define VIDEO_VSYNC_FIELD_EVEN		(2)
#define VIDEO_VSYNC_FIELD_PROGRESSIVE	(3)
struct video_event ;
struct video_status ;
struct video_still_picture ;
typedef
struct video_highlight  video_highlight_t;
typedef struct video_spu  video_spu_t;
typedef struct video_spu_palette  video_spu_palette_t;
typedef struct video_navi_pack  video_navi_pack_t;
typedef __u16 video_attributes_t;
#define VIDEO_CAP_MPEG1   1
#define VIDEO_CAP_MPEG2   2
#define VIDEO_CAP_SYS     4
#define VIDEO_CAP_PROG    8
#define VIDEO_CAP_SPU    16
#define VIDEO_CAP_NAVI   32
#define VIDEO_CAP_CSS    64
#define VIDEO_STOP                 _IO('o', 21)
#define VIDEO_PLAY                 _IO('o', 22)
#define VIDEO_FREEZE               _IO('o', 23)
#define VIDEO_CONTINUE             _IO('o', 24)
#define VIDEO_SELECT_SOURCE        _IO('o', 25)
#define VIDEO_SET_BLANK            _IO('o', 26)
#define VIDEO_GET_STATUS           _IOR('o', 27, struct video_status)
#define VIDEO_GET_EVENT            _IOR('o', 28, struct video_event)
#define VIDEO_SET_DISPLAY_FORMAT   _IO('o', 29)
#define VIDEO_STILLPICTURE         _IOW('o', 30, struct video_still_picture)
#define VIDEO_FAST_FORWARD         _IO('o', 31)
#define VIDEO_SLOWMOTION           _IO('o', 32)
#define VIDEO_GET_CAPABILITIES     _IOR('o', 33, unsigned int)
#define VIDEO_CLEAR_BUFFER         _IO('o',  34)
#define VIDEO_SET_ID               _IO('o', 35)
#define VIDEO_SET_STREAMTYPE       _IO('o', 36)
#define VIDEO_SET_FORMAT           _IO('o', 37)
#define VIDEO_SET_SYSTEM           _IO('o', 38)
#define VIDEO_SET_HIGHLIGHT        _IOW('o', 39, video_highlight_t)
#define VIDEO_SET_SPU              _IOW('o', 50, video_spu_t)
#define VIDEO_SET_SPU_PALETTE      _IOW('o', 51, video_spu_palette_t)
#define VIDEO_GET_NAVI             _IOR('o', 52, video_navi_pack_t)
#define VIDEO_SET_ATTRIBUTES       _IO('o', 53)
#define VIDEO_GET_SIZE             _IOR('o', 55, video_size_t)
#define VIDEO_GET_FRAME_RATE       _IOR('o', 56, unsigned int)
#define VIDEO_GET_PTS              _IOR('o', 57, __u64)
#define VIDEO_GET_FRAME_COUNT  	   _IOR('o', 58, __u64)
#define VIDEO_COMMAND     	   _IOWR('o', 59, struct video_command)
#define VIDEO_TRY_COMMAND 	   _IOWR('o', 60, struct video_command)
