#define WL_RESERVED_PEBS 1
#define UBI_WL_THRESHOLD CONFIG_MTD_UBI_WL_THRESHOLD
#define WL_FREE_MAX_DIFF (2*UBI_WL_THRESHOLD)
#define WL_MAX_FAILURES 32
struct ubi_work ;
static int paranoid_check_ec(struct ubi_device *ubi, int pnum, int ec);
static int paranoid_check_in_wl_tree(struct ubi_wl_entry *e,
struct rb_root *root);
static int paranoid_check_in_pq(struct ubi_device *ubi, struct ubi_wl_entry *e);
#define paranoid_check_ec(ubi, pnum, ec) 0
#define paranoid_check_in_wl_tree(e, root)
#define paranoid_check_in_pq(ubi, e) 0
static void wl_tree_add(struct ubi_wl_entry *e, struct rb_root *root)
static int do_work(struct ubi_device *ubi)
static int produce_free_peb(struct ubi_device *ubi)
static int in_wl_tree(struct ubi_wl_entry *e, struct rb_root *root)
static void prot_queue_add(struct ubi_device *ubi, struct ubi_wl_entry *e)
static struct ubi_wl_entry *find_wl_entry(struct rb_root *root, int max)
int ubi_wl_get_peb(struct ubi_device *ubi, int dtype)
static int prot_queue_del(struct ubi_device *ubi, int pnum)
static int sync_erase(struct ubi_device *ubi, struct ubi_wl_entry *e,
int torture)
static void serve_prot_queue(struct ubi_device *ubi)
static void schedule_ubi_work(struct ubi_device *ubi, struct ubi_work *wrk)
static int erase_worker(struct ubi_device *ubi, struct ubi_work *wl_wrk,
int cancel);
static int schedule_erase(struct ubi_device *ubi, struct ubi_wl_entry *e,
int torture)
static int wear_leveling_worker(struct ubi_device *ubi, struct ubi_work *wrk,
int cancel)
static int ensure_wear_leveling(struct ubi_device *ubi)
static int erase_worker(struct ubi_device *ubi, struct ubi_work *wl_wrk,
int cancel)
int ubi_wl_put_peb(struct ubi_device *ubi, int pnum, int torture)
int ubi_wl_scrub_peb(struct ubi_device *ubi, int pnum)
int ubi_wl_flush(struct ubi_device *ubi)
static void tree_destroy(struct rb_root *root)
int ubi_thread(void *u)
static void cancel_pending(struct ubi_device *ubi)
int ubi_wl_init_scan(struct ubi_device *ubi, struct ubi_scan_info *si)
static void protection_queue_destroy(struct ubi_device *ubi)
void ubi_wl_close(struct ubi_device *ubi)
static int paranoid_check_ec(struct ubi_device *ubi, int pnum, int ec)
static int paranoid_check_in_wl_tree(struct ubi_wl_entry *e,
struct rb_root *root)
static int paranoid_check_in_pq(struct ubi_device *ubi, struct ubi_wl_entry *e)
