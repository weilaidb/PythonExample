#define BITS_PER_PAGE           (PAGE_SIZE*BITS_PER_BYTE)
#define BITS_PER_PAGE_MASK      (BITS_PER_PAGE-1)
static inline unsigned mk_qpn(struct qib_qpn_table *qpt,
struct qpn_map *map, unsigned off)
static inline unsigned find_next_offset(struct qib_qpn_table *qpt,
struct qpn_map *map, unsigned off,
unsigned n)
static u32 credit_table[31] = ;
static void get_map_page(struct qib_qpn_table *qpt, struct qpn_map *map)
static int alloc_qpn(struct qib_devdata *dd, struct qib_qpn_table *qpt,
enum ib_qp_type type, u8 port)
static void free_qpn(struct qib_qpn_table *qpt, u32 qpn)
static void insert_qp(struct qib_ibdev *dev, struct qib_qp *qp)
static void remove_qp(struct qib_ibdev *dev, struct qib_qp *qp)
unsigned qib_free_all_qps(struct qib_devdata *dd)
struct qib_qp *qib_lookup_qpn(struct qib_ibport *ibp, u32 qpn)
static void qib_reset_qp(struct qib_qp *qp, enum ib_qp_type type)
static void clear_mr_refs(struct qib_qp *qp, int clr_sends)
int qib_error_qp(struct qib_qp *qp, enum ib_wc_status err)
int qib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
int qib_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_qp_init_attr *init_attr)
__be32 qib_compute_aeth(struct qib_qp *qp)
struct ib_qp *qib_create_qp(struct ib_pd *ibpd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata)
int qib_destroy_qp(struct ib_qp *ibqp)
void qib_init_qpn_table(struct qib_devdata *dd, struct qib_qpn_table *qpt)
void qib_free_qpn_table(struct qib_qpn_table *qpt)
void qib_get_credit(struct qib_qp *qp, u32 aeth)
