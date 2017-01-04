static void irnet_ppp_disconnect(struct work_struct *work)
static void
irnet_post_event(irnet_socket *	ap,
irnet_event	event,
__u32		saddr,
__u32		daddr,
char *		name,
__u16		hints)
static inline int
irnet_open_tsap(irnet_socket *	self)
static inline __u8
irnet_ias_to_tsap(irnet_socket *	self,
int			result,
struct ias_value *	value)
static inline int
irnet_find_lsap_sel(irnet_socket *	self)
static inline int
irnet_connect_tsap(irnet_socket *	self)
static inline int
irnet_discover_next_daddr(irnet_socket *	self)
static inline int
irnet_discover_daddr_and_lsap_sel(irnet_socket *	self)
static inline int
irnet_dname_to_daddr(irnet_socket *	self)
int
irda_irnet_create(irnet_socket *	self)
int
irda_irnet_connect(irnet_socket *	self)
void
irda_irnet_destroy(irnet_socket *	self)
static inline int
irnet_daddr_to_dname(irnet_socket *	self)
static inline irnet_socket *
irnet_find_socket(irnet_socket *	self)
static inline int
irnet_connect_socket(irnet_socket *	server,
irnet_socket *	new,
struct qos_info *	qos,
__u32		max_sdu_size,
__u8		max_header_size)
static inline void
irnet_disconnect_server(irnet_socket *	self,
struct sk_buff *skb)
static inline int
irnet_setup_server(void)
static inline void
irnet_destroy_server(void)
static int
irnet_data_indication(void *	instance,
void *	sap,
struct sk_buff *skb)
static void
irnet_disconnect_indication(void *	instance,
void *	sap,
LM_REASON	reason,
struct sk_buff *skb)
static void
irnet_connect_confirm(void *	instance,
void *	sap,
struct qos_info *qos,
__u32	max_sdu_size,
__u8	max_header_size,
struct sk_buff *skb)
static void
irnet_flow_indication(void *	instance,
void *	sap,
LOCAL_FLOW flow)
static void
irnet_status_indication(void *	instance,
LINK_STATUS link,
LOCK_STATUS lock)
static void
irnet_connect_indication(void *		instance,
void *		sap,
struct qos_info *qos,
__u32		max_sdu_size,
__u8		max_header_size,
struct sk_buff *skb)
static void
irnet_getvalue_confirm(int	result,
__u16	obj_id,
struct ias_value *value,
void *	priv)
static void
irnet_discovervalue_confirm(int		result,
__u16	obj_id,
struct ias_value *value,
void *	priv)
static void
irnet_discovery_indication(discinfo_t *		discovery,
DISCOVERY_MODE	mode,
void *		priv)
static void
irnet_expiry_indication(discinfo_t *	expiry,
DISCOVERY_MODE	mode,
void *		priv)
static int
irnet_proc_show(struct seq_file *m, void *v)
static int irnet_proc_open(struct inode *inode, struct file *file)
static const struct file_operations irnet_proc_fops = ;
int __init
irda_irnet_init(void)
void __exit
irda_irnet_cleanup(void)
