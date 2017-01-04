#define DSS_SUBSYS_NAME "OVERLAY"
static int num_overlays;
static struct list_head overlay_list;
static ssize_t overlay_name_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_manager_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_manager_store(struct omap_overlay *ovl, const char *buf,
size_t size)
static ssize_t overlay_input_size_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_screen_width_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_position_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_position_store(struct omap_overlay *ovl,
const char *buf, size_t size)
static ssize_t overlay_output_size_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_output_size_store(struct omap_overlay *ovl,
const char *buf, size_t size)
static ssize_t overlay_enabled_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_enabled_store(struct omap_overlay *ovl, const char *buf,
size_t size)
static ssize_t overlay_global_alpha_show(struct omap_overlay *ovl, char *buf)
static ssize_t overlay_global_alpha_store(struct omap_overlay *ovl,
const char *buf, size_t size)
static ssize_t overlay_pre_mult_alpha_show(struct omap_overlay *ovl,
char *buf)
static ssize_t overlay_pre_mult_alpha_store(struct omap_overlay *ovl,
const char *buf, size_t size)
struct overlay_attribute ;
#define OVERLAY_ATTR(_name, _mode, _show, _store) \
struct overlay_attribute overlay_attr_##_name = \
__ATTR(_name, _mode, _show, _store)
static OVERLAY_ATTR(name, S_IRUGO, overlay_name_show, NULL);
static OVERLAY_ATTR(manager, S_IRUGO|S_IWUSR,
overlay_manager_show, overlay_manager_store);
static OVERLAY_ATTR(input_size, S_IRUGO, overlay_input_size_show, NULL);
static OVERLAY_ATTR(screen_width, S_IRUGO, overlay_screen_width_show, NULL);
static OVERLAY_ATTR(position, S_IRUGO|S_IWUSR,
overlay_position_show, overlay_position_store);
static OVERLAY_ATTR(output_size, S_IRUGO|S_IWUSR,
overlay_output_size_show, overlay_output_size_store);
static OVERLAY_ATTR(enabled, S_IRUGO|S_IWUSR,
overlay_enabled_show, overlay_enabled_store);
static OVERLAY_ATTR(global_alpha, S_IRUGO|S_IWUSR,
overlay_global_alpha_show, overlay_global_alpha_store);
static OVERLAY_ATTR(pre_mult_alpha, S_IRUGO|S_IWUSR,
overlay_pre_mult_alpha_show,
overlay_pre_mult_alpha_store);
static struct attribute *overlay_sysfs_attrs[] = ;
static ssize_t overlay_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t overlay_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t size)
static const struct sysfs_ops overlay_sysfs_ops = ;
static struct kobj_type overlay_ktype = ;
int dss_check_overlay(struct omap_overlay *ovl, struct omap_dss_device *dssdev)
static int dss_ovl_set_overlay_info(struct omap_overlay *ovl,
struct omap_overlay_info *info)
static void dss_ovl_get_overlay_info(struct omap_overlay *ovl,
struct omap_overlay_info *info)
static int dss_ovl_wait_for_go(struct omap_overlay *ovl)
static int omap_dss_set_manager(struct omap_overlay *ovl,
struct omap_overlay_manager *mgr)
static int omap_dss_unset_manager(struct omap_overlay *ovl)
int omap_dss_get_num_overlays(void)
EXPORT_SYMBOL(omap_dss_get_num_overlays);
struct omap_overlay *omap_dss_get_overlay(int num)
EXPORT_SYMBOL(omap_dss_get_overlay);
static void omap_dss_add_overlay(struct omap_overlay *overlay)
static struct omap_overlay *dispc_overlays[MAX_DSS_OVERLAYS];
void dss_overlay_setup_dispc_manager(struct omap_overlay_manager *mgr)
static struct omap_overlay *l4_overlays[1];
void dss_overlay_setup_l4_manager(struct omap_overlay_manager *mgr)
void dss_init_overlays(struct platform_device *pdev)
void dss_recheck_connections(struct omap_dss_device *dssdev, bool force)
void dss_uninit_overlays(struct platform_device *pdev)
