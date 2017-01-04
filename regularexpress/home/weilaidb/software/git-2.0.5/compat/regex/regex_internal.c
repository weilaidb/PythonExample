static void re_string_construct_common (const char *str, int len,
re_string_t *pstr,
RE_TRANSLATE_TYPE trans, int icase,
const re_dfa_t *dfa) internal_function;
static re_dfastate_t *create_ci_newstate (const re_dfa_t *dfa,
const re_node_set *nodes,
unsigned int hash) internal_function;
static re_dfastate_t *create_cd_newstate (const re_dfa_t *dfa,
const re_node_set *nodes,
unsigned int context,
unsigned int hash) internal_function;
#undef MAX
static int
MAX(size_t a, size_t b)
static reg_errcode_t
internal_function
re_string_allocate (re_string_t *pstr, const char *str, int len, int init_len,
RE_TRANSLATE_TYPE trans, int icase, const re_dfa_t *dfa)
static reg_errcode_t
internal_function
re_string_construct (re_string_t *pstr, const char *str, int len,
RE_TRANSLATE_TYPE trans, int icase, const re_dfa_t *dfa)
static reg_errcode_t
internal_function
re_string_realloc_buffers (re_string_t *pstr, int new_buf_len)
static void
internal_function
re_string_construct_common (const char *str, int len, re_string_t *pstr,
RE_TRANSLATE_TYPE trans, int icase,
const re_dfa_t *dfa)
static void
internal_function
build_wcs_buffer (re_string_t *pstr)
static reg_errcode_t
internal_function
build_wcs_upper_buffer (re_string_t *pstr)
static int
internal_function
re_string_skip_chars (re_string_t *pstr, int new_raw_idx, wint_t *last_wc)
static void
internal_function
build_upper_buffer (re_string_t *pstr)
static void
internal_function
re_string_translate_buffer (re_string_t *pstr)
static reg_errcode_t
internal_function
re_string_reconstruct (re_string_t *pstr, int idx, int eflags)
static unsigned char
internal_function __attribute ((pure))
re_string_peek_byte_case (const re_string_t *pstr, int idx)
static unsigned char
internal_function __attribute ((pure))
re_string_fetch_byte_case (re_string_t *pstr)
static void
internal_function
re_string_destruct (re_string_t *pstr)
static unsigned int
internal_function
re_string_context_at (const re_string_t *input, int idx, int eflags)
static reg_errcode_t
internal_function
re_node_set_alloc (re_node_set *set, int size)
static reg_errcode_t
internal_function
re_node_set_init_1 (re_node_set *set, int elem)
static reg_errcode_t
internal_function
re_node_set_init_2 (re_node_set *set, int elem1, int elem2)
static reg_errcode_t
internal_function
re_node_set_init_copy (re_node_set *dest, const re_node_set *src)
static reg_errcode_t
internal_function
re_node_set_add_intersect (re_node_set *dest, const re_node_set *src1,
const re_node_set *src2)
static reg_errcode_t
internal_function
re_node_set_init_union (re_node_set *dest, const re_node_set *src1,
const re_node_set *src2)
static reg_errcode_t
internal_function
re_node_set_merge (re_node_set *dest, const re_node_set *src)
static int
internal_function
re_node_set_insert (re_node_set *set, int elem)
static int
internal_function
re_node_set_insert_last (re_node_set *set, int elem)
static int
internal_function __attribute ((pure))
re_node_set_compare (const re_node_set *set1, const re_node_set *set2)
static int
internal_function __attribute ((pure))
re_node_set_contains (const re_node_set *set, int elem)
static void
internal_function
re_node_set_remove_at (re_node_set *set, int idx)
static int
internal_function
re_dfa_add_node (re_dfa_t *dfa, re_token_t token)
static inline unsigned int
internal_function
calc_state_hash (const re_node_set *nodes, unsigned int context)
static re_dfastate_t *
internal_function
re_acquire_state (reg_errcode_t *err, const re_dfa_t *dfa,
const re_node_set *nodes)
static re_dfastate_t *
internal_function
re_acquire_state_context (reg_errcode_t *err, const re_dfa_t *dfa,
const re_node_set *nodes, unsigned int context)
static reg_errcode_t
register_state (const re_dfa_t *dfa, re_dfastate_t *newstate,
unsigned int hash)
static void
free_state (re_dfastate_t *state)
static re_dfastate_t *
internal_function
create_ci_newstate (const re_dfa_t *dfa, const re_node_set *nodes,
unsigned int hash)
static re_dfastate_t *
internal_function
create_cd_newstate (const re_dfa_t *dfa, const re_node_set *nodes,
unsigned int context, unsigned int hash)
