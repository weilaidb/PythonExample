#define __DRM_CRTC_H__
struct drm_device;
struct drm_mode_set;
struct drm_framebuffer;
#define DRM_MODE_OBJECT_CRTC 0xcccccccc
#define DRM_MODE_OBJECT_CONNECTOR 0xc0c0c0c0
#define DRM_MODE_OBJECT_ENCODER 0xe0e0e0e0
#define DRM_MODE_OBJECT_MODE 0xdededede
#define DRM_MODE_OBJECT_PROPERTY 0xb0b0b0b0
#define DRM_MODE_OBJECT_FB 0xfbfbfbfb
#define DRM_MODE_OBJECT_BLOB 0xbbbbbbbb
struct drm_mode_object ;
enum drm_mode_status ;
#define DRM_MODE_TYPE_CLOCK_CRTC_C (DRM_MODE_TYPE_CLOCK_C | \
DRM_MODE_TYPE_CRTC_C)
#define DRM_MODE(nm, t, c, hd, hss, hse, ht, hsk, vd, vss, vse, vt, vs, f) \
.name = nm, .status = 0, .type = (t), .clock = (c), \
.hdisplay = (hd), .hsync_start = (hss), .hsync_end = (hse), \
.htotal = (ht), .hskew = (hsk), .vdisplay = (vd), \
.vsync_start = (vss), .vsync_end = (vse), .vtotal = (vt), \
.vscan = (vs), .flags = (f), .vrefresh = 0
#define CRTC_INTERLACE_HALVE_V 0x1
struct drm_display_mode ;
enum drm_connector_status ;
enum subpixel_order ;
#define DRM_COLOR_FORMAT_RGB444		(1<<0)
#define DRM_COLOR_FORMAT_YCRCB444	(1<<1)
#define DRM_COLOR_FORMAT_YCRCB422	(1<<2)
struct drm_display_info ;
struct drm_framebuffer_funcs ;
struct drm_framebuffer ;
struct drm_property_blob ;
struct drm_property_enum ;
struct drm_property ;
struct drm_crtc;
struct drm_connector;
struct drm_encoder;
struct drm_pending_vblank_event;
struct drm_crtc_funcs ;
struct drm_crtc ;
struct drm_connector_funcs ;
struct drm_encoder_funcs ;
#define DRM_CONNECTOR_MAX_UMODES 16
#define DRM_CONNECTOR_MAX_PROPERTY 16
#define DRM_CONNECTOR_LEN 32
#define DRM_CONNECTOR_MAX_ENCODER 2
struct drm_encoder ;
enum drm_connector_force ;
#define DRM_CONNECTOR_POLL_HPD (1 << 0)
#define DRM_CONNECTOR_POLL_CONNECT (1 << 1)
#define DRM_CONNECTOR_POLL_DISCONNECT (1 << 2)
struct drm_connector ;
struct drm_mode_set ;
struct drm_mode_config_funcs ;
struct drm_mode_group ;
struct drm_mode_config ;
#define obj_to_crtc(x) container_of(x, struct drm_crtc, base)
#define obj_to_connector(x) container_of(x, struct drm_connector, base)
#define obj_to_encoder(x) container_of(x, struct drm_encoder, base)
#define obj_to_mode(x) container_of(x, struct drm_display_mode, base)
#define obj_to_fb(x) container_of(x, struct drm_framebuffer, base)
#define obj_to_property(x) container_of(x, struct drm_property, base)
#define obj_to_blob(x) container_of(x, struct drm_property_blob, base)
extern void drm_crtc_init(struct drm_device *dev,
struct drm_crtc *crtc,
const struct drm_crtc_funcs *funcs);
extern void drm_crtc_cleanup(struct drm_crtc *crtc);
extern void drm_connector_init(struct drm_device *dev,
struct drm_connector *connector,
const struct drm_connector_funcs *funcs,
int connector_type);
extern void drm_connector_cleanup(struct drm_connector *connector);
extern void drm_encoder_init(struct drm_device *dev,
struct drm_encoder *encoder,
const struct drm_encoder_funcs *funcs,
int encoder_type);
extern void drm_encoder_cleanup(struct drm_encoder *encoder);
extern char *drm_get_connector_name(struct drm_connector *connector);
extern char *drm_get_dpms_name(int val);
extern char *drm_get_dvi_i_subconnector_name(int val);
extern char *drm_get_dvi_i_select_name(int val);
extern char *drm_get_tv_subconnector_name(int val);
extern char *drm_get_tv_select_name(int val);
extern void drm_fb_release(struct drm_file *file_priv);
extern int drm_mode_group_init_legacy_group(struct drm_device *dev, struct drm_mode_group *group);
extern struct edid *drm_get_edid(struct drm_connector *connector,
struct i2c_adapter *adapter);
extern int drm_add_edid_modes(struct drm_connector *connector, struct edid *edid);
extern void drm_mode_probed_add(struct drm_connector *connector, struct drm_display_mode *mode);
extern void drm_mode_remove(struct drm_connector *connector, struct drm_display_mode *mode);
extern struct drm_display_mode *drm_mode_duplicate(struct drm_device *dev,
const struct drm_display_mode *mode);
extern void drm_mode_debug_printmodeline(struct drm_display_mode *mode);
extern void drm_mode_config_init(struct drm_device *dev);
extern void drm_mode_config_reset(struct drm_device *dev);
extern void drm_mode_config_cleanup(struct drm_device *dev);
extern void drm_mode_set_name(struct drm_display_mode *mode);
extern bool drm_mode_equal(struct drm_display_mode *mode1, struct drm_display_mode *mode2);
extern int drm_mode_width(struct drm_display_mode *mode);
extern int drm_mode_height(struct drm_display_mode *mode);
extern int drm_mode_attachmode_crtc(struct drm_device *dev,
struct drm_crtc *crtc,
struct drm_display_mode *mode);
extern int drm_mode_detachmode_crtc(struct drm_device *dev, struct drm_display_mode *mode);
extern struct drm_display_mode *drm_mode_create(struct drm_device *dev);
extern void drm_mode_destroy(struct drm_device *dev, struct drm_display_mode *mode);
extern void drm_mode_list_concat(struct list_head *head,
struct list_head *new);
extern void drm_mode_validate_size(struct drm_device *dev,
struct list_head *mode_list,
int maxX, int maxY, int maxPitch);
extern void drm_mode_prune_invalid(struct drm_device *dev,
struct list_head *mode_list, bool verbose);
extern void drm_mode_sort(struct list_head *mode_list);
extern int drm_mode_hsync(const struct drm_display_mode *mode);
extern int drm_mode_vrefresh(const struct drm_display_mode *mode);
extern void drm_mode_set_crtcinfo(struct drm_display_mode *p,
int adjust_flags);
extern void drm_mode_connector_list_update(struct drm_connector *connector);
extern int drm_mode_connector_update_edid_property(struct drm_connector *connector,
struct edid *edid);
extern int drm_connector_property_set_value(struct drm_connector *connector,
struct drm_property *property,
uint64_t value);
extern int drm_connector_property_get_value(struct drm_connector *connector,
struct drm_property *property,
uint64_t *value);
extern struct drm_display_mode *drm_crtc_mode_create(struct drm_device *dev);
extern void drm_framebuffer_set_object(struct drm_device *dev,
unsigned long handle);
extern int drm_framebuffer_init(struct drm_device *dev,
struct drm_framebuffer *fb,
const struct drm_framebuffer_funcs *funcs);
extern void drm_framebuffer_cleanup(struct drm_framebuffer *fb);
extern int drmfb_probe(struct drm_device *dev, struct drm_crtc *crtc);
extern int drmfb_remove(struct drm_device *dev, struct drm_framebuffer *fb);
extern void drm_crtc_probe_connector_modes(struct drm_device *dev, int maxX, int maxY);
extern bool drm_crtc_in_use(struct drm_crtc *crtc);
extern int drm_connector_attach_property(struct drm_connector *connector,
struct drm_property *property, uint64_t init_val);
extern struct drm_property *drm_property_create(struct drm_device *dev, int flags,
const char *name, int num_values);
extern void drm_property_destroy(struct drm_device *dev, struct drm_property *property);
extern int drm_property_add_enum(struct drm_property *property, int index,
uint64_t value, const char *name);
extern int drm_mode_create_dvi_i_properties(struct drm_device *dev);
extern int drm_mode_create_tv_properties(struct drm_device *dev, int num_formats,
char *formats[]);
extern int drm_mode_create_scaling_mode_property(struct drm_device *dev);
extern int drm_mode_create_dithering_property(struct drm_device *dev);
extern int drm_mode_create_dirty_info_property(struct drm_device *dev);
extern char *drm_get_encoder_name(struct drm_encoder *encoder);
extern int drm_mode_connector_attach_encoder(struct drm_connector *connector,
struct drm_encoder *encoder);
extern void drm_mode_connector_detach_encoder(struct drm_connector *connector,
struct drm_encoder *encoder);
extern bool drm_mode_crtc_set_gamma_size(struct drm_crtc *crtc,
int gamma_size);
extern struct drm_mode_object *drm_mode_object_find(struct drm_device *dev,
uint32_t id, uint32_t type);
extern int drm_mode_getresources(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getcrtc(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getconnector(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_setcrtc(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_cursor_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_addfb(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_rmfb(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getfb(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_dirtyfb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_addmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_rmmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_attachmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_detachmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getproperty_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getblob_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_connector_property_set_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_hotplug_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_replacefb(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_getencoder(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_gamma_get_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_gamma_set_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern u8 *drm_find_cea_extension(struct edid *edid);
extern bool drm_detect_hdmi_monitor(struct edid *edid);
extern bool drm_detect_monitor_audio(struct edid *edid);
extern int drm_mode_page_flip_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern struct drm_display_mode *drm_cvt_mode(struct drm_device *dev,
int hdisplay, int vdisplay, int vrefresh,
bool reduced, bool interlaced, bool margins);
extern struct drm_display_mode *drm_gtf_mode(struct drm_device *dev,
int hdisplay, int vdisplay, int vrefresh,
bool interlaced, int margins);
extern struct drm_display_mode *drm_gtf_mode_complex(struct drm_device *dev,
int hdisplay, int vdisplay, int vrefresh,
bool interlaced, int margins, int GTF_M,
int GTF_2C, int GTF_K, int GTF_2J);
extern int drm_add_modes_noedid(struct drm_connector *connector,
int hdisplay, int vdisplay);
extern int drm_edid_header_is_valid(const u8 *raw_edid);
extern bool drm_edid_is_valid(struct edid *edid);
struct drm_display_mode *drm_mode_find_dmt(struct drm_device *dev,
int hsize, int vsize, int fresh);
extern int drm_mode_create_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_mmap_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
extern int drm_mode_destroy_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv);
