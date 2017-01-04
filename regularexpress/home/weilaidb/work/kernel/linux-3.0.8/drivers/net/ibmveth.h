#define _IBMVETH_H
#define IbmVethMcastReceptionModifyBit     0x80000UL
#define IbmVethMcastReceptionEnableBit     0x20000UL
#define IbmVethMcastFilterModifyBit        0x40000UL
#define IbmVethMcastFilterEnableBit        0x10000UL
#define IbmVethMcastEnableRecv       (IbmVethMcastReceptionModifyBit | IbmVethMcastReceptionEnableBit)
#define IbmVethMcastDisableRecv      (IbmVethMcastReceptionModifyBit)
#define IbmVethMcastEnableFiltering  (IbmVethMcastFilterModifyBit | IbmVethMcastFilterEnableBit)
#define IbmVethMcastDisableFiltering (IbmVethMcastFilterModifyBit)
#define IbmVethMcastAddFilter        0x1UL
#define IbmVethMcastRemoveFilter     0x2UL
#define IbmVethMcastClearFilterTable 0x3UL
#define IBMVETH_ILLAN_PADDED_PKT_CSUM	0x0000000000002000UL
#define IBMVETH_ILLAN_TRUNK_PRI_MASK	0x0000000000000F00UL
#define IBMVETH_ILLAN_IPV6_TCP_CSUM		0x0000000000000004UL
#define IBMVETH_ILLAN_IPV4_TCP_CSUM		0x0000000000000002UL
#define IBMVETH_ILLAN_ACTIVE_TRUNK		0x0000000000000001UL
#define h_register_logical_lan(ua, buflst, rxq, fltlst, mac) \
plpar_hcall_norets(H_REGISTER_LOGICAL_LAN, ua, buflst, rxq, fltlst, mac)
#define h_free_logical_lan(ua) \
plpar_hcall_norets(H_FREE_LOGICAL_LAN, ua)
#define h_add_logical_lan_buffer(ua, buf) \
plpar_hcall_norets(H_ADD_LOGICAL_LAN_BUFFER, ua, buf)
static inline long h_send_logical_lan(unsigned long unit_address,
unsigned long desc1, unsigned long desc2, unsigned long desc3,
unsigned long desc4, unsigned long desc5, unsigned long desc6,
unsigned long corellator_in, unsigned long *corellator_out)
static inline long h_illan_attributes(unsigned long unit_address,
unsigned long reset_mask, unsigned long set_mask,
unsigned long *ret_attributes)
#define h_multicast_ctrl(ua, cmd, mac) \
plpar_hcall_norets(H_MULTICAST_CTRL, ua, cmd, mac)
#define h_change_logical_lan_mac(ua, mac) \
plpar_hcall_norets(H_CHANGE_LOGICAL_LAN_MAC, ua, mac)
#define IBMVETH_NUM_BUFF_POOLS 5
#define IBMVETH_IO_ENTITLEMENT_DEFAULT 4243456
#define IBMVETH_BUFF_OH 22
#define IBMVETH_MIN_MTU 68
#define IBMVETH_MAX_POOL_COUNT 4096
#define IBMVETH_BUFF_LIST_SIZE 4096
#define IBMVETH_FILT_LIST_SIZE 4096
#define IBMVETH_MAX_BUF_SIZE (1024 * 128)
static int pool_size[] = ;
static int pool_count[] = ;
static int pool_active[] = ;
#define IBM_VETH_INVALID_MAP ((u16)0xffff)
struct ibmveth_buff_pool ;
struct ibmveth_rx_q ;
struct ibmveth_adapter ;
struct ibmveth_buf_desc_fields ;
union ibmveth_buf_desc ;
struct ibmveth_rx_q_entry ;
