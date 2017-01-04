#define SPI_NUM_ATTRS 14
#define SPI_OTHER_ATTRS 1
#define SPI_HOST_ATTRS	1
#define SPI_MAX_ECHO_BUFFER_SIZE	4096
#define DV_LOOPS	3
#define DV_TIMEOUT	(10*HZ)
#define DV_RETRIES	3
enum ;
static struct  spi_static_device_list[] __initdata = ;
#define spi_dv_in_progress(x) (((struct spi_transport_attrs *)&(x)->starget_data)->dv_in_progress)
#define spi_dv_mutex(x) (((struct spi_transport_attrs *)&(x)->starget_data)->dv_mutex)
struct spi_internal ;
#define to_spi_internal(tmpl)	container_of(tmpl, struct spi_internal, t)
static const int ppr_to_ps[] = ;
#define SPI_STATIC_PPR	0x0c
static int sprint_frac(char *dest, int value, int denom)
static int spi_execute(struct scsi_device *sdev, const void *cmd,
enum dma_data_direction dir,
void *buffer, unsigned bufflen,
struct scsi_sense_hdr *sshdr)
static struct  signal_types[] = ;
static inline const char *spi_signal_to_string(enum spi_signal_type type)
static inline enum spi_signal_type spi_signal_to_value(const char *name)
static int spi_host_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static int spi_host_configure(struct transport_container *tc,
struct device *dev,
struct device *cdev);
static DECLARE_TRANSPORT_CLASS(spi_host_class,
"spi_host",
spi_host_setup,
NULL,
spi_host_configure);
static int spi_host_match(struct attribute_container *cont,
struct device *dev)
static int spi_target_configure(struct transport_container *tc,
struct device *dev,
struct device *cdev);
static int spi_device_configure(struct transport_container *tc,
struct device *dev,
struct device *cdev)
static int spi_setup_transport_attrs(struct transport_container *tc,
struct device *dev,
struct device *cdev)
#define spi_transport_show_simple(field, format_string)			\
\
static ssize_t								\
show_spi_transport_##field(struct device *dev, 			\
struct device_attribute *attr, char *buf)	\
#define spi_transport_store_simple(field, format_string)		\
\
static ssize_t								\
store_spi_transport_##field(struct device *dev, 			\
struct device_attribute *attr, 		\
const char *buf, size_t count)		\
#define spi_transport_show_function(field, format_string)		\
\
static ssize_t								\
show_spi_transport_##field(struct device *dev, 			\
struct device_attribute *attr, char *buf)	\
#define spi_transport_store_function(field, format_string)		\
static ssize_t								\
store_spi_transport_##field(struct device *dev, 			\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
#define spi_transport_store_max(field, format_string)			\
static ssize_t								\
store_spi_transport_##field(struct device *dev, 			\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
#define spi_transport_rd_attr(field, format_string)			\
spi_transport_show_function(field, format_string)		\
spi_transport_store_function(field, format_string)		\
static DEVICE_ATTR(field, S_IRUGO,				\
show_spi_transport_##field,			\
store_spi_transport_##field);
#define spi_transport_simple_attr(field, format_string)			\
spi_transport_show_simple(field, format_string)			\
spi_transport_store_simple(field, format_string)		\
static DEVICE_ATTR(field, S_IRUGO,				\
show_spi_transport_##field,			\
store_spi_transport_##field);
#define spi_transport_max_attr(field, format_string)			\
spi_transport_show_function(field, format_string)		\
spi_transport_store_max(field, format_string)			\
spi_transport_simple_attr(max_##field, format_string)		\
static DEVICE_ATTR(field, S_IRUGO,				\
show_spi_transport_##field,			\
store_spi_transport_##field);
spi_transport_max_attr(offset, "%d\n");
spi_transport_max_attr(width, "%d\n");
spi_transport_max_attr(iu, "%d\n");
spi_transport_rd_attr(dt, "%d\n");
spi_transport_max_attr(qas, "%d\n");
spi_transport_rd_attr(wr_flow, "%d\n");
spi_transport_rd_attr(rd_strm, "%d\n");
spi_transport_rd_attr(rti, "%d\n");
spi_transport_rd_attr(pcomp_en, "%d\n");
spi_transport_rd_attr(hold_mcs, "%d\n");
static int child_iter(struct device *dev, void *data)
static ssize_t
store_spi_revalidate(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(revalidate, S_IWUSR, NULL, store_spi_revalidate);
static int period_to_str(char *buf, int period)
static ssize_t
show_spi_transport_period_helper(char *buf, int period)
static ssize_t
store_spi_transport_period_helper(struct device *dev, const char *buf,
size_t count, int *periodp)
static ssize_t
show_spi_transport_period(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
store_spi_transport_period(struct device *cdev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(period, S_IRUGO,
show_spi_transport_period,
store_spi_transport_period);
static ssize_t
show_spi_transport_min_period(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t
store_spi_transport_min_period(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(min_period, S_IRUGO,
show_spi_transport_min_period,
store_spi_transport_min_period);
static ssize_t show_spi_host_signalling(struct device *cdev,
struct device_attribute *attr,
char *buf)
static ssize_t store_spi_host_signalling(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(signalling, S_IRUGO,
show_spi_host_signalling,
store_spi_host_signalling);
#define DV_SET(x, y)			\
if(i->f->set_##x)		\
i->f->set_##x(sdev->sdev_target, y)
enum spi_compare_returns ;
static enum spi_compare_returns
spi_dv_device_echo_buffer(struct scsi_device *sdev, u8 *buffer,
u8 *ptr, const int retries)
static enum spi_compare_returns
spi_dv_device_compare_inquiry(struct scsi_device *sdev, u8 *buffer,
u8 *ptr, const int retries)
static enum spi_compare_returns
spi_dv_retrain(struct scsi_device *sdev, u8 *buffer, u8 *ptr,
enum spi_compare_returns
(*compare_fn)(struct scsi_device *, u8 *, u8 *, int))
static int
spi_dv_device_get_echo_buffer(struct scsi_device *sdev, u8 *buffer)
static void
spi_dv_device_internal(struct scsi_device *sdev, u8 *buffer)
void
spi_dv_device(struct scsi_device *sdev)
EXPORT_SYMBOL(spi_dv_device);
struct work_queue_wrapper ;
static void
spi_dv_device_work_wrapper(struct work_struct *work)
void
spi_schedule_dv_device(struct scsi_device *sdev)
EXPORT_SYMBOL(spi_schedule_dv_device);
void spi_display_xfer_agreement(struct scsi_target *starget)
EXPORT_SYMBOL(spi_display_xfer_agreement);
int spi_populate_width_msg(unsigned char *msg, int width)
EXPORT_SYMBOL_GPL(spi_populate_width_msg);
int spi_populate_sync_msg(unsigned char *msg, int period, int offset)
EXPORT_SYMBOL_GPL(spi_populate_sync_msg);
int spi_populate_ppr_msg(unsigned char *msg, int period, int offset,
int width, int options)
EXPORT_SYMBOL_GPL(spi_populate_ppr_msg);
static const char * const one_byte_msgs[] = ;
static const char * const two_byte_msgs[] = ;
static const char * const extended_msgs[] = ;
static void print_nego(const unsigned char *msg, int per, int off, int width)
static void print_ptr(const unsigned char *msg, int msb, const char *desc)
int spi_print_msg(const unsigned char *msg)
EXPORT_SYMBOL(spi_print_msg);
int spi_print_msg(const unsigned char *msg)
EXPORT_SYMBOL(spi_print_msg);
static int spi_device_match(struct attribute_container *cont,
struct device *dev)
static int spi_target_match(struct attribute_container *cont,
struct device *dev)
static DECLARE_TRANSPORT_CLASS(spi_transport_class,
"spi_transport",
spi_setup_transport_attrs,
NULL,
spi_target_configure);
static DECLARE_ANON_TRANSPORT_CLASS(spi_device_class,
spi_device_match,
spi_device_configure);
static struct attribute *host_attributes[] = ;
static struct attribute_group host_attribute_group = ;
static int spi_host_configure(struct transport_container *tc,
struct device *dev,
struct device *cdev)
#define TARGET_ATTRIBUTE_HELPER(name) \
(si->f->show_##name ? S_IRUGO : 0) | \
(si->f->set_##name ? S_IWUSR : 0)
static mode_t target_attribute_is_visible(struct kobject *kobj,
struct attribute *attr, int i)
static struct attribute *target_attributes[] = ;
static struct attribute_group target_attribute_group = ;
static int spi_target_configure(struct transport_container *tc,
struct device *dev,
struct device *cdev)
struct scsi_transport_template *
spi_attach_transport(struct spi_function_template *ft)
EXPORT_SYMBOL(spi_attach_transport);
void spi_release_transport(struct scsi_transport_template *t)
EXPORT_SYMBOL(spi_release_transport);
static __init int spi_transport_init(void)
static void __exit spi_transport_exit(void)
MODULE_AUTHOR("Martin Hicks");
MODULE_DESCRIPTION("SPI Transport Attributes");
MODULE_LICENSE("GPL");
module_init(spi_transport_init);
module_exit(spi_transport_exit);
