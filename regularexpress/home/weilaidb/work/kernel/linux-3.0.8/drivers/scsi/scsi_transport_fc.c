static int fc_queue_work(struct Scsi_Host *, struct work_struct *);
static void fc_vport_sched_delete(struct work_struct *work);
static int fc_vport_setup(struct Scsi_Host *shost, int channel,
struct device *pdev, struct fc_vport_identifiers  *ids,
struct fc_vport **vport);
static int fc_bsg_hostadd(struct Scsi_Host *, struct fc_host_attrs *);
static int fc_bsg_rportadd(struct Scsi_Host *, struct fc_rport *);
static void fc_bsg_remove(struct request_queue *);
static void fc_bsg_goose_queue(struct fc_rport *);
static unsigned int fc_dev_loss_tmo = 60;
module_param_named(dev_loss_tmo, fc_dev_loss_tmo, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(dev_loss_tmo,
"Maximum number of seconds that the FC transport should"
" insulate the loss of a remote port. Once this value is"
" exceeded, the scsi target is removed. Value should be"
" between 1 and SCSI_DEVICE_BLOCK_MAX_TIMEOUT if"
" fast_io_fail_tmo is not set.");
#define FC_DEVICE_ATTR(_prefix,_name,_mode,_show,_store)		\
struct device_attribute device_attr_##_prefix##_##_name = 	\
__ATTR(_name,_mode,_show,_store)
#define fc_enum_name_search(title, table_type, table)			\
static const char *get_fc_##title##_name(enum table_type table_key)	\
#define fc_enum_name_match(title, table_type, table)			\
static int get_fc_##title##_match(const char *table_key,		\
enum table_type *value)					\
static struct  fc_port_type_names[] = ;
fc_enum_name_search(port_type, fc_port_type, fc_port_type_names)
#define FC_PORTTYPE_MAX_NAMELEN		50
#define get_fc_vport_type_name get_fc_port_type_name
static const struct  fc_host_event_code_names[] = ;
fc_enum_name_search(host_event_code, fc_host_event_code,
fc_host_event_code_names)
#define FC_HOST_EVENT_CODE_MAX_NAMELEN	30
static struct  fc_port_state_names[] = ;
fc_enum_name_search(port_state, fc_port_state, fc_port_state_names)
#define FC_PORTSTATE_MAX_NAMELEN	20
static struct  fc_vport_state_names[] = ;
fc_enum_name_search(vport_state, fc_vport_state, fc_vport_state_names)
#define FC_VPORTSTATE_MAX_NAMELEN	24
#define get_fc_vport_last_state_name get_fc_vport_state_name
static const struct  fc_tgtid_binding_type_names[] = ;
fc_enum_name_search(tgtid_bind_type, fc_tgtid_binding_type,
fc_tgtid_binding_type_names)
fc_enum_name_match(tgtid_bind_type, fc_tgtid_binding_type,
fc_tgtid_binding_type_names)
#define FC_BINDTYPE_MAX_NAMELEN	30
#define fc_bitfield_name_search(title, table)			\
static ssize_t							\
get_fc_##title##_names(u32 table_key, char *buf)		\
static const struct  fc_cos_names[] = ;
fc_bitfield_name_search(cos, fc_cos_names)
static const struct  fc_port_speed_names[] = ;
fc_bitfield_name_search(port_speed, fc_port_speed_names)
static int
show_fc_fc4s (char *buf, u8 *fc4_list)
static const struct  fc_port_role_names[] = ;
fc_bitfield_name_search(port_roles, fc_port_role_names)
#define FC_WELLKNOWN_PORTID_MASK	0xfffff0
#define FC_WELLKNOWN_ROLE_MASK  	0x00000f
#define FC_FPORT_PORTID			0x00000e
#define FC_FABCTLR_PORTID		0x00000d
#define FC_DIRSRVR_PORTID		0x00000c
#define FC_TIMESRVR_PORTID		0x00000b
#define FC_MGMTSRVR_PORTID		0x00000a
static void fc_timeout_deleted_rport(struct work_struct *work);
static void fc_timeout_fail_rport_io(struct work_struct *work);
static void fc_scsi_scan_rport(struct work_struct *work);
#define FC_STARGET_NUM_ATTRS 	3
#define FC_RPORT_NUM_ATTRS	10
#define FC_VPORT_NUM_ATTRS	9
#define FC_HOST_NUM_ATTRS	22
struct fc_internal ;
#define to_fc_internal(tmpl)	container_of(tmpl, struct fc_internal, t)
static int fc_target_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(fc_transport_class,
"fc_transport",
fc_target_setup,
NULL,
NULL);
static int fc_host_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static int fc_host_remove(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(fc_host_class,
"fc_host",
fc_host_setup,
fc_host_remove,
NULL);
static DECLARE_TRANSPORT_CLASS(fc_rport_class,
"fc_remote_ports",
NULL,
NULL,
NULL);
static DECLARE_TRANSPORT_CLASS(fc_vport_class,
"fc_vports",
NULL,
NULL,
NULL);
static atomic_t fc_event_seq;
u32
fc_get_event_number(void)
EXPORT_SYMBOL(fc_get_event_number);
void
fc_host_post_event(struct Scsi_Host *shost, u32 event_number,
enum fc_host_event_code event_code, u32 event_data)
EXPORT_SYMBOL(fc_host_post_event);
void
fc_host_post_vendor_event(struct Scsi_Host *shost, u32 event_number,
u32 data_len, char * data_buf, u64 vendor_id)
EXPORT_SYMBOL(fc_host_post_vendor_event);
static __init int fc_transport_init(void)
static void __exit fc_transport_exit(void)
#define fc_rport_show_function(field, format_string, sz, cast)		\
static ssize_t								\
show_fc_rport_##field (struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define fc_rport_store_function(field)					\
static ssize_t								\
store_fc_rport_##field(struct device *dev,				\
struct device_attribute *attr,			\
const char *buf,	size_t count)			\
#define fc_rport_rd_attr(field, format_string, sz)			\
fc_rport_show_function(field, format_string, sz, )		\
static FC_DEVICE_ATTR(rport, field, S_IRUGO,			\
show_fc_rport_##field, NULL)
#define fc_rport_rd_attr_cast(field, format_string, sz, cast)		\
fc_rport_show_function(field, format_string, sz, (cast))	\
static FC_DEVICE_ATTR(rport, field, S_IRUGO,			\
show_fc_rport_##field, NULL)
#define fc_rport_rw_attr(field, format_string, sz)			\
fc_rport_show_function(field, format_string, sz, )		\
fc_rport_store_function(field)					\
static FC_DEVICE_ATTR(rport, field, S_IRUGO | S_IWUSR,		\
show_fc_rport_##field,				\
store_fc_rport_##field)
#define fc_private_rport_show_function(field, format_string, sz, cast)	\
static ssize_t								\
show_fc_rport_##field (struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define fc_private_rport_rd_attr(field, format_string, sz)		\
fc_private_rport_show_function(field, format_string, sz, )	\
static FC_DEVICE_ATTR(rport, field, S_IRUGO,			\
show_fc_rport_##field, NULL)
#define fc_private_rport_rd_attr_cast(field, format_string, sz, cast)	\
fc_private_rport_show_function(field, format_string, sz, (cast)) \
static FC_DEVICE_ATTR(rport, field, S_IRUGO,			\
show_fc_rport_##field, NULL)
#define fc_private_rport_rd_enum_attr(title, maxlen)			\
static ssize_t								\
show_fc_rport_##title (struct device *dev,				\
struct device_attribute *attr, char *buf)	\
\
static FC_DEVICE_ATTR(rport, title, S_IRUGO,			\
show_fc_rport_##title, NULL)
#define SETUP_RPORT_ATTRIBUTE_RD(field)					\
i->private_rport_attrs[count] = device_attr_rport_##field; \
i->private_rport_attrs[count].attr.mode = S_IRUGO;		\
i->private_rport_attrs[count].store = NULL;			\
i->rport_attrs[count] = &i->private_rport_attrs[count];		\
if (i->f->show_rport_##field)					\
count++
#define SETUP_PRIVATE_RPORT_ATTRIBUTE_RD(field)				\
i->private_rport_attrs[count] = device_attr_rport_##field; \
i->private_rport_attrs[count].attr.mode = S_IRUGO;		\
i->private_rport_attrs[count].store = NULL;			\
i->rport_attrs[count] = &i->private_rport_attrs[count];		\
count++
#define SETUP_RPORT_ATTRIBUTE_RW(field)					\
i->private_rport_attrs[count] = device_attr_rport_##field; \
if (!i->f->set_rport_##field) 								\
i->rport_attrs[count] = &i->private_rport_attrs[count];		\
if (i->f->show_rport_##field)					\
count++
#define SETUP_PRIVATE_RPORT_ATTRIBUTE_RW(field)				\
fc_private_rport_rd_attr(maxframe_size, "%u bytes\n", 20);
static ssize_t
show_fc_rport_supported_classes (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(rport, supported_classes, S_IRUGO,
show_fc_rport_supported_classes, NULL);
static int fc_str_to_dev_loss(const char *buf, unsigned long *val)
static int fc_rport_set_dev_loss_tmo(struct fc_rport *rport,
unsigned long val)
fc_rport_show_function(dev_loss_tmo, "%d\n", 20, )
static ssize_t
store_fc_rport_dev_loss_tmo(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static FC_DEVICE_ATTR(rport, dev_loss_tmo, S_IRUGO | S_IWUSR,
show_fc_rport_dev_loss_tmo, store_fc_rport_dev_loss_tmo);
fc_private_rport_rd_attr_cast(node_name, "0x%llx\n", 20, unsigned long long);
fc_private_rport_rd_attr_cast(port_name, "0x%llx\n", 20, unsigned long long);
fc_private_rport_rd_attr(port_id, "0x%06x\n", 20);
static ssize_t
show_fc_rport_roles (struct device *dev, struct device_attribute *attr,
char *buf)
static FC_DEVICE_ATTR(rport, roles, S_IRUGO,
show_fc_rport_roles, NULL);
fc_private_rport_rd_enum_attr(port_state, FC_PORTSTATE_MAX_NAMELEN);
fc_private_rport_rd_attr(scsi_target_id, "%d\n", 20);
static ssize_t
show_fc_rport_fast_io_fail_tmo (struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
store_fc_rport_fast_io_fail_tmo(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static FC_DEVICE_ATTR(rport, fast_io_fail_tmo, S_IRUGO | S_IWUSR,
show_fc_rport_fast_io_fail_tmo, store_fc_rport_fast_io_fail_tmo);
#define fc_starget_show_function(field, format_string, sz, cast)	\
static ssize_t								\
show_fc_starget_##field (struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define fc_starget_rd_attr(field, format_string, sz)			\
fc_starget_show_function(field, format_string, sz, )		\
static FC_DEVICE_ATTR(starget, field, S_IRUGO,			\
show_fc_starget_##field, NULL)
#define fc_starget_rd_attr_cast(field, format_string, sz, cast)		\
fc_starget_show_function(field, format_string, sz, (cast))	\
static FC_DEVICE_ATTR(starget, field, S_IRUGO,			\
show_fc_starget_##field, NULL)
#define SETUP_STARGET_ATTRIBUTE_RD(field)				\
i->private_starget_attrs[count] = device_attr_starget_##field; \
i->private_starget_attrs[count].attr.mode = S_IRUGO;		\
i->private_starget_attrs[count].store = NULL;			\
i->starget_attrs[count] = &i->private_starget_attrs[count];	\
if (i->f->show_starget_##field)					\
count++
#define SETUP_STARGET_ATTRIBUTE_RW(field)				\
i->private_starget_attrs[count] = device_attr_starget_##field; \
if (!i->f->set_starget_##field) 								\
i->starget_attrs[count] = &i->private_starget_attrs[count];	\
if (i->f->show_starget_##field)					\
count++
fc_starget_rd_attr_cast(node_name, "0x%llx\n", 20, unsigned long long);
fc_starget_rd_attr_cast(port_name, "0x%llx\n", 20, unsigned long long);
fc_starget_rd_attr(port_id, "0x%06x\n", 20);
#define fc_vport_show_function(field, format_string, sz, cast)		\
static ssize_t								\
show_fc_vport_##field (struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define fc_vport_store_function(field)					\
static ssize_t								\
store_fc_vport_##field(struct device *dev,				\
struct device_attribute *attr,			\
const char *buf,	size_t count)			\
#define fc_vport_store_str_function(field, slen)			\
static ssize_t								\
store_fc_vport_##field(struct device *dev,				\
struct device_attribute *attr, 			\
const char *buf,	size_t count)			\
#define fc_vport_rd_attr(field, format_string, sz)			\
fc_vport_show_function(field, format_string, sz, )		\
static FC_DEVICE_ATTR(vport, field, S_IRUGO,			\
show_fc_vport_##field, NULL)
#define fc_vport_rd_attr_cast(field, format_string, sz, cast)		\
fc_vport_show_function(field, format_string, sz, (cast))	\
static FC_DEVICE_ATTR(vport, field, S_IRUGO,			\
show_fc_vport_##field, NULL)
#define fc_vport_rw_attr(field, format_string, sz)			\
fc_vport_show_function(field, format_string, sz, )		\
fc_vport_store_function(field)					\
static FC_DEVICE_ATTR(vport, field, S_IRUGO | S_IWUSR,		\
show_fc_vport_##field,				\
store_fc_vport_##field)
#define fc_private_vport_show_function(field, format_string, sz, cast)	\
static ssize_t								\
show_fc_vport_##field (struct device *dev,				\
struct device_attribute *attr, char *buf)	\
#define fc_private_vport_store_u32_function(field)			\
static ssize_t								\
store_fc_vport_##field(struct device *dev,				\
struct device_attribute *attr,			\
const char *buf,	size_t count)			\
#define fc_private_vport_rd_attr(field, format_string, sz)		\
fc_private_vport_show_function(field, format_string, sz, )	\
static FC_DEVICE_ATTR(vport, field, S_IRUGO,			\
show_fc_vport_##field, NULL)
#define fc_private_vport_rd_attr_cast(field, format_string, sz, cast)	\
fc_private_vport_show_function(field, format_string, sz, (cast)) \
static FC_DEVICE_ATTR(vport, field, S_IRUGO,			\
show_fc_vport_##field, NULL)
#define fc_private_vport_rw_u32_attr(field, format_string, sz)		\
fc_private_vport_show_function(field, format_string, sz, )	\
fc_private_vport_store_u32_function(field)			\
static FC_DEVICE_ATTR(vport, field, S_IRUGO | S_IWUSR,		\
show_fc_vport_##field,				\
store_fc_vport_##field)
#define fc_private_vport_rd_enum_attr(title, maxlen)			\
static ssize_t								\
show_fc_vport_##title (struct device *dev,				\
struct device_attribute *attr,			\
char *buf)					\
\
static FC_DEVICE_ATTR(vport, title, S_IRUGO,			\
show_fc_vport_##title, NULL)
#define SETUP_VPORT_ATTRIBUTE_RD(field)					\
i->private_vport_attrs[count] = device_attr_vport_##field; \
i->private_vport_attrs[count].attr.mode = S_IRUGO;		\
i->private_vport_attrs[count].store = NULL;			\
i->vport_attrs[count] = &i->private_vport_attrs[count];		\
if (i->f->get_##field)						\
count++
#define SETUP_PRIVATE_VPORT_ATTRIBUTE_RD(field)				\
i->private_vport_attrs[count] = device_attr_vport_##field; \
i->private_vport_attrs[count].attr.mode = S_IRUGO;		\
i->private_vport_attrs[count].store = NULL;			\
i->vport_attrs[count] = &i->private_vport_attrs[count];		\
count++
#define SETUP_VPORT_ATTRIBUTE_WR(field)					\
i->private_vport_attrs[count] = device_attr_vport_##field; \
i->vport_attrs[count] = &i->private_vport_attrs[count];		\
if (i->f->field)						\
count++
#define SETUP_VPORT_ATTRIBUTE_RW(field)					\
i->private_vport_attrs[count] = device_attr_vport_##field; \
if (!i->f->set_vport_##field) 								\
i->vport_attrs[count] = &i->private_vport_attrs[count];		\
count++
#define SETUP_PRIVATE_VPORT_ATTRIBUTE_RW(field)				\
fc_private_vport_rd_enum_attr(vport_state, FC_VPORTSTATE_MAX_NAMELEN);
fc_private_vport_rd_enum_attr(vport_last_state, FC_VPORTSTATE_MAX_NAMELEN);
fc_private_vport_rd_attr_cast(node_name, "0x%llx\n", 20, unsigned long long);
fc_private_vport_rd_attr_cast(port_name, "0x%llx\n", 20, unsigned long long);
static ssize_t
show_fc_vport_roles (struct device *dev, struct device_attribute *attr,
char *buf)
static FC_DEVICE_ATTR(vport, roles, S_IRUGO, show_fc_vport_roles, NULL);
fc_private_vport_rd_enum_attr(vport_type, FC_PORTTYPE_MAX_NAMELEN);
fc_private_vport_show_function(symbolic_name, "%s\n",
FC_VPORT_SYMBOLIC_NAMELEN + 1, )
fc_vport_store_str_function(symbolic_name, FC_VPORT_SYMBOLIC_NAMELEN)
static FC_DEVICE_ATTR(vport, symbolic_name, S_IRUGO | S_IWUSR,
show_fc_vport_symbolic_name, store_fc_vport_symbolic_name);
static ssize_t
store_fc_vport_delete(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static FC_DEVICE_ATTR(vport, vport_delete, S_IWUSR,
NULL, store_fc_vport_delete);
static ssize_t
store_fc_vport_disable(struct device *dev, struct device_attribute *attr,
const char *buf,
size_t count)
static FC_DEVICE_ATTR(vport, vport_disable, S_IWUSR,
NULL, store_fc_vport_disable);
#define fc_host_show_function(field, format_string, sz, cast)		\
static ssize_t								\
show_fc_host_##field (struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define fc_host_store_function(field)					\
static ssize_t								\
store_fc_host_##field(struct device *dev, 				\
struct device_attribute *attr,			\
const char *buf,	size_t count)			\
#define fc_host_store_str_function(field, slen)				\
static ssize_t								\
store_fc_host_##field(struct device *dev,				\
struct device_attribute *attr,			\
const char *buf, size_t count)			\
#define fc_host_rd_attr(field, format_string, sz)			\
fc_host_show_function(field, format_string, sz, )		\
static FC_DEVICE_ATTR(host, field, S_IRUGO,			\
show_fc_host_##field, NULL)
#define fc_host_rd_attr_cast(field, format_string, sz, cast)		\
fc_host_show_function(field, format_string, sz, (cast))		\
static FC_DEVICE_ATTR(host, field, S_IRUGO,			\
show_fc_host_##field, NULL)
#define fc_host_rw_attr(field, format_string, sz)			\
fc_host_show_function(field, format_string, sz, )		\
fc_host_store_function(field)					\
static FC_DEVICE_ATTR(host, field, S_IRUGO | S_IWUSR,		\
show_fc_host_##field,				\
store_fc_host_##field)
#define fc_host_rd_enum_attr(title, maxlen)				\
static ssize_t								\
show_fc_host_##title (struct device *dev,				\
struct device_attribute *attr, char *buf)		\
\
static FC_DEVICE_ATTR(host, title, S_IRUGO, show_fc_host_##title, NULL)
#define SETUP_HOST_ATTRIBUTE_RD(field)					\
i->private_host_attrs[count] = device_attr_host_##field;	\
i->private_host_attrs[count].attr.mode = S_IRUGO;		\
i->private_host_attrs[count].store = NULL;			\
i->host_attrs[count] = &i->private_host_attrs[count];		\
if (i->f->show_host_##field)					\
count++
#define SETUP_HOST_ATTRIBUTE_RD_NS(field)				\
i->private_host_attrs[count] = device_attr_host_##field;	\
i->private_host_attrs[count].attr.mode = S_IRUGO;		\
i->private_host_attrs[count].store = NULL;			\
i->host_attrs[count] = &i->private_host_attrs[count];		\
count++
#define SETUP_HOST_ATTRIBUTE_RW(field)					\
i->private_host_attrs[count] = device_attr_host_##field;	\
if (!i->f->set_host_##field) 								\
i->host_attrs[count] = &i->private_host_attrs[count];		\
if (i->f->show_host_##field)					\
count++
#define fc_private_host_show_function(field, format_string, sz, cast)	\
static ssize_t								\
show_fc_host_##field (struct device *dev,				\
struct device_attribute *attr, char *buf)		\
#define fc_private_host_rd_attr(field, format_string, sz)		\
fc_private_host_show_function(field, format_string, sz, )	\
static FC_DEVICE_ATTR(host, field, S_IRUGO,			\
show_fc_host_##field, NULL)
#define fc_private_host_rd_attr_cast(field, format_string, sz, cast)	\
fc_private_host_show_function(field, format_string, sz, (cast)) \
static FC_DEVICE_ATTR(host, field, S_IRUGO,			\
show_fc_host_##field, NULL)
#define SETUP_PRIVATE_HOST_ATTRIBUTE_RD(field)			\
i->private_host_attrs[count] = device_attr_host_##field;	\
i->private_host_attrs[count].attr.mode = S_IRUGO;		\
i->private_host_attrs[count].store = NULL;			\
i->host_attrs[count] = &i->private_host_attrs[count];		\
count++
#define SETUP_PRIVATE_HOST_ATTRIBUTE_RW(field)			\
static ssize_t
show_fc_host_supported_classes (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(host, supported_classes, S_IRUGO,
show_fc_host_supported_classes, NULL);
static ssize_t
show_fc_host_supported_fc4s (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(host, supported_fc4s, S_IRUGO,
show_fc_host_supported_fc4s, NULL);
static ssize_t
show_fc_host_supported_speeds (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(host, supported_speeds, S_IRUGO,
show_fc_host_supported_speeds, NULL);
fc_private_host_rd_attr_cast(node_name, "0x%llx\n", 20, unsigned long long);
fc_private_host_rd_attr_cast(port_name, "0x%llx\n", 20, unsigned long long);
fc_private_host_rd_attr_cast(permanent_port_name, "0x%llx\n", 20,
unsigned long long);
fc_private_host_rd_attr(maxframe_size, "%u bytes\n", 20);
fc_private_host_rd_attr(max_npiv_vports, "%u\n", 20);
fc_private_host_rd_attr(serial_number, "%s\n", (FC_SERIAL_NUMBER_SIZE +1));
static ssize_t
show_fc_host_active_fc4s (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(host, active_fc4s, S_IRUGO,
show_fc_host_active_fc4s, NULL);
static ssize_t
show_fc_host_speed (struct device *dev,
struct device_attribute *attr, char *buf)
static FC_DEVICE_ATTR(host, speed, S_IRUGO,
show_fc_host_speed, NULL);
fc_host_rd_attr(port_id, "0x%06x\n", 20);
fc_host_rd_enum_attr(port_type, FC_PORTTYPE_MAX_NAMELEN);
fc_host_rd_enum_attr(port_state, FC_PORTSTATE_MAX_NAMELEN);
fc_host_rd_attr_cast(fabric_name, "0x%llx\n", 20, unsigned long long);
fc_host_rd_attr(symbolic_name, "%s\n", FC_SYMBOLIC_NAME_SIZE + 1);
fc_private_host_show_function(system_hostname, "%s\n",
FC_SYMBOLIC_NAME_SIZE + 1, )
fc_host_store_str_function(system_hostname, FC_SYMBOLIC_NAME_SIZE)
static FC_DEVICE_ATTR(host, system_hostname, S_IRUGO | S_IWUSR,
show_fc_host_system_hostname, store_fc_host_system_hostname);
static ssize_t
show_fc_private_host_tgtid_bind_type(struct device *dev,
struct device_attribute *attr, char *buf)
#define get_list_head_entry(pos, head, member) 		\
pos = list_entry((head)->next, typeof(*pos), member)
static ssize_t
store_fc_private_host_tgtid_bind_type(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static FC_DEVICE_ATTR(host, tgtid_bind_type, S_IRUGO | S_IWUSR,
show_fc_private_host_tgtid_bind_type,
store_fc_private_host_tgtid_bind_type);
static ssize_t
store_fc_private_host_issue_lip(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static FC_DEVICE_ATTR(host, issue_lip, S_IWUSR, NULL,
store_fc_private_host_issue_lip);
static ssize_t
store_fc_private_host_dev_loss_tmo(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
fc_private_host_show_function(dev_loss_tmo, "%d\n", 20, );
static FC_DEVICE_ATTR(host, dev_loss_tmo, S_IRUGO | S_IWUSR,
show_fc_host_dev_loss_tmo,
store_fc_private_host_dev_loss_tmo);
fc_private_host_rd_attr(npiv_vports_inuse, "%u\n", 20);
static ssize_t
fc_stat_show(const struct device *dev, char *buf, unsigned long offset)
#define fc_host_statistic(name)						\
static ssize_t show_fcstat_##name(struct device *cd,			\
struct device_attribute *attr,	\
char *buf)				\
\
static FC_DEVICE_ATTR(host, name, S_IRUGO, show_fcstat_##name, NULL)
fc_host_statistic(seconds_since_last_reset);
fc_host_statistic(tx_frames);
fc_host_statistic(tx_words);
fc_host_statistic(rx_frames);
fc_host_statistic(rx_words);
fc_host_statistic(lip_count);
fc_host_statistic(nos_count);
fc_host_statistic(error_frames);
fc_host_statistic(dumped_frames);
fc_host_statistic(link_failure_count);
fc_host_statistic(loss_of_sync_count);
fc_host_statistic(loss_of_signal_count);
fc_host_statistic(prim_seq_protocol_err_count);
fc_host_statistic(invalid_tx_word_count);
fc_host_statistic(invalid_crc_count);
fc_host_statistic(fcp_input_requests);
fc_host_statistic(fcp_output_requests);
fc_host_statistic(fcp_control_requests);
fc_host_statistic(fcp_input_megabytes);
fc_host_statistic(fcp_output_megabytes);
static ssize_t
fc_reset_statistics(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static FC_DEVICE_ATTR(host, reset_statistics, S_IWUSR, NULL,
fc_reset_statistics);
static struct attribute *fc_statistics_attrs[] = ;
static struct attribute_group fc_statistics_group = ;
static int
fc_parse_wwn(const char *ns, u64 *nm)
static ssize_t
store_fc_host_vport_create(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static FC_DEVICE_ATTR(host, vport_create, S_IWUSR, NULL,
store_fc_host_vport_create);
static ssize_t
store_fc_host_vport_delete(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static FC_DEVICE_ATTR(host, vport_delete, S_IWUSR, NULL,
store_fc_host_vport_delete);
static int fc_host_match(struct attribute_container *cont,
struct device *dev)
static int fc_target_match(struct attribute_container *cont,
struct device *dev)
static void fc_rport_dev_release(struct device *dev)
int scsi_is_fc_rport(const struct device *dev)
EXPORT_SYMBOL(scsi_is_fc_rport);
static int fc_rport_match(struct attribute_container *cont,
struct device *dev)
static void fc_vport_dev_release(struct device *dev)
int scsi_is_fc_vport(const struct device *dev)
EXPORT_SYMBOL(scsi_is_fc_vport);
static int fc_vport_match(struct attribute_container *cont,
struct device *dev)
static enum blk_eh_timer_return
fc_timed_out(struct scsi_cmnd *scmd)
static void
fc_user_scan_tgt(struct Scsi_Host *shost, uint channel, uint id, uint lun)
static int
fc_user_scan(struct Scsi_Host *shost, uint channel, uint id, uint lun)
static int fc_tsk_mgmt_response(struct Scsi_Host *shost, u64 nexus, u64 tm_id,
int result)
static int fc_it_nexus_response(struct Scsi_Host *shost, u64 nexus, int result)
struct scsi_transport_template *
fc_attach_transport(struct fc_function_template *ft)
EXPORT_SYMBOL(fc_attach_transport);
void fc_release_transport(struct scsi_transport_template *t)
EXPORT_SYMBOL(fc_release_transport);
static int
fc_queue_work(struct Scsi_Host *shost, struct work_struct *work)
static void
fc_flush_work(struct Scsi_Host *shost)
static int
fc_queue_devloss_work(struct Scsi_Host *shost, struct delayed_work *work,
unsigned long delay)
static void
fc_flush_devloss(struct Scsi_Host *shost)
void
fc_remove_host(struct Scsi_Host *shost)
EXPORT_SYMBOL(fc_remove_host);
static void fc_terminate_rport_io(struct fc_rport *rport)
static void
fc_starget_delete(struct work_struct *work)
static void
fc_rport_final_delete(struct work_struct *work)
static struct fc_rport *
fc_rport_create(struct Scsi_Host *shost, int channel,
struct fc_rport_identifiers  *ids)
struct fc_rport *
fc_remote_port_add(struct Scsi_Host *shost, int channel,
struct fc_rport_identifiers  *ids)
EXPORT_SYMBOL(fc_remote_port_add);
void
fc_remote_port_delete(struct fc_rport  *rport)
EXPORT_SYMBOL(fc_remote_port_delete);
void
fc_remote_port_rolechg(struct fc_rport  *rport, u32 roles)
EXPORT_SYMBOL(fc_remote_port_rolechg);
static void
fc_timeout_deleted_rport(struct work_struct *work)
static void
fc_timeout_fail_rport_io(struct work_struct *work)
static void
fc_scsi_scan_rport(struct work_struct *work)
int fc_block_scsi_eh(struct scsi_cmnd *cmnd)
EXPORT_SYMBOL(fc_block_scsi_eh);
static int
fc_vport_setup(struct Scsi_Host *shost, int channel, struct device *pdev,
struct fc_vport_identifiers  *ids, struct fc_vport **ret_vport)
struct fc_vport *
fc_vport_create(struct Scsi_Host *shost, int channel,
struct fc_vport_identifiers *ids)
EXPORT_SYMBOL(fc_vport_create);
int
fc_vport_terminate(struct fc_vport *vport)
EXPORT_SYMBOL(fc_vport_terminate);
static void
fc_vport_sched_delete(struct work_struct *work)
static void
fc_destroy_bsgjob(struct fc_bsg_job *job)
static void
fc_bsg_jobdone(struct fc_bsg_job *job)
static void fc_bsg_softirq_done(struct request *rq)
static enum blk_eh_timer_return
fc_bsg_job_timeout(struct request *req)
static int
fc_bsg_map_buffer(struct fc_bsg_buffer *buf, struct request *req)
static int
fc_req_to_bsgjob(struct Scsi_Host *shost, struct fc_rport *rport,
struct request *req)
enum fc_dispatch_result ;
static enum fc_dispatch_result
fc_bsg_host_dispatch(struct request_queue *q, struct Scsi_Host *shost,
struct fc_bsg_job *job)
static void
fc_bsg_goose_queue(struct fc_rport *rport)
static enum fc_dispatch_result
fc_bsg_rport_dispatch(struct request_queue *q, struct Scsi_Host *shost,
struct fc_rport *rport, struct fc_bsg_job *job)
static void
fc_bsg_request_handler(struct request_queue *q, struct Scsi_Host *shost,
struct fc_rport *rport, struct device *dev)
static void
fc_bsg_host_handler(struct request_queue *q)
static void
fc_bsg_rport_handler(struct request_queue *q)
static int
fc_bsg_hostadd(struct Scsi_Host *shost, struct fc_host_attrs *fc_host)
static int
fc_bsg_rportadd(struct Scsi_Host *shost, struct fc_rport *rport)
static void
fc_bsg_remove(struct request_queue *q)
MODULE_AUTHOR("James Smart");
MODULE_DESCRIPTION("FC Transport Attributes");
MODULE_LICENSE("GPL");
module_init(fc_transport_init);
module_exit(fc_transport_exit);
