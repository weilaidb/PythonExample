#define MAX_MKSPC_RETRIES 3
#define NR_TO_WRITE 16
static void shrink_liability(struct ubifs_info *c, int nr_to_write)
static int run_gc(struct ubifs_info *c)
static long long get_liability(struct ubifs_info *c)
static int make_free_space(struct ubifs_info *c)
int ubifs_calc_min_idx_lebs(struct ubifs_info *c)
long long ubifs_calc_available(const struct ubifs_info *c, int min_idx_lebs)
static int can_use_rp(struct ubifs_info *c)
static int do_budget_space(struct ubifs_info *c)
static int calc_idx_growth(const struct ubifs_info *c,
const struct ubifs_budget_req *req)
static int calc_data_growth(const struct ubifs_info *c,
const struct ubifs_budget_req *req)
static int calc_dd_growth(const struct ubifs_info *c,
const struct ubifs_budget_req *req)
int ubifs_budget_space(struct ubifs_info *c, struct ubifs_budget_req *req)
void ubifs_release_budget(struct ubifs_info *c, struct ubifs_budget_req *req)
void ubifs_convert_page_budget(struct ubifs_info *c)
void ubifs_release_dirty_inode_budget(struct ubifs_info *c,
struct ubifs_inode *ui)
long long ubifs_reported_space(const struct ubifs_info *c, long long free)
long long ubifs_get_free_space_nolock(struct ubifs_info *c)
long long ubifs_get_free_space(struct ubifs_info *c)
