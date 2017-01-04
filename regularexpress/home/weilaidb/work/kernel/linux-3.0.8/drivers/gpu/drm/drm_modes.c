void drm_mode_debug_printmodeline(struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_debug_printmodeline);
#define HV_FACTOR			1000
struct drm_display_mode *drm_cvt_mode(struct drm_device *dev, int hdisplay,
int vdisplay, int vrefresh,
bool reduced, bool interlaced, bool margins)
EXPORT_SYMBOL(drm_cvt_mode);
struct drm_display_mode *
drm_gtf_mode_complex(struct drm_device *dev, int hdisplay, int vdisplay,
int vrefresh, bool interlaced, int margins,
int GTF_M, int GTF_2C, int GTF_K, int GTF_2J)
EXPORT_SYMBOL(drm_gtf_mode_complex);
struct drm_display_mode *
drm_gtf_mode(struct drm_device *dev, int hdisplay, int vdisplay, int vrefresh,
bool lace, int margins)
EXPORT_SYMBOL(drm_gtf_mode);
void drm_mode_set_name(struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_set_name);
void drm_mode_list_concat(struct list_head *head, struct list_head *new)
EXPORT_SYMBOL(drm_mode_list_concat);
int drm_mode_width(struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_width);
int drm_mode_height(struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_height);
int drm_mode_hsync(const struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_hsync);
int drm_mode_vrefresh(const struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_vrefresh);
void drm_mode_set_crtcinfo(struct drm_display_mode *p, int adjust_flags)
EXPORT_SYMBOL(drm_mode_set_crtcinfo);
struct drm_display_mode *drm_mode_duplicate(struct drm_device *dev,
const struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_duplicate);
bool drm_mode_equal(struct drm_display_mode *mode1, struct drm_display_mode *mode2)
EXPORT_SYMBOL(drm_mode_equal);
void drm_mode_validate_size(struct drm_device *dev,
struct list_head *mode_list,
int maxX, int maxY, int maxPitch)
EXPORT_SYMBOL(drm_mode_validate_size);
void drm_mode_validate_clocks(struct drm_device *dev,
struct list_head *mode_list,
int *min, int *max, int n_ranges)
EXPORT_SYMBOL(drm_mode_validate_clocks);
void drm_mode_prune_invalid(struct drm_device *dev,
struct list_head *mode_list, bool verbose)
EXPORT_SYMBOL(drm_mode_prune_invalid);
static int drm_mode_compare(void *priv, struct list_head *lh_a, struct list_head *lh_b)
void drm_mode_sort(struct list_head *mode_list)
EXPORT_SYMBOL(drm_mode_sort);
void drm_mode_connector_list_update(struct drm_connector *connector)
EXPORT_SYMBOL(drm_mode_connector_list_update);
bool drm_mode_parse_command_line_for_connector(const char *mode_option,
struct drm_connector *connector,
struct drm_cmdline_mode *mode)
EXPORT_SYMBOL(drm_mode_parse_command_line_for_connector);
struct drm_display_mode *
drm_mode_create_from_cmdline_mode(struct drm_device *dev,
struct drm_cmdline_mode *cmd)
EXPORT_SYMBOL(drm_mode_create_from_cmdline_mode);
