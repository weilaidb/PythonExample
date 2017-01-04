#define ATA_PORT_ATTRS		2
#define ATA_LINK_ATTRS		3
#define ATA_DEV_ATTRS		9
struct scsi_transport_template;
struct scsi_transport_template *ata_scsi_transport_template;
struct ata_internal ;
#define to_ata_internal(tmpl)	container_of(tmpl, struct ata_internal, t)
#define tdev_to_device(d)					\
container_of((d), struct ata_device, tdev)
#define transport_class_to_dev(dev)				\
tdev_to_device((dev)->parent)
#define tdev_to_link(d)						\
container_of((d), struct ata_link, tdev)
#define transport_class_to_link(dev)				\
tdev_to_link((dev)->parent)
#define tdev_to_port(d)						\
container_of((d), struct ata_port, tdev)
#define transport_class_to_port(dev)				\
tdev_to_port((dev)->parent)
static int ata_tdev_add(struct ata_device *dev);
static void ata_tdev_delete(struct ata_device *dev);
#define ATA_DEVICE_ATTR(_prefix,_name,_mode,_show,_store) \
struct device_attribute device_attr_##_prefix##_##_name = \
__ATTR(_name,_mode,_show,_store)
#define ata_bitfield_name_match(title, table)			\
static ssize_t							\
get_ata_##title##_names(u32 table_key, char *buf)		\
#define ata_bitfield_name_search(title, table)			\
static ssize_t							\
get_ata_##title##_names(u32 table_key, char *buf)		\
static struct  ata_class_names[] = ;
ata_bitfield_name_search(class, ata_class_names)
static struct  ata_err_names[] = ;
ata_bitfield_name_match(err, ata_err_names)
static struct  ata_xfer_names[] = ;
ata_bitfield_name_match(xfer,ata_xfer_names)
#define ata_port_show_simple(field, name, format_string, cast)		\
static ssize_t								\
show_ata_port_##name(struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define ata_port_simple_attr(field, name, format_string, type)		\
ata_port_show_simple(field, name, format_string, (type))	\
static DEVICE_ATTR(name, S_IRUGO, show_ata_port_##name, NULL)
ata_port_simple_attr(nr_pmp_links, nr_pmp_links, "%d\n", int);
ata_port_simple_attr(stats.idle_irq, idle_irq, "%ld\n", unsigned long);
static DECLARE_TRANSPORT_CLASS(ata_port_class,
"ata_port", NULL, NULL, NULL);
static void ata_tport_release(struct device *dev)
int ata_is_port(const struct device *dev)
static int ata_tport_match(struct attribute_container *cont,
struct device *dev)
void ata_tport_delete(struct ata_port *ap)
int ata_tport_add(struct device *parent,
struct ata_port *ap)
#define ata_link_show_linkspeed(field)					\
static ssize_t								\
show_ata_link_##field(struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define ata_link_linkspeed_attr(field)					\
ata_link_show_linkspeed(field)					\
static DEVICE_ATTR(field, S_IRUGO, show_ata_link_##field, NULL)
ata_link_linkspeed_attr(hw_sata_spd_limit);
ata_link_linkspeed_attr(sata_spd_limit);
ata_link_linkspeed_attr(sata_spd);
static DECLARE_TRANSPORT_CLASS(ata_link_class,
"ata_link", NULL, NULL, NULL);
static void ata_tlink_release(struct device *dev)
int ata_is_link(const struct device *dev)
static int ata_tlink_match(struct attribute_container *cont,
struct device *dev)
void ata_tlink_delete(struct ata_link *link)
int ata_tlink_add(struct ata_link *link)
#define ata_dev_show_class(title, field)				\
static ssize_t								\
show_ata_dev_##field(struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define ata_dev_attr(title, field)					\
ata_dev_show_class(title, field)				\
static DEVICE_ATTR(field, S_IRUGO, show_ata_dev_##field, NULL)
ata_dev_attr(class, class);
ata_dev_attr(xfer, pio_mode);
ata_dev_attr(xfer, dma_mode);
ata_dev_attr(xfer, xfer_mode);
#define ata_dev_show_simple(field, format_string, cast)		\
static ssize_t								\
show_ata_dev_##field(struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define ata_dev_simple_attr(field, format_string, type)	\
ata_dev_show_simple(field, format_string, (type))	\
static DEVICE_ATTR(field, S_IRUGO, 			\
show_ata_dev_##field, NULL)
ata_dev_simple_attr(spdn_cnt, "%d\n", int);
struct ata_show_ering_arg ;
static int ata_show_ering(struct ata_ering_entry *ent, void *void_arg)
static ssize_t
show_ata_dev_ering(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ering, S_IRUGO, show_ata_dev_ering, NULL);
static ssize_t
show_ata_dev_id(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(id, S_IRUGO, show_ata_dev_id, NULL);
static ssize_t
show_ata_dev_gscr(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(gscr, S_IRUGO, show_ata_dev_gscr, NULL);
static DECLARE_TRANSPORT_CLASS(ata_dev_class,
"ata_device", NULL, NULL, NULL);
static void ata_tdev_release(struct device *dev)
int ata_is_ata_dev(const struct device *dev)
static int ata_tdev_match(struct attribute_container *cont,
struct device *dev)
static void ata_tdev_free(struct ata_device *dev)
static void ata_tdev_delete(struct ata_device *ata_dev)
static int ata_tdev_add(struct ata_device *ata_dev)
#define SETUP_TEMPLATE(attrb, field, perm, test)			\
i->private_##attrb[count] = dev_attr_##field;		       	\
i->private_##attrb[count].attr.mode = perm;			\
i->attrb[count] = &i->private_##attrb[count];			\
if (test)							\
count++
#define SETUP_LINK_ATTRIBUTE(field)					\
SETUP_TEMPLATE(link_attrs, field, S_IRUGO, 1)
#define SETUP_PORT_ATTRIBUTE(field)					\
SETUP_TEMPLATE(port_attrs, field, S_IRUGO, 1)
#define SETUP_DEV_ATTRIBUTE(field)					\
SETUP_TEMPLATE(dev_attrs, field, S_IRUGO, 1)
struct scsi_transport_template *ata_attach_transport(void)
void ata_release_transport(struct scsi_transport_template *t)
__init int libata_transport_init(void)
void __exit libata_transport_exit(void)
