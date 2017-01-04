#define IB_SMP_UNSUP_VERSION	cpu_to_be16(0x0004)
#define IB_SMP_UNSUP_METHOD	cpu_to_be16(0x0008)
#define IB_SMP_UNSUP_METH_ATTR	cpu_to_be16(0x000C)
#define IB_SMP_INVALID_FIELD	cpu_to_be16(0x001C)
static int reply(struct ib_smp *smp)
static int recv_subn_get_nodedescription(struct ib_smp *smp,
struct ib_device *ibdev)
struct nodeinfo  __attribute__ ((packed));
static int recv_subn_get_nodeinfo(struct ib_smp *smp,
struct ib_device *ibdev, u8 port)
static int recv_subn_get_guidinfo(struct ib_smp *smp,
struct ib_device *ibdev)
static void set_link_width_enabled(struct ipath_devdata *dd, u32 w)
static void set_link_speed_enabled(struct ipath_devdata *dd, u32 s)
static int get_overrunthreshold(struct ipath_devdata *dd)
static int set_overrunthreshold(struct ipath_devdata *dd, unsigned n)
static int get_phyerrthreshold(struct ipath_devdata *dd)
static int set_phyerrthreshold(struct ipath_devdata *dd, unsigned n)
static int get_linkdowndefaultstate(struct ipath_devdata *dd)
static int recv_subn_get_portinfo(struct ib_smp *smp,
struct ib_device *ibdev, u8 port)
static int get_pkeys(struct ipath_devdata *dd, u16 * pkeys)
static int recv_subn_get_pkeytable(struct ib_smp *smp,
struct ib_device *ibdev)
static int recv_subn_set_guidinfo(struct ib_smp *smp,
struct ib_device *ibdev)
static int set_linkdowndefaultstate(struct ipath_devdata *dd, int sleep)
static int recv_subn_set_portinfo(struct ib_smp *smp,
struct ib_device *ibdev, u8 port)
static int rm_pkey(struct ipath_devdata *dd, u16 key)
static int add_pkey(struct ipath_devdata *dd, u16 key)
static int set_pkeys(struct ipath_devdata *dd, u16 *pkeys)
static int recv_subn_set_pkeytable(struct ib_smp *smp,
struct ib_device *ibdev)
#define IB_PMA_CLASS_PORT_INFO		cpu_to_be16(0x0001)
#define IB_PMA_PORT_SAMPLES_CONTROL	cpu_to_be16(0x0010)
#define IB_PMA_PORT_SAMPLES_RESULT	cpu_to_be16(0x0011)
#define IB_PMA_PORT_COUNTERS		cpu_to_be16(0x0012)
#define IB_PMA_PORT_COUNTERS_EXT	cpu_to_be16(0x001D)
#define IB_PMA_PORT_SAMPLES_RESULT_EXT	cpu_to_be16(0x001E)
struct ib_perf  __attribute__ ((packed));
struct ib_pma_classportinfo  __attribute__ ((packed));
struct ib_pma_portsamplescontrol  __attribute__ ((packed));
struct ib_pma_portsamplesresult  __attribute__ ((packed));
struct ib_pma_portsamplesresult_ext  __attribute__ ((packed));
struct ib_pma_portcounters  __attribute__ ((packed));
#define IB_PMA_SEL_SYMBOL_ERROR			cpu_to_be16(0x0001)
#define IB_PMA_SEL_LINK_ERROR_RECOVERY		cpu_to_be16(0x0002)
#define IB_PMA_SEL_LINK_DOWNED			cpu_to_be16(0x0004)
#define IB_PMA_SEL_PORT_RCV_ERRORS		cpu_to_be16(0x0008)
#define IB_PMA_SEL_PORT_RCV_REMPHYS_ERRORS	cpu_to_be16(0x0010)
#define IB_PMA_SEL_PORT_XMIT_DISCARDS		cpu_to_be16(0x0040)
#define IB_PMA_SEL_LOCAL_LINK_INTEGRITY_ERRORS	cpu_to_be16(0x0200)
#define IB_PMA_SEL_EXCESSIVE_BUFFER_OVERRUNS	cpu_to_be16(0x0400)
#define IB_PMA_SEL_PORT_VL15_DROPPED		cpu_to_be16(0x0800)
#define IB_PMA_SEL_PORT_XMIT_DATA		cpu_to_be16(0x1000)
#define IB_PMA_SEL_PORT_RCV_DATA		cpu_to_be16(0x2000)
#define IB_PMA_SEL_PORT_XMIT_PACKETS		cpu_to_be16(0x4000)
#define IB_PMA_SEL_PORT_RCV_PACKETS		cpu_to_be16(0x8000)
struct ib_pma_portcounters_ext  __attribute__ ((packed));
#define IB_PMA_SELX_PORT_XMIT_DATA		cpu_to_be16(0x0001)
#define IB_PMA_SELX_PORT_RCV_DATA		cpu_to_be16(0x0002)
#define IB_PMA_SELX_PORT_XMIT_PACKETS		cpu_to_be16(0x0004)
#define IB_PMA_SELX_PORT_RCV_PACKETS		cpu_to_be16(0x0008)
#define IB_PMA_SELX_PORT_UNI_XMIT_PACKETS	cpu_to_be16(0x0010)
#define IB_PMA_SELX_PORT_UNI_RCV_PACKETS	cpu_to_be16(0x0020)
#define IB_PMA_SELX_PORT_MULTI_XMIT_PACKETS	cpu_to_be16(0x0040)
#define IB_PMA_SELX_PORT_MULTI_RCV_PACKETS	cpu_to_be16(0x0080)
static int recv_pma_get_classportinfo(struct ib_perf *pmp)
#define COUNTER_MASK(q, n) (q << ((9 - n) * 3))
#define COUNTER_MASK0_9 cpu_to_be32(COUNTER_MASK(1, 0) | \
COUNTER_MASK(1, 1) | \
COUNTER_MASK(1, 2) | \
COUNTER_MASK(1, 3) | \
COUNTER_MASK(1, 4))
static int recv_pma_get_portsamplescontrol(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int recv_pma_set_portsamplescontrol(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static u64 get_counter(struct ipath_ibdev *dev,
struct ipath_cregs const *crp,
__be16 sel)
static int recv_pma_get_portsamplesresult(struct ib_perf *pmp,
struct ib_device *ibdev)
static int recv_pma_get_portsamplesresult_ext(struct ib_perf *pmp,
struct ib_device *ibdev)
static int recv_pma_get_portcounters(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int recv_pma_get_portcounters_ext(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int recv_pma_set_portcounters(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int recv_pma_set_portcounters_ext(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int process_subn(struct ib_device *ibdev, int mad_flags,
u8 port_num, struct ib_mad *in_mad,
struct ib_mad *out_mad)
static int process_perf(struct ib_device *ibdev, u8 port_num,
struct ib_mad *in_mad,
struct ib_mad *out_mad)
int ipath_process_mad(struct ib_device *ibdev, int mad_flags, u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
