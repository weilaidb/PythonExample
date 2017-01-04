struct srp_host_attrs ;
#define to_srp_host_attrs(host)	((struct srp_host_attrs *)(host)->shost_data)
#define SRP_HOST_ATTRS 0
#define SRP_RPORT_ATTRS 2
struct srp_internal ;
#define to_srp_internal(tmpl) container_of(tmpl, struct srp_internal, t)
#define	dev_to_rport(d)	container_of(d, struct srp_rport, dev)
#define transport_class_to_srp_rport(dev) dev_to_rport((dev)->parent)
static int srp_host_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(srp_host_class, "srp_host", srp_host_setup,
NULL, NULL);
static DECLARE_TRANSPORT_CLASS(srp_rport_class, "srp_remote_ports",
NULL, NULL, NULL);
#define SETUP_TEMPLATE(attrb, field, perm, test, ro_test, ro_perm)	\
i->private_##attrb[count] = dev_attr_##field;		\
i->private_##attrb[count].attr.mode = perm;			\
if (ro_test) 								\
i->attrb[count] = &i->private_##attrb[count];			\
if (test)							\
count++
#define SETUP_RPORT_ATTRIBUTE_RD(field)					\
SETUP_TEMPLATE(rport_attrs, field, S_IRUGO, 1, 0, 0)
#define SETUP_RPORT_ATTRIBUTE_RW(field)					\
SETUP_TEMPLATE(rport_attrs, field, S_IRUGO | S_IWUSR,		\
1, 1, S_IRUGO)
#define SRP_PID(p) \
(p)->port_id[0], (p)->port_id[1], (p)->port_id[2], (p)->port_id[3], \
(p)->port_id[4], (p)->port_id[5], (p)->port_id[6], (p)->port_id[7], \
(p)->port_id[8], (p)->port_id[9], (p)->port_id[10], (p)->port_id[11], \
(p)->port_id[12], (p)->port_id[13], (p)->port_id[14], (p)->port_id[15]
#define SRP_PID_FMT "%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x:" \
"%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x"
static ssize_t
show_srp_rport_id(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(port_id, S_IRUGO, show_srp_rport_id, NULL);
static const struct  srp_rport_role_names[] = ;
static ssize_t
show_srp_rport_roles(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(roles, S_IRUGO, show_srp_rport_roles, NULL);
static void srp_rport_release(struct device *dev)
static int scsi_is_srp_rport(const struct device *dev)
static int srp_rport_match(struct attribute_container *cont,
struct device *dev)
static int srp_host_match(struct attribute_container *cont, struct device *dev)
struct srp_rport *srp_rport_add(struct Scsi_Host *shost,
struct srp_rport_identifiers *ids)
EXPORT_SYMBOL_GPL(srp_rport_add);
void srp_rport_del(struct srp_rport *rport)
EXPORT_SYMBOL_GPL(srp_rport_del);
static int do_srp_rport_del(struct device *dev, void *data)
void srp_remove_host(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(srp_remove_host);
static int srp_tsk_mgmt_response(struct Scsi_Host *shost, u64 nexus, u64 tm_id,
int result)
static int srp_it_nexus_response(struct Scsi_Host *shost, u64 nexus, int result)
struct scsi_transport_template *
srp_attach_transport(struct srp_function_template *ft)
EXPORT_SYMBOL_GPL(srp_attach_transport);
void srp_release_transport(struct scsi_transport_template *t)
EXPORT_SYMBOL_GPL(srp_release_transport);
static __init int srp_transport_init(void)
static void __exit srp_transport_exit(void)
MODULE_AUTHOR("FUJITA Tomonori");
MODULE_DESCRIPTION("SRP Transport Attributes");
MODULE_LICENSE("GPL");
module_init(srp_transport_init);
module_exit(srp_transport_exit);
