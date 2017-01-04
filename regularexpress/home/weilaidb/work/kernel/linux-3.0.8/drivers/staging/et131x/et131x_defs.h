#define __ET131X_DEFS_H__
#define NIC_MIN_PACKET_SIZE	60
#define NIC_MAX_MCAST_LIST	128
#define ET131X_PACKET_TYPE_DIRECTED		0x0001
#define ET131X_PACKET_TYPE_MULTICAST		0x0002
#define ET131X_PACKET_TYPE_BROADCAST		0x0004
#define ET131X_PACKET_TYPE_PROMISCUOUS		0x0008
#define ET131X_PACKET_TYPE_ALL_MULTICAST	0x0010
#define ET131X_TX_TIMEOUT	(1 * HZ)
#define NIC_SEND_HANG_THRESHOLD	0
#define fMP_DEST_MULTI			0x00000001
#define fMP_DEST_BROAD			0x00000002
#define fMP_ADAPTER_RECV_LOOKASIDE	0x00000004
#define fMP_ADAPTER_INTERRUPT_IN_USE	0x00000008
#define fMP_ADAPTER_SECONDARY		0x00000010
#define fMP_ADAPTER_SHUTDOWN		0x00100000
#define fMP_ADAPTER_LOWER_POWER		0x00200000
#define fMP_ADAPTER_NON_RECOVER_ERROR	0x00800000
#define fMP_ADAPTER_RESET_IN_PROGRESS	0x01000000
#define fMP_ADAPTER_NO_CABLE		0x02000000
#define fMP_ADAPTER_HARDWARE_ERROR	0x04000000
#define fMP_ADAPTER_REMOVE_IN_PROGRESS	0x08000000
#define fMP_ADAPTER_HALT_IN_PROGRESS	0x10000000
#define fMP_ADAPTER_LINK_DETECTION	0x20000000
#define fMP_ADAPTER_FAIL_SEND_MASK	0x3ff00000
#define fMP_ADAPTER_NOT_READY_MASK	0x3ff00000
#define ET1310_PCI_MAX_PYLD		0x4C
#define ET1310_PCI_MAC_ADDRESS		0xA4
#define ET1310_PCI_EEPROM_STATUS	0xB2
#define ET1310_PCI_ACK_NACK		0xC0
#define ET1310_PCI_REPLAY		0xC2
#define ET1310_PCI_L0L1LATENCY		0xCF
#define ET131X_PCI_VENDOR_ID		0x11C1
#define ET131X_PCI_DEVICE_ID_GIG	0xED00
#define ET131X_PCI_DEVICE_ID_FAST	0xED01
#define NANO_IN_A_MICRO	1000
#define PARM_RX_NUM_BUFS_DEF    4
#define PARM_RX_TIME_INT_DEF    10
#define PARM_RX_MEM_END_DEF     0x2bc
#define PARM_TX_TIME_INT_DEF    40
#define PARM_TX_NUM_BUFS_DEF    4
#define PARM_DMA_CACHE_DEF      0