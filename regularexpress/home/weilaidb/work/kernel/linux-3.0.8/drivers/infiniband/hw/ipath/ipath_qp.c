#define BITS_PER_PAGE		(PAGE_SIZE*BITS_PER_BYTE)
#define BITS_PER_PAGE_MASK	(BITS_PER_PAGE-1)
#define mk_qpn(qpt, map, off)	(((map) - (qpt)->map) * BITS_PER_PAGE + \
(off))
#define find_next_offset(map, off) find_next_zero_bit((map)->page, \
BITS_PER_PAGE, off)
static u32 credit_table[31] = ;
static void get_map_page(struct ipath_qp_table *qpt, struct qpn_map *map)
static int alloc_qpn(struct ipath_qp_table *qpt, enum ib_qp_type type)
static void free_qpn(struct ipath_qp_table *qpt, u32 qpn)
static int ipath_alloc_qpn(struct ipath_qp_table *qpt, struct ipath_qp *qp,
enum ib_qp_type type)
static void ipath_free_qp(struct ipath_qp_table *qpt, struct ipath_qp *qp)
unsigned ipath_free_all_qps(struct ipath_qp_table *qpt)
struct ipath_qp *ipath_lookup_qpn(struct ipath_qp_table *qpt, u32 qpn)
static void ipath_reset_qp(struct ipath_qp *qp, enum ib_qp_type type)
int ipath_error_qp(struct ipath_qp *qp, enum ib_wc_status err)
int ipath_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
int ipath_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_qp_init_attr *init_attr)
__be32 ipath_compute_aeth(struct ipath_qp *qp)
struct ib_qp *ipath_create_qp(struct ib_pd *ibpd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata)
int ipath_destroy_qp(struct ib_qp *ibqp)
int ipath_init_qp_table(struct ipath_ibdev *idev, int size)
void ipath_get_credit(struct ipath_qp *qp, u32 aeth)
