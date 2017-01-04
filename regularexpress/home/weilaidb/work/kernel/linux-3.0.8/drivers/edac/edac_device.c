static DEFINE_MUTEX(device_ctls_mutex);
static LIST_HEAD(edac_device_list);
static void edac_device_dump_device(struct edac_device_ctl_info *edac_dev)
struct edac_device_ctl_info *edac_device_alloc_ctl_info(
unsigned sz_private,
char *edac_device_name, unsigned nr_instances,
char *edac_block_name, unsigned nr_blocks,
unsigned offset_value,
struct edac_dev_sysfs_block_attribute *attrib_spec, unsigned nr_attrib,
int device_index)
EXPORT_SYMBOL_GPL(edac_device_alloc_ctl_info);
void edac_device_free_ctl_info(struct edac_device_ctl_info *ctl_info)
EXPORT_SYMBOL_GPL(edac_device_free_ctl_info);
static struct edac_device_ctl_info *find_edac_device_by_dev(struct device *dev)
static int add_edac_dev_to_global_list(struct edac_device_ctl_info *edac_dev)
static void del_edac_device_from_global_list(struct edac_device_ctl_info
*edac_device)
static void edac_device_workq_function(struct work_struct *work_req)
void edac_device_workq_setup(struct edac_device_ctl_info *edac_dev,
unsigned msec)
void edac_device_workq_teardown(struct edac_device_ctl_info *edac_dev)
void edac_device_reset_delay_period(struct edac_device_ctl_info *edac_dev,
unsigned long value)
int edac_device_alloc_index(void)
EXPORT_SYMBOL_GPL(edac_device_alloc_index);
int edac_device_add_device(struct edac_device_ctl_info *edac_dev)
EXPORT_SYMBOL_GPL(edac_device_add_device);
struct edac_device_ctl_info *edac_device_del_device(struct device *dev)
EXPORT_SYMBOL_GPL(edac_device_del_device);
static inline int edac_device_get_log_ce(struct edac_device_ctl_info *edac_dev)
static inline int edac_device_get_log_ue(struct edac_device_ctl_info *edac_dev)
static inline int edac_device_get_panic_on_ue(struct edac_device_ctl_info
*edac_dev)
void edac_device_handle_ce(struct edac_device_ctl_info *edac_dev,
int inst_nr, int block_nr, const char *msg)
EXPORT_SYMBOL_GPL(edac_device_handle_ce);
void edac_device_handle_ue(struct edac_device_ctl_info *edac_dev,
int inst_nr, int block_nr, const char *msg)
EXPORT_SYMBOL_GPL(edac_device_handle_ue);
