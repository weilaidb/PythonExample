static unsigned int limit_uint(unsigned int value)
int ehca_query_device(struct ib_device *ibdev, struct ib_device_attr *props)
static enum ib_mtu map_mtu(struct ehca_shca *shca, u32 fw_mtu)
static u8 map_number_of_vls(struct ehca_shca *shca, u32 vl_cap)
int ehca_query_port(struct ib_device *ibdev,
u8 port, struct ib_port_attr *props)
int ehca_query_sma_attr(struct ehca_shca *shca,
u8 port, struct ehca_sma_attr *attr)
int ehca_query_pkey(struct ib_device *ibdev, u8 port, u16 index, u16 *pkey)
int ehca_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static const u32 allowed_port_caps = (
IB_PORT_SM | IB_PORT_LED_INFO_SUP | IB_PORT_CM_SUP |
IB_PORT_SNMP_TUNNEL_SUP | IB_PORT_DEVICE_MGMT_SUP |
IB_PORT_VENDOR_CLASS_SUP);
int ehca_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
