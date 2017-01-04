#define AMIXER_RESOURCE_NUM	256
#define SUM_RESOURCE_NUM	256
#define AMIXER_Y_IMMEDIATE	1
#define BLANK_SLOT		4094
static int amixer_master(struct rsc *rsc)
static int amixer_next_conj(struct rsc *rsc)
static int amixer_index(const struct rsc *rsc)
static int amixer_output_slot(const struct rsc *rsc)
static struct rsc_ops amixer_basic_rsc_ops = ;
static int amixer_set_input(struct amixer *amixer, struct rsc *rsc)
static int amixer_set_y(struct amixer *amixer, unsigned int y)
static int amixer_set_invalid_squash(struct amixer *amixer, unsigned int iv)
static int amixer_set_sum(struct amixer *amixer, struct sum *sum)
static int amixer_commit_write(struct amixer *amixer)
static int amixer_commit_raw_write(struct amixer *amixer)
static int amixer_get_y(struct amixer *amixer)
static int amixer_setup(struct amixer *amixer, struct rsc *input,
unsigned int scale, struct sum *sum)
static struct amixer_rsc_ops amixer_ops = ;
static int amixer_rsc_init(struct amixer *amixer,
const struct amixer_desc *desc,
struct amixer_mgr *mgr)
static int amixer_rsc_uninit(struct amixer *amixer)
static int get_amixer_rsc(struct amixer_mgr *mgr,
const struct amixer_desc *desc,
struct amixer **ramixer)
static int put_amixer_rsc(struct amixer_mgr *mgr, struct amixer *amixer)
int amixer_mgr_create(void *hw, struct amixer_mgr **ramixer_mgr)
int amixer_mgr_destroy(struct amixer_mgr *amixer_mgr)
static int sum_master(struct rsc *rsc)
static int sum_next_conj(struct rsc *rsc)
static int sum_index(const struct rsc *rsc)
static int sum_output_slot(const struct rsc *rsc)
static struct rsc_ops sum_basic_rsc_ops = ;
static int sum_rsc_init(struct sum *sum,
const struct sum_desc *desc,
struct sum_mgr *mgr)
static int sum_rsc_uninit(struct sum *sum)
static int get_sum_rsc(struct sum_mgr *mgr,
const struct sum_desc *desc,
struct sum **rsum)
static int put_sum_rsc(struct sum_mgr *mgr, struct sum *sum)
int sum_mgr_create(void *hw, struct sum_mgr **rsum_mgr)
int sum_mgr_destroy(struct sum_mgr *sum_mgr)
