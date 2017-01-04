static char **order;
static int order_cnt;
static void prepare_order(const char *orderfile)
static int match_order(const char *path)
static int compare_objs_order(const void *a_, const void *b_)
void order_objects(const char *orderfile, obj_path_fn_t obj_path,
struct obj_order *objs, int nr)
static const char *pair_pathtwo(void *obj)
void diffcore_order(const char *orderfile)
