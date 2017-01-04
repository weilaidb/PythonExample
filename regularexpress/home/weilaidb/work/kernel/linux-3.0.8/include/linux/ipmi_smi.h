#define __LINUX_IPMI_SMI_H
typedef struct ipmi_smi *ipmi_smi_t;
struct ipmi_smi_msg ;
struct ipmi_smi_handlers ;
struct ipmi_device_id ;
#define ipmi_version_major(v) ((v)->ipmi_version & 0xf)
#define ipmi_version_minor(v) ((v)->ipmi_version >> 4)
static inline int ipmi_demangle_device_id(const unsigned char *data,
unsigned int data_len,
struct ipmi_device_id *id)
int ipmi_register_smi(struct ipmi_smi_handlers *handlers,
void                     *send_info,
struct ipmi_device_id    *device_id,
struct device            *dev,
const char               *sysfs_name,
unsigned char            slave_addr);
int ipmi_unregister_smi(ipmi_smi_t intf);
void ipmi_smi_msg_received(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg);
void ipmi_smi_watchdog_pretimeout(ipmi_smi_t intf);
struct ipmi_smi_msg *ipmi_alloc_smi_msg(void);
static inline void ipmi_free_smi_msg(struct ipmi_smi_msg *msg)
int ipmi_smi_add_proc_entry(ipmi_smi_t smi, char *name,
const struct file_operations *proc_ops,
void *data);
