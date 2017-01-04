#define DSS_SUBSYS_NAME "MANAGER"
static int num_managers;
static struct list_head manager_list;
static ssize_t manager_name_show(struct omap_overlay_manager *mgr, char *buf)
static ssize_t manager_display_show(struct omap_overlay_manager *mgr, char *buf)
static ssize_t manager_display_store(struct omap_overlay_manager *mgr,
const char *buf, size_t size)
static ssize_t manager_default_color_show(struct omap_overlay_manager *mgr,
char *buf)
static ssize_t manager_default_color_store(struct omap_overlay_manager *mgr,
const char *buf, size_t size)
static const char *trans_key_type_str[] = ;
static ssize_t manager_trans_key_type_show(struct omap_overlay_manager *mgr,
char *buf)
static ssize_t manager_trans_key_type_store(struct omap_overlay_manager *mgr,
const char *buf, size_t size)
static ssize_t manager_trans_key_value_show(struct omap_overlay_manager *mgr,
char *buf)
static ssize_t manager_trans_key_value_store(struct omap_overlay_manager *mgr,
const char *buf, size_t size)
static ssize_t manager_trans_key_enabled_show(struct omap_overlay_manager *mgr,
char *buf)
static ssize_t manager_trans_key_enabled_store(struct omap_overlay_manager *mgr,
const char *buf, size_t size)
static ssize_t manager_alpha_blending_enabled_show(
struct omap_overlay_manager *mgr, char *buf)
static ssize_t manager_alpha_blending_enabled_store(
struct omap_overlay_manager *mgr,
const char *buf, size_t size)
struct manager_attribute ;
#define MANAGER_ATTR(_name, _mode, _show, _store) \
struct manager_attribute manager_attr_##_name = \
__ATTR(_name, _mode, _show, _store)
static MANAGER_ATTR(name, S_IRUGO, manager_name_show, NULL);
static MANAGER_ATTR(display, S_IRUGO|S_IWUSR,
manager_display_show, manager_display_store);
static MANAGER_ATTR(default_color, S_IRUGO|S_IWUSR,
manager_default_color_show, manager_default_color_store);
static MANAGER_ATTR(trans_key_type, S_IRUGO|S_IWUSR,
manager_trans_key_type_show, manager_trans_key_type_store);
static MANAGER_ATTR(trans_key_value, S_IRUGO|S_IWUSR,
manager_trans_key_value_show, manager_trans_key_value_store);
static MANAGER_ATTR(trans_key_enabled, S_IRUGO|S_IWUSR,
manager_trans_key_enabled_show,
manager_trans_key_enabled_store);
static MANAGER_ATTR(alpha_blending_enabled, S_IRUGO|S_IWUSR,
manager_alpha_blending_enabled_show,
manager_alpha_blending_enabled_store);
static struct attribute *manager_sysfs_attrs[] = ;
static ssize_t manager_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t manager_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t size)
static const struct sysfs_ops manager_sysfs_ops = ;
static struct kobj_type manager_ktype = ;
struct overlay_cache_data ;
struct manager_cache_data ;
static struct  dss_cache;
static int omap_dss_set_device(struct omap_overlay_manager *mgr,
struct omap_dss_device *dssdev)
static int omap_dss_unset_device(struct omap_overlay_manager *mgr)
static int dss_mgr_wait_for_vsync(struct omap_overlay_manager *mgr)
static int dss_mgr_wait_for_go(struct omap_overlay_manager *mgr)
int dss_mgr_wait_for_go_ovl(struct omap_overlay *ovl)
static int overlay_enabled(struct omap_overlay *ovl)
static bool rectangle_subset(int x1, int y1, int w1, int h1,
int x2, int y2, int w2, int h2)
static bool rectangle_intersects(int x1, int y1, int w1, int h1,
int x2, int y2, int w2, int h2)
static bool dispc_is_overlay_scaled(struct overlay_cache_data *oc)
static int configure_overlay(enum omap_plane plane)
static void configure_manager(enum omap_channel channel)
static int configure_dispc(void)
static void make_even(u16 *x, u16 *w)
void dss_setup_partial_planes(struct omap_dss_device *dssdev,
u16 *xi, u16 *yi, u16 *wi, u16 *hi, bool enlarge_update_area)
void dss_start_update(struct omap_dss_device *dssdev)
static void dss_apply_irq_handler(void *data, u32 mask)
static int omap_dss_mgr_apply(struct omap_overlay_manager *mgr)
static int dss_check_manager(struct omap_overlay_manager *mgr)
static int omap_dss_mgr_set_info(struct omap_overlay_manager *mgr,
struct omap_overlay_manager_info *info)
static void omap_dss_mgr_get_info(struct omap_overlay_manager *mgr,
struct omap_overlay_manager_info *info)
static int dss_mgr_enable(struct omap_overlay_manager *mgr)
static int dss_mgr_disable(struct omap_overlay_manager *mgr)
static void omap_dss_add_overlay_manager(struct omap_overlay_manager *manager)
int dss_init_overlay_managers(struct platform_device *pdev)
void dss_uninit_overlay_managers(struct platform_device *pdev)
int omap_dss_get_num_overlay_managers(void)
EXPORT_SYMBOL(omap_dss_get_num_overlay_managers);
struct omap_overlay_manager *omap_dss_get_overlay_manager(int num)
EXPORT_SYMBOL(omap_dss_get_overlay_manager);
