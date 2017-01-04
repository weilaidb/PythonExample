#if !defined(IB_SMI_H)
#define IB_SMI_H
#define IB_SMP_DATA_SIZE			64
#define IB_SMP_MAX_PATH_HOPS			64
struct ib_smp  __attribute__ ((packed));
#define IB_SMP_DIRECTION			cpu_to_be16(0x8000)
#define IB_SMP_ATTR_NOTICE			cpu_to_be16(0x0002)
#define IB_SMP_ATTR_NODE_DESC			cpu_to_be16(0x0010)
#define IB_SMP_ATTR_NODE_INFO			cpu_to_be16(0x0011)
#define IB_SMP_ATTR_SWITCH_INFO			cpu_to_be16(0x0012)
#define IB_SMP_ATTR_GUID_INFO			cpu_to_be16(0x0014)
#define IB_SMP_ATTR_PORT_INFO			cpu_to_be16(0x0015)
#define IB_SMP_ATTR_PKEY_TABLE			cpu_to_be16(0x0016)
#define IB_SMP_ATTR_SL_TO_VL_TABLE		cpu_to_be16(0x0017)
#define IB_SMP_ATTR_VL_ARB_TABLE		cpu_to_be16(0x0018)
#define IB_SMP_ATTR_LINEAR_FORWARD_TABLE	cpu_to_be16(0x0019)
#define IB_SMP_ATTR_RANDOM_FORWARD_TABLE	cpu_to_be16(0x001A)
#define IB_SMP_ATTR_MCAST_FORWARD_TABLE		cpu_to_be16(0x001B)
#define IB_SMP_ATTR_SM_INFO			cpu_to_be16(0x0020)
#define IB_SMP_ATTR_VENDOR_DIAG			cpu_to_be16(0x0030)
#define IB_SMP_ATTR_LED_INFO			cpu_to_be16(0x0031)
#define IB_SMP_ATTR_VENDOR_MASK			cpu_to_be16(0xFF00)
struct ib_port_info ;
static inline u8
ib_get_smp_direction(struct ib_smp *smp)
