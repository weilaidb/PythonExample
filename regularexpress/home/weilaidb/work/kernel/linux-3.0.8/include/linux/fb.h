#define _LINUX_FB_H
#define FB_MAX			32
#define FBIOGET_VSCREENINFO	0x4600
#define FBIOPUT_VSCREENINFO	0x4601
#define FBIOGET_FSCREENINFO	0x4602
#define FBIOGETCMAP		0x4604
#define FBIOPUTCMAP		0x4605
#define FBIOPAN_DISPLAY		0x4606
#define FBIO_CURSOR            _IOWR('F', 0x08, struct fb_cursor_user)
#define FBIO_CURSOR            _IOWR('F', 0x08, struct fb_cursor)
#define FBIOGET_CON2FBMAP	0x460F
#define FBIOPUT_CON2FBMAP	0x4610
#define FBIOBLANK		0x4611
#define FBIOGET_VBLANK		_IOR('F', 0x12, struct fb_vblank)
#define FBIO_ALLOC              0x4613
#define FBIO_FREE               0x4614
#define FBIOGET_GLYPH           0x4615
#define FBIOGET_HWCINFO         0x4616
#define FBIOPUT_MODEINFO        0x4617
#define FBIOGET_DISPINFO        0x4618
#define FBIO_WAITFORVSYNC	_IOW('F', 0x20, __u32)
#define FB_TYPE_PACKED_PIXELS		0
#define FB_TYPE_PLANES			1
#define FB_TYPE_INTERLEAVED_PLANES	2
#define FB_TYPE_TEXT			3
#define FB_TYPE_VGA_PLANES		4
#define FB_AUX_TEXT_MDA		0
#define FB_AUX_TEXT_CGA		1
#define FB_AUX_TEXT_S3_MMIO	2
#define FB_AUX_TEXT_MGA_STEP16	3
#define FB_AUX_TEXT_MGA_STEP8	4
#define FB_AUX_TEXT_SVGA_GROUP	8
#define FB_AUX_TEXT_SVGA_MASK	7
#define FB_AUX_TEXT_SVGA_STEP2	8
#define FB_AUX_TEXT_SVGA_STEP4	9
#define FB_AUX_TEXT_SVGA_STEP8	10
#define FB_AUX_TEXT_SVGA_STEP16	11
#define FB_AUX_TEXT_SVGA_LAST	15
#define FB_AUX_VGA_PLANES_VGA4		0
#define FB_AUX_VGA_PLANES_CFB4		1
#define FB_AUX_VGA_PLANES_CFB8		2
#define FB_VISUAL_MONO01		0
#define FB_VISUAL_MONO10		1
#define FB_VISUAL_TRUECOLOR		2
#define FB_VISUAL_PSEUDOCOLOR		3
#define FB_VISUAL_DIRECTCOLOR		4
#define FB_VISUAL_STATIC_PSEUDOCOLOR	5
#define FB_ACCEL_NONE		0
#define FB_ACCEL_ATARIBLITT	1
#define FB_ACCEL_AMIGABLITT	2
#define FB_ACCEL_S3_TRIO64	3
#define FB_ACCEL_NCR_77C32BLT	4
#define FB_ACCEL_S3_VIRGE	5
#define FB_ACCEL_ATI_MACH64GX	6
#define FB_ACCEL_DEC_TGA	7
#define FB_ACCEL_ATI_MACH64CT	8
#define FB_ACCEL_ATI_MACH64VT	9
#define FB_ACCEL_ATI_MACH64GT	10
#define FB_ACCEL_SUN_CREATOR	11
#define FB_ACCEL_SUN_CGSIX	12
#define FB_ACCEL_SUN_LEO	13
#define FB_ACCEL_IMS_TWINTURBO	14
#define FB_ACCEL_3DLABS_PERMEDIA2 15
#define FB_ACCEL_MATROX_MGA2064W 16
#define FB_ACCEL_MATROX_MGA1064SG 17
#define FB_ACCEL_MATROX_MGA2164W 18
#define FB_ACCEL_MATROX_MGA2164W_AGP 19
#define FB_ACCEL_MATROX_MGAG100	20
#define FB_ACCEL_MATROX_MGAG200	21
#define FB_ACCEL_SUN_CG14	22
#define FB_ACCEL_SUN_BWTWO	23
#define FB_ACCEL_SUN_CGTHREE	24
#define FB_ACCEL_SUN_TCX	25
#define FB_ACCEL_MATROX_MGAG400	26
#define FB_ACCEL_NV3		27
#define FB_ACCEL_NV4		28
#define FB_ACCEL_NV5		29
#define FB_ACCEL_CT_6555x	30
#define FB_ACCEL_3DFX_BANSHEE	31
#define FB_ACCEL_ATI_RAGE128	32
#define FB_ACCEL_IGS_CYBER2000	33
#define FB_ACCEL_IGS_CYBER2010	34
#define FB_ACCEL_IGS_CYBER5000	35
#define FB_ACCEL_SIS_GLAMOUR    36
#define FB_ACCEL_3DLABS_PERMEDIA3 37
#define FB_ACCEL_ATI_RADEON	38
#define FB_ACCEL_I810           39
#define FB_ACCEL_SIS_GLAMOUR_2  40
#define FB_ACCEL_SIS_XABRE      41
#define FB_ACCEL_I830           42
#define FB_ACCEL_NV_10          43
#define FB_ACCEL_NV_20          44
#define FB_ACCEL_NV_30          45
#define FB_ACCEL_NV_40          46
#define FB_ACCEL_XGI_VOLARI_V	47
#define FB_ACCEL_XGI_VOLARI_Z	48
#define FB_ACCEL_OMAP1610	49
#define FB_ACCEL_TRIDENT_TGUI	50
#define FB_ACCEL_TRIDENT_3DIMAGE 51
#define FB_ACCEL_TRIDENT_BLADE3D 52
#define FB_ACCEL_TRIDENT_BLADEXP 53
#define FB_ACCEL_CIRRUS_ALPINE   53
#define FB_ACCEL_NEOMAGIC_NM2070 90
#define FB_ACCEL_NEOMAGIC_NM2090 91
#define FB_ACCEL_NEOMAGIC_NM2093 92
#define FB_ACCEL_NEOMAGIC_NM2097 93
#define FB_ACCEL_NEOMAGIC_NM2160 94
#define FB_ACCEL_NEOMAGIC_NM2200 95
#define FB_ACCEL_NEOMAGIC_NM2230 96
#define FB_ACCEL_NEOMAGIC_NM2360 97
#define FB_ACCEL_NEOMAGIC_NM2380 98
#define FB_ACCEL_PXA3XX		 99
#define FB_ACCEL_SAVAGE4        0x80
#define FB_ACCEL_SAVAGE3D       0x81
#define FB_ACCEL_SAVAGE3D_MV    0x82
#define FB_ACCEL_SAVAGE2000     0x83
#define FB_ACCEL_SAVAGE_MX_MV   0x84
#define FB_ACCEL_SAVAGE_MX      0x85
#define FB_ACCEL_SAVAGE_IX_MV   0x86
#define FB_ACCEL_SAVAGE_IX      0x87
#define FB_ACCEL_PROSAVAGE_PM   0x88
#define FB_ACCEL_PROSAVAGE_KM   0x89
#define FB_ACCEL_S3TWISTER_P    0x8a
#define FB_ACCEL_S3TWISTER_K    0x8b
#define FB_ACCEL_SUPERSAVAGE    0x8c
#define FB_ACCEL_PROSAVAGE_DDR  0x8d
#define FB_ACCEL_PROSAVAGE_DDRK 0x8e
#define FB_ACCEL_PUV3_UNIGFX	0xa0
struct fb_fix_screeninfo ;
struct fb_bitfield ;
#define FB_NONSTD_HAM		1
#define FB_NONSTD_REV_PIX_IN_B	2
#define FB_ACTIVATE_NOW		0
#define FB_ACTIVATE_NXTOPEN	1
#define FB_ACTIVATE_TEST	2
#define FB_ACTIVATE_MASK       15
#define FB_ACTIVATE_VBL	       16
#define FB_CHANGE_CMAP_VBL     32
#define FB_ACTIVATE_ALL	       64
#define FB_ACTIVATE_FORCE     128
#define FB_ACTIVATE_INV_MODE  256
#define FB_ACCELF_TEXT		1
#define FB_SYNC_HOR_HIGH_ACT	1
#define FB_SYNC_VERT_HIGH_ACT	2
#define FB_SYNC_EXT		4
#define FB_SYNC_COMP_HIGH_ACT	8
#define FB_SYNC_BROADCAST	16
#define FB_SYNC_ON_GREEN	32
#define FB_VMODE_NONINTERLACED  0
#define FB_VMODE_INTERLACED	1
#define FB_VMODE_DOUBLE		2
#define FB_VMODE_ODD_FLD_FIRST	4
#define FB_VMODE_MASK		255
#define FB_VMODE_YWRAP		256
#define FB_VMODE_SMOOTH_XPAN	512
#define FB_VMODE_CONUPDATE	512
#define FB_ROTATE_UR      0
#define FB_ROTATE_CW      1
#define FB_ROTATE_UD      2
#define FB_ROTATE_CCW     3
#define PICOS2KHZ(a) (1000000000UL/(a))
#define KHZ2PICOS(a) (1000000000UL/(a))
struct fb_var_screeninfo ;
struct fb_cmap ;
struct fb_con2fbmap ;
#define VESA_NO_BLANKING        0
#define VESA_VSYNC_SUSPEND      1
#define VESA_HSYNC_SUSPEND      2
#define VESA_POWERDOWN          3
enum ;
#define FB_VBLANK_VBLANKING	0x001
#define FB_VBLANK_HBLANKING	0x002
#define FB_VBLANK_HAVE_VBLANK	0x004
#define FB_VBLANK_HAVE_HBLANK	0x008
#define FB_VBLANK_HAVE_COUNT	0x010
#define FB_VBLANK_HAVE_VCOUNT	0x020
#define FB_VBLANK_HAVE_HCOUNT	0x040
#define FB_VBLANK_VSYNCING	0x080
#define FB_VBLANK_HAVE_VSYNC	0x100
struct fb_vblank ;
#define ROP_COPY 0
#define ROP_XOR  1
struct fb_copyarea ;
struct fb_fillrect ;
struct fb_image ;
#define FB_CUR_SETIMAGE 0x01
#define FB_CUR_SETPOS   0x02
#define FB_CUR_SETHOT   0x04
#define FB_CUR_SETCMAP  0x08
#define FB_CUR_SETSHAPE 0x10
#define FB_CUR_SETSIZE	0x20
#define FB_CUR_SETALL   0xFF
struct fbcurpos ;
struct fb_cursor ;
#define FB_BACKLIGHT_LEVELS	128
#define FB_BACKLIGHT_MAX	0xFF
struct vm_area_struct;
struct fb_info;
struct device;
struct file;
#define FB_DPMS_ACTIVE_OFF	1
#define FB_DPMS_SUSPEND		2
#define FB_DPMS_STANDBY		4
#define FB_DISP_DDI		1
#define FB_DISP_ANA_700_300	2
#define FB_DISP_ANA_714_286	4
#define FB_DISP_ANA_1000_400	8
#define FB_DISP_ANA_700_000	16
#define FB_DISP_MONO		32
#define FB_DISP_RGB		64
#define FB_DISP_MULTI		128
#define FB_DISP_UNKNOWN		256
#define FB_SIGNAL_NONE		0
#define FB_SIGNAL_BLANK_BLANK	1
#define FB_SIGNAL_SEPARATE	2
#define FB_SIGNAL_COMPOSITE	4
#define FB_SIGNAL_SYNC_ON_GREEN	8
#define FB_SIGNAL_SERRATION_ON	16
#define FB_MISC_PRIM_COLOR	1
#define FB_MISC_1ST_DETAIL	2
struct fb_chroma ;
struct fb_monspecs ;
struct fb_cmap_user ;
struct fb_image_user ;
struct fb_cursor_user ;
#define FB_EVENT_MODE_CHANGE		0x01
#define FB_EVENT_SUSPEND		0x02
#define FB_EVENT_RESUME			0x03
#define FB_EVENT_MODE_DELETE            0x04
#define FB_EVENT_FB_REGISTERED          0x05
#define FB_EVENT_FB_UNREGISTERED        0x06
#define FB_EVENT_GET_CONSOLE_MAP        0x07
#define FB_EVENT_SET_CONSOLE_MAP        0x08
#define FB_EVENT_BLANK                  0x09
#define FB_EVENT_NEW_MODELIST           0x0A
#define FB_EVENT_MODE_CHANGE_ALL	0x0B
#define FB_EVENT_CONBLANK               0x0C
#define FB_EVENT_GET_REQ                0x0D
#define FB_EVENT_FB_UNBIND              0x0E
#define FB_EVENT_REMAP_ALL_CONSOLE      0x0F
struct fb_event ;
struct fb_blit_caps ;
extern int fb_register_client(struct notifier_block *nb);
extern int fb_unregister_client(struct notifier_block *nb);
extern int fb_notifier_call_chain(unsigned long val, void *v);
#define FB_PIXMAP_DEFAULT 1
#define FB_PIXMAP_SYSTEM  2
#define FB_PIXMAP_IO      4
#define FB_PIXMAP_SYNC    256
struct fb_pixmap ;
struct fb_deferred_io ;
struct fb_ops ;
#define FB_TILE_CURSOR_NONE        0
#define FB_TILE_CURSOR_UNDERLINE   1
#define FB_TILE_CURSOR_LOWER_THIRD 2
#define FB_TILE_CURSOR_LOWER_HALF  3
#define FB_TILE_CURSOR_TWO_THIRDS  4
#define FB_TILE_CURSOR_BLOCK       5
struct fb_tilemap ;
struct fb_tilerect ;
struct fb_tilearea ;
struct fb_tileblit ;
struct fb_tilecursor ;
struct fb_tile_ops ;
#define FBINFO_MODULE		0x0001
#define FBINFO_HWACCEL_DISABLED	0x0002
#define FBINFO_VIRTFB		0x0004
#define FBINFO_PARTIAL_PAN_OK	0x0040
#define FBINFO_READS_FAST	0x0080
#define FBINFO_HWACCEL_NONE		0x0000
#define FBINFO_HWACCEL_COPYAREA		0x0100
#define FBINFO_HWACCEL_FILLRECT		0x0200
#define FBINFO_HWACCEL_IMAGEBLIT	0x0400
#define FBINFO_HWACCEL_ROTATE		0x0800
#define FBINFO_HWACCEL_XPAN		0x1000
#define FBINFO_HWACCEL_YPAN		0x2000
#define FBINFO_HWACCEL_YWRAP		0x4000
#define FBINFO_MISC_USEREVENT          0x10000
#define FBINFO_MISC_TILEBLITTING       0x20000
#define FBINFO_MISC_ALWAYS_SETPAR   0x40000
#define FBINFO_MISC_FIRMWARE        0x80000
#define FBINFO_FOREIGN_ENDIAN	0x100000
#define FBINFO_BE_MATH  0x100000
#define FBINFO_CAN_FORCE_OUTPUT     0x200000
struct fb_info ;
static inline struct apertures_struct *alloc_apertures(unsigned int max_num)
#define FBINFO_DEFAULT	FBINFO_MODULE
#define FBINFO_DEFAULT	0
#define FBINFO_FLAG_MODULE	FBINFO_MODULE
#define FBINFO_FLAG_DEFAULT	FBINFO_DEFAULT
#define STUPID_ACCELF_TEXT_SHIT
#if defined(__sparc__)
#define fb_readb sbus_readb
#define fb_readw sbus_readw
#define fb_readl sbus_readl
#define fb_readq sbus_readq
#define fb_writeb sbus_writeb
#define fb_writew sbus_writew
#define fb_writel sbus_writel
#define fb_writeq sbus_writeq
#define fb_memset sbus_memset_io
#define fb_memcpy_fromfb sbus_memcpy_fromio
#define fb_memcpy_tofb sbus_memcpy_toio
#elif defined(__i386__) || defined(__alpha__) || defined(__x86_64__) || defined(__hppa__) || defined(__sh__) || defined(__powerpc__) || defined(__avr32__) || defined(__bfin__)
#define fb_readb __raw_readb
#define fb_readw __raw_readw
#define fb_readl __raw_readl
#define fb_readq __raw_readq
#define fb_writeb __raw_writeb
#define fb_writew __raw_writew
#define fb_writel __raw_writel
#define fb_writeq __raw_writeq
#define fb_memset memset_io
#define fb_memcpy_fromfb memcpy_fromio
#define fb_memcpy_tofb memcpy_toio
#define fb_readb(addr) (*(volatile u8 *) (addr))
#define fb_readw(addr) (*(volatile u16 *) (addr))
#define fb_readl(addr) (*(volatile u32 *) (addr))
#define fb_readq(addr) (*(volatile u64 *) (addr))
#define fb_writeb(b,addr) (*(volatile u8 *) (addr) = (b))
#define fb_writew(b,addr) (*(volatile u16 *) (addr) = (b))
#define fb_writel(b,addr) (*(volatile u32 *) (addr) = (b))
#define fb_writeq(b,addr) (*(volatile u64 *) (addr) = (b))
#define fb_memset memset
#define fb_memcpy_fromfb memcpy
#define fb_memcpy_tofb memcpy
#define FB_LEFT_POS(p, bpp)          (fb_be_math(p) ? (32 - (bpp)) : 0)
#define FB_SHIFT_HIGH(p, val, bits)  (fb_be_math(p) ? (val) >> (bits) : \
(val) << (bits))
#define FB_SHIFT_LOW(p, val, bits)   (fb_be_math(p) ? (val) << (bits) : \
(val) >> (bits))
extern int fb_set_var(struct fb_info *info, struct fb_var_screeninfo *var);
extern int fb_pan_display(struct fb_info *info, struct fb_var_screeninfo *var);
extern int fb_blank(struct fb_info *info, int blank);
extern void cfb_fillrect(struct fb_info *info, const struct fb_fillrect *rect);
extern void cfb_copyarea(struct fb_info *info, const struct fb_copyarea *area);
extern void cfb_imageblit(struct fb_info *info, const struct fb_image *image);
extern void sys_fillrect(struct fb_info *info, const struct fb_fillrect *rect);
extern void sys_copyarea(struct fb_info *info, const struct fb_copyarea *area);
extern void sys_imageblit(struct fb_info *info, const struct fb_image *image);
extern ssize_t fb_sys_read(struct fb_info *info, char __user *buf,
size_t count, loff_t *ppos);
extern ssize_t fb_sys_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos);
extern int register_framebuffer(struct fb_info *fb_info);
extern int unregister_framebuffer(struct fb_info *fb_info);
extern void remove_conflicting_framebuffers(struct apertures_struct *a,
const char *name, bool primary);
extern int fb_prepare_logo(struct fb_info *fb_info, int rotate);
extern int fb_show_logo(struct fb_info *fb_info, int rotate);
extern char* fb_get_buffer_offset(struct fb_info *info, struct fb_pixmap *buf, u32 size);
extern void fb_pad_unaligned_buffer(u8 *dst, u32 d_pitch, u8 *src, u32 idx,
u32 height, u32 shift_high, u32 shift_low, u32 mod);
extern void fb_pad_aligned_buffer(u8 *dst, u32 d_pitch, u8 *src, u32 s_pitch, u32 height);
extern void fb_set_suspend(struct fb_info *info, int state);
extern int fb_get_color_depth(struct fb_var_screeninfo *var,
struct fb_fix_screeninfo *fix);
extern int fb_get_options(char *name, char **option);
extern int fb_new_modelist(struct fb_info *info);
extern struct fb_info *registered_fb[FB_MAX];
extern int num_registered_fb;
extern struct class *fb_class;
extern int lock_fb_info(struct fb_info *info);
static inline void unlock_fb_info(struct fb_info *info)
static inline void __fb_pad_aligned_buffer(u8 *dst, u32 d_pitch,
u8 *src, u32 s_pitch, u32 height)
extern void fb_deferred_io_init(struct fb_info *info);
extern void fb_deferred_io_open(struct fb_info *info,
struct inode *inode,
struct file *file);
extern void fb_deferred_io_cleanup(struct fb_info *info);
extern int fb_deferred_io_fsync(struct file *file, int datasync);
static inline bool fb_be_math(struct fb_info *info)
extern struct fb_info *framebuffer_alloc(size_t size, struct device *dev);
extern void framebuffer_release(struct fb_info *info);
extern int fb_init_device(struct fb_info *fb_info);
extern void fb_cleanup_device(struct fb_info *head);
extern void fb_bl_default_curve(struct fb_info *fb_info, u8 off, u8 min, u8 max);
#define FB_MAXTIMINGS		0
#define FB_VSYNCTIMINGS		1
#define FB_HSYNCTIMINGS		2
#define FB_DCLKTIMINGS		3
#define FB_IGNOREMON		0x100
#define FB_MODE_IS_UNKNOWN	0
#define FB_MODE_IS_DETAILED	1
#define FB_MODE_IS_STANDARD	2
#define FB_MODE_IS_VESA		4
#define FB_MODE_IS_CALCULATED	8
#define FB_MODE_IS_FIRST	16
#define FB_MODE_IS_FROM_VAR     32
extern int fbmon_dpms(const struct fb_info *fb_info);
extern int fb_get_mode(int flags, u32 val, struct fb_var_screeninfo *var,
struct fb_info *info);
extern int fb_validate_mode(const struct fb_var_screeninfo *var,
struct fb_info *info);
extern int fb_parse_edid(unsigned char *edid, struct fb_var_screeninfo *var);
extern const unsigned char *fb_firmware_edid(struct device *device);
extern void fb_edid_to_monspecs(unsigned char *edid,
struct fb_monspecs *specs);
extern void fb_edid_add_monspecs(unsigned char *edid,
struct fb_monspecs *specs);
extern void fb_destroy_modedb(struct fb_videomode *modedb);
extern int fb_find_mode_cvt(struct fb_videomode *mode, int margins, int rb);
extern unsigned char *fb_ddc_read(struct i2c_adapter *adapter);
#define VESA_MODEDB_SIZE 34
extern void fb_var_to_videomode(struct fb_videomode *mode,
const struct fb_var_screeninfo *var);
extern void fb_videomode_to_var(struct fb_var_screeninfo *var,
const struct fb_videomode *mode);
extern int fb_mode_is_equal(const struct fb_videomode *mode1,
const struct fb_videomode *mode2);
extern int fb_add_videomode(const struct fb_videomode *mode,
struct list_head *head);
extern void fb_delete_videomode(const struct fb_videomode *mode,
struct list_head *head);
extern const struct fb_videomode *fb_match_mode(const struct fb_var_screeninfo *var,
struct list_head *head);
extern const struct fb_videomode *fb_find_best_mode(const struct fb_var_screeninfo *var,
struct list_head *head);
extern const struct fb_videomode *fb_find_nearest_mode(const struct fb_videomode *mode,
struct list_head *head);
extern void fb_destroy_modelist(struct list_head *head);
extern void fb_videomode_to_modelist(const struct fb_videomode *modedb, int num,
struct list_head *head);
extern const struct fb_videomode *fb_find_best_display(const struct fb_monspecs *specs,
struct list_head *head);
extern int fb_alloc_cmap(struct fb_cmap *cmap, int len, int transp);
extern int fb_alloc_cmap_gfp(struct fb_cmap *cmap, int len, int transp, gfp_t flags);
extern void fb_dealloc_cmap(struct fb_cmap *cmap);
extern int fb_copy_cmap(const struct fb_cmap *from, struct fb_cmap *to);
extern int fb_cmap_to_user(const struct fb_cmap *from, struct fb_cmap_user *to);
extern int fb_set_cmap(struct fb_cmap *cmap, struct fb_info *fb_info);
extern int fb_set_user_cmap(struct fb_cmap_user *cmap, struct fb_info *fb_info);
extern const struct fb_cmap *fb_default_cmap(int len);
extern void fb_invert_cmaps(void);
struct fb_videomode ;
extern const char *fb_mode_option;
extern const struct fb_videomode vesa_modes[];
extern const struct fb_videomode cea_modes[64];
struct fb_modelist ;
extern int fb_find_mode(struct fb_var_screeninfo *var,
struct fb_info *info, const char *mode_option,
const struct fb_videomode *db,
unsigned int dbsize,
const struct fb_videomode *default_mode,
unsigned int default_bpp);
