static void uwb_rsv_fill_column_alloc(struct uwb_rsv_alloc_info *ai)
static void uwb_rsv_fill_row_alloc(struct uwb_rsv_alloc_info *ai)
static int uwb_rsv_find_best_column_set(struct uwb_rsv_alloc_info *ai, int interval,
int num_safe_mas, int num_unsafe_mas)
static void get_row_descriptors(struct uwb_rsv_alloc_info *ai)
static void uwb_rsv_fill_column_info(unsigned char *bm, int column, struct uwb_rsv_col_info *rci)
static void get_column_descriptors(struct uwb_rsv_alloc_info *ai)
static int uwb_rsv_find_best_row_alloc(struct uwb_rsv_alloc_info *ai)
static int uwb_rsv_find_best_col_alloc(struct uwb_rsv_alloc_info *ai, int interval)
int uwb_rsv_find_best_allocation(struct uwb_rsv *rsv, struct uwb_mas_bm *available,
struct uwb_mas_bm *result)
