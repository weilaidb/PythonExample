#define version_greater(edid, maj, min) \
(((edid)->version > (maj)) || \
((edid)->version == (maj) && (edid)->revision > (min)))
#define EDID_EST_TIMINGS 16
#define EDID_STD_TIMINGS 8
#define EDID_DETAILED_TIMINGS 4
#define EDID_QUIRK_PREFER_LARGE_60		(1 << 0)
#define EDID_QUIRK_135_CLOCK_TOO_HIGH		(1 << 1)
#define EDID_QUIRK_PREFER_LARGE_75		(1 << 2)
#define EDID_QUIRK_DETAILED_IN_CM		(1 << 3)
#define EDID_QUIRK_DETAILED_USE_MAXIMUM_SIZE	(1 << 4)
#define EDID_QUIRK_FIRST_DETAILED_PREFERRED	(1 << 5)
#define EDID_QUIRK_DETAILED_SYNC_PP		(1 << 6)
struct detailed_mode_closure ;
#define LEVEL_DMT	0
#define LEVEL_GTF	1
#define LEVEL_GTF2	2
#define LEVEL_CVT	3
static struct edid_quirk  edid_quirk_list[] = ;
static const u8 edid_header[] = ;
int drm_edid_header_is_valid(const u8 *raw_edid)
EXPORT_SYMBOL(drm_edid_header_is_valid);
static bool
drm_edid_block_valid(u8 *raw_edid)
bool drm_edid_is_valid(struct edid *edid)
EXPORT_SYMBOL(drm_edid_is_valid);
#define DDC_ADDR 0x50
#define DDC_SEGMENT_ADDR 0x30
static int
drm_do_probe_ddc_edid(struct i2c_adapter *adapter, unsigned char *buf,
int block, int len)
static bool drm_edid_is_zero(u8 *in_edid, int length)
static u8 *
drm_do_get_edid(struct drm_connector *connector, struct i2c_adapter *adapter)
static bool
drm_probe_ddc(struct i2c_adapter *adapter)
struct edid *drm_get_edid(struct drm_connector *connector,
struct i2c_adapter *adapter)
EXPORT_SYMBOL(drm_get_edid);
static bool edid_vendor(struct edid *edid, char *vendor)
static u32 edid_get_quirks(struct edid *edid)
#define MODE_SIZE(m) ((m)->hdisplay * (m)->vdisplay)
#define MODE_REFRESH_DIFF(m,r) (abs((m)->vrefresh - target_refresh))
static void edid_fixup_preferred(struct drm_connector *connector,
u32 quirks)
struct drm_display_mode *drm_mode_find_dmt(struct drm_device *dev,
int hsize, int vsize, int fresh)
EXPORT_SYMBOL(drm_mode_find_dmt);
typedef void detailed_cb(struct detailed_timing *timing, void *closure);
static void
cea_for_each_detailed_block(u8 *ext, detailed_cb *cb, void *closure)
static void
vtb_for_each_detailed_block(u8 *ext, detailed_cb *cb, void *closure)
static void
drm_for_each_detailed_block(u8 *raw_edid, detailed_cb *cb, void *closure)
static void
is_rb(struct detailed_timing *t, void *data)
static bool
drm_monitor_supports_rb(struct edid *edid)
static void
find_gtf2(struct detailed_timing *t, void *data)
static int
drm_gtf2_hbreak(struct edid *edid)
static int
drm_gtf2_2c(struct edid *edid)
static int
drm_gtf2_m(struct edid *edid)
static int
drm_gtf2_k(struct edid *edid)
static int
drm_gtf2_2j(struct edid *edid)
static int standard_timing_level(struct edid *edid)
static int
bad_std_timing(u8 a, u8 b)
static struct drm_display_mode *
drm_mode_std(struct drm_connector *connector, struct edid *edid,
struct std_timing *t, int revision)
static void
drm_mode_do_interlace_quirk(struct drm_display_mode *mode,
struct detailed_pixel_timing *pt)
static struct drm_display_mode *drm_mode_detailed(struct drm_device *dev,
struct edid *edid,
struct detailed_timing *timing,
u32 quirks)
static bool
mode_is_rb(const struct drm_display_mode *mode)
static bool
mode_in_hsync_range(const struct drm_display_mode *mode,
struct edid *edid, u8 *t)
static bool
mode_in_vsync_range(const struct drm_display_mode *mode,
struct edid *edid, u8 *t)
static u32
range_pixel_clock(struct edid *edid, u8 *t)
static bool
mode_in_range(const struct drm_display_mode *mode, struct edid *edid,
struct detailed_timing *timing)
static int
drm_gtf_modes_for_range(struct drm_connector *connector, struct edid *edid,
struct detailed_timing *timing)
static void
do_inferred_modes(struct detailed_timing *timing, void *c)
static int
add_inferred_modes(struct drm_connector *connector, struct edid *edid)
static int
drm_est3_modes(struct drm_connector *connector, struct detailed_timing *timing)
static void
do_established_modes(struct detailed_timing *timing, void *c)
static int
add_established_modes(struct drm_connector *connector, struct edid *edid)
static void
do_standard_modes(struct detailed_timing *timing, void *c)
static int
add_standard_modes(struct drm_connector *connector, struct edid *edid)
static int drm_cvt_modes(struct drm_connector *connector,
struct detailed_timing *timing)
static void
do_cvt_mode(struct detailed_timing *timing, void *c)
static int
add_cvt_modes(struct drm_connector *connector, struct edid *edid)
static void
do_detailed_mode(struct detailed_timing *timing, void *c)
static int
add_detailed_modes(struct drm_connector *connector, struct edid *edid,
u32 quirks)
#define HDMI_IDENTIFIER 0x000C03
#define AUDIO_BLOCK	0x01
#define VENDOR_BLOCK    0x03
#define EDID_BASIC_AUDIO	(1 << 6)
u8 *drm_find_cea_extension(struct edid *edid)
EXPORT_SYMBOL(drm_find_cea_extension);
bool drm_detect_hdmi_monitor(struct edid *edid)
EXPORT_SYMBOL(drm_detect_hdmi_monitor);
bool drm_detect_monitor_audio(struct edid *edid)
EXPORT_SYMBOL(drm_detect_monitor_audio);
static void drm_add_display_info(struct edid *edid,
struct drm_display_info *info)
int drm_add_edid_modes(struct drm_connector *connector, struct edid *edid)
EXPORT_SYMBOL(drm_add_edid_modes);
int drm_add_modes_noedid(struct drm_connector *connector,
int hdisplay, int vdisplay)
EXPORT_SYMBOL(drm_add_modes_noedid);
