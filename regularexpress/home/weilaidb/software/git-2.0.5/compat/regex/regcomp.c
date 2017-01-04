static reg_errcode_t re_compile_internal (regex_t *preg, const char * pattern,
size_t length, reg_syntax_t syntax);
static void re_compile_fastmap_iter (regex_t *bufp,
const re_dfastate_t *init_state,
char *fastmap);
static reg_errcode_t init_dfa (re_dfa_t *dfa, size_t pat_len);
static void free_charset (re_charset_t *cset);
static void free_workarea_compile (regex_t *preg);
static reg_errcode_t create_initial_state (re_dfa_t *dfa);
static void optimize_utf8 (re_dfa_t *dfa);
static reg_errcode_t analyze (regex_t *preg);
static reg_errcode_t preorder (bin_tree_t *root,
reg_errcode_t (fn (void *, bin_tree_t *)),
void *extra);
static reg_errcode_t postorder (bin_tree_t *root,
reg_errcode_t (fn (void *, bin_tree_t *)),
void *extra);
static reg_errcode_t optimize_subexps (void *extra, bin_tree_t *node);
static reg_errcode_t lower_subexps (void *extra, bin_tree_t *node);
static bin_tree_t *lower_subexp (reg_errcode_t *err, regex_t *preg,
bin_tree_t *node);
static reg_errcode_t calc_first (void *extra, bin_tree_t *node);
static reg_errcode_t calc_next (void *extra, bin_tree_t *node);
static reg_errcode_t link_nfa_nodes (void *extra, bin_tree_t *node);
static int duplicate_node (re_dfa_t *dfa, int org_idx, unsigned int constraint);
static int search_duplicated_node (const re_dfa_t *dfa, int org_node,
unsigned int constraint);
static reg_errcode_t calc_eclosure (re_dfa_t *dfa);
static reg_errcode_t calc_eclosure_iter (re_node_set *new_set, re_dfa_t *dfa,
int node, int root);
static reg_errcode_t calc_inveclosure (re_dfa_t *dfa);
static int fetch_number (re_string_t *input, re_token_t *token,
reg_syntax_t syntax);
static int peek_token (re_token_t *token, re_string_t *input,
reg_syntax_t syntax) internal_function;
static bin_tree_t *parse (re_string_t *regexp, regex_t *preg,
reg_syntax_t syntax, reg_errcode_t *err);
static bin_tree_t *parse_reg_exp (re_string_t *regexp, regex_t *preg,
re_token_t *token, reg_syntax_t syntax,
int nest, reg_errcode_t *err);
static bin_tree_t *parse_branch (re_string_t *regexp, regex_t *preg,
re_token_t *token, reg_syntax_t syntax,
int nest, reg_errcode_t *err);
static bin_tree_t *parse_expression (re_string_t *regexp, regex_t *preg,
re_token_t *token, reg_syntax_t syntax,
int nest, reg_errcode_t *err);
static bin_tree_t *parse_sub_exp (re_string_t *regexp, regex_t *preg,
re_token_t *token, reg_syntax_t syntax,
int nest, reg_errcode_t *err);
static bin_tree_t *parse_dup_op (bin_tree_t *dup_elem, re_string_t *regexp,
re_dfa_t *dfa, re_token_t *token,
reg_syntax_t syntax, reg_errcode_t *err);
static bin_tree_t *parse_bracket_exp (re_string_t *regexp, re_dfa_t *dfa,
re_token_t *token, reg_syntax_t syntax,
reg_errcode_t *err);
static reg_errcode_t parse_bracket_element (bracket_elem_t *elem,
re_string_t *regexp,
re_token_t *token, int token_len,
re_dfa_t *dfa,
reg_syntax_t syntax,
int accept_hyphen);
static reg_errcode_t parse_bracket_symbol (bracket_elem_t *elem,
re_string_t *regexp,
re_token_t *token);
static reg_errcode_t build_equiv_class (bitset_t sbcset,
re_charset_t *mbcset,
int *equiv_class_alloc,
const unsigned char *name);
static reg_errcode_t build_charclass (RE_TRANSLATE_TYPE trans,
bitset_t sbcset,
re_charset_t *mbcset,
int *char_class_alloc,
const char *class_name,
reg_syntax_t syntax);
static reg_errcode_t build_equiv_class (bitset_t sbcset,
const unsigned char *name);
static reg_errcode_t build_charclass (RE_TRANSLATE_TYPE trans,
bitset_t sbcset,
const char *class_name,
reg_syntax_t syntax);
static bin_tree_t *build_charclass_op (re_dfa_t *dfa,
RE_TRANSLATE_TYPE trans,
const char *class_name,
const char *extra,
int non_match, reg_errcode_t *err);
static bin_tree_t *create_tree (re_dfa_t *dfa,
bin_tree_t *left, bin_tree_t *right,
re_token_type_t type);
static bin_tree_t *create_token_tree (re_dfa_t *dfa,
bin_tree_t *left, bin_tree_t *right,
const re_token_t *token);
static bin_tree_t *duplicate_tree (const bin_tree_t *src, re_dfa_t *dfa);
static void free_token (re_token_t *node);
static reg_errcode_t free_tree (void *extra, bin_tree_t *node);
static reg_errcode_t mark_opt_subexp (void *extra, bin_tree_t *node);
const char __re_error_msgid[] attribute_hidden =
{
#define REG_NOERROR_IDX	0
gettext_noop ("Success")
"\0"
#define REG_NOMATCH_IDX (REG_NOERROR_IDX + sizeof "Success")
gettext_noop ("No match")
"\0"
#define REG_BADPAT_IDX	(REG_NOMATCH_IDX + sizeof "No match")
gettext_noop ("Invalid regular expression")
"\0"
#define REG_ECOLLATE_IDX (REG_BADPAT_IDX + sizeof "Invalid regular expression")
gettext_noop ("Invalid collation character")
"\0"
#define REG_ECTYPE_IDX	(REG_ECOLLATE_IDX + sizeof "Invalid collation character")
gettext_noop ("Invalid character class name")
"\0"
#define REG_EESCAPE_IDX	(REG_ECTYPE_IDX + sizeof "Invalid character class name")
gettext_noop ("Trailing backslash")
"\0"
#define REG_ESUBREG_IDX	(REG_EESCAPE_IDX + sizeof "Trailing backslash")
gettext_noop ("Invalid back reference")
"\0"
#define REG_EBRACK_IDX	(REG_ESUBREG_IDX + sizeof "Invalid back reference")
gettext_noop ("Unmatched [ or [^")
"\0"
#define REG_EPAREN_IDX	(REG_EBRACK_IDX + sizeof "Unmatched [ or [^")
gettext_noop ("Unmatched ( or \\(")
"\0"
#define REG_EBRACE_IDX	(REG_EPAREN_IDX + sizeof "Unmatched ( or \\(")
gettext_noop ("Unmatched \\{")
"\0"
#define REG_BADBR_IDX	(REG_EBRACE_IDX + sizeof "Unmatched \\;
const size_t __re_error_msgid_idx[] attribute_hidden =
;
wchar_t
btowc (int c)
const char *
re_compile_pattern (const char *pattern,
size_t length,
struct re_pattern_buffer *bufp)
weak_alias (__re_compile_pattern, re_compile_pattern)
reg_syntax_t re_syntax_options;
reg_syntax_t
re_set_syntax (reg_syntax_t syntax)
weak_alias (__re_set_syntax, re_set_syntax)
int
re_compile_fastmap (struct re_pattern_buffer *bufp)
weak_alias (__re_compile_fastmap, re_compile_fastmap)
static inline void
__attribute ((always_inline))
re_set_fastmap (char *fastmap, int icase, int ch)
static void
re_compile_fastmap_iter (regex_t *bufp, const re_dfastate_t *init_state,
char *fastmap)
int
regcomp (regex_t *__restrict preg,
const char *__restrict pattern,
int cflags)
weak_alias (__regcomp, regcomp)
size_t
regerror(int errcode, const regex_t *__restrict preg,
char *__restrict errbuf, size_t errbuf_size)
weak_alias (__regerror, regerror)
#if __GNUC__ >= 3
static const bitset_t utf8_sb_map = ;
static bitset_t utf8_sb_map;
static void
free_dfa_content (re_dfa_t *dfa)
void
regfree (regex_t *preg)
weak_alias (__regfree, regfree)
#if defined _REGEX_RE_COMP || defined _LIBC
static struct re_pattern_buffer re_comp_buf;
char *
# ifdef _LIBC
weak_function
# endif
re_comp (s)
const char *s;
libc_freeres_fn (free_mem)
static reg_errcode_t
re_compile_internal (regex_t *preg, const char * pattern, size_t length,
reg_syntax_t syntax)
static reg_errcode_t
init_dfa (re_dfa_t *dfa, size_t pat_len)
static void
internal_function
init_word_char (re_dfa_t *dfa)
static void
free_workarea_compile (regex_t *preg)
static reg_errcode_t
create_initial_state (re_dfa_t *dfa)
static void
optimize_utf8 (re_dfa_t *dfa)
static reg_errcode_t
analyze (regex_t *preg)
static reg_errcode_t
postorder (bin_tree_t *root, reg_errcode_t (fn (void *, bin_tree_t *)),
void *extra)
static reg_errcode_t
preorder (bin_tree_t *root, reg_errcode_t (fn (void *, bin_tree_t *)),
void *extra)
static reg_errcode_t
optimize_subexps (void *extra, bin_tree_t *node)
static reg_errcode_t
lower_subexps (void *extra, bin_tree_t *node)
static bin_tree_t *
lower_subexp (reg_errcode_t *err, regex_t *preg, bin_tree_t *node)
static reg_errcode_t
calc_first (void *extra, bin_tree_t *node)
static reg_errcode_t
calc_next (void *extra, bin_tree_t *node)
static reg_errcode_t
link_nfa_nodes (void *extra, bin_tree_t *node)
static reg_errcode_t
internal_function
duplicate_node_closure (re_dfa_t *dfa, int top_org_node, int top_clone_node,
int root_node, unsigned int init_constraint)
static int
search_duplicated_node (const re_dfa_t *dfa, int org_node,
unsigned int constraint)
static int
duplicate_node (re_dfa_t *dfa, int org_idx, unsigned int constraint)
static reg_errcode_t
calc_inveclosure (re_dfa_t *dfa)
static reg_errcode_t
calc_eclosure (re_dfa_t *dfa)
static reg_errcode_t
calc_eclosure_iter (re_node_set *new_set, re_dfa_t *dfa, int node, int root)
static void
internal_function
fetch_token (re_token_t *result, re_string_t *input, reg_syntax_t syntax)
static int
internal_function
peek_token (re_token_t *token, re_string_t *input, reg_syntax_t syntax)
static int
internal_function
peek_token_bracket (re_token_t *token, re_string_t *input, reg_syntax_t syntax)
static bin_tree_t *
parse (re_string_t *regexp, regex_t *preg, reg_syntax_t syntax,
reg_errcode_t *err)
static bin_tree_t *
parse_reg_exp (re_string_t *regexp, regex_t *preg, re_token_t *token,
reg_syntax_t syntax, int nest, reg_errcode_t *err)
static bin_tree_t *
parse_branch (re_string_t *regexp, regex_t *preg, re_token_t *token,
reg_syntax_t syntax, int nest, reg_errcode_t *err)
static bin_tree_t *
parse_expression (re_string_t *regexp, regex_t *preg, re_token_t *token,
reg_syntax_t syntax, int nest, reg_errcode_t *err)
static bin_tree_t *
parse_sub_exp (re_string_t *regexp, regex_t *preg, re_token_t *token,
reg_syntax_t syntax, int nest, reg_errcode_t *err)
static bin_tree_t *
parse_dup_op (bin_tree_t *elem, re_string_t *regexp, re_dfa_t *dfa,
re_token_t *token, reg_syntax_t syntax, reg_errcode_t *err)
#define BRACKET_NAME_BUF_SIZE 32
static reg_errcode_t
internal_function
# ifdef RE_ENABLE_I18N
build_range_exp (bitset_t sbcset, re_charset_t *mbcset, int *range_alloc,
bracket_elem_t *start_elem, bracket_elem_t *end_elem)
# else
build_range_exp (bitset_t sbcset, bracket_elem_t *start_elem,
bracket_elem_t *end_elem)
# endif
static reg_errcode_t
internal_function
# ifdef RE_ENABLE_I18N
build_collating_symbol (bitset_t sbcset, re_charset_t *mbcset,
int *coll_sym_alloc, const unsigned char *name)
# else
build_collating_symbol (bitset_t sbcset, const unsigned char *name)
# endif
static bin_tree_t *
parse_bracket_exp (re_string_t *regexp, re_dfa_t *dfa, re_token_t *token,
reg_syntax_t syntax, reg_errcode_t *err)
static reg_errcode_t
parse_bracket_element (bracket_elem_t *elem, re_string_t *regexp,
re_token_t *token, int token_len, re_dfa_t *dfa,
reg_syntax_t syntax, int accept_hyphen)
static reg_errcode_t
parse_bracket_symbol (bracket_elem_t *elem, re_string_t *regexp,
re_token_t *token)
static reg_errcode_t
build_equiv_class (bitset_t sbcset, re_charset_t *mbcset,
int *equiv_class_alloc, const unsigned char *name)
build_equiv_class (bitset_t sbcset, const unsigned char *name)
static reg_errcode_t
build_charclass (RE_TRANSLATE_TYPE trans, bitset_t sbcset,
re_charset_t *mbcset, int *char_class_alloc,
const char *class_name, reg_syntax_t syntax)
build_charclass (RE_TRANSLATE_TYPE trans, bitset_t sbcset,
const char *class_name, reg_syntax_t syntax)
static bin_tree_t *
build_charclass_op (re_dfa_t *dfa, RE_TRANSLATE_TYPE trans,
const char *class_name,
const char *extra, int non_match,
reg_errcode_t *err)
static int
fetch_number (re_string_t *input, re_token_t *token, reg_syntax_t syntax)
static void
free_charset (re_charset_t *cset)
static bin_tree_t *
create_tree (re_dfa_t *dfa, bin_tree_t *left, bin_tree_t *right,
re_token_type_t type)
static bin_tree_t *
create_token_tree (re_dfa_t *dfa, bin_tree_t *left, bin_tree_t *right,
const re_token_t *token)
static reg_errcode_t
mark_opt_subexp (void *extra, bin_tree_t *node)
static void
free_token (re_token_t *node)
static reg_errcode_t
free_tree (void *extra, bin_tree_t *node)
static bin_tree_t *
duplicate_tree (const bin_tree_t *root, re_dfa_t *dfa)
