static const char cut_line[] =
"------------------------ >8 ------------------------\n";
static char default_wt_status_colors[][COLOR_MAXLEN] = ;
static const char *color(int slot, struct wt_status *s)
static void status_vprintf(struct wt_status *s, int at_bol, const char *color,
const char *fmt, va_list ap, const char *trail)
void status_printf_ln(struct wt_status *s, const char *color,
const char *fmt, ...)
void status_printf(struct wt_status *s, const char *color,
const char *fmt, ...)
static void status_printf_more(struct wt_status *s, const char *color,
const char *fmt, ...)
void wt_status_prepare(struct wt_status *s)
static void wt_status_print_unmerged_header(struct wt_status *s)
static void wt_status_print_cached_header(struct wt_status *s)
static void wt_status_print_dirty_header(struct wt_status *s,
int has_deleted,
int has_dirty_submodules)
static void wt_status_print_other_header(struct wt_status *s,
const char *what,
const char *how)
static void wt_status_print_trailer(struct wt_status *s)
#define quote_path quote_path_relative
static const char *wt_status_unmerged_status_string(int stagemask)
static const char *wt_status_diff_status_string(int status)
static int maxwidth(const char *(*label)(int), int minval, int maxval)
static void wt_status_print_unmerged_data(struct wt_status *s,
struct string_list_item *it)
static void wt_status_print_change_data(struct wt_status *s,
int change_type,
struct string_list_item *it)
static void wt_status_collect_changed_cb(struct diff_queue_struct *q,
struct diff_options *options,
void *data)
static int unmerged_mask(const char *path)
static void wt_status_collect_updated_cb(struct diff_queue_struct *q,
struct diff_options *options,
void *data)
static void wt_status_collect_changes_worktree(struct wt_status *s)
static void wt_status_collect_changes_index(struct wt_status *s)
static void wt_status_collect_changes_initial(struct wt_status *s)
static void wt_status_collect_untracked(struct wt_status *s)
void wt_status_collect(struct wt_status *s)
static void wt_status_print_unmerged(struct wt_status *s)
static void wt_status_print_updated(struct wt_status *s)
static int wt_status_check_worktree_changes(struct wt_status *s,
int *dirty_submodules)
static void wt_status_print_changed(struct wt_status *s)
static void wt_status_print_submodule_summary(struct wt_status *s, int uncommitted)
static void wt_status_print_other(struct wt_status *s,
struct string_list *l,
const char *what,
const char *how)
void wt_status_truncate_message_at_cut_line(struct strbuf *buf)
void wt_status_add_cut_line(FILE *fp)
static void wt_status_print_verbose(struct wt_status *s)
static void wt_status_print_tracking(struct wt_status *s)
static int has_unmerged(struct wt_status *s)
static void show_merge_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static void show_am_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static char *read_line_from_git_path(const char *filename)
static int split_commit_in_progress(struct wt_status *s)
static void show_rebase_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static void show_cherry_pick_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static void show_revert_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static void show_bisect_in_progress(struct wt_status *s,
struct wt_status_state *state,
const char *color)
static char *read_and_strip_branch(const char *path)
struct grab_1st_switch_cbdata ;
static int grab_1st_switch(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static void wt_status_get_detached_from(struct wt_status_state *state)
void wt_status_get_state(struct wt_status_state *state,
int get_detached_from)
static void wt_status_print_state(struct wt_status *s,
struct wt_status_state *state)
void wt_status_print(struct wt_status *s)
static void wt_shortstatus_unmerged(struct string_list_item *it,
struct wt_status *s)
static void wt_shortstatus_status(struct string_list_item *it,
struct wt_status *s)
static void wt_shortstatus_other(struct string_list_item *it,
struct wt_status *s, const char *sign)
static void wt_shortstatus_print_tracking(struct wt_status *s)
void wt_shortstatus_print(struct wt_status *s)
void wt_porcelain_print(struct wt_status *s)
