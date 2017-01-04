#define VXGE_MAIN_H
#define VXGE_DRIVER_NAME		"vxge"
#define VXGE_DRIVER_VENDOR		"Neterion, Inc"
#define VXGE_DRIVER_FW_VERSION_MAJOR	1
#define DRV_VERSION	VXGE_VERSION_MAJOR"."VXGE_VERSION_MINOR"."\
VXGE_VERSION_FIX"."VXGE_VERSION_BUILD"-"\
VXGE_VERSION_FOR
#define PCI_DEVICE_ID_TITAN_WIN		0x5733
#define PCI_DEVICE_ID_TITAN_UNI		0x5833
#define VXGE_HW_TITAN1_PCI_REVISION	1
#define VXGE_HW_TITAN1A_PCI_REVISION	2
#define	VXGE_USE_DEFAULT		0xffffffff
#define VXGE_HW_VPATH_MSIX_ACTIVE	4
#define VXGE_ALARM_MSIX_ID		2
#define VXGE_HW_RXSYNC_FREQ_CNT		4
#define VXGE_LL_WATCH_DOG_TIMEOUT	(15 * HZ)
#define VXGE_LL_RX_COPY_THRESHOLD	256
#define VXGE_DEF_FIFO_LENGTH		84
#define NO_STEERING		0
#define PORT_STEERING		0x1
#define RTH_STEERING		0x2
#define RX_TOS_STEERING		0x3
#define RX_VLAN_STEERING	0x4
#define RTH_BUCKET_SIZE		4
#define	TX_PRIORITY_STEERING	1
#define	TX_VLAN_STEERING	2
#define	TX_PORT_STEERING	3
#define	TX_MULTIQ_STEERING	4
#define VXGE_HW_MAC_ADDR_LEARN_DEFAULT VXGE_HW_RTS_MAC_DISABLE
#define VXGE_TTI_BTIMER_VAL 250000
#define VXGE_TTI_LTIMER_VAL	1000
#define VXGE_T1A_TTI_LTIMER_VAL	80
#define VXGE_TTI_RTIMER_VAL	0
#define VXGE_TTI_RTIMER_ADAPT_VAL	10
#define VXGE_T1A_TTI_RTIMER_VAL	400
#define VXGE_RTI_BTIMER_VAL	250
#define VXGE_RTI_LTIMER_VAL	100
#define VXGE_RTI_RTIMER_VAL	0
#define VXGE_RTI_RTIMER_ADAPT_VAL	15
#define VXGE_FIFO_INDICATE_MAX_PKTS	VXGE_DEF_FIFO_LENGTH
#define VXGE_ISR_POLLING_CNT 	8
#define VXGE_MAX_CONFIG_DEV	0xFF
#define VXGE_EXEC_MODE_DISABLE	0
#define VXGE_EXEC_MODE_ENABLE	1
#define VXGE_MAX_CONFIG_PORT	1
#define VXGE_ALL_VID_DISABLE	0
#define VXGE_ALL_VID_ENABLE	1
#define VXGE_PAUSE_CTRL_DISABLE	0
#define VXGE_PAUSE_CTRL_ENABLE	1
#define TTI_TX_URANGE_A	5
#define TTI_TX_URANGE_B	15
#define TTI_TX_URANGE_C	40
#define TTI_TX_UFC_A	5
#define TTI_TX_UFC_B	40
#define TTI_TX_UFC_C	60
#define TTI_TX_UFC_D	100
#define TTI_T1A_TX_UFC_A	30
#define TTI_T1A_TX_UFC_B	80
#define TTI_T1A_TX_UFC_C(mtu)	(60 + ((VXGE_HW_MAX_MTU - mtu) / 93))
#define TTI_T1A_TX_UFC_D(mtu)	(100 + ((VXGE_HW_MAX_MTU - mtu) / 37))
#define RTI_RX_URANGE_A		5
#define RTI_RX_URANGE_B		15
#define RTI_RX_URANGE_C		40
#define RTI_T1A_RX_URANGE_A	1
#define RTI_T1A_RX_URANGE_B	20
#define RTI_T1A_RX_URANGE_C	50
#define RTI_RX_UFC_A		1
#define RTI_RX_UFC_B		5
#define RTI_RX_UFC_C		10
#define RTI_RX_UFC_D		15
#define RTI_T1A_RX_UFC_B	20
#define RTI_T1A_RX_UFC_C	50
#define RTI_T1A_RX_UFC_D	60
#define VXGE_T1A_MAX_INTERRUPT_COUNT	100
#define VXGE_T1A_MAX_TX_INTERRUPT_COUNT	200
#define VXGE_TIMER_DELAY		10000
#define VXGE_LL_MAX_FRAME_SIZE(dev) ((dev)->mtu + VXGE_HW_MAC_HEADER_MAX_SIZE)
#define is_sriov(function_mode) \
((function_mode == VXGE_HW_FUNCTION_MODE_SRIOV) || \
(function_mode == VXGE_HW_FUNCTION_MODE_SRIOV_8) || \
(function_mode == VXGE_HW_FUNCTION_MODE_SRIOV_4))
enum vxge_reset_event ;
enum vxge_device_state_t ;
enum vxge_mac_addr_state ;
struct vxge_drv_config ;
struct macInfo ;
struct vxge_config ;
struct vxge_msix_entry ;
struct vxge_sw_stats ;
struct vxge_mac_addrs ;
struct vxgedev;
struct vxge_fifo_stats ;
struct vxge_fifo  ____cacheline_aligned;
struct vxge_ring_stats ;
struct vxge_ring  ____cacheline_aligned;
struct vxge_vpath ;
#define VXGE_COPY_DEBUG_INFO_TO_LL(vdev, err, trace)
struct vxgedev ;
struct vxge_rx_priv ;
struct vxge_tx_priv ;
#define VXGE_MODULE_PARAM_INT(p, val) \
static int p = val; \
module_param(p, int, 0)
#define vxge_os_timer(timer, handle, arg, exp) do  while (0);
void vxge_initialize_ethtool_ops(struct net_device *ndev);
enum vxge_hw_status vxge_reset_all_vpaths(struct vxgedev *vdev);
int vxge_fw_upgrade(struct vxgedev *vdev, char *fw_name, int override);
#define VXGE_DEBUG_INIT		0x00000001
#define VXGE_DEBUG_TX		0x00000002
#define VXGE_DEBUG_RX		0x00000004
#define VXGE_DEBUG_MEM		0x00000008
#define VXGE_DEBUG_LOCK		0x00000010
#define VXGE_DEBUG_SEM		0x00000020
#define VXGE_DEBUG_ENTRYEXIT	0x00000040
#define VXGE_DEBUG_INTR		0x00000080
#define VXGE_DEBUG_LL_CONFIG	0x00000100
#define VXGE_DEBUG_MASK	0x0
#if (VXGE_DEBUG_LL_CONFIG & VXGE_DEBUG_MASK)
#define vxge_debug_ll_config(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_LL_CONFIG, fmt, __VA_ARGS__)
#define vxge_debug_ll_config(level, fmt, ...)
#if (VXGE_DEBUG_INIT & VXGE_DEBUG_MASK)
#define vxge_debug_init(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_INIT, fmt, __VA_ARGS__)
#define vxge_debug_init(level, fmt, ...)
#if (VXGE_DEBUG_TX & VXGE_DEBUG_MASK)
#define vxge_debug_tx(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_TX, fmt, __VA_ARGS__)
#define vxge_debug_tx(level, fmt, ...)
#if (VXGE_DEBUG_RX & VXGE_DEBUG_MASK)
#define vxge_debug_rx(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_RX, fmt, __VA_ARGS__)
#define vxge_debug_rx(level, fmt, ...)
#if (VXGE_DEBUG_MEM & VXGE_DEBUG_MASK)
#define vxge_debug_mem(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_MEM, fmt, __VA_ARGS__)
#define vxge_debug_mem(level, fmt, ...)
#if (VXGE_DEBUG_ENTRYEXIT & VXGE_DEBUG_MASK)
#define vxge_debug_entryexit(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_ENTRYEXIT, fmt, __VA_ARGS__)
#define vxge_debug_entryexit(level, fmt, ...)
#if (VXGE_DEBUG_INTR & VXGE_DEBUG_MASK)
#define vxge_debug_intr(level, fmt, ...) \
vxge_debug_ll(level, VXGE_DEBUG_INTR, fmt, __VA_ARGS__)
#define vxge_debug_intr(level, fmt, ...)
#define VXGE_DEVICE_DEBUG_LEVEL_SET(level, mask, vdev)
#define vxge_tcp_mss(skb) (skb_shinfo(skb)->gso_size)
#define vxge_udp_mss(skb) (skb_shinfo(skb)->gso_size)
#define vxge_offload_type(skb) (skb_shinfo(skb)->gso_type)
