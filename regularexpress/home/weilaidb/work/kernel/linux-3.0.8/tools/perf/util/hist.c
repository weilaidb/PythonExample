enum hist_filter ;
struct callchain_param	callchain_param = ;
u16 hists__col_len(struct hists *self, enum hist_column col)
void hists__set_col_len(struct hists *self, enum hist_column col, u16 len)
bool hists__new_col_len(struct hists *self, enum hist_column col, u16 len)
static void hists__reset_col_len(struct hists *self)
static void hists__calc_col_len(struct hists *self, struct hist_entry *h)
static void hist_entry__add_cpumode_period(struct hist_entry *self,
unsigned int cpumode, u64 period)
static struct hist_entry *hist_entry__new(struct hist_entry *template)
static void hists__inc_nr_entries(struct hists *self, struct hist_entry *h)
static u8 symbol__parent_filter(const struct symbol *parent)
struct hist_entry *__hists__add_entry(struct hists *self,
struct addr_location *al,
struct symbol *sym_parent, u64 period)
int64_t
hist_entry__cmp(struct hist_entry *left, struct hist_entry *right)
int64_t
hist_entry__collapse(struct hist_entry *left, struct hist_entry *right)
void hist_entry__free(struct hist_entry *he)
static bool hists__collapse_insert_entry(struct hists *self,
struct rb_root *root,
struct hist_entry *he)
void hists__collapse_resort(struct hists *self)
static void __hists__insert_output_entry(struct rb_root *entries,
struct hist_entry *he,
u64 min_callchain_hits)
void hists__output_resort(struct hists *self)
static size_t callchain__fprintf_left_margin(FILE *fp, int left_margin)
static size_t ipchain__fprintf_graph_line(FILE *fp, int depth, int depth_mask,
int left_margin)
static size_t ipchain__fprintf_graph(FILE *fp, struct callchain_list *chain,
int depth, int depth_mask, int period,
u64 total_samples, u64 hits,
int left_margin)
static struct symbol *rem_sq_bracket;
static struct callchain_list rem_hits;
static void init_rem_hits(void)
static size_t __callchain__fprintf_graph(FILE *fp, struct callchain_node *self,
u64 total_samples, int depth,
int depth_mask, int left_margin)
static size_t callchain__fprintf_graph(FILE *fp, struct callchain_node *self,
u64 total_samples, int left_margin)
static size_t callchain__fprintf_flat(FILE *fp, struct callchain_node *self,
u64 total_samples)
static size_t hist_entry_callchain__fprintf(FILE *fp, struct hist_entry *self,
u64 total_samples, int left_margin)
int hist_entry__snprintf(struct hist_entry *self, char *s, size_t size,
struct hists *hists, struct hists *pair_hists,
bool show_displacement, long displacement,
bool color, u64 session_total)
int hist_entry__fprintf(struct hist_entry *self, struct hists *hists,
struct hists *pair_hists, bool show_displacement,
long displacement, FILE *fp, u64 session_total)
static size_t hist_entry__fprintf_callchain(struct hist_entry *self,
struct hists *hists, FILE *fp,
u64 session_total)
size_t hists__fprintf(struct hists *self, struct hists *pair,
bool show_displacement, FILE *fp)
unsigned int hists__sort_list_width(struct hists *self)
static void hists__remove_entry_filter(struct hists *self, struct hist_entry *h,
enum hist_filter filter)
void hists__filter_by_dso(struct hists *self, const struct dso *dso)
void hists__filter_by_thread(struct hists *self, const struct thread *thread)
int hist_entry__inc_addr_samples(struct hist_entry *he, int evidx, u64 ip)
int hist_entry__annotate(struct hist_entry *he, size_t privsize)
void hists__inc_nr_events(struct hists *self, u32 type)
size_t hists__fprintf_nr_events(struct hists *self, FILE *fp)
