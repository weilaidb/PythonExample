#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define KS_DMA_TX_CTRL			0x0000
#define DMA_TX_ENABLE			0x00000001
#define DMA_TX_CRC_ENABLE		0x00000002
#define DMA_TX_PAD_ENABLE		0x00000004
#define DMA_TX_LOOPBACK			0x00000100
#define DMA_TX_FLOW_ENABLE		0x00000200
#define DMA_TX_CSUM_IP			0x00010000
#define DMA_TX_CSUM_TCP			0x00020000
#define DMA_TX_CSUM_UDP			0x00040000
#define DMA_TX_BURST_SIZE		0x3F000000
#define KS_DMA_RX_CTRL			0x0004
#define DMA_RX_ENABLE			0x00000001
#define KS884X_DMA_RX_MULTICAST		0x00000002
#define DMA_RX_PROMISCUOUS		0x00000004
#define DMA_RX_ERROR			0x00000008
#define DMA_RX_UNICAST			0x00000010
#define DMA_RX_ALL_MULTICAST		0x00000020
#define DMA_RX_BROADCAST		0x00000040
#define DMA_RX_FLOW_ENABLE		0x00000200
#define DMA_RX_CSUM_IP			0x00010000
#define DMA_RX_CSUM_TCP			0x00020000
#define DMA_RX_CSUM_UDP			0x00040000
#define DMA_RX_BURST_SIZE		0x3F000000
#define DMA_BURST_SHIFT			24
#define DMA_BURST_DEFAULT		8
#define KS_DMA_TX_START			0x0008
#define KS_DMA_RX_START			0x000C
#define DMA_START			0x00000001
#define KS_DMA_TX_ADDR			0x0010
#define KS_DMA_RX_ADDR			0x0014
#define DMA_ADDR_LIST_MASK		0xFFFFFFFC
#define DMA_ADDR_LIST_SHIFT		2
#define KS884X_MULTICAST_0_OFFSET	0x0020
#define KS884X_MULTICAST_1_OFFSET	0x0021
#define KS884X_MULTICAST_2_OFFSET	0x0022
#define KS884x_MULTICAST_3_OFFSET	0x0023
#define KS884X_MULTICAST_4_OFFSET	0x0024
#define KS884X_MULTICAST_5_OFFSET	0x0025
#define KS884X_MULTICAST_6_OFFSET	0x0026
#define KS884X_MULTICAST_7_OFFSET	0x0027
#define KS884X_INTERRUPTS_ENABLE	0x0028
#define KS884X_INTERRUPTS_STATUS	0x002C
#define KS884X_INT_RX_STOPPED		0x02000000
#define KS884X_INT_TX_STOPPED		0x04000000
#define KS884X_INT_RX_OVERRUN		0x08000000
#define KS884X_INT_TX_EMPTY		0x10000000
#define KS884X_INT_RX			0x20000000
#define KS884X_INT_TX			0x40000000
#define KS884X_INT_PHY			0x80000000
#define KS884X_INT_RX_MASK		\
(KS884X_INT_RX | KS884X_INT_RX_OVERRUN)
#define KS884X_INT_TX_MASK		\
(KS884X_INT_TX | KS884X_INT_TX_EMPTY)
#define KS884X_INT_MASK	(KS884X_INT_RX | KS884X_INT_TX | KS884X_INT_PHY)
#define KS_ADD_ADDR_0_LO		0x0080
#define KS_ADD_ADDR_0_HI		0x0084
#define KS_ADD_ADDR_1_LO		0x0088
#define KS_ADD_ADDR_1_HI		0x008C
#define KS_ADD_ADDR_2_LO		0x0090
#define KS_ADD_ADDR_2_HI		0x0094
#define KS_ADD_ADDR_3_LO		0x0098
#define KS_ADD_ADDR_3_HI		0x009C
#define KS_ADD_ADDR_4_LO		0x00A0
#define KS_ADD_ADDR_4_HI		0x00A4
#define KS_ADD_ADDR_5_LO		0x00A8
#define KS_ADD_ADDR_5_HI		0x00AC
#define KS_ADD_ADDR_6_LO		0x00B0
#define KS_ADD_ADDR_6_HI		0x00B4
#define KS_ADD_ADDR_7_LO		0x00B8
#define KS_ADD_ADDR_7_HI		0x00BC
#define KS_ADD_ADDR_8_LO		0x00C0
#define KS_ADD_ADDR_8_HI		0x00C4
#define KS_ADD_ADDR_9_LO		0x00C8
#define KS_ADD_ADDR_9_HI		0x00CC
#define KS_ADD_ADDR_A_LO		0x00D0
#define KS_ADD_ADDR_A_HI		0x00D4
#define KS_ADD_ADDR_B_LO		0x00D8
#define KS_ADD_ADDR_B_HI		0x00DC
#define KS_ADD_ADDR_C_LO		0x00E0
#define KS_ADD_ADDR_C_HI		0x00E4
#define KS_ADD_ADDR_D_LO		0x00E8
#define KS_ADD_ADDR_D_HI		0x00EC
#define KS_ADD_ADDR_E_LO		0x00F0
#define KS_ADD_ADDR_E_HI		0x00F4
#define KS_ADD_ADDR_F_LO		0x00F8
#define KS_ADD_ADDR_F_HI		0x00FC
#define ADD_ADDR_HI_MASK		0x0000FFFF
#define ADD_ADDR_ENABLE			0x80000000
#define ADD_ADDR_INCR			8
#define KS884X_ADDR_0_OFFSET		0x0200
#define KS884X_ADDR_1_OFFSET		0x0201
#define KS884X_ADDR_2_OFFSET		0x0202
#define KS884X_ADDR_3_OFFSET		0x0203
#define KS884X_ADDR_4_OFFSET		0x0204
#define KS884X_ADDR_5_OFFSET		0x0205
#define KS884X_BUS_CTRL_OFFSET		0x0210
#define BUS_SPEED_125_MHZ		0x0000
#define BUS_SPEED_62_5_MHZ		0x0001
#define BUS_SPEED_41_66_MHZ		0x0002
#define BUS_SPEED_25_MHZ		0x0003
#define KS884X_EEPROM_CTRL_OFFSET	0x0212
#define EEPROM_CHIP_SELECT		0x0001
#define EEPROM_SERIAL_CLOCK		0x0002
#define EEPROM_DATA_OUT			0x0004
#define EEPROM_DATA_IN			0x0008
#define EEPROM_ACCESS_ENABLE		0x0010
#define KS884X_MEM_INFO_OFFSET		0x0214
#define RX_MEM_TEST_FAILED		0x0008
#define RX_MEM_TEST_FINISHED		0x0010
#define TX_MEM_TEST_FAILED		0x0800
#define TX_MEM_TEST_FINISHED		0x1000
#define KS884X_GLOBAL_CTRL_OFFSET	0x0216
#define GLOBAL_SOFTWARE_RESET		0x0001
#define KS8841_POWER_MANAGE_OFFSET	0x0218
#define KS8841_WOL_CTRL_OFFSET		0x021A
#define KS8841_WOL_MAGIC_ENABLE		0x0080
#define KS8841_WOL_FRAME3_ENABLE	0x0008
#define KS8841_WOL_FRAME2_ENABLE	0x0004
#define KS8841_WOL_FRAME1_ENABLE	0x0002
#define KS8841_WOL_FRAME0_ENABLE	0x0001
#define KS8841_WOL_FRAME_CRC_OFFSET	0x0220
#define KS8841_WOL_FRAME_BYTE0_OFFSET	0x0224
#define KS8841_WOL_FRAME_BYTE2_OFFSET	0x0228
#define KS884X_IACR_P			0x04A0
#define KS884X_IACR_OFFSET		KS884X_IACR_P
#define KS884X_IADR1_P			0x04A2
#define KS884X_IADR2_P			0x04A4
#define KS884X_IADR3_P			0x04A6
#define KS884X_IADR4_P			0x04A8
#define KS884X_IADR5_P			0x04AA
#define KS884X_ACC_CTRL_SEL_OFFSET	KS884X_IACR_P
#define KS884X_ACC_CTRL_INDEX_OFFSET	(KS884X_ACC_CTRL_SEL_OFFSET + 1)
#define KS884X_ACC_DATA_0_OFFSET	KS884X_IADR4_P
#define KS884X_ACC_DATA_1_OFFSET	(KS884X_ACC_DATA_0_OFFSET + 1)
#define KS884X_ACC_DATA_2_OFFSET	KS884X_IADR5_P
#define KS884X_ACC_DATA_3_OFFSET	(KS884X_ACC_DATA_2_OFFSET + 1)
#define KS884X_ACC_DATA_4_OFFSET	KS884X_IADR2_P
#define KS884X_ACC_DATA_5_OFFSET	(KS884X_ACC_DATA_4_OFFSET + 1)
#define KS884X_ACC_DATA_6_OFFSET	KS884X_IADR3_P
#define KS884X_ACC_DATA_7_OFFSET	(KS884X_ACC_DATA_6_OFFSET + 1)
#define KS884X_ACC_DATA_8_OFFSET	KS884X_IADR1_P
#define KS884X_P1MBCR_P			0x04D0
#define KS884X_P1MBSR_P			0x04D2
#define KS884X_PHY1ILR_P		0x04D4
#define KS884X_PHY1IHR_P		0x04D6
#define KS884X_P1ANAR_P			0x04D8
#define KS884X_P1ANLPR_P		0x04DA
#define KS884X_P2MBCR_P			0x04E0
#define KS884X_P2MBSR_P			0x04E2
#define KS884X_PHY2ILR_P		0x04E4
#define KS884X_PHY2IHR_P		0x04E6
#define KS884X_P2ANAR_P			0x04E8
#define KS884X_P2ANLPR_P		0x04EA
#define KS884X_PHY_1_CTRL_OFFSET	KS884X_P1MBCR_P
#define PHY_CTRL_INTERVAL		(KS884X_P2MBCR_P - KS884X_P1MBCR_P)
#define KS884X_PHY_CTRL_OFFSET		0x00
#define PHY_REG_CTRL			0
#define PHY_RESET			0x8000
#define PHY_LOOPBACK			0x4000
#define PHY_SPEED_100MBIT		0x2000
#define PHY_AUTO_NEG_ENABLE		0x1000
#define PHY_POWER_DOWN			0x0800
#define PHY_MII_DISABLE			0x0400
#define PHY_AUTO_NEG_RESTART		0x0200
#define PHY_FULL_DUPLEX			0x0100
#define PHY_COLLISION_TEST		0x0080
#define PHY_HP_MDIX			0x0020
#define PHY_FORCE_MDIX			0x0010
#define PHY_AUTO_MDIX_DISABLE		0x0008
#define PHY_REMOTE_FAULT_DISABLE	0x0004
#define PHY_TRANSMIT_DISABLE		0x0002
#define PHY_LED_DISABLE			0x0001
#define KS884X_PHY_STATUS_OFFSET	0x02
#define PHY_REG_STATUS			1
#define PHY_100BT4_CAPABLE		0x8000
#define PHY_100BTX_FD_CAPABLE		0x4000
#define PHY_100BTX_CAPABLE		0x2000
#define PHY_10BT_FD_CAPABLE		0x1000
#define PHY_10BT_CAPABLE		0x0800
#define PHY_MII_SUPPRESS_CAPABLE	0x0040
#define PHY_AUTO_NEG_ACKNOWLEDGE	0x0020
#define PHY_REMOTE_FAULT		0x0010
#define PHY_AUTO_NEG_CAPABLE		0x0008
#define PHY_LINK_STATUS			0x0004
#define PHY_JABBER_DETECT		0x0002
#define PHY_EXTENDED_CAPABILITY		0x0001
#define KS884X_PHY_ID_1_OFFSET		0x04
#define KS884X_PHY_ID_2_OFFSET		0x06
#define PHY_REG_ID_1			2
#define PHY_REG_ID_2			3
#define KS884X_PHY_AUTO_NEG_OFFSET	0x08
#define PHY_REG_AUTO_NEGOTIATION	4
#define PHY_AUTO_NEG_NEXT_PAGE		0x8000
#define PHY_AUTO_NEG_REMOTE_FAULT	0x2000
#define PHY_AUTO_NEG_ASYM_PAUSE		0x0800
#define PHY_AUTO_NEG_SYM_PAUSE		0x0400
#define PHY_AUTO_NEG_100BT4		0x0200
#define PHY_AUTO_NEG_100BTX_FD		0x0100
#define PHY_AUTO_NEG_100BTX		0x0080
#define PHY_AUTO_NEG_10BT_FD		0x0040
#define PHY_AUTO_NEG_10BT		0x0020
#define PHY_AUTO_NEG_SELECTOR		0x001F
#define PHY_AUTO_NEG_802_3		0x0001
#define PHY_AUTO_NEG_PAUSE  (PHY_AUTO_NEG_SYM_PAUSE | PHY_AUTO_NEG_ASYM_PAUSE)
#define KS884X_PHY_REMOTE_CAP_OFFSET	0x0A
#define PHY_REG_REMOTE_CAPABILITY	5
#define PHY_REMOTE_NEXT_PAGE		0x8000
#define PHY_REMOTE_ACKNOWLEDGE		0x4000
#define PHY_REMOTE_REMOTE_FAULT		0x2000
#define PHY_REMOTE_SYM_PAUSE		0x0400
#define PHY_REMOTE_100BTX_FD		0x0100
#define PHY_REMOTE_100BTX		0x0080
#define PHY_REMOTE_10BT_FD		0x0040
#define PHY_REMOTE_10BT			0x0020
#define KS884X_P1VCT_P			0x04F0
#define KS884X_P1PHYCTRL_P		0x04F2
#define KS884X_P2VCT_P			0x04F4
#define KS884X_P2PHYCTRL_P		0x04F6
#define KS884X_PHY_SPECIAL_OFFSET	KS884X_P1VCT_P
#define PHY_SPECIAL_INTERVAL		(KS884X_P2VCT_P - KS884X_P1VCT_P)
#define KS884X_PHY_LINK_MD_OFFSET	0x00
#define PHY_START_CABLE_DIAG		0x8000
#define PHY_CABLE_DIAG_RESULT		0x6000
#define PHY_CABLE_STAT_NORMAL		0x0000
#define PHY_CABLE_STAT_OPEN		0x2000
#define PHY_CABLE_STAT_SHORT		0x4000
#define PHY_CABLE_STAT_FAILED		0x6000
#define PHY_CABLE_10M_SHORT		0x1000
#define PHY_CABLE_FAULT_COUNTER		0x01FF
#define KS884X_PHY_PHY_CTRL_OFFSET	0x02
#define PHY_STAT_REVERSED_POLARITY	0x0020
#define PHY_STAT_MDIX			0x0010
#define PHY_FORCE_LINK			0x0008
#define PHY_POWER_SAVING_DISABLE	0x0004
#define PHY_REMOTE_LOOPBACK		0x0002
#define KS884X_SIDER_P			0x0400
#define KS884X_CHIP_ID_OFFSET		KS884X_SIDER_P
#define KS884X_FAMILY_ID_OFFSET		(KS884X_CHIP_ID_OFFSET + 1)
#define REG_FAMILY_ID			0x88
#define REG_CHIP_ID_41			0x8810
#define REG_CHIP_ID_42			0x8800
#define KS884X_CHIP_ID_MASK_41		0xFF10
#define KS884X_CHIP_ID_MASK		0xFFF0
#define KS884X_CHIP_ID_SHIFT		4
#define KS884X_REVISION_MASK		0x000E
#define KS884X_REVISION_SHIFT		1
#define KS8842_START			0x0001
#define CHIP_IP_41_M			0x8810
#define CHIP_IP_42_M			0x8800
#define CHIP_IP_61_M			0x8890
#define CHIP_IP_62_M			0x8880
#define CHIP_IP_41_P			0x8850
#define CHIP_IP_42_P			0x8840
#define CHIP_IP_61_P			0x88D0
#define CHIP_IP_62_P			0x88C0
#define KS8842_SGCR1_P			0x0402
#define KS8842_SWITCH_CTRL_1_OFFSET	KS8842_SGCR1_P
#define SWITCH_PASS_ALL			0x8000
#define SWITCH_TX_FLOW_CTRL		0x2000
#define SWITCH_RX_FLOW_CTRL		0x1000
#define SWITCH_CHECK_LENGTH		0x0800
#define SWITCH_AGING_ENABLE		0x0400
#define SWITCH_FAST_AGING		0x0200
#define SWITCH_AGGR_BACKOFF		0x0100
#define SWITCH_PASS_PAUSE		0x0008
#define SWITCH_LINK_AUTO_AGING		0x0001
#define KS8842_SGCR2_P			0x0404
#define KS8842_SWITCH_CTRL_2_OFFSET	KS8842_SGCR2_P
#define SWITCH_VLAN_ENABLE		0x8000
#define SWITCH_IGMP_SNOOP		0x4000
#define IPV6_MLD_SNOOP_ENABLE		0x2000
#define IPV6_MLD_SNOOP_OPTION		0x1000
#define PRIORITY_SCHEME_SELECT		0x0800
#define SWITCH_MIRROR_RX_TX		0x0100
#define UNICAST_VLAN_BOUNDARY		0x0080
#define MULTICAST_STORM_DISABLE		0x0040
#define SWITCH_BACK_PRESSURE		0x0020
#define FAIR_FLOW_CTRL			0x0010
#define NO_EXC_COLLISION_DROP		0x0008
#define SWITCH_HUGE_PACKET		0x0004
#define SWITCH_LEGAL_PACKET		0x0002
#define SWITCH_BUF_RESERVE		0x0001
#define KS8842_SGCR3_P			0x0406
#define KS8842_SWITCH_CTRL_3_OFFSET	KS8842_SGCR3_P
#define BROADCAST_STORM_RATE_LO		0xFF00
#define SWITCH_REPEATER			0x0080
#define SWITCH_HALF_DUPLEX		0x0040
#define SWITCH_FLOW_CTRL		0x0020
#define SWITCH_10_MBIT			0x0010
#define SWITCH_REPLACE_NULL_VID		0x0008
#define BROADCAST_STORM_RATE_HI		0x0007
#define BROADCAST_STORM_RATE		0x07FF
#define KS8842_SGCR4_P			0x0408
#define KS8842_SGCR5_P			0x040A
#define KS8842_SWITCH_CTRL_5_OFFSET	KS8842_SGCR5_P
#define LED_MODE			0x8200
#define LED_SPEED_DUPLEX_ACT		0x0000
#define LED_SPEED_DUPLEX_LINK_ACT	0x8000
#define LED_DUPLEX_10_100		0x0200
#define KS8842_SGCR6_P			0x0410
#define KS8842_SWITCH_CTRL_6_OFFSET	KS8842_SGCR6_P
#define KS8842_PRIORITY_MASK		3
#define KS8842_PRIORITY_SHIFT		2
#define KS8842_SGCR7_P			0x0412
#define KS8842_SWITCH_CTRL_7_OFFSET	KS8842_SGCR7_P
#define SWITCH_UNK_DEF_PORT_ENABLE	0x0008
#define SWITCH_UNK_DEF_PORT_3		0x0004
#define SWITCH_UNK_DEF_PORT_2		0x0002
#define SWITCH_UNK_DEF_PORT_1		0x0001
#define KS8842_MACAR1_P			0x0470
#define KS8842_MACAR2_P			0x0472
#define KS8842_MACAR3_P			0x0474
#define KS8842_MAC_ADDR_1_OFFSET	KS8842_MACAR1_P
#define KS8842_MAC_ADDR_0_OFFSET	(KS8842_MAC_ADDR_1_OFFSET + 1)
#define KS8842_MAC_ADDR_3_OFFSET	KS8842_MACAR2_P
#define KS8842_MAC_ADDR_2_OFFSET	(KS8842_MAC_ADDR_3_OFFSET + 1)
#define KS8842_MAC_ADDR_5_OFFSET	KS8842_MACAR3_P
#define KS8842_MAC_ADDR_4_OFFSET	(KS8842_MAC_ADDR_5_OFFSET + 1)
#define KS8842_TOSR1_P			0x0480
#define KS8842_TOSR2_P			0x0482
#define KS8842_TOSR3_P			0x0484
#define KS8842_TOSR4_P			0x0486
#define KS8842_TOSR5_P			0x0488
#define KS8842_TOSR6_P			0x048A
#define KS8842_TOSR7_P			0x0490
#define KS8842_TOSR8_P			0x0492
#define KS8842_TOS_1_OFFSET		KS8842_TOSR1_P
#define KS8842_TOS_2_OFFSET		KS8842_TOSR2_P
#define KS8842_TOS_3_OFFSET		KS8842_TOSR3_P
#define KS8842_TOS_4_OFFSET		KS8842_TOSR4_P
#define KS8842_TOS_5_OFFSET		KS8842_TOSR5_P
#define KS8842_TOS_6_OFFSET		KS8842_TOSR6_P
#define KS8842_TOS_7_OFFSET		KS8842_TOSR7_P
#define KS8842_TOS_8_OFFSET		KS8842_TOSR8_P
#define KS8842_P1CR1_P			0x0500
#define KS8842_P1CR2_P			0x0502
#define KS8842_P1VIDR_P			0x0504
#define KS8842_P1CR3_P			0x0506
#define KS8842_P1IRCR_P			0x0508
#define KS8842_P1ERCR_P			0x050A
#define KS884X_P1SCSLMD_P		0x0510
#define KS884X_P1CR4_P			0x0512
#define KS884X_P1SR_P			0x0514
#define KS8842_P2CR1_P			0x0520
#define KS8842_P2CR2_P			0x0522
#define KS8842_P2VIDR_P			0x0524
#define KS8842_P2CR3_P			0x0526
#define KS8842_P2IRCR_P			0x0528
#define KS8842_P2ERCR_P			0x052A
#define KS884X_P2SCSLMD_P		0x0530
#define KS884X_P2CR4_P			0x0532
#define KS884X_P2SR_P			0x0534
#define KS8842_P3CR1_P			0x0540
#define KS8842_P3CR2_P			0x0542
#define KS8842_P3VIDR_P			0x0544
#define KS8842_P3CR3_P			0x0546
#define KS8842_P3IRCR_P			0x0548
#define KS8842_P3ERCR_P			0x054A
#define KS8842_PORT_1_CTRL_1		KS8842_P1CR1_P
#define KS8842_PORT_2_CTRL_1		KS8842_P2CR1_P
#define KS8842_PORT_3_CTRL_1		KS8842_P3CR1_P
#define PORT_CTRL_ADDR(port, addr)		\
(addr = KS8842_PORT_1_CTRL_1 + (port) *	\
(KS8842_PORT_2_CTRL_1 - KS8842_PORT_1_CTRL_1))
#define KS8842_PORT_CTRL_1_OFFSET	0x00
#define PORT_BROADCAST_STORM		0x0080
#define PORT_DIFFSERV_ENABLE		0x0040
#define PORT_802_1P_ENABLE		0x0020
#define PORT_BASED_PRIORITY_MASK	0x0018
#define PORT_BASED_PRIORITY_BASE	0x0003
#define PORT_BASED_PRIORITY_SHIFT	3
#define PORT_BASED_PRIORITY_0		0x0000
#define PORT_BASED_PRIORITY_1		0x0008
#define PORT_BASED_PRIORITY_2		0x0010
#define PORT_BASED_PRIORITY_3		0x0018
#define PORT_INSERT_TAG			0x0004
#define PORT_REMOVE_TAG			0x0002
#define PORT_PRIO_QUEUE_ENABLE		0x0001
#define KS8842_PORT_CTRL_2_OFFSET	0x02
#define PORT_INGRESS_VLAN_FILTER	0x4000
#define PORT_DISCARD_NON_VID		0x2000
#define PORT_FORCE_FLOW_CTRL		0x1000
#define PORT_BACK_PRESSURE		0x0800
#define PORT_TX_ENABLE			0x0400
#define PORT_RX_ENABLE			0x0200
#define PORT_LEARN_DISABLE		0x0100
#define PORT_MIRROR_SNIFFER		0x0080
#define PORT_MIRROR_RX			0x0040
#define PORT_MIRROR_TX			0x0020
#define PORT_USER_PRIORITY_CEILING	0x0008
#define PORT_VLAN_MEMBERSHIP		0x0007
#define KS8842_PORT_CTRL_VID_OFFSET	0x04
#define PORT_DEFAULT_VID		0x0001
#define KS8842_PORT_CTRL_3_OFFSET	0x06
#define PORT_INGRESS_LIMIT_MODE		0x000C
#define PORT_INGRESS_ALL		0x0000
#define PORT_INGRESS_UNICAST		0x0004
#define PORT_INGRESS_MULTICAST		0x0008
#define PORT_INGRESS_BROADCAST		0x000C
#define PORT_COUNT_IFG			0x0002
#define PORT_COUNT_PREAMBLE		0x0001
#define KS8842_PORT_IN_RATE_OFFSET	0x08
#define KS8842_PORT_OUT_RATE_OFFSET	0x0A
#define PORT_PRIORITY_RATE		0x0F
#define PORT_PRIORITY_RATE_SHIFT	4
#define KS884X_PORT_LINK_MD		0x10
#define PORT_CABLE_10M_SHORT		0x8000
#define PORT_CABLE_DIAG_RESULT		0x6000
#define PORT_CABLE_STAT_NORMAL		0x0000
#define PORT_CABLE_STAT_OPEN		0x2000
#define PORT_CABLE_STAT_SHORT		0x4000
#define PORT_CABLE_STAT_FAILED		0x6000
#define PORT_START_CABLE_DIAG		0x1000
#define PORT_FORCE_LINK			0x0800
#define PORT_POWER_SAVING_DISABLE	0x0400
#define PORT_PHY_REMOTE_LOOPBACK	0x0200
#define PORT_CABLE_FAULT_COUNTER	0x01FF
#define KS884X_PORT_CTRL_4_OFFSET	0x12
#define PORT_LED_OFF			0x8000
#define PORT_TX_DISABLE			0x4000
#define PORT_AUTO_NEG_RESTART		0x2000
#define PORT_REMOTE_FAULT_DISABLE	0x1000
#define PORT_POWER_DOWN			0x0800
#define PORT_AUTO_MDIX_DISABLE		0x0400
#define PORT_FORCE_MDIX			0x0200
#define PORT_LOOPBACK			0x0100
#define PORT_AUTO_NEG_ENABLE		0x0080
#define PORT_FORCE_100_MBIT		0x0040
#define PORT_FORCE_FULL_DUPLEX		0x0020
#define PORT_AUTO_NEG_SYM_PAUSE		0x0010
#define PORT_AUTO_NEG_100BTX_FD		0x0008
#define PORT_AUTO_NEG_100BTX		0x0004
#define PORT_AUTO_NEG_10BT_FD		0x0002
#define PORT_AUTO_NEG_10BT		0x0001
#define KS884X_PORT_STATUS_OFFSET	0x14
#define PORT_HP_MDIX			0x8000
#define PORT_REVERSED_POLARITY		0x2000
#define PORT_RX_FLOW_CTRL		0x0800
#define PORT_TX_FLOW_CTRL		0x1000
#define PORT_STATUS_SPEED_100MBIT	0x0400
#define PORT_STATUS_FULL_DUPLEX		0x0200
#define PORT_REMOTE_FAULT		0x0100
#define PORT_MDIX_STATUS		0x0080
#define PORT_AUTO_NEG_COMPLETE		0x0040
#define PORT_STATUS_LINK_GOOD		0x0020
#define PORT_REMOTE_SYM_PAUSE		0x0010
#define PORT_REMOTE_100BTX_FD		0x0008
#define PORT_REMOTE_100BTX		0x0004
#define PORT_REMOTE_10BT_FD		0x0002
#define PORT_REMOTE_10BT		0x0001
#define STATIC_MAC_TABLE_ADDR		0x0000FFFF
#define STATIC_MAC_TABLE_FWD_PORTS	0x00070000
#define STATIC_MAC_TABLE_VALID		0x00080000
#define STATIC_MAC_TABLE_OVERRIDE	0x00100000
#define STATIC_MAC_TABLE_USE_FID	0x00200000
#define STATIC_MAC_TABLE_FID		0x03C00000
#define STATIC_MAC_FWD_PORTS_SHIFT	16
#define STATIC_MAC_FID_SHIFT		22
#define VLAN_TABLE_VID			0x00000FFF
#define VLAN_TABLE_FID			0x0000F000
#define VLAN_TABLE_MEMBERSHIP		0x00070000
#define VLAN_TABLE_VALID		0x00080000
#define VLAN_TABLE_FID_SHIFT		12
#define VLAN_TABLE_MEMBERSHIP_SHIFT	16
#define DYNAMIC_MAC_TABLE_ADDR		0x0000FFFF
#define DYNAMIC_MAC_TABLE_FID		0x000F0000
#define DYNAMIC_MAC_TABLE_SRC_PORT	0x00300000
#define DYNAMIC_MAC_TABLE_TIMESTAMP	0x00C00000
#define DYNAMIC_MAC_TABLE_ENTRIES	0xFF000000
#define DYNAMIC_MAC_TABLE_ENTRIES_H	0x03
#define DYNAMIC_MAC_TABLE_MAC_EMPTY	0x04
#define DYNAMIC_MAC_TABLE_RESERVED	0x78
#define DYNAMIC_MAC_TABLE_NOT_READY	0x80
#define DYNAMIC_MAC_FID_SHIFT		16
#define DYNAMIC_MAC_SRC_PORT_SHIFT	20
#define DYNAMIC_MAC_TIMESTAMP_SHIFT	22
#define DYNAMIC_MAC_ENTRIES_SHIFT	24
#define DYNAMIC_MAC_ENTRIES_H_SHIFT	8
#define MIB_COUNTER_VALUE		0x3FFFFFFF
#define MIB_COUNTER_VALID		0x40000000
#define MIB_COUNTER_OVERFLOW		0x80000000
#define MIB_PACKET_DROPPED		0x0000FFFF
#define KS_MIB_PACKET_DROPPED_TX_0	0x100
#define KS_MIB_PACKET_DROPPED_TX_1	0x101
#define KS_MIB_PACKET_DROPPED_TX	0x102
#define KS_MIB_PACKET_DROPPED_RX_0	0x103
#define KS_MIB_PACKET_DROPPED_RX_1	0x104
#define KS_MIB_PACKET_DROPPED_RX	0x105
#define SET_DEFAULT_LED			LED_SPEED_DUPLEX_ACT
#define MAC_ADDR_LEN			6
#define MAC_ADDR_ORDER(i)		(MAC_ADDR_LEN - 1 - (i))
#define MAX_ETHERNET_BODY_SIZE		1500
#define ETHERNET_HEADER_SIZE		14
#define MAX_ETHERNET_PACKET_SIZE	\
(MAX_ETHERNET_BODY_SIZE + ETHERNET_HEADER_SIZE)
#define REGULAR_RX_BUF_SIZE		(MAX_ETHERNET_PACKET_SIZE + 4)
#define MAX_RX_BUF_SIZE			(1912 + 4)
#define ADDITIONAL_ENTRIES		16
#define MAX_MULTICAST_LIST		32
#define HW_MULTICAST_SIZE		8
#define HW_TO_DEV_PORT(port)		(port - 1)
enum ;
enum ;
#define DESC_ALIGNMENT			16
#define BUFFER_ALIGNMENT		8
#define NUM_OF_RX_DESC			64
#define NUM_OF_TX_DESC			64
#define KS_DESC_RX_FRAME_LEN		0x000007FF
#define KS_DESC_RX_FRAME_TYPE		0x00008000
#define KS_DESC_RX_ERROR_CRC		0x00010000
#define KS_DESC_RX_ERROR_RUNT		0x00020000
#define KS_DESC_RX_ERROR_TOO_LONG	0x00040000
#define KS_DESC_RX_ERROR_PHY		0x00080000
#define KS884X_DESC_RX_PORT_MASK	0x00300000
#define KS_DESC_RX_MULTICAST		0x01000000
#define KS_DESC_RX_ERROR		0x02000000
#define KS_DESC_RX_ERROR_CSUM_UDP	0x04000000
#define KS_DESC_RX_ERROR_CSUM_TCP	0x08000000
#define KS_DESC_RX_ERROR_CSUM_IP	0x10000000
#define KS_DESC_RX_LAST			0x20000000
#define KS_DESC_RX_FIRST		0x40000000
#define KS_DESC_RX_ERROR_COND		\
(KS_DESC_RX_ERROR_CRC |		\
KS_DESC_RX_ERROR_RUNT |		\
KS_DESC_RX_ERROR_PHY |		\
KS_DESC_RX_ERROR_TOO_LONG)
#define KS_DESC_HW_OWNED		0x80000000
#define KS_DESC_BUF_SIZE		0x000007FF
#define KS884X_DESC_TX_PORT_MASK	0x00300000
#define KS_DESC_END_OF_RING		0x02000000
#define KS_DESC_TX_CSUM_GEN_UDP		0x04000000
#define KS_DESC_TX_CSUM_GEN_TCP		0x08000000
#define KS_DESC_TX_CSUM_GEN_IP		0x10000000
#define KS_DESC_TX_LAST			0x20000000
#define KS_DESC_TX_FIRST		0x40000000
#define KS_DESC_TX_INTERRUPT		0x80000000
#define KS_DESC_PORT_SHIFT		20
#define KS_DESC_RX_MASK			(KS_DESC_BUF_SIZE)
#define KS_DESC_TX_MASK			\
(KS_DESC_TX_INTERRUPT |		\
KS_DESC_TX_FIRST |		\
KS_DESC_TX_LAST |		\
KS_DESC_TX_CSUM_GEN_IP |	\
KS_DESC_TX_CSUM_GEN_TCP |	\
KS_DESC_TX_CSUM_GEN_UDP |	\
KS_DESC_BUF_SIZE)
struct ksz_desc_rx_stat ;
struct ksz_desc_tx_stat ;
struct ksz_desc_rx_buf ;
struct ksz_desc_tx_buf ;
union desc_stat ;
union desc_buf ;
struct ksz_hw_desc ;
struct ksz_sw_desc ;
struct ksz_dma_buf ;
struct ksz_desc ;
#define DMA_BUFFER(desc)  ((struct ksz_dma_buf *)(&(desc)->dma_buf))
struct ksz_desc_info ;
enum ;
#define LEARNED_MAC_TABLE_ENTRIES	1024
#define STATIC_MAC_TABLE_ENTRIES	8
struct ksz_mac_table ;
#define VLAN_TABLE_ENTRIES		16
struct ksz_vlan_table ;
#define DIFFSERV_ENTRIES		64
#define PRIO_802_1P_ENTRIES		8
#define PRIO_QUEUES			4
#define SWITCH_PORT_NUM			2
#define TOTAL_PORT_NUM			(SWITCH_PORT_NUM + 1)
#define HOST_MASK			(1 << SWITCH_PORT_NUM)
#define PORT_MASK			7
#define MAIN_PORT			0
#define OTHER_PORT			1
#define HOST_PORT			SWITCH_PORT_NUM
#define PORT_COUNTER_NUM		0x20
#define TOTAL_PORT_COUNTER_NUM		(PORT_COUNTER_NUM + 2)
#define MIB_COUNTER_RX_LO_PRIORITY	0x00
#define MIB_COUNTER_RX_HI_PRIORITY	0x01
#define MIB_COUNTER_RX_UNDERSIZE	0x02
#define MIB_COUNTER_RX_FRAGMENT		0x03
#define MIB_COUNTER_RX_OVERSIZE		0x04
#define MIB_COUNTER_RX_JABBER		0x05
#define MIB_COUNTER_RX_SYMBOL_ERR	0x06
#define MIB_COUNTER_RX_CRC_ERR		0x07
#define MIB_COUNTER_RX_ALIGNMENT_ERR	0x08
#define MIB_COUNTER_RX_CTRL_8808	0x09
#define MIB_COUNTER_RX_PAUSE		0x0A
#define MIB_COUNTER_RX_BROADCAST	0x0B
#define MIB_COUNTER_RX_MULTICAST	0x0C
#define MIB_COUNTER_RX_UNICAST		0x0D
#define MIB_COUNTER_RX_OCTET_64		0x0E
#define MIB_COUNTER_RX_OCTET_65_127	0x0F
#define MIB_COUNTER_RX_OCTET_128_255	0x10
#define MIB_COUNTER_RX_OCTET_256_511	0x11
#define MIB_COUNTER_RX_OCTET_512_1023	0x12
#define MIB_COUNTER_RX_OCTET_1024_1522	0x13
#define MIB_COUNTER_TX_LO_PRIORITY	0x14
#define MIB_COUNTER_TX_HI_PRIORITY	0x15
#define MIB_COUNTER_TX_LATE_COLLISION	0x16
#define MIB_COUNTER_TX_PAUSE		0x17
#define MIB_COUNTER_TX_BROADCAST	0x18
#define MIB_COUNTER_TX_MULTICAST	0x19
#define MIB_COUNTER_TX_UNICAST		0x1A
#define MIB_COUNTER_TX_DEFERRED		0x1B
#define MIB_COUNTER_TX_TOTAL_COLLISION	0x1C
#define MIB_COUNTER_TX_EXCESS_COLLISION	0x1D
#define MIB_COUNTER_TX_SINGLE_COLLISION	0x1E
#define MIB_COUNTER_TX_MULTI_COLLISION	0x1F
#define MIB_COUNTER_RX_DROPPED_PACKET	0x20
#define MIB_COUNTER_TX_DROPPED_PACKET	0x21
struct ksz_port_mib ;
struct ksz_port_cfg ;
struct ksz_switch ;
#define TX_RATE_UNIT			10000
struct ksz_port_info ;
#define MAX_TX_HELD_SIZE		52000
#define LINK_INT_WORKING		(1 << 0)
#define SMALL_PACKET_TX_BUG		(1 << 1)
#define HALF_DUPLEX_SIGNAL_BUG		(1 << 2)
#define RX_HUGE_FRAME			(1 << 4)
#define STP_SUPPORT			(1 << 8)
#define PAUSE_FLOW_CTRL			(1 << 0)
#define FAST_AGING			(1 << 1)
struct ksz_hw ;
enum ;
struct ksz_port ;
struct ksz_timer_info ;
struct ksz_shared_mem ;
struct ksz_counter_info ;
struct dev_info ;
struct dev_priv ;
#define DRV_NAME		"KSZ884X PCI"
#define DEVICE_NAME		"KSZ884x PCI"
#define DRV_VERSION		"1.0.0"
#define DRV_RELDATE		"Feb 8, 2010"
static char version[] __devinitdata =
"Micrel " DEVICE_NAME " " DRV_VERSION " (" DRV_RELDATE ")";
static u8 DEFAULT_MAC_ADDRESS[] = ;
static inline void hw_ack_intr(struct ksz_hw *hw, uint interrupt)
static inline void hw_dis_intr(struct ksz_hw *hw)
static inline void hw_set_intr(struct ksz_hw *hw, uint interrupt)
static inline void hw_ena_intr(struct ksz_hw *hw)
static inline void hw_dis_intr_bit(struct ksz_hw *hw, uint bit)
static inline void hw_turn_off_intr(struct ksz_hw *hw, uint interrupt)
static void hw_turn_on_intr(struct ksz_hw *hw, u32 bit)
static inline void hw_ena_intr_bit(struct ksz_hw *hw, uint interrupt)
static inline void hw_read_intr(struct ksz_hw *hw, uint *status)
static inline void hw_restore_intr(struct ksz_hw *hw, uint interrupt)
static uint hw_block_intr(struct ksz_hw *hw)
static inline void reset_desc(struct ksz_desc *desc, union desc_stat status)
static inline void release_desc(struct ksz_desc *desc)
static void get_rx_pkt(struct ksz_desc_info *info, struct ksz_desc **desc)
static inline void set_rx_buf(struct ksz_desc *desc, u32 addr)
static inline void set_rx_len(struct ksz_desc *desc, u32 len)
static inline void get_tx_pkt(struct ksz_desc_info *info,
struct ksz_desc **desc)
static inline void set_tx_buf(struct ksz_desc *desc, u32 addr)
static inline void set_tx_len(struct ksz_desc *desc, u32 len)
#define TABLE_READ			0x10
#define TABLE_SEL_SHIFT			2
#define HW_DELAY(hw, reg)			\
do  while (0)
static void sw_r_table(struct ksz_hw *hw, int table, u16 addr, u32 *data)
static void sw_w_table_64(struct ksz_hw *hw, int table, u16 addr, u32 data_hi,
u32 data_lo)
static void sw_w_sta_mac_table(struct ksz_hw *hw, u16 addr, u8 *mac_addr,
u8 ports, int override, int valid, int use_fid, u8 fid)
static int sw_r_vlan_table(struct ksz_hw *hw, u16 addr, u16 *vid, u8 *fid,
u8 *member)
static void port_r_mib_cnt(struct ksz_hw *hw, int port, u16 addr, u64 *cnt)
static void port_r_mib_pkt(struct ksz_hw *hw, int port, u32 *last, u64 *cnt)
static int port_r_cnt(struct ksz_hw *hw, int port)
static void port_init_cnt(struct ksz_hw *hw, int port)
static int port_chk(struct ksz_hw *hw, int port, int offset, u16 bits)
static void port_cfg(struct ksz_hw *hw, int port, int offset, u16 bits,
int set)
static int port_chk_shift(struct ksz_hw *hw, int port, u32 addr, int shift)
static void port_cfg_shift(struct ksz_hw *hw, int port, u32 addr, int shift,
int set)
static void port_r8(struct ksz_hw *hw, int port, int offset, u8 *data)
static void port_r16(struct ksz_hw *hw, int port, int offset, u16 *data)
static void port_w16(struct ksz_hw *hw, int port, int offset, u16 data)
static int sw_chk(struct ksz_hw *hw, u32 addr, u16 bits)
static void sw_cfg(struct ksz_hw *hw, u32 addr, u16 bits, int set)
static inline void port_cfg_broad_storm(struct ksz_hw *hw, int p, int set)
static inline int port_chk_broad_storm(struct ksz_hw *hw, int p)
#define BROADCAST_STORM_PROTECTION_RATE	10
#define BROADCAST_STORM_VALUE		9969
static void sw_cfg_broad_storm(struct ksz_hw *hw, u8 percent)
static void sw_get_broad_storm(struct ksz_hw *hw, u8 *percent)
static void sw_dis_broad_storm(struct ksz_hw *hw, int port)
static void sw_ena_broad_storm(struct ksz_hw *hw, int port)
static void sw_init_broad_storm(struct ksz_hw *hw)
static void hw_cfg_broad_storm(struct ksz_hw *hw, u8 percent)
static void sw_dis_prio_rate(struct ksz_hw *hw, int port)
static void sw_init_prio_rate(struct ksz_hw *hw)
static inline void port_cfg_back_pressure(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_force_flow_ctrl(struct ksz_hw *hw, int p, int set)
static inline int port_chk_back_pressure(struct ksz_hw *hw, int p)
static inline int port_chk_force_flow_ctrl(struct ksz_hw *hw, int p)
static inline void port_cfg_dis_learn(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_rx(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_tx(struct ksz_hw *hw, int p, int set)
static inline void sw_cfg_fast_aging(struct ksz_hw *hw, int set)
static inline void sw_flush_dyn_mac_table(struct ksz_hw *hw)
static inline void port_cfg_ins_tag(struct ksz_hw *hw, int p, int insert)
static inline void port_cfg_rmv_tag(struct ksz_hw *hw, int p, int remove)
static inline int port_chk_ins_tag(struct ksz_hw *hw, int p)
static inline int port_chk_rmv_tag(struct ksz_hw *hw, int p)
static inline void port_cfg_dis_non_vid(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_in_filter(struct ksz_hw *hw, int p, int set)
static inline int port_chk_dis_non_vid(struct ksz_hw *hw, int p)
static inline int port_chk_in_filter(struct ksz_hw *hw, int p)
static inline void port_cfg_mirror_sniffer(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_mirror_rx(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_mirror_tx(struct ksz_hw *hw, int p, int set)
static inline void sw_cfg_mirror_rx_tx(struct ksz_hw *hw, int set)
static void sw_init_mirror(struct ksz_hw *hw)
static inline void sw_cfg_unk_def_deliver(struct ksz_hw *hw, int set)
static inline int sw_cfg_chk_unk_def_deliver(struct ksz_hw *hw)
static inline void sw_cfg_unk_def_port(struct ksz_hw *hw, int port, int set)
static inline int sw_chk_unk_def_port(struct ksz_hw *hw, int port)
static inline void port_cfg_diffserv(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_802_1p(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_replace_vid(struct ksz_hw *hw, int p, int set)
static inline void port_cfg_prio(struct ksz_hw *hw, int p, int set)
static inline int port_chk_diffserv(struct ksz_hw *hw, int p)
static inline int port_chk_802_1p(struct ksz_hw *hw, int p)
static inline int port_chk_replace_vid(struct ksz_hw *hw, int p)
static inline int port_chk_prio(struct ksz_hw *hw, int p)
static void sw_dis_diffserv(struct ksz_hw *hw, int port)
static void sw_dis_802_1p(struct ksz_hw *hw, int port)
static void sw_cfg_replace_null_vid(struct ksz_hw *hw, int set)
static void sw_cfg_replace_vid(struct ksz_hw *hw, int port, int set)
static void sw_cfg_port_based(struct ksz_hw *hw, int port, u8 prio)
static void sw_dis_multi_queue(struct ksz_hw *hw, int port)
static void sw_init_prio(struct ksz_hw *hw)
static void port_get_def_vid(struct ksz_hw *hw, int port, u16 *vid)
static void sw_init_vlan(struct ksz_hw *hw)
static void sw_cfg_port_base_vlan(struct ksz_hw *hw, int port, u8 member)
static inline void sw_get_addr(struct ksz_hw *hw, u8 *mac_addr)
static void sw_set_addr(struct ksz_hw *hw, u8 *mac_addr)
static void sw_set_global_ctrl(struct ksz_hw *hw)
enum ;
static void port_set_stp_state(struct ksz_hw *hw, int port, int state)
#define STP_ENTRY			0
#define BROADCAST_ENTRY			1
#define BRIDGE_ADDR_ENTRY		2
#define IPV6_ADDR_ENTRY			3
static void sw_clr_sta_mac_table(struct ksz_hw *hw)
static void sw_init_stp(struct ksz_hw *hw)
static void sw_block_addr(struct ksz_hw *hw)
#define PHY_LINK_SUPPORT		\
(PHY_AUTO_NEG_ASYM_PAUSE |	\
PHY_AUTO_NEG_SYM_PAUSE |	\
PHY_AUTO_NEG_100BT4 |		\
PHY_AUTO_NEG_100BTX_FD |	\
PHY_AUTO_NEG_100BTX |		\
PHY_AUTO_NEG_10BT_FD |		\
PHY_AUTO_NEG_10BT)
static inline void hw_r_phy_ctrl(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_w_phy_ctrl(struct ksz_hw *hw, int phy, u16 data)
static inline void hw_r_phy_link_stat(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_r_phy_auto_neg(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_w_phy_auto_neg(struct ksz_hw *hw, int phy, u16 data)
static inline void hw_r_phy_rem_cap(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_r_phy_crossover(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_w_phy_crossover(struct ksz_hw *hw, int phy, u16 data)
static inline void hw_r_phy_polarity(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_w_phy_polarity(struct ksz_hw *hw, int phy, u16 data)
static inline void hw_r_phy_link_md(struct ksz_hw *hw, int phy, u16 *data)
static inline void hw_w_phy_link_md(struct ksz_hw *hw, int phy, u16 data)
static void hw_r_phy(struct ksz_hw *hw, int port, u16 reg, u16 *val)
static void hw_w_phy(struct ksz_hw *hw, int port, u16 reg, u16 val)
#define AT93C_CODE			0
#define AT93C_WR_OFF			0x00
#define AT93C_WR_ALL			0x10
#define AT93C_ER_ALL			0x20
#define AT93C_WR_ON			0x30
#define AT93C_WRITE			1
#define AT93C_READ			2
#define AT93C_ERASE			3
#define EEPROM_DELAY			4
static inline void drop_gpio(struct ksz_hw *hw, u8 gpio)
static inline void raise_gpio(struct ksz_hw *hw, u8 gpio)
static inline u8 state_gpio(struct ksz_hw *hw, u8 gpio)
static void eeprom_clk(struct ksz_hw *hw)
static u16 spi_r(struct ksz_hw *hw)
static void spi_w(struct ksz_hw *hw, u16 data)
static void spi_reg(struct ksz_hw *hw, u8 data, u8 reg)
#define EEPROM_DATA_RESERVED		0
#define EEPROM_DATA_MAC_ADDR_0		1
#define EEPROM_DATA_MAC_ADDR_1		2
#define EEPROM_DATA_MAC_ADDR_2		3
#define EEPROM_DATA_SUBSYS_ID		4
#define EEPROM_DATA_SUBSYS_VEN_ID	5
#define EEPROM_DATA_PM_CAP		6
#define EEPROM_DATA_OTHER_MAC_ADDR	9
static u16 eeprom_read(struct ksz_hw *hw, u8 reg)
static void eeprom_write(struct ksz_hw *hw, u8 reg, u16 data)
static u16 advertised_flow_ctrl(struct ksz_port *port, u16 ctrl)
static void set_flow_ctrl(struct ksz_hw *hw, int rx, int tx)
static void determine_flow_ctrl(struct ksz_hw *hw, struct ksz_port *port,
u16 local, u16 remote)
static inline void port_cfg_change(struct ksz_hw *hw, struct ksz_port *port,
struct ksz_port_info *info, u16 link_status)
static void port_get_link_speed(struct ksz_port *port)
#define PHY_RESET_TIMEOUT		10
static void port_set_link_speed(struct ksz_port *port)
static void port_force_link_speed(struct ksz_port *port)
static void port_set_power_saving(struct ksz_port *port, int enable)
static int hw_chk_wol_pme_status(struct ksz_hw *hw)
static void hw_clr_wol_pme_status(struct ksz_hw *hw)
static void hw_cfg_wol_pme(struct ksz_hw *hw, int set)
static void hw_cfg_wol(struct ksz_hw *hw, u16 frame, int set)
static void hw_set_wol_frame(struct ksz_hw *hw, int i, uint mask_size,
const u8 *mask, uint frame_size, const u8 *pattern)
static void hw_add_wol_arp(struct ksz_hw *hw, const u8 *ip_addr)
static void hw_add_wol_bcast(struct ksz_hw *hw)
static void hw_add_wol_mcast(struct ksz_hw *hw)
static void hw_add_wol_ucast(struct ksz_hw *hw)
static void hw_enable_wol(struct ksz_hw *hw, u32 wol_enable, const u8 *net_addr)
static int hw_init(struct ksz_hw *hw)
static void hw_reset(struct ksz_hw *hw)
static void hw_setup(struct ksz_hw *hw)
static void hw_setup_intr(struct ksz_hw *hw)
static void ksz_check_desc_num(struct ksz_desc_info *info)
static void hw_init_desc(struct ksz_desc_info *desc_info, int transmit)
static void hw_set_desc_base(struct ksz_hw *hw, u32 tx_addr, u32 rx_addr)
static void hw_reset_pkts(struct ksz_desc_info *info)
static inline void hw_resume_rx(struct ksz_hw *hw)
static void hw_start_rx(struct ksz_hw *hw)
static void hw_stop_rx(struct ksz_hw *hw)
static void hw_start_tx(struct ksz_hw *hw)
static void hw_stop_tx(struct ksz_hw *hw)
static void hw_disable(struct ksz_hw *hw)
static void hw_enable(struct ksz_hw *hw)
static int hw_alloc_pkt(struct ksz_hw *hw, int length, int physical)
static void hw_send_pkt(struct ksz_hw *hw)
static int empty_addr(u8 *addr)
static void hw_set_addr(struct ksz_hw *hw)
static void hw_read_addr(struct ksz_hw *hw)
static void hw_ena_add_addr(struct ksz_hw *hw, int index, u8 *mac_addr)
static void hw_set_add_addr(struct ksz_hw *hw)
static int hw_add_addr(struct ksz_hw *hw, u8 *mac_addr)
static int hw_del_addr(struct ksz_hw *hw, u8 *mac_addr)
static void hw_clr_multicast(struct ksz_hw *hw)
static void hw_set_grp_addr(struct ksz_hw *hw)
static void hw_set_multicast(struct ksz_hw *hw, u8 multicast)
static void hw_set_promiscuous(struct ksz_hw *hw, u8 prom)
static void sw_enable(struct ksz_hw *hw, int enable)
static void sw_setup(struct ksz_hw *hw)
static void ksz_start_timer(struct ksz_timer_info *info, int time)
static void ksz_stop_timer(struct ksz_timer_info *info)
static void ksz_init_timer(struct ksz_timer_info *info, int period,
void (*function)(unsigned long), void *data)
static void ksz_update_timer(struct ksz_timer_info *info)
static int ksz_alloc_soft_desc(struct ksz_desc_info *desc_info, int transmit)
static int ksz_alloc_desc(struct dev_info *adapter)
static void free_dma_buf(struct dev_info *adapter, struct ksz_dma_buf *dma_buf,
int direction)
static void ksz_init_rx_buffers(struct dev_info *adapter)
static int ksz_alloc_mem(struct dev_info *adapter)
static void ksz_free_desc(struct dev_info *adapter)
static void ksz_free_buffers(struct dev_info *adapter,
struct ksz_desc_info *desc_info, int direction)
static void ksz_free_mem(struct dev_info *adapter)
static void get_mib_counters(struct ksz_hw *hw, int first, int cnt,
u64 *counter)
static void send_packet(struct sk_buff *skb, struct net_device *dev)
static void transmit_cleanup(struct dev_info *hw_priv, int normal)
static void tx_done(struct dev_info *hw_priv)
static inline void copy_old_skb(struct sk_buff *old, struct sk_buff *skb)
static netdev_tx_t netdev_tx(struct sk_buff *skb, struct net_device *dev)
static void netdev_tx_timeout(struct net_device *dev)
static inline void csum_verified(struct sk_buff *skb)
static inline int rx_proc(struct net_device *dev, struct ksz_hw* hw,
struct ksz_desc *desc, union desc_stat status)
static int dev_rcv_packets(struct dev_info *hw_priv)
static int port_rcv_packets(struct dev_info *hw_priv)
static int dev_rcv_special(struct dev_info *hw_priv)
static void rx_proc_task(unsigned long data)
static void tx_proc_task(unsigned long data)
static inline void handle_rx_stop(struct ksz_hw *hw)
static irqreturn_t netdev_intr(int irq, void *dev_id)
static unsigned long next_jiffies;
static void netdev_netpoll(struct net_device *dev)
static void bridge_change(struct ksz_hw *hw)
static int netdev_close(struct net_device *dev)
static void hw_cfg_huge_frame(struct dev_info *hw_priv, struct ksz_hw *hw)
static int prepare_hardware(struct net_device *dev)
static void set_media_state(struct net_device *dev, int media_state)
static int netdev_open(struct net_device *dev)
static struct net_device_stats *netdev_query_statistics(struct net_device *dev)
static int netdev_set_mac_address(struct net_device *dev, void *addr)
static void dev_set_promiscuous(struct net_device *dev, struct dev_priv *priv,
struct ksz_hw *hw, int promiscuous)
static void dev_set_multicast(struct dev_priv *priv, struct ksz_hw *hw,
int multicast)
static void netdev_set_rx_mode(struct net_device *dev)
static int netdev_change_mtu(struct net_device *dev, int new_mtu)
static int netdev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int mdio_read(struct net_device *dev, int phy_id, int reg_num)
static void mdio_write(struct net_device *dev, int phy_id, int reg_num, int val)
#define EEPROM_SIZE			0x40
static u16 eeprom_data[EEPROM_SIZE] = ;
#define ADVERTISED_ALL			\
(ADVERTISED_10baseT_Half |	\
ADVERTISED_10baseT_Full |	\
ADVERTISED_100baseT_Half |	\
ADVERTISED_100baseT_Full)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_nway_reset(struct net_device *dev)
static u32 netdev_get_link(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static struct hw_regs  hw_regs_range[] = ;
static int netdev_get_regs_len(struct net_device *dev)
static void netdev_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *ptr)
#define WOL_SUPPORT			\
(WAKE_PHY | WAKE_MAGIC |	\
WAKE_UCAST | WAKE_MCAST |	\
WAKE_BCAST | WAKE_ARP)
static void netdev_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wol)
static int netdev_set_wol(struct net_device *dev,
struct ethtool_wolinfo *wol)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 value)
static int netdev_get_eeprom_len(struct net_device *dev)
#define EEPROM_MAGIC			0x10A18842
static int netdev_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int netdev_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static void netdev_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static int netdev_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pause)
static void netdev_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
#define STATS_LEN			(TOTAL_PORT_COUNTER_NUM)
static struct  ethtool_stats_keys[STATS_LEN] = ;
static void netdev_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static int netdev_get_sset_count(struct net_device *dev, int sset)
static void netdev_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static int netdev_set_features(struct net_device *dev, u32 features)
static struct ethtool_ops netdev_ethtool_ops = ;
static void update_link(struct net_device *dev, struct dev_priv *priv,
struct ksz_port *port)
static void mib_read_work(struct work_struct *work)
static void mib_monitor(unsigned long ptr)
static void dev_monitor(unsigned long ptr)
static int msg_enable;
static char *macaddr = ":";
static char *mac1addr = ":";
static int multi_dev;
static int stp;
static int fast_aging;
static int __init netdev_init(struct net_device *dev)
static const struct net_device_ops netdev_ops = ;
static void netdev_free(struct net_device *dev)
struct platform_info ;
static int net_device_present;
static void get_mac_addr(struct dev_info *hw_priv, u8 *macaddr, int port)
#define KS884X_DMA_MASK			(~0x0UL)
static void read_other_addr(struct ksz_hw *hw)
#define PCI_VENDOR_ID_MICREL_KS		0x16c6
static int __devinit pcidev_init(struct pci_dev *pdev,
const struct pci_device_id *id)
static void pcidev_exit(struct pci_dev *pdev)
static int pcidev_resume(struct pci_dev *pdev)
static int pcidev_suspend(struct pci_dev *pdev, pm_message_t state)
static char pcidev_name[] = "ksz884xp";
static struct pci_device_id pcidev_table[] = ;
MODULE_DEVICE_TABLE(pci, pcidev_table);
static struct pci_driver pci_device_driver = ;
static int __init ksz884x_init_module(void)
static void __exit ksz884x_cleanup_module(void)
module_init(ksz884x_init_module);
module_exit(ksz884x_cleanup_module);
MODULE_DESCRIPTION("KSZ8841/2 PCI network driver");
MODULE_AUTHOR("Tristram Ha <Tristram.Ha@micrel.com>");
MODULE_LICENSE("GPL");
module_param_named(message, msg_enable, int, 0);
MODULE_PARM_DESC(message, "Message verbosity level (0=none, 31=all)");
module_param(macaddr, charp, 0);
module_param(mac1addr, charp, 0);
module_param(fast_aging, int, 0);
module_param(multi_dev, int, 0);
module_param(stp, int, 0);
MODULE_PARM_DESC(macaddr, "MAC address");
MODULE_PARM_DESC(mac1addr, "Second MAC address");
MODULE_PARM_DESC(fast_aging, "Fast aging");
MODULE_PARM_DESC(multi_dev, "Multiple device interfaces");
MODULE_PARM_DESC(stp, "STP support");
