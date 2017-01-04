#define __LINUX_OMAPFB_H__
#define OMAP_IOW(num, dtype)	_IOW('O', num, dtype)
#define OMAP_IOR(num, dtype)	_IOR('O', num, dtype)
#define OMAP_IOWR(num, dtype)	_IOWR('O', num, dtype)
#define OMAP_IO(num)		_IO('O', num)
#define OMAPFB_MIRROR		OMAP_IOW(31, int)
#define OMAPFB_SYNC_GFX		OMAP_IO(37)
#define OMAPFB_VSYNC		OMAP_IO(38)
#define OMAPFB_SET_UPDATE_MODE	OMAP_IOW(40, int)
#define OMAPFB_GET_CAPS		OMAP_IOR(42, struct omapfb_caps)
#define OMAPFB_GET_UPDATE_MODE	OMAP_IOW(43, int)
#define OMAPFB_LCD_TEST		OMAP_IOW(45, int)
#define OMAPFB_CTRL_TEST	OMAP_IOW(46, int)
#define OMAPFB_UPDATE_WINDOW_OLD OMAP_IOW(47, struct omapfb_update_window_old)
#define OMAPFB_SET_COLOR_KEY	OMAP_IOW(50, struct omapfb_color_key)
#define OMAPFB_GET_COLOR_KEY	OMAP_IOW(51, struct omapfb_color_key)
#define OMAPFB_SETUP_PLANE	OMAP_IOW(52, struct omapfb_plane_info)
#define OMAPFB_QUERY_PLANE	OMAP_IOW(53, struct omapfb_plane_info)
#define OMAPFB_UPDATE_WINDOW	OMAP_IOW(54, struct omapfb_update_window)
#define OMAPFB_SETUP_MEM	OMAP_IOW(55, struct omapfb_mem_info)
#define OMAPFB_QUERY_MEM	OMAP_IOW(56, struct omapfb_mem_info)
#define OMAPFB_WAITFORVSYNC	OMAP_IO(57)
#define OMAPFB_MEMORY_READ	OMAP_IOR(58, struct omapfb_memory_read)
#define OMAPFB_GET_OVERLAY_COLORMODE OMAP_IOR(59, struct omapfb_ovl_colormode)
#define OMAPFB_WAITFORGO	OMAP_IO(60)
#define OMAPFB_GET_VRAM_INFO	OMAP_IOR(61, struct omapfb_vram_info)
#define OMAPFB_SET_TEARSYNC	OMAP_IOW(62, struct omapfb_tearsync_info)
#define OMAPFB_GET_DISPLAY_INFO	OMAP_IOR(63, struct omapfb_display_info)
#define OMAPFB_CAPS_GENERIC_MASK	0x00000fff
#define OMAPFB_CAPS_LCDC_MASK		0x00fff000
#define OMAPFB_CAPS_PANEL_MASK		0xff000000
#define OMAPFB_CAPS_MANUAL_UPDATE	0x00001000
#define OMAPFB_CAPS_TEARSYNC		0x00002000
#define OMAPFB_CAPS_PLANE_RELOCATE_MEM	0x00004000
#define OMAPFB_CAPS_PLANE_SCALE		0x00008000
#define OMAPFB_CAPS_WINDOW_PIXEL_DOUBLE	0x00010000
#define OMAPFB_CAPS_WINDOW_SCALE	0x00020000
#define OMAPFB_CAPS_WINDOW_OVERLAY	0x00040000
#define OMAPFB_CAPS_WINDOW_ROTATE	0x00080000
#define OMAPFB_CAPS_SET_BACKLIGHT	0x01000000
#define OMAPFB_FORMAT_MASK		0x00ff
#define OMAPFB_FORMAT_FLAG_DOUBLE	0x0100
#define OMAPFB_FORMAT_FLAG_TEARSYNC	0x0200
#define OMAPFB_FORMAT_FLAG_FORCE_VSYNC	0x0400
#define OMAPFB_FORMAT_FLAG_ENABLE_OVERLAY	0x0800
#define OMAPFB_FORMAT_FLAG_DISABLE_OVERLAY	0x1000
#define OMAPFB_MEMTYPE_SDRAM		0
#define OMAPFB_MEMTYPE_SRAM		1
#define OMAPFB_MEMTYPE_MAX		1
#define OMAPFB_MEM_IDX_ENABLED	0x80
#define OMAPFB_MEM_IDX_MASK	0x7f
enum omapfb_color_format ;
struct omapfb_update_window ;
struct omapfb_update_window_old ;
enum omapfb_plane ;
enum omapfb_channel_out ;
struct omapfb_plane_info ;
struct omapfb_mem_info ;
struct omapfb_caps ;
enum omapfb_color_key_type ;
struct omapfb_color_key ;
enum omapfb_update_mode ;
struct omapfb_memory_read ;
struct omapfb_ovl_colormode ;
struct omapfb_vram_info ;
struct omapfb_tearsync_info ;
struct omapfb_display_info ;
#define OMAPFB_PLANE_NUM		1
#define OMAPFB_PLANE_NUM		3
struct omapfb_mem_region ;
struct omapfb_mem_desc ;
struct omapfb_platform_data ;
extern void omapfb_set_platform_data(struct omapfb_platform_data *data);
extern void omapfb_set_ctrl_platform_data(void *pdata);
extern void omapfb_reserve_sdram_memblock(void);
