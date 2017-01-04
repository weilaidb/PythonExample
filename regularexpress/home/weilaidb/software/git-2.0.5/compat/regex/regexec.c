static reg_errcode_t match_ctx_init (re_match_context_t *cache, int eflags,
int n) internal_function;
static void match_ctx_clean (re_match_context_t *mctx) internal_function;
static void match_ctx_free (re_match_context_t *cache) internal_function;
static reg_errcode_t match_ctx_add_entry (re_match_context_t *cache, int node,
int str_idx, int from, int to)
internal_function;
static int search_cur_bkref_entry (const re_match_context_t *mctx, int str_idx)
internal_function;
static reg_errcode_t match_ctx_add_subtop (re_match_context_t *mctx, int node,
int str_idx) internal_function;
static re_sub_match_last_t * match_ctx_add_sublast (re_sub_match_top_t *subtop,
int node, int str_idx)
internal_function;
static void sift_ctx_init (re_sift_context_t *sctx, re_dfastate_t **sifted_sts,
re_dfastate_t **limited_sts, int last_node,
int last_str_idx)
internal_function;
static reg_errcode_t re_search_internal (const regex_t *preg,
const char *string, int length,
int start, int range, int stop,
size_t nmatch, regmatch_t pmatch[],
int eflags);
static int re_search_2_stub (struct re_pattern_buffer *bufp,
const char *string1, int length1,
const char *string2, int length2,
int start, int range, struct re_registers *regs,
int stop, int ret_len);
static int re_search_stub (struct re_pattern_buffer *bufp,
const char *string, int length, int start,
int range, int stop, struct re_registers *regs,
int ret_len);
static unsigned re_copy_regs (struct re_registers *regs, regmatch_t *pmatch,
int nregs, int regs_allocated);
static reg_errcode_t prune_impossible_nodes (re_match_context_t *mctx);
static int check_matching (re_match_context_t *mctx, int fl_longest_match,
int *p_match_first) internal_function;
static int check_halt_state_context (const re_match_context_t *mctx,
const re_dfastate_t *state, int idx)
internal_function;
static void update_regs (const re_dfa_t *dfa, regmatch_t *pmatch,
regmatch_t *prev_idx_match, int cur_node,
int cur_idx, int nmatch) internal_function;
static reg_errcode_t push_fail_stack (struct re_fail_stack_t *fs,
int str_idx, int dest_node, int nregs,
regmatch_t *regs,
re_node_set *eps_via_nodes)
internal_function;
static reg_errcode_t set_regs (const regex_t *preg,
const re_match_context_t *mctx,
size_t nmatch, regmatch_t *pmatch,
int fl_backtrack) internal_function;
static reg_errcode_t free_fail_stack_return (struct re_fail_stack_t *fs)
internal_function;
static int sift_states_iter_mb (const re_match_context_t *mctx,
re_sift_context_t *sctx,
int node_idx, int str_idx, int max_str_idx)
internal_function;
static reg_errcode_t sift_states_backward (const re_match_context_t *mctx,
re_sift_context_t *sctx)
internal_function;
static reg_errcode_t build_sifted_states (const re_match_context_t *mctx,
re_sift_context_t *sctx, int str_idx,
re_node_set *cur_dest)
internal_function;
static reg_errcode_t update_cur_sifted_state (const re_match_context_t *mctx,
re_sift_context_t *sctx,
int str_idx,
re_node_set *dest_nodes)
internal_function;
static reg_errcode_t add_epsilon_src_nodes (const re_dfa_t *dfa,
re_node_set *dest_nodes,
const re_node_set *candidates)
internal_function;
static int check_dst_limits (const re_match_context_t *mctx,
re_node_set *limits,
int dst_node, int dst_idx, int src_node,
int src_idx) internal_function;
static int check_dst_limits_calc_pos_1 (const re_match_context_t *mctx,
int boundaries, int subexp_idx,
int from_node, int bkref_idx)
internal_function;
static int check_dst_limits_calc_pos (const re_match_context_t *mctx,
int limit, int subexp_idx,
int node, int str_idx,
int bkref_idx) internal_function;
static reg_errcode_t check_subexp_limits (const re_dfa_t *dfa,
re_node_set *dest_nodes,
const re_node_set *candidates,
re_node_set *limits,
struct re_backref_cache_entry *bkref_ents,
int str_idx) internal_function;
static reg_errcode_t sift_states_bkref (const re_match_context_t *mctx,
re_sift_context_t *sctx,
int str_idx, const re_node_set *candidates)
internal_function;
static reg_errcode_t merge_state_array (const re_dfa_t *dfa,
re_dfastate_t **dst,
re_dfastate_t **src, int num)
internal_function;
static re_dfastate_t *find_recover_state (reg_errcode_t *err,
re_match_context_t *mctx) internal_function;
static re_dfastate_t *transit_state (reg_errcode_t *err,
re_match_context_t *mctx,
re_dfastate_t *state) internal_function;
static re_dfastate_t *merge_state_with_log (reg_errcode_t *err,
re_match_context_t *mctx,
re_dfastate_t *next_state)
internal_function;
static reg_errcode_t check_subexp_matching_top (re_match_context_t *mctx,
re_node_set *cur_nodes,
int str_idx) internal_function;
static reg_errcode_t transit_state_mb (re_match_context_t *mctx,
re_dfastate_t *pstate)
internal_function;
static reg_errcode_t transit_state_bkref (re_match_context_t *mctx,
const re_node_set *nodes)
internal_function;
static reg_errcode_t get_subexp (re_match_context_t *mctx,
int bkref_node, int bkref_str_idx)
internal_function;
static reg_errcode_t get_subexp_sub (re_match_context_t *mctx,
const re_sub_match_top_t *sub_top,
re_sub_match_last_t *sub_last,
int bkref_node, int bkref_str)
internal_function;
static int find_subexp_node (const re_dfa_t *dfa, const re_node_set *nodes,
int subexp_idx, int type) internal_function;
static reg_errcode_t check_arrival (re_match_context_t *mctx,
state_array_t *path, int top_node,
int top_str, int last_node, int last_str,
int type) internal_function;
static reg_errcode_t check_arrival_add_next_nodes (re_match_context_t *mctx,
int str_idx,
re_node_set *cur_nodes,
re_node_set *next_nodes)
internal_function;
static reg_errcode_t check_arrival_expand_ecl (const re_dfa_t *dfa,
re_node_set *cur_nodes,
int ex_subexp, int type)
internal_function;
static reg_errcode_t check_arrival_expand_ecl_sub (const re_dfa_t *dfa,
re_node_set *dst_nodes,
int target, int ex_subexp,
int type) internal_function;
static reg_errcode_t expand_bkref_cache (re_match_context_t *mctx,
re_node_set *cur_nodes, int cur_str,
int subexp_num, int type)
internal_function;
static int build_trtable (const re_dfa_t *dfa,
re_dfastate_t *state) internal_function;
static int check_node_accept_bytes (const re_dfa_t *dfa, int node_idx,
const re_string_t *input, int idx)
internal_function;
# ifdef _LIBC
static unsigned int find_collation_sequence_value (const unsigned char *mbs,
size_t name_len)
internal_function;
# endif
static int group_nodes_into_DFAstates (const re_dfa_t *dfa,
const re_dfastate_t *state,
re_node_set *states_node,
bitset_t *states_ch) internal_function;
static int check_node_accept (const re_match_context_t *mctx,
const re_token_t *node, int idx)
internal_function;
static reg_errcode_t extend_buffers (re_match_context_t *mctx)
internal_function;
int
regexec (
const regex_t *__restrict preg,
const char *__restrict string,
size_t nmatch,
regmatch_t pmatch[],
int eflags)
# include <shlib-compat.h>
versioned_symbol (libc, __regexec, regexec, GLIBC_2_3_4);
# if SHLIB_COMPAT (libc, GLIBC_2_0, GLIBC_2_3_4)
__typeof__ (__regexec) __compat_regexec;
int
attribute_compat_text_section
__compat_regexec (const regex_t *__restrict preg,
const char *__restrict string, size_t nmatch,
regmatch_t pmatch[], int eflags)
compat_symbol (libc, __compat_regexec, regexec, GLIBC_2_0);
# endif
int
re_match (struct re_pattern_buffer *bufp,
const char *string,
int length,
int start,
struct re_registers *regs)
weak_alias (__re_match, re_match)
int
re_search (struct re_pattern_buffer *bufp,
const char *string,
int length, int start, int range,
struct re_registers *regs)
weak_alias (__re_search, re_search)
int
re_match_2 (struct re_pattern_buffer *bufp,
const char *string1, int length1,
const char *string2, int length2, int start,
struct re_registers *regs, int stop)
weak_alias (__re_match_2, re_match_2)
int
re_search_2 (struct re_pattern_buffer *bufp,
const char *string1, int length1,
const char *string2, int length2, int start,
int range, struct re_registers *regs,  int stop)
weak_alias (__re_search_2, re_search_2)
static int
re_search_2_stub (struct re_pattern_buffer *bufp,
const char *string1, int length1,
const char *string2, int length2, int start,
int range, struct re_registers *regs,
int stop, int ret_len)
static int
re_search_stub (struct re_pattern_buffer *bufp,
const char *string, int length, int start,
int range, int stop,
struct re_registers *regs, int ret_len)
static unsigned
re_copy_regs (struct re_registers *regs,
regmatch_t *pmatch,
int nregs, int regs_allocated)
void
re_set_registers (struct re_pattern_buffer *bufp,
struct re_registers *regs,
unsigned num_regs,
regoff_t *starts,
regoff_t *ends)
weak_alias (__re_set_registers, re_set_registers)
#if defined _REGEX_RE_COMP || defined _LIBC
int
# ifdef _LIBC
weak_function
# endif
re_exec (s)
const char *s;
static reg_errcode_t
re_search_internal (const regex_t *preg,
const char *string,
int length, int start, int range, int stop,
size_t nmatch, regmatch_t pmatch[],
int eflags)
static reg_errcode_t
prune_impossible_nodes (re_match_context_t *mctx)
static inline re_dfastate_t *
__attribute ((always_inline)) internal_function
acquire_init_state_context (reg_errcode_t *err, const re_match_context_t *mctx,
int idx)
static int
internal_function
check_matching (re_match_context_t *mctx, int fl_longest_match,
int *p_match_first)
static int
internal_function
check_halt_node_context (const re_dfa_t *dfa, int node, unsigned int context)
static int
internal_function
check_halt_state_context (const re_match_context_t *mctx,
const re_dfastate_t *state, int idx)
static int
internal_function
proceed_next_node (const re_match_context_t *mctx, int nregs, regmatch_t *regs,
int *pidx, int node, re_node_set *eps_via_nodes,
struct re_fail_stack_t *fs)
static reg_errcode_t
internal_function
push_fail_stack (struct re_fail_stack_t *fs, int str_idx, int dest_node,
int nregs, regmatch_t *regs, re_node_set *eps_via_nodes)
static int
internal_function
pop_fail_stack (struct re_fail_stack_t *fs, int *pidx, int nregs,
regmatch_t *regs, re_node_set *eps_via_nodes)
static reg_errcode_t
internal_function
set_regs (const regex_t *preg, const re_match_context_t *mctx, size_t nmatch,
regmatch_t *pmatch, int fl_backtrack)
static reg_errcode_t
internal_function
free_fail_stack_return (struct re_fail_stack_t *fs)
static void
internal_function
update_regs (const re_dfa_t *dfa, regmatch_t *pmatch,
regmatch_t *prev_idx_match, int cur_node, int cur_idx, int nmatch)
#define STATE_NODE_CONTAINS(state,node) \
((state) != NULL && re_node_set_contains (&(state)->nodes, node))
static reg_errcode_t
internal_function
sift_states_backward (const re_match_context_t *mctx, re_sift_context_t *sctx)
static reg_errcode_t
internal_function
build_sifted_states (const re_match_context_t *mctx, re_sift_context_t *sctx,
int str_idx, re_node_set *cur_dest)
static reg_errcode_t
internal_function
clean_state_log_if_needed (re_match_context_t *mctx, int next_state_log_idx)
static reg_errcode_t
internal_function
merge_state_array (const re_dfa_t *dfa, re_dfastate_t **dst,
re_dfastate_t **src, int num)
static reg_errcode_t
internal_function
update_cur_sifted_state (const re_match_context_t *mctx,
re_sift_context_t *sctx, int str_idx,
re_node_set *dest_nodes)
static reg_errcode_t
internal_function
add_epsilon_src_nodes (const re_dfa_t *dfa, re_node_set *dest_nodes,
const re_node_set *candidates)
static reg_errcode_t
internal_function
sub_epsilon_src_nodes (const re_dfa_t *dfa, int node, re_node_set *dest_nodes,
const re_node_set *candidates)
static int
internal_function
check_dst_limits (const re_match_context_t *mctx, re_node_set *limits,
int dst_node, int dst_idx, int src_node, int src_idx)
static int
internal_function
check_dst_limits_calc_pos_1 (const re_match_context_t *mctx, int boundaries,
int subexp_idx, int from_node, int bkref_idx)
static int
internal_function
check_dst_limits_calc_pos (const re_match_context_t *mctx, int limit,
int subexp_idx, int from_node, int str_idx,
int bkref_idx)
static reg_errcode_t
internal_function
check_subexp_limits (const re_dfa_t *dfa, re_node_set *dest_nodes,
const re_node_set *candidates, re_node_set *limits,
struct re_backref_cache_entry *bkref_ents, int str_idx)
static reg_errcode_t
internal_function
sift_states_bkref (const re_match_context_t *mctx, re_sift_context_t *sctx,
int str_idx, const re_node_set *candidates)
static int
internal_function
sift_states_iter_mb (const re_match_context_t *mctx, re_sift_context_t *sctx,
int node_idx, int str_idx, int max_str_idx)
static re_dfastate_t *
internal_function
transit_state (reg_errcode_t *err, re_match_context_t *mctx,
re_dfastate_t *state)
static re_dfastate_t *
internal_function
merge_state_with_log (reg_errcode_t *err, re_match_context_t *mctx,
re_dfastate_t *next_state)
static re_dfastate_t *
internal_function
find_recover_state (reg_errcode_t *err, re_match_context_t *mctx)
static reg_errcode_t
internal_function
check_subexp_matching_top (re_match_context_t *mctx, re_node_set *cur_nodes,
int str_idx)
static reg_errcode_t
internal_function
transit_state_mb (re_match_context_t *mctx, re_dfastate_t *pstate)
static reg_errcode_t
internal_function
transit_state_bkref (re_match_context_t *mctx, const re_node_set *nodes)
static reg_errcode_t
internal_function
get_subexp (re_match_context_t *mctx, int bkref_node, int bkref_str_idx)
static reg_errcode_t
internal_function
get_subexp_sub (re_match_context_t *mctx, const re_sub_match_top_t *sub_top,
re_sub_match_last_t *sub_last, int bkref_node, int bkref_str)
static int
internal_function
find_subexp_node (const re_dfa_t *dfa, const re_node_set *nodes,
int subexp_idx, int type)
static reg_errcode_t
internal_function
check_arrival (re_match_context_t *mctx, state_array_t *path, int top_node,
int top_str, int last_node, int last_str, int type)
static reg_errcode_t
internal_function
check_arrival_add_next_nodes (re_match_context_t *mctx, int str_idx,
re_node_set *cur_nodes, re_node_set *next_nodes)
static reg_errcode_t
internal_function
check_arrival_expand_ecl (const re_dfa_t *dfa, re_node_set *cur_nodes,
int ex_subexp, int type)
static reg_errcode_t
internal_function
check_arrival_expand_ecl_sub (const re_dfa_t *dfa, re_node_set *dst_nodes,
int target, int ex_subexp, int type)
static reg_errcode_t
internal_function
expand_bkref_cache (re_match_context_t *mctx, re_node_set *cur_nodes,
int cur_str, int subexp_num, int type)
static int
internal_function
build_trtable (const re_dfa_t *dfa, re_dfastate_t *state)
static int
internal_function
group_nodes_into_DFAstates (const re_dfa_t *dfa, const re_dfastate_t *state,
re_node_set *dests_node, bitset_t *dests_ch)
static int
internal_function
check_node_accept_bytes (const re_dfa_t *dfa, int node_idx,
const re_string_t *input, int str_idx)
# ifdef _LIBC
static unsigned int
internal_function
find_collation_sequence_value (const unsigned char *mbs, size_t mbs_len)
# endif
static int
internal_function
check_node_accept (const re_match_context_t *mctx, const re_token_t *node,
int idx)
static reg_errcode_t
internal_function
extend_buffers (re_match_context_t *mctx)
static reg_errcode_t
internal_function
match_ctx_init (re_match_context_t *mctx, int eflags, int n)
static void
internal_function
match_ctx_clean (re_match_context_t *mctx)
static void
internal_function
match_ctx_free (re_match_context_t *mctx)
static reg_errcode_t
internal_function
match_ctx_add_entry (re_match_context_t *mctx, int node, int str_idx, int from,
int to)
static int
internal_function
search_cur_bkref_entry (const re_match_context_t *mctx, int str_idx)
static reg_errcode_t
internal_function
match_ctx_add_subtop (re_match_context_t *mctx, int node, int str_idx)
static re_sub_match_last_t *
internal_function
match_ctx_add_sublast (re_sub_match_top_t *subtop, int node, int str_idx)
static void
internal_function
sift_ctx_init (re_sift_context_t *sctx, re_dfastate_t **sifted_sts,
re_dfastate_t **limited_sts, int last_node, int last_str_idx)
