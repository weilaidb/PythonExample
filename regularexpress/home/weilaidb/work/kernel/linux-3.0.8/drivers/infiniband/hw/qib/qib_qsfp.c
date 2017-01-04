#define QSFP_MAX_RETRY 4
static int qsfp_read(struct qib_pportdata *ppd, int addr, void *bp, int len)
static int qib_qsfp_write(struct qib_pportdata *ppd, int addr, void *bp,
int len)
static int qsfp_cks(struct qib_pportdata *ppd, int first, int next)
int qib_refresh_qsfp_cache(struct qib_pportdata *ppd, struct qib_qsfp_cache *cp)
const char * const qib_qsfp_devtech[16] = ;
#define QSFP_DUMP_CHUNK 16
#define QSFP_DEFAULT_HDR_CNT 224
static const char *pwr_codes = "1.5W2.0W2.5W3.5W";
void qib_qsfp_init(struct qib_qsfp_data *qd,
void (*fevent)(struct work_struct *))
void qib_qsfp_deinit(struct qib_qsfp_data *qd)
int qib_qsfp_dump(struct qib_pportdata *ppd, char *buf, int len)
