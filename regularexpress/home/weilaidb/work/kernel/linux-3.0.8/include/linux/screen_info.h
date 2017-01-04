#define _SCREEN_INFO_H
struct screen_info  __attribute__((packed));
#define VIDEO_TYPE_MDA		0x10
#define VIDEO_TYPE_CGA		0x11
#define VIDEO_TYPE_EGAM		0x20
#define VIDEO_TYPE_EGAC		0x21
#define VIDEO_TYPE_VGAC		0x22
#define VIDEO_TYPE_VLFB		0x23
#define VIDEO_TYPE_PICA_S3	0x30
#define VIDEO_TYPE_MIPS_G364	0x31
#define VIDEO_TYPE_SGI          0x33
#define VIDEO_TYPE_TGAC		0x40
#define VIDEO_TYPE_SUN          0x50
#define VIDEO_TYPE_SUNPCI       0x51
#define VIDEO_TYPE_PMAC		0x60
#define VIDEO_TYPE_EFI		0x70
#define VIDEO_FLAGS_NOCURSOR	(1 << 0)
extern struct screen_info screen_info;
#define ORIG_X			(screen_info.orig_x)
#define ORIG_Y			(screen_info.orig_y)
#define ORIG_VIDEO_MODE		(screen_info.orig_video_mode)
#define ORIG_VIDEO_COLS 	(screen_info.orig_video_cols)
#define ORIG_VIDEO_EGA_BX	(screen_info.orig_video_ega_bx)
#define ORIG_VIDEO_LINES	(screen_info.orig_video_lines)
#define ORIG_VIDEO_ISVGA	(screen_info.orig_video_isVGA)
#define ORIG_VIDEO_POINTS       (screen_info.orig_video_points)
