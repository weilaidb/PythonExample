static int reply(struct ib_smp *smp)
static void qib_send_trap(struct qib_ibport *ibp, void *data, unsigned len)
void qib_bad_pqkey(struct qib_ibport *ibp, __be16 trap_num, u32 key, u32 sl,
u32 qp1, u32 qp2, __be16 lid1, __be16 lid2)
static void qib_bad_mkey(struct qib_ibport *ibp, struct ib_smp *smp)
void qib_cap_mask_chg(struct qib_ibport *ibp)
void qib_sys_guid_chg(struct qib_ibport *ibp)
void qib_node_desc_chg(struct qib_ibport *ibp)
static int subn_get_nodedescription(struct ib_smp *smp,
struct ib_device *ibdev)
static int subn_get_nodeinfo(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_get_guidinfo(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static void set_link_width_enabled(struct qib_pportdata *ppd, u32 w)
static void set_link_speed_enabled(struct qib_pportdata *ppd, u32 s)
static int get_overrunthreshold(struct qib_pportdata *ppd)
static int set_overrunthreshold(struct qib_pportdata *ppd, unsigned n)
static int get_phyerrthreshold(struct qib_pportdata *ppd)
static int set_phyerrthreshold(struct qib_pportdata *ppd, unsigned n)
static int get_linkdowndefaultstate(struct qib_pportdata *ppd)
static int check_mkey(struct qib_ibport *ibp, struct ib_smp *smp, int mad_flags)
static int subn_get_portinfo(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int get_pkeys(struct qib_devdata *dd, u8 port, u16 *pkeys)
static int subn_get_pkeytable(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_set_guidinfo(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_set_portinfo(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int rm_pkey(struct qib_pportdata *ppd, u16 key)
static int add_pkey(struct qib_pportdata *ppd, u16 key)
static int set_pkeys(struct qib_devdata *dd, u8 port, u16 *pkeys)
static int subn_set_pkeytable(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_get_sl_to_vl(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_set_sl_to_vl(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_get_vl_arb(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_set_vl_arb(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int subn_trap_repress(struct ib_smp *smp, struct ib_device *ibdev,
u8 port)
static int pma_get_classportinfo(struct ib_perf *pmp,
struct ib_device *ibdev)
static int pma_get_portsamplescontrol(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_set_portsamplescontrol(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static u64 get_counter(struct qib_ibport *ibp, struct qib_pportdata *ppd,
__be16 sel)
static u64 xmit_wait_get_value_delta(struct qib_pportdata *ppd)
static void cache_hw_sample_counters(struct qib_pportdata *ppd)
static u64 get_cache_hw_sample_counters(struct qib_pportdata *ppd,
__be16 sel)
static int pma_get_portsamplesresult(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_get_portsamplesresult_ext(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_get_portcounters(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_get_portcounters_cong(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_get_portcounters_ext(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_set_portcounters(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_set_portcounters_cong(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int pma_set_portcounters_ext(struct ib_perf *pmp,
struct ib_device *ibdev, u8 port)
static int process_subn(struct ib_device *ibdev, int mad_flags,
u8 port, struct ib_mad *in_mad,
struct ib_mad *out_mad)
static int process_perf(struct ib_device *ibdev, u8 port,
struct ib_mad *in_mad,
struct ib_mad *out_mad)
int qib_process_mad(struct ib_device *ibdev, int mad_flags, u8 port,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
static void send_handler(struct ib_mad_agent *agent,
struct ib_mad_send_wc *mad_send_wc)
static void xmit_wait_timer_func(unsigned long opaque)
int qib_create_agents(struct qib_ibdev *dev)
void qib_free_agents(struct qib_ibdev *dev)
