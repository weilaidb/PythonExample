struct sas_host_attrs ;
#define to_sas_host_attrs(host)	((struct sas_host_attrs *)(host)->shost_data)
#define SAS_DEVICE_ATTR(_prefix,_name,_mode,_show,_store) \
struct device_attribute dev_attr_##_prefix##_##_name = \
__ATTR(_name,_mode,_show,_store)
#define sas_bitfield_name_match(title, table)			\
static ssize_t							\
get_sas_##title##_names(u32 table_key, char *buf)		\
#define sas_bitfield_name_set(title, table)			\
static ssize_t							\
set_sas_##title##_names(u32 *table_key, const char *buf)	\
#define sas_bitfield_name_search(title, table)			\
static ssize_t							\
get_sas_##title##_names(u32 table_key, char *buf)		\
static struct  sas_device_type_names[] = ;
sas_bitfield_name_search(device_type, sas_device_type_names)
static struct  sas_protocol_names[] = ;
sas_bitfield_name_match(protocol, sas_protocol_names)
static struct  sas_linkspeed_names[] = ;
sas_bitfield_name_search(linkspeed, sas_linkspeed_names)
sas_bitfield_name_set(linkspeed, sas_linkspeed_names)
static struct sas_end_device *sas_sdev_to_rdev(struct scsi_device *sdev)
static void sas_smp_request(struct request_queue *q, struct Scsi_Host *shost,
struct sas_rphy *rphy)
static void sas_host_smp_request(struct request_queue *q)
static void sas_non_host_smp_request(struct request_queue *q)
static void sas_host_release(struct device *dev)
static int sas_bsg_initialize(struct Scsi_Host *shost, struct sas_rphy *rphy)
static void sas_bsg_remove(struct Scsi_Host *shost, struct sas_rphy *rphy)
static int sas_host_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static int sas_host_remove(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(sas_host_class,
"sas_host", sas_host_setup, sas_host_remove, NULL);
static int sas_host_match(struct attribute_container *cont,
struct device *dev)
static int do_sas_phy_delete(struct device *dev, void *data)
void sas_remove_children(struct device *dev)
EXPORT_SYMBOL(sas_remove_children);
void sas_remove_host(struct Scsi_Host *shost)
EXPORT_SYMBOL(sas_remove_host);
unsigned int
sas_tlr_supported(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(sas_tlr_supported);
void
sas_disable_tlr(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(sas_disable_tlr);
void sas_enable_tlr(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(sas_enable_tlr);
unsigned int sas_is_tlr_enabled(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(sas_is_tlr_enabled);
#define sas_phy_show_simple(field, name, format_string, cast)		\
static ssize_t								\
show_sas_phy_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_phy_simple_attr(field, name, format_string, type)		\
sas_phy_show_simple(field, name, format_string, (type))	\
static DEVICE_ATTR(name, S_IRUGO, show_sas_phy_##name, NULL)
#define sas_phy_show_protocol(field, name)				\
static ssize_t								\
show_sas_phy_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_phy_protocol_attr(field, name)				\
sas_phy_show_protocol(field, name)				\
static DEVICE_ATTR(name, S_IRUGO, show_sas_phy_##name, NULL)
#define sas_phy_show_linkspeed(field)					\
static ssize_t								\
show_sas_phy_##field(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_phy_store_linkspeed(field)					\
static ssize_t								\
store_sas_phy_##field(struct device *dev, 				\
struct device_attribute *attr, 			\
const char *buf,	size_t count)			\
#define sas_phy_linkspeed_rw_attr(field)				\
sas_phy_show_linkspeed(field)					\
sas_phy_store_linkspeed(field)					\
static DEVICE_ATTR(field, S_IRUGO, show_sas_phy_##field,		\
store_sas_phy_##field)
#define sas_phy_linkspeed_attr(field)					\
sas_phy_show_linkspeed(field)					\
static DEVICE_ATTR(field, S_IRUGO, show_sas_phy_##field, NULL)
#define sas_phy_show_linkerror(field)					\
static ssize_t								\
show_sas_phy_##field(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_phy_linkerror_attr(field)					\
sas_phy_show_linkerror(field)					\
static DEVICE_ATTR(field, S_IRUGO, show_sas_phy_##field, NULL)
static ssize_t
show_sas_device_type(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(device_type, S_IRUGO, show_sas_device_type, NULL);
static ssize_t do_sas_phy_enable(struct device *dev,
size_t count, int enable)
;
static ssize_t
store_sas_phy_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sas_phy_enable(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(enable, S_IRUGO | S_IWUSR, show_sas_phy_enable,
store_sas_phy_enable);
static ssize_t
do_sas_phy_reset(struct device *dev, size_t count, int hard_reset)
;
static ssize_t
store_sas_link_reset(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(link_reset, S_IWUSR, NULL, store_sas_link_reset);
static ssize_t
store_sas_hard_reset(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(hard_reset, S_IWUSR, NULL, store_sas_hard_reset);
sas_phy_protocol_attr(identify.initiator_port_protocols,
initiator_port_protocols);
sas_phy_protocol_attr(identify.target_port_protocols,
target_port_protocols);
sas_phy_simple_attr(identify.sas_address, sas_address, "0x%016llx\n",
unsigned long long);
sas_phy_simple_attr(identify.phy_identifier, phy_identifier, "%d\n", u8);
sas_phy_linkspeed_attr(negotiated_linkrate);
sas_phy_linkspeed_attr(minimum_linkrate_hw);
sas_phy_linkspeed_rw_attr(minimum_linkrate);
sas_phy_linkspeed_attr(maximum_linkrate_hw);
sas_phy_linkspeed_rw_attr(maximum_linkrate);
sas_phy_linkerror_attr(invalid_dword_count);
sas_phy_linkerror_attr(running_disparity_error_count);
sas_phy_linkerror_attr(loss_of_dword_sync_count);
sas_phy_linkerror_attr(phy_reset_problem_count);
static DECLARE_TRANSPORT_CLASS(sas_phy_class,
"sas_phy", NULL, NULL, NULL);
static int sas_phy_match(struct attribute_container *cont, struct device *dev)
static void sas_phy_release(struct device *dev)
struct sas_phy *sas_phy_alloc(struct device *parent, int number)
EXPORT_SYMBOL(sas_phy_alloc);
int sas_phy_add(struct sas_phy *phy)
EXPORT_SYMBOL(sas_phy_add);
void sas_phy_free(struct sas_phy *phy)
EXPORT_SYMBOL(sas_phy_free);
void
sas_phy_delete(struct sas_phy *phy)
EXPORT_SYMBOL(sas_phy_delete);
int scsi_is_sas_phy(const struct device *dev)
EXPORT_SYMBOL(scsi_is_sas_phy);
#define sas_port_show_simple(field, name, format_string, cast)		\
static ssize_t								\
show_sas_port_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_port_simple_attr(field, name, format_string, type)		\
sas_port_show_simple(field, name, format_string, (type))	\
static DEVICE_ATTR(name, S_IRUGO, show_sas_port_##name, NULL)
sas_port_simple_attr(num_phys, num_phys, "%d\n", int);
static DECLARE_TRANSPORT_CLASS(sas_port_class,
"sas_port", NULL, NULL, NULL);
static int sas_port_match(struct attribute_container *cont, struct device *dev)
static void sas_port_release(struct device *dev)
static void sas_port_create_link(struct sas_port *port,
struct sas_phy *phy)
static void sas_port_delete_link(struct sas_port *port,
struct sas_phy *phy)
struct sas_port *sas_port_alloc(struct device *parent, int port_id)
EXPORT_SYMBOL(sas_port_alloc);
struct sas_port *sas_port_alloc_num(struct device *parent)
EXPORT_SYMBOL(sas_port_alloc_num);
int sas_port_add(struct sas_port *port)
EXPORT_SYMBOL(sas_port_add);
void sas_port_free(struct sas_port *port)
EXPORT_SYMBOL(sas_port_free);
void sas_port_delete(struct sas_port *port)
EXPORT_SYMBOL(sas_port_delete);
int scsi_is_sas_port(const struct device *dev)
EXPORT_SYMBOL(scsi_is_sas_port);
void sas_port_add_phy(struct sas_port *port, struct sas_phy *phy)
EXPORT_SYMBOL(sas_port_add_phy);
void sas_port_delete_phy(struct sas_port *port, struct sas_phy *phy)
EXPORT_SYMBOL(sas_port_delete_phy);
void sas_port_mark_backlink(struct sas_port *port)
EXPORT_SYMBOL(sas_port_mark_backlink);
#define sas_rphy_show_simple(field, name, format_string, cast)		\
static ssize_t								\
show_sas_rphy_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_rphy_simple_attr(field, name, format_string, type)		\
sas_rphy_show_simple(field, name, format_string, (type))	\
static SAS_DEVICE_ATTR(rphy, name, S_IRUGO, 			\
show_sas_rphy_##name, NULL)
#define sas_rphy_show_protocol(field, name)				\
static ssize_t								\
show_sas_rphy_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)		\
#define sas_rphy_protocol_attr(field, name)				\
sas_rphy_show_protocol(field, name)				\
static SAS_DEVICE_ATTR(rphy, name, S_IRUGO,			\
show_sas_rphy_##name, NULL)
static ssize_t
show_sas_rphy_device_type(struct device *dev,
struct device_attribute *attr, char *buf)
static SAS_DEVICE_ATTR(rphy, device_type, S_IRUGO,
show_sas_rphy_device_type, NULL);
static ssize_t
show_sas_rphy_enclosure_identifier(struct device *dev,
struct device_attribute *attr, char *buf)
static SAS_DEVICE_ATTR(rphy, enclosure_identifier, S_IRUGO,
show_sas_rphy_enclosure_identifier, NULL);
static ssize_t
show_sas_rphy_bay_identifier(struct device *dev,
struct device_attribute *attr, char *buf)
static SAS_DEVICE_ATTR(rphy, bay_identifier, S_IRUGO,
show_sas_rphy_bay_identifier, NULL);
sas_rphy_protocol_attr(identify.initiator_port_protocols,
initiator_port_protocols);
sas_rphy_protocol_attr(identify.target_port_protocols, target_port_protocols);
sas_rphy_simple_attr(identify.sas_address, sas_address, "0x%016llx\n",
unsigned long long);
sas_rphy_simple_attr(identify.phy_identifier, phy_identifier, "%d\n", u8);
#define BUF_SIZE 64
int sas_read_port_mode_page(struct scsi_device *sdev)
EXPORT_SYMBOL(sas_read_port_mode_page);
static DECLARE_TRANSPORT_CLASS(sas_end_dev_class,
"sas_end_device", NULL, NULL, NULL);
#define sas_end_dev_show_simple(field, name, format_string, cast)	\
static ssize_t								\
show_sas_end_dev_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define sas_end_dev_simple_attr(field, name, format_string, type)	\
sas_end_dev_show_simple(field, name, format_string, (type))	\
static SAS_DEVICE_ATTR(end_dev, name, S_IRUGO, 			\
show_sas_end_dev_##name, NULL)
sas_end_dev_simple_attr(ready_led_meaning, ready_led_meaning, "%d\n", int);
sas_end_dev_simple_attr(I_T_nexus_loss_timeout, I_T_nexus_loss_timeout,
"%d\n", int);
sas_end_dev_simple_attr(initiator_response_timeout, initiator_response_timeout,
"%d\n", int);
sas_end_dev_simple_attr(tlr_supported, tlr_supported,
"%d\n", int);
sas_end_dev_simple_attr(tlr_enabled, tlr_enabled,
"%d\n", int);
static DECLARE_TRANSPORT_CLASS(sas_expander_class,
"sas_expander", NULL, NULL, NULL);
#define sas_expander_show_simple(field, name, format_string, cast)	\
static ssize_t								\
show_sas_expander_##name(struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define sas_expander_simple_attr(field, name, format_string, type)	\
sas_expander_show_simple(field, name, format_string, (type))	\
static SAS_DEVICE_ATTR(expander, name, S_IRUGO, 			\
show_sas_expander_##name, NULL)
sas_expander_simple_attr(vendor_id, vendor_id, "%s\n", char *);
sas_expander_simple_attr(product_id, product_id, "%s\n", char *);
sas_expander_simple_attr(product_rev, product_rev, "%s\n", char *);
sas_expander_simple_attr(component_vendor_id, component_vendor_id,
"%s\n", char *);
sas_expander_simple_attr(component_id, component_id, "%u\n", unsigned int);
sas_expander_simple_attr(component_revision_id, component_revision_id, "%u\n",
unsigned int);
sas_expander_simple_attr(level, level, "%d\n", int);
static DECLARE_TRANSPORT_CLASS(sas_rphy_class,
"sas_device", NULL, NULL, NULL);
static int sas_rphy_match(struct attribute_container *cont, struct device *dev)
static int sas_end_dev_match(struct attribute_container *cont,
struct device *dev)
static int sas_expander_match(struct attribute_container *cont,
struct device *dev)
static void sas_expander_release(struct device *dev)
static void sas_end_device_release(struct device *dev)
static void sas_rphy_initialize(struct sas_rphy *rphy)
struct sas_rphy *sas_end_device_alloc(struct sas_port *parent)
EXPORT_SYMBOL(sas_end_device_alloc);
struct sas_rphy *sas_expander_alloc(struct sas_port *parent,
enum sas_device_type type)
EXPORT_SYMBOL(sas_expander_alloc);
int sas_rphy_add(struct sas_rphy *rphy)
EXPORT_SYMBOL(sas_rphy_add);
void sas_rphy_free(struct sas_rphy *rphy)
EXPORT_SYMBOL(sas_rphy_free);
void
sas_rphy_delete(struct sas_rphy *rphy)
EXPORT_SYMBOL(sas_rphy_delete);
void
sas_rphy_remove(struct sas_rphy *rphy)
EXPORT_SYMBOL(sas_rphy_remove);
int scsi_is_sas_rphy(const struct device *dev)
EXPORT_SYMBOL(scsi_is_sas_rphy);
static int sas_user_scan(struct Scsi_Host *shost, uint channel,
uint id, uint lun)
#define SETUP_TEMPLATE(attrb, field, perm, test)			\
i->private_##attrb[count] = dev_attr_##field;		\
i->private_##attrb[count].attr.mode = perm;			\
i->attrb[count] = &i->private_##attrb[count];			\
if (test)							\
count++
#define SETUP_TEMPLATE_RW(attrb, field, perm, test, ro_test, ro_perm)	\
i->private_##attrb[count] = dev_attr_##field;		\
i->private_##attrb[count].attr.mode = perm;			\
if (ro_test) 								\
i->attrb[count] = &i->private_##attrb[count];			\
if (test)							\
count++
#define SETUP_RPORT_ATTRIBUTE(field) 					\
SETUP_TEMPLATE(rphy_attrs, field, S_IRUGO, 1)
#define SETUP_OPTIONAL_RPORT_ATTRIBUTE(field, func)			\
SETUP_TEMPLATE(rphy_attrs, field, S_IRUGO, i->f->func)
#define SETUP_PHY_ATTRIBUTE(field)					\
SETUP_TEMPLATE(phy_attrs, field, S_IRUGO, 1)
#define SETUP_PHY_ATTRIBUTE_RW(field)					\
SETUP_TEMPLATE_RW(phy_attrs, field, S_IRUGO | S_IWUSR, 1,	\
!i->f->set_phy_speed, S_IRUGO)
#define SETUP_OPTIONAL_PHY_ATTRIBUTE_RW(field, func)			\
SETUP_TEMPLATE_RW(phy_attrs, field, S_IRUGO | S_IWUSR, 1,	\
!i->f->func, S_IRUGO)
#define SETUP_PORT_ATTRIBUTE(field)					\
SETUP_TEMPLATE(port_attrs, field, S_IRUGO, 1)
#define SETUP_OPTIONAL_PHY_ATTRIBUTE(field, func)			\
SETUP_TEMPLATE(phy_attrs, field, S_IRUGO, i->f->func)
#define SETUP_PHY_ATTRIBUTE_WRONLY(field)				\
SETUP_TEMPLATE(phy_attrs, field, S_IWUSR, 1)
#define SETUP_OPTIONAL_PHY_ATTRIBUTE_WRONLY(field, func)		\
SETUP_TEMPLATE(phy_attrs, field, S_IWUSR, i->f->func)
#define SETUP_END_DEV_ATTRIBUTE(field)					\
SETUP_TEMPLATE(end_dev_attrs, field, S_IRUGO, 1)
#define SETUP_EXPANDER_ATTRIBUTE(field)					\
SETUP_TEMPLATE(expander_attrs, expander_##field, S_IRUGO, 1)
struct scsi_transport_template *
sas_attach_transport(struct sas_function_template *ft)
EXPORT_SYMBOL(sas_attach_transport);
void sas_release_transport(struct scsi_transport_template *t)
EXPORT_SYMBOL(sas_release_transport);
static __init int sas_transport_init(void)
static void __exit sas_transport_exit(void)
MODULE_AUTHOR("Christoph Hellwig");
MODULE_DESCRIPTION("SAS Transport Attributes");
MODULE_LICENSE("GPL");
module_init(sas_transport_init);
module_exit(sas_transport_exit);
