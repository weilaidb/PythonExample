#define _GNU_SOURCE
#undef _GNU_SOURCE
struct hist_browser ;
static void hist_browser__refresh_dimensions(struct hist_browser *self)
static void hist_browser__reset(struct hist_browser *self)
static char tree__folded_sign(bool unfolded)
static char map_symbol__folded(const struct map_symbol *self)
static char hist_entry__folded(const struct hist_entry *self)
static char callchain_list__folded(const struct callchain_list *self)
static void map_symbol__set_folding(struct map_symbol *self, bool unfold)
static int callchain_node__count_rows_rb_tree(struct callchain_node *self)
static int callchain_node__count_rows(struct callchain_node *node)
static int callchain__count_rows(struct rb_root *chain)
static bool map_symbol__toggle_fold(struct map_symbol *self)
static void callchain_node__init_have_children_rb_tree(struct callchain_node *self)
static void callchain_node__init_have_children(struct callchain_node *self)
static void callchain__init_have_children(struct rb_root *self)
static void hist_entry__init_have_children(struct hist_entry *self)
static bool hist_browser__toggle_fold(struct hist_browser *self)
static int callchain_node__set_folding_rb_tree(struct callchain_node *self, bool unfold)
static int callchain_node__set_folding(struct callchain_node *node, bool unfold)
static int callchain__set_folding(struct rb_root *chain, bool unfold)
static void hist_entry__set_folding(struct hist_entry *self, bool unfold)
static void hists__set_folding(struct hists *self, bool unfold)
static void hist_browser__set_folding(struct hist_browser *self, bool unfold)
static int hist_browser__run(struct hist_browser *self, const char *title)
static char *callchain_list__sym_name(struct callchain_list *self,
char *bf, size_t bfsize)
#define LEVEL_OFFSET_STEP 3
static int hist_browser__show_callchain_node_rb_tree(struct hist_browser *self,
struct callchain_node *chain_node,
u64 total, int level,
unsigned short row,
off_t *row_offset,
bool *is_current_entry)
static int hist_browser__show_callchain_node(struct hist_browser *self,
struct callchain_node *node,
int level, unsigned short row,
off_t *row_offset,
bool *is_current_entry)
static int hist_browser__show_callchain(struct hist_browser *self,
struct rb_root *chain,
int level, unsigned short row,
off_t *row_offset,
bool *is_current_entry)
static int hist_browser__show_entry(struct hist_browser *self,
struct hist_entry *entry,
unsigned short row)
static unsigned int hist_browser__refresh(struct ui_browser *self)
static struct rb_node *hists__filter_entries(struct rb_node *nd)
static struct rb_node *hists__filter_prev_entries(struct rb_node *nd)
static void ui_browser__hists_seek(struct ui_browser *self,
off_t offset, int whence)
static struct hist_browser *hist_browser__new(struct hists *hists)
static void hist_browser__delete(struct hist_browser *self)
static struct hist_entry *hist_browser__selected_entry(struct hist_browser *self)
static struct thread *hist_browser__selected_thread(struct hist_browser *self)
static int hists__browser_title(struct hists *self, char *bf, size_t size,
const char *ev_name, const struct dso *dso,
const struct thread *thread)
static int perf_evsel__hists_browse(struct perf_evsel *evsel,
const char *helpline, const char *ev_name,
bool left_exits)
struct perf_evsel_menu ;
static void perf_evsel_menu__write(struct ui_browser *browser,
void *entry, int row)
static int perf_evsel_menu__run(struct perf_evsel_menu *menu, const char *help)
static int __perf_evlist__tui_browse_hists(struct perf_evlist *evlist,
const char *help)
int perf_evlist__tui_browse_hists(struct perf_evlist *evlist, const char *help)
