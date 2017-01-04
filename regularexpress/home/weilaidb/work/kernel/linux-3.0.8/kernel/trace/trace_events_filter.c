enum filter_op_ids
;
struct filter_op ;
static struct filter_op filter_ops[] = ;
enum ;
static char *err_text[] = ;
struct opstack_op ;
struct postfix_elt ;
struct filter_parse_state ;
struct pred_stack ;
#define DEFINE_COMPARISON_PRED(type)					\
static int filter_pred_##type(struct filter_pred *pred, void *event)	\
#define DEFINE_EQUALITY_PRED(size)					\
static int filter_pred_##size(struct filter_pred *pred, void *event)	\
DEFINE_COMPARISON_PRED(s64);
DEFINE_COMPARISON_PRED(u64);
DEFINE_COMPARISON_PRED(s32);
DEFINE_COMPARISON_PRED(u32);
DEFINE_COMPARISON_PRED(s16);
DEFINE_COMPARISON_PRED(u16);
DEFINE_COMPARISON_PRED(s8);
DEFINE_COMPARISON_PRED(u8);
DEFINE_EQUALITY_PRED(64);
DEFINE_EQUALITY_PRED(32);
DEFINE_EQUALITY_PRED(16);
DEFINE_EQUALITY_PRED(8);
static int filter_pred_string(struct filter_pred *pred, void *event)
static int filter_pred_pchar(struct filter_pred *pred, void *event)
static int filter_pred_strloc(struct filter_pred *pred, void *event)
static int filter_pred_none(struct filter_pred *pred, void *event)
static int regex_match_full(char *str, struct regex *r, int len)
static int regex_match_front(char *str, struct regex *r, int len)
static int regex_match_middle(char *str, struct regex *r, int len)
static int regex_match_end(char *str, struct regex *r, int len)
enum regex_type filter_parse_regex(char *buff, int len, char **search, int *not)
static void filter_build_regex(struct filter_pred *pred)
enum move_type ;
static struct filter_pred *
get_pred_parent(struct filter_pred *pred, struct filter_pred *preds,
int index, enum move_type *move)
static int process_ops(struct filter_pred *preds,
struct filter_pred *op, void *rec)
int filter_match_preds(struct event_filter *filter, void *rec)
EXPORT_SYMBOL_GPL(filter_match_preds);
static void parse_error(struct filter_parse_state *ps, int err, int pos)
static void remove_filter_string(struct event_filter *filter)
static int replace_filter_string(struct event_filter *filter,
char *filter_string)
static int append_filter_string(struct event_filter *filter,
char *string)
static void append_filter_err(struct filter_parse_state *ps,
struct event_filter *filter)
void print_event_filter(struct ftrace_event_call *call, struct trace_seq *s)
void print_subsystem_event_filter(struct event_subsystem *system,
struct trace_seq *s)
static struct ftrace_event_field *
__find_event_field(struct list_head *head, char *name)
static struct ftrace_event_field *
find_event_field(struct ftrace_event_call *call, char *name)
static void filter_free_pred(struct filter_pred *pred)
static void filter_clear_pred(struct filter_pred *pred)
static int __alloc_pred_stack(struct pred_stack *stack, int n_preds)
static void __free_pred_stack(struct pred_stack *stack)
static int __push_pred_stack(struct pred_stack *stack,
struct filter_pred *pred)
static struct filter_pred *
__pop_pred_stack(struct pred_stack *stack)
static int filter_set_pred(struct event_filter *filter,
int idx,
struct pred_stack *stack,
struct filter_pred *src,
filter_pred_fn_t fn)
static void __free_preds(struct event_filter *filter)
static void filter_disable(struct ftrace_event_call *call)
static void __free_filter(struct event_filter *filter)
void destroy_preds(struct ftrace_event_call *call)
static struct event_filter *__alloc_filter(void)
static int __alloc_preds(struct event_filter *filter, int n_preds)
static void filter_free_subsystem_preds(struct event_subsystem *system)
static void filter_free_subsystem_filters(struct event_subsystem *system)
static int filter_add_pred_fn(struct filter_parse_state *ps,
struct ftrace_event_call *call,
struct event_filter *filter,
struct filter_pred *pred,
struct pred_stack *stack,
filter_pred_fn_t fn)
int filter_assign_type(const char *type)
static bool is_string_field(struct ftrace_event_field *field)
static int is_legal_op(struct ftrace_event_field *field, int op)
static filter_pred_fn_t select_comparison_fn(int op, int field_size,
int field_is_signed)
static int filter_add_pred(struct filter_parse_state *ps,
struct ftrace_event_call *call,
struct event_filter *filter,
struct filter_pred *pred,
struct pred_stack *stack,
bool dry_run)
static void parse_init(struct filter_parse_state *ps,
struct filter_op *ops,
char *infix_string)
static char infix_next(struct filter_parse_state *ps)
static char infix_peek(struct filter_parse_state *ps)
static void infix_advance(struct filter_parse_state *ps)
static inline int is_precedence_lower(struct filter_parse_state *ps,
int a, int b)
static inline int is_op_char(struct filter_parse_state *ps, char c)
static int infix_get_op(struct filter_parse_state *ps, char firstc)
static inline void clear_operand_string(struct filter_parse_state *ps)
static inline int append_operand_char(struct filter_parse_state *ps, char c)
static int filter_opstack_push(struct filter_parse_state *ps, int op)
static int filter_opstack_empty(struct filter_parse_state *ps)
static int filter_opstack_top(struct filter_parse_state *ps)
static int filter_opstack_pop(struct filter_parse_state *ps)
static void filter_opstack_clear(struct filter_parse_state *ps)
static char *curr_operand(struct filter_parse_state *ps)
static int postfix_append_operand(struct filter_parse_state *ps, char *operand)
static int postfix_append_op(struct filter_parse_state *ps, int op)
static void postfix_clear(struct filter_parse_state *ps)
static int filter_parse(struct filter_parse_state *ps)
static struct filter_pred *create_pred(int op, char *operand1, char *operand2)
static struct filter_pred *create_logical_pred(int op)
static int check_preds(struct filter_parse_state *ps)
static int count_preds(struct filter_parse_state *ps)
static int check_pred_tree(struct event_filter *filter,
struct filter_pred *root)
static int count_leafs(struct filter_pred *preds, struct filter_pred *root)
static int fold_pred(struct filter_pred *preds, struct filter_pred *root)
static int fold_pred_tree(struct event_filter *filter,
struct filter_pred *root)
static int replace_preds(struct ftrace_event_call *call,
struct event_filter *filter,
struct filter_parse_state *ps,
char *filter_string,
bool dry_run)
struct filter_list ;
static int replace_system_preds(struct event_subsystem *system,
struct filter_parse_state *ps,
char *filter_string)
int apply_event_filter(struct ftrace_event_call *call, char *filter_string)
int apply_subsystem_event_filter(struct event_subsystem *system,
char *filter_string)
void ftrace_profile_free_filter(struct perf_event *event)
int ftrace_profile_set_filter(struct perf_event *event, int event_id,
char *filter_str)
