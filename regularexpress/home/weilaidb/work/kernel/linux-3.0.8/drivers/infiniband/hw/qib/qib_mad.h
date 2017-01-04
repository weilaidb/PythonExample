#define IB_SMP_UNSUP_VERSION    cpu_to_be16(0x0004)
#define IB_SMP_UNSUP_METHOD     cpu_to_be16(0x0008)
#define IB_SMP_UNSUP_METH_ATTR  cpu_to_be16(0x000C)
#define IB_SMP_INVALID_FIELD    cpu_to_be16(0x001C)
struct ib_node_info  __attribute__ ((packed));
struct ib_mad_notice_attr ;
#define IB_NOTICE_TYPE_FATAL	0x80
#define IB_NOTICE_TYPE_URGENT	0x81
#define IB_NOTICE_TYPE_SECURITY	0x82
#define IB_NOTICE_TYPE_SM	0x83
#define IB_NOTICE_TYPE_INFO	0x84
#define IB_NOTICE_PROD_CA		cpu_to_be16(1)
#define IB_NOTICE_PROD_SWITCH		cpu_to_be16(2)
#define IB_NOTICE_PROD_ROUTER		cpu_to_be16(3)
#define IB_NOTICE_PROD_CLASS_MGR	cpu_to_be16(4)
#define IB_NOTICE_TRAP_LLI_THRESH	cpu_to_be16(129)
#define IB_NOTICE_TRAP_EBO_THRESH	cpu_to_be16(130)
#define IB_NOTICE_TRAP_FLOW_UPDATE	cpu_to_be16(131)
#define IB_NOTICE_TRAP_CAP_MASK_CHG	cpu_to_be16(144)
#define IB_NOTICE_TRAP_SYS_GUID_CHG	cpu_to_be16(145)
#define IB_NOTICE_TRAP_BAD_MKEY		cpu_to_be16(256)
#define IB_NOTICE_TRAP_BAD_PKEY		cpu_to_be16(257)
#define IB_NOTICE_TRAP_BAD_QKEY		cpu_to_be16(258)
#define IB_NOTICE_REPRESS_LLI_THRESH	(1 << 0)
#define IB_NOTICE_REPRESS_EBO_THRESH	(1 << 1)
#define IB_NOTICE_REPRESS_FLOW_UPDATE	(1 << 2)
#define IB_NOTICE_REPRESS_CAP_MASK_CHG	(1 << 3)
#define IB_NOTICE_REPRESS_SYS_GUID_CHG	(1 << 4)
#define IB_NOTICE_REPRESS_BAD_MKEY	(1 << 5)
#define IB_NOTICE_REPRESS_BAD_PKEY	(1 << 6)
#define IB_NOTICE_REPRESS_BAD_QKEY	(1 << 7)
#define IB_NOTICE_TRAP_LSE_CHG		0x04
#define IB_NOTICE_TRAP_LWE_CHG		0x02
#define IB_NOTICE_TRAP_NODE_DESC_CHG	0x01
#define IB_NOTICE_TRAP_DR_NOTICE	0x80
#define IB_NOTICE_TRAP_DR_TRUNC		0x40
struct ib_vl_weight_elem ;
#define IB_VLARB_LOWPRI_0_31    1
#define IB_VLARB_LOWPRI_32_63   2
#define IB_VLARB_HIGHPRI_0_31   3
#define IB_VLARB_HIGHPRI_32_63  4
#define IB_PMA_CLASS_CAP_ALLPORTSELECT  cpu_to_be16(1 << 8)
#define IB_PMA_CLASS_CAP_EXT_WIDTH      cpu_to_be16(1 << 9)
#define IB_PMA_CLASS_CAP_XMIT_WAIT      cpu_to_be16(1 << 12)
#define IB_PMA_CLASS_PORT_INFO          cpu_to_be16(0x0001)
#define IB_PMA_PORT_SAMPLES_CONTROL     cpu_to_be16(0x0010)
#define IB_PMA_PORT_SAMPLES_RESULT      cpu_to_be16(0x0011)
#define IB_PMA_PORT_COUNTERS            cpu_to_be16(0x0012)
#define IB_PMA_PORT_COUNTERS_EXT        cpu_to_be16(0x001D)
#define IB_PMA_PORT_SAMPLES_RESULT_EXT  cpu_to_be16(0x001E)
#define IB_PMA_PORT_COUNTERS_CONG       cpu_to_be16(0xFF00)
struct ib_perf  __attribute__ ((packed));
struct ib_pma_classportinfo  __attribute__ ((packed));
struct ib_pma_portsamplescontrol  __attribute__ ((packed));
struct ib_pma_portsamplesresult  __attribute__ ((packed));
struct ib_pma_portsamplesresult_ext  __attribute__ ((packed));
struct ib_pma_portcounters  __attribute__ ((packed));
struct ib_pma_portcounters_cong  __attribute__ ((packed));
#define IB_PMA_CONG_HW_CONTROL_TIMER            0x00
#define IB_PMA_CONG_HW_CONTROL_SAMPLE           0x01
#define QIB_XMIT_RATE_UNSUPPORTED               0x0
#define QIB_XMIT_RATE_PICO                      0x7
#define QIB_CONG_TIMER_PSINTERVAL               0x1DCD64EC
#define IB_PMA_SEL_SYMBOL_ERROR                 cpu_to_be16(0x0001)
#define IB_PMA_SEL_LINK_ERROR_RECOVERY          cpu_to_be16(0x0002)
#define IB_PMA_SEL_LINK_DOWNED                  cpu_to_be16(0x0004)
#define IB_PMA_SEL_PORT_RCV_ERRORS              cpu_to_be16(0x0008)
#define IB_PMA_SEL_PORT_RCV_REMPHYS_ERRORS      cpu_to_be16(0x0010)
#define IB_PMA_SEL_PORT_XMIT_DISCARDS           cpu_to_be16(0x0040)
#define IB_PMA_SEL_LOCAL_LINK_INTEGRITY_ERRORS  cpu_to_be16(0x0200)
#define IB_PMA_SEL_EXCESSIVE_BUFFER_OVERRUNS    cpu_to_be16(0x0400)
#define IB_PMA_SEL_PORT_VL15_DROPPED            cpu_to_be16(0x0800)
#define IB_PMA_SEL_PORT_XMIT_DATA               cpu_to_be16(0x1000)
#define IB_PMA_SEL_PORT_RCV_DATA                cpu_to_be16(0x2000)
#define IB_PMA_SEL_PORT_XMIT_PACKETS            cpu_to_be16(0x4000)
#define IB_PMA_SEL_PORT_RCV_PACKETS             cpu_to_be16(0x8000)
#define IB_PMA_SEL_CONG_ALL                     0x01
#define IB_PMA_SEL_CONG_PORT_DATA               0x02
#define IB_PMA_SEL_CONG_XMIT                    0x04
#define IB_PMA_SEL_CONG_ROUTING                 0x08
struct ib_pma_portcounters_ext  __attribute__ ((packed));
#define IB_PMA_SELX_PORT_XMIT_DATA              cpu_to_be16(0x0001)
#define IB_PMA_SELX_PORT_RCV_DATA               cpu_to_be16(0x0002)
#define IB_PMA_SELX_PORT_XMIT_PACKETS           cpu_to_be16(0x0004)
#define IB_PMA_SELX_PORT_RCV_PACKETS            cpu_to_be16(0x0008)
#define IB_PMA_SELX_PORT_UNI_XMIT_PACKETS       cpu_to_be16(0x0010)
#define IB_PMA_SELX_PORT_UNI_RCV_PACKETS        cpu_to_be16(0x0020)
#define IB_PMA_SELX_PORT_MULTI_XMIT_PACKETS     cpu_to_be16(0x0040)
#define IB_PMA_SELX_PORT_MULTI_RCV_PACKETS      cpu_to_be16(0x0080)
#define COUNTER_MASK(q, n) (q << ((9 - n) * 3))
#define COUNTER_MASK0_9 \
cpu_to_be32(COUNTER_MASK(1, 0) | \
COUNTER_MASK(1, 1) | \
COUNTER_MASK(1, 2) | \
COUNTER_MASK(1, 3) | \
COUNTER_MASK(1, 4))
