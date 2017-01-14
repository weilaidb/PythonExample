static char copyright[] =
;
#define PY_SSIZE_T_CLEAN
#if !defined(SRE_MODULE)
#define SRE_MODULE
#define SRE_PY_MODULE
#undef VERBOSE
#if PY_VERSION_HEX >= 0x01060000
#if PY_VERSION_HEX  < 0x02020000 || defined(Py_USING_UNICODE)
#define HAVE_UNICODE
#define USE_FAST_SEARCH
#undef USE_INLINE
#undef USE_BUILTIN_COPY
#if PY_VERSION_HEX < 0x01060000
#define PyObject_DEL(op) PyMem_DEL((op))
#if defined(_MSC_VER)
#define LOCAL(type) static __inline type __fastcall
#elif defined(USE_INLINE)
#define LOCAL(type) static inline type
#define LOCAL(type) static type
#define SRE_ERROR_ILLEGAL -1
#define SRE_ERROR_STATE -2
#define SRE_ERROR_RECURSION_LIMIT -3
#define SRE_ERROR_MEMORY -9
#define SRE_ERROR_INTERRUPTED -10
#if defined(VERBOSE)
#define TRACE(v) printf v
#define TRACE(v)
#define SRE_DIGIT_MASK 1
#define SRE_SPACE_MASK 2
#define SRE_LINEBREAK_MASK 4
#define SRE_ALNUM_MASK 8
#define SRE_WORD_MASK 16
static char sre_char_info[128] = ;
static char sre_char_lower[128] = ;
#define SRE_IS_DIGIT(ch)\
((ch) < 128 ? (sre_char_info[(ch)] & SRE_DIGIT_MASK) : 0)
#define SRE_IS_SPACE(ch)\
((ch) < 128 ? (sre_char_info[(ch)] & SRE_SPACE_MASK) : 0)
#define SRE_IS_LINEBREAK(ch)\
((ch) < 128 ? (sre_char_info[(ch)] & SRE_LINEBREAK_MASK) : 0)
#define SRE_IS_ALNUM(ch)\
((ch) < 128 ? (sre_char_info[(ch)] & SRE_ALNUM_MASK) : 0)
#define SRE_IS_WORD(ch)\
((ch) < 128 ? (sre_char_info[(ch)] & SRE_WORD_MASK) : 0)
static unsigned int sre_lower(unsigned int ch)
#define SRE_LOC_IS_DIGIT(ch) (!((ch) & ~255) ? isdigit((ch)) : 0)
#define SRE_LOC_IS_SPACE(ch) (!((ch) & ~255) ? isspace((ch)) : 0)
#define SRE_LOC_IS_LINEBREAK(ch) ((ch) == '\n')
#define SRE_LOC_IS_ALNUM(ch) (!((ch) & ~255) ? isalnum((ch)) : 0)
#define SRE_LOC_IS_WORD(ch) (SRE_LOC_IS_ALNUM((ch)) || (ch) == '_')
static unsigned int sre_lower_locale(unsigned int ch)
#if defined(HAVE_UNICODE)
#define SRE_UNI_IS_DIGIT(ch) Py_UNICODE_ISDECIMAL((Py_UNICODE)(ch))
#define SRE_UNI_IS_SPACE(ch) Py_UNICODE_ISSPACE((Py_UNICODE)(ch))
#define SRE_UNI_IS_LINEBREAK(ch) Py_UNICODE_ISLINEBREAK((Py_UNICODE)(ch))
#define SRE_UNI_IS_ALNUM(ch) Py_UNICODE_ISALNUM((Py_UNICODE)(ch))
#define SRE_UNI_IS_WORD(ch) (SRE_UNI_IS_ALNUM((ch)) || (ch) == '_')
static unsigned int sre_lower_unicode(unsigned int ch)
LOCAL(int)
sre_category(SRE_CODE category, unsigned int ch)
static void
data_stack_dealloc(SRE_STATE* state)
static int
data_stack_grow(SRE_STATE* state, Py_ssize_t size)
#define SRE_CHAR unsigned char
#define SRE_AT sre_at
#define SRE_COUNT sre_count
#define SRE_CHARSET sre_charset
#define SRE_INFO sre_info
#define SRE_MATCH sre_match
#define SRE_MATCH_CONTEXT sre_match_context
#define SRE_SEARCH sre_search
#define SRE_LITERAL_TEMPLATE sre_literal_template
#if defined(HAVE_UNICODE)
#define SRE_RECURSIVE
#undef SRE_RECURSIVE
#undef SRE_LITERAL_TEMPLATE
#undef SRE_SEARCH
#undef SRE_MATCH
#undef SRE_MATCH_CONTEXT
#undef SRE_INFO
#undef SRE_CHARSET
#undef SRE_COUNT
#undef SRE_AT
#undef SRE_CHAR
#define SRE_CHAR Py_UNICODE
#define SRE_AT sre_uat
#define SRE_COUNT sre_ucount
#define SRE_CHARSET sre_ucharset
#define SRE_INFO sre_uinfo
#define SRE_MATCH sre_umatch
#define SRE_MATCH_CONTEXT sre_umatch_context
#define SRE_SEARCH sre_usearch
#define SRE_LITERAL_TEMPLATE sre_uliteral_template
LOCAL(int)
SRE_AT(SRE_STATE* state, SRE_CHAR* ptr, SRE_CODE at)
LOCAL(int)
SRE_CHARSET(SRE_CODE* set, SRE_CODE ch)
LOCAL(Py_ssize_t) SRE_MATCH(SRE_STATE* state, SRE_CODE* pattern);
LOCAL(Py_ssize_t)
SRE_COUNT(SRE_STATE* state, SRE_CODE* pattern, Py_ssize_t maxcount)
#define LASTMARK_SAVE()     \
do  while (0)
#define LASTMARK_RESTORE()  \
do  while (0)
#define RETURN_ERROR(i) do  while(0)
#define RETURN_FAILURE do  while(0)
#define RETURN_SUCCESS do  while(0)
#define RETURN_ON_ERROR(i) \
do  while (0)
#define RETURN_ON_SUCCESS(i) \
do  while (0)
#define RETURN_ON_FAILURE(i) \
do  while (0)
#define SFY(x) #x
#define DATA_STACK_ALLOC(state, type, ptr) \
do  while (0)
#define DATA_STACK_LOOKUP_AT(state, type, ptr, pos) \
do  while (0)
#define DATA_STACK_PUSH(state, data, size) \
do  while (0)
#define DATA_STACK_POP(state, data, size, discard) \
do  while (0)
#define DATA_STACK_POP_DISCARD(state, size) \
do  while(0)
#define DATA_PUSH(x) \
DATA_STACK_PUSH(state, (x), sizeof(*(x)))
#define DATA_POP(x) \
DATA_STACK_POP(state, (x), sizeof(*(x)), 1)
#define DATA_POP_DISCARD(x) \
DATA_STACK_POP_DISCARD(state, sizeof(*(x)))
#define DATA_ALLOC(t,p) \
DATA_STACK_ALLOC(state, t, p)
#define DATA_LOOKUP_AT(t,p,pos) \
DATA_STACK_LOOKUP_AT(state,t,p,pos)
#define MARK_PUSH(lastmark) \
do if (lastmark > 0)  while (0)
#define MARK_POP(lastmark) \
do if (lastmark > 0)  while (0)
#define MARK_POP_KEEP(lastmark) \
do if (lastmark > 0)  while (0)
#define MARK_POP_DISCARD(lastmark) \
do if (lastmark > 0)  while (0)
#define JUMP_NONE            0
#define JUMP_MAX_UNTIL_1     1
#define JUMP_MAX_UNTIL_2     2
#define JUMP_MAX_UNTIL_3     3
#define JUMP_MIN_UNTIL_1     4
#define JUMP_MIN_UNTIL_2     5
#define JUMP_MIN_UNTIL_3     6
#define JUMP_REPEAT          7
#define JUMP_REPEAT_ONE_1    8
#define JUMP_REPEAT_ONE_2    9
#define JUMP_MIN_REPEAT_ONE  10
#define JUMP_BRANCH          11
#define JUMP_ASSERT          12
#define JUMP_ASSERT_NOT      13
#define DO_JUMP(jumpvalue, jumplabel, nextpattern) \
DATA_ALLOC(SRE_MATCH_CONTEXT, nextctx); \
nextctx->last_ctx_pos = ctx_pos; \
nextctx->jump = jumpvalue; \
nextctx->pattern = nextpattern; \
ctx_pos = alloc_pos; \
ctx = nextctx; \
goto entrance; \
jumplabel: \
while (0) \
typedef struct  SRE_MATCH_CONTEXT;
LOCAL(Py_ssize_t)
SRE_MATCH(SRE_STATE* state, SRE_CODE* pattern)
LOCAL(Py_ssize_t)
SRE_SEARCH(SRE_STATE* state, SRE_CODE* pattern)
LOCAL(int)
SRE_LITERAL_TEMPLATE(SRE_CHAR* ptr, Py_ssize_t len)
#if !defined(SRE_RECURSIVE)
static PyObject*pattern_new_match(PatternObject*, SRE_STATE*, int);
static PyObject*pattern_scanner(PatternObject*, PyObject*);
static PyObject *
sre_codesize(PyObject* self, PyObject *unused)
static PyObject *
sre_getlower(PyObject* self, PyObject* args)
LOCAL(void)
state_reset(SRE_STATE* state)
static void*
getstring(PyObject* string, Py_ssize_t* p_length, int* p_charsize)
LOCAL(PyObject*)
state_init(SRE_STATE* state, PatternObject* pattern, PyObject* string,
Py_ssize_t start, Py_ssize_t end)
LOCAL(void)
state_fini(SRE_STATE* state)
#define STATE_OFFSET(state, member)\
(((char*)(member) - (char*)(state)->beginning) / (state)->charsize)
LOCAL(PyObject*)
state_getslice(SRE_STATE* state, Py_ssize_t index, PyObject* string, int empty)
static void
pattern_error(int status)
static void
pattern_dealloc(PatternObject* self)
static int
check_args_size(const char *name, PyObject* args, PyObject* kw, int n)
static PyObject*
fix_string_param(PyObject *string, PyObject *string2, const char *oldname)
static PyObject*
pattern_match(PatternObject* self, PyObject* args, PyObject* kw)
static PyObject*
pattern_search(PatternObject* self, PyObject* args, PyObject* kw)
static PyObject*
call(char* module, char* function, PyObject* args)
static int
deepcopy(PyObject** object, PyObject* memo)
static PyObject*
join_list(PyObject* list, PyObject* string)
static PyObject*
pattern_findall(PatternObject* self, PyObject* args, PyObject* kw)
#if PY_VERSION_HEX >= 0x02020000
static PyObject*
pattern_finditer(PatternObject* pattern, PyObject* args)
static PyObject*
pattern_split(PatternObject* self, PyObject* args, PyObject* kw)
static PyObject*
pattern_subx(PatternObject* self, PyObject* ptemplate, PyObject* string,
Py_ssize_t count, Py_ssize_t subn)
static PyObject*
pattern_sub(PatternObject* self, PyObject* args, PyObject* kw)
static PyObject*
pattern_subn(PatternObject* self, PyObject* args, PyObject* kw)
static PyObject*
pattern_copy(PatternObject* self, PyObject *unused)
static PyObject*
pattern_deepcopy(PatternObject* self, PyObject* memo)
PyDoc_STRVAR(pattern_match_doc,
"match(string[, pos[, endpos]]) --> match object or None.\n\
Matches zero or more characters at the beginning of the string");
PyDoc_STRVAR(pattern_search_doc,
"search(string[, pos[, endpos]]) --> match object or None.\n\
Scan through string looking for a match, and return a corresponding\n\
match object instance. Return None if no position in the string matches.");
PyDoc_STRVAR(pattern_split_doc,
"split(string[, maxsplit = 0])  --> list.\n\
Split string by the occurrences of pattern.");
PyDoc_STRVAR(pattern_findall_doc,
"findall(string[, pos[, endpos]]) --> list.\n\
Return a list of all non-overlapping matches of pattern in string.");
PyDoc_STRVAR(pattern_finditer_doc,
"finditer(string[, pos[, endpos]]) --> iterator.\n\
Return an iterator over all non-overlapping matches for the \n\
RE pattern in string. For each match, the iterator returns a\n\
match object.");
PyDoc_STRVAR(pattern_sub_doc,
"sub(repl, string[, count = 0]) --> newstring\n\
Return the string obtained by replacing the leftmost non-overlapping\n\
occurrences of pattern in string by the replacement repl.");
PyDoc_STRVAR(pattern_subn_doc,
"subn(repl, string[, count = 0]) --> (newstring, number of subs)\n\
Return the tuple (new_string, number_of_subs_made) found by replacing\n\
the leftmost non-overlapping occurrences of pattern with the\n\
replacement repl.");
PyDoc_STRVAR(pattern_doc, );
static PyMethodDef pattern_methods[] = ;
#define PAT_OFF(x) offsetof(PatternObject, x)
static PyMemberDef pattern_members[] = ;
statichere PyTypeObject Pattern_Type = ;
static int _validate(PatternObject *self);
static PyObject *
_compile(PyObject* self_, PyObject* args)
#undef VVERBOSE
#if defined(VVERBOSE)
#define VTRACE(v) printf v
#define VTRACE(v) do  while(0)
#define FAIL do  while (0)
#define GET_OP                                          \
do  while (0)
#define GET_ARG                                         \
do  while (0)
#define GET_SKIP_ADJ(adj)                               \
do  while (0)
#define GET_SKIP GET_SKIP_ADJ(0)
static int
_validate_charset(SRE_CODE *code, SRE_CODE *end)
static int
_validate_inner(SRE_CODE *code, SRE_CODE *end, Py_ssize_t groups)
static int
_validate_outer(SRE_CODE *code, SRE_CODE *end, Py_ssize_t groups)
static int
_validate(PatternObject *self)
static void
match_dealloc(MatchObject* self)
static PyObject*
match_getslice_by_index(MatchObject* self, Py_ssize_t index, PyObject* def)
static Py_ssize_t
match_getindex(MatchObject* self, PyObject* index)
static PyObject*
match_getslice(MatchObject* self, PyObject* index, PyObject* def)
static PyObject*
match_expand(MatchObject* self, PyObject* ptemplate)
static PyObject*
match_group(MatchObject* self, PyObject* args)
static PyObject*
match_groups(MatchObject* self, PyObject* args, PyObject* kw)
static PyObject*
match_groupdict(MatchObject* self, PyObject* args, PyObject* kw)
static PyObject*
match_start(MatchObject* self, PyObject* args)
static PyObject*
match_end(MatchObject* self, PyObject* args)
LOCAL(PyObject*)
_pair(Py_ssize_t i1, Py_ssize_t i2)
static PyObject*
match_span(MatchObject* self, PyObject* args)
static PyObject*
match_regs(MatchObject* self)
static PyObject*
match_copy(MatchObject* self, PyObject *unused)
static PyObject*
match_deepcopy(MatchObject* self, PyObject* memo)
PyDoc_STRVAR(match_doc,
"The result of re.match() and re.search().\n\
Match objects always have a boolean value of True.");
PyDoc_STRVAR(match_group_doc,
"group([group1, ...]) -> str or tuple.\n\
Return subgroup(s) of the match by indices or names.\n\
For 0 returns the entire match.");
PyDoc_STRVAR(match_start_doc,
"start([group=0]) -> int.\n\
Return index of the start of the substring matched by group.");
PyDoc_STRVAR(match_end_doc,
"end([group=0]) -> int.\n\
Return index of the end of the substring matched by group.");
PyDoc_STRVAR(match_span_doc,
"span([group]) -> tuple.\n\
For MatchObject m, return the 2-tuple (m.start(group), m.end(group)).");
PyDoc_STRVAR(match_groups_doc,
"groups([default=None]) -> tuple.\n\
Return a tuple containing all the subgroups of the match, from 1.\n\
The default argument is used for groups\n\
that did not participate in the match");
PyDoc_STRVAR(match_groupdict_doc,
"groupdict([default=None]) -> dict.\n\
Return a dictionary containing all the named subgroups of the match,\n\
keyed by the subgroup name. The default argument is used for groups\n\
that did not participate in the match");
PyDoc_STRVAR(match_expand_doc,
"expand(template) -> str.\n\
Return the string obtained by doing backslash substitution\n\
on the string template, as done by the sub() method.");
static PyMethodDef match_methods[] = ;
static PyObject *
match_lastindex_get(MatchObject *self)
static PyObject *
match_lastgroup_get(MatchObject *self)
static PyObject *
match_regs_get(MatchObject *self)
static PyGetSetDef match_getset[] = ;
#define MATCH_OFF(x) offsetof(MatchObject, x)
static PyMemberDef match_members[] = ;
static PyTypeObject Match_Type = ;
static PyObject*
pattern_new_match(PatternObject* pattern, SRE_STATE* state, int status)
static void
scanner_dealloc(ScannerObject* self)
static PyObject*
scanner_match(ScannerObject* self, PyObject *unused)
static PyObject*
scanner_search(ScannerObject* self, PyObject *unused)
static PyMethodDef scanner_methods[] = ;
#define SCAN_OFF(x) offsetof(ScannerObject, x)
static PyMemberDef scanner_members[] = ;
statichere PyTypeObject Scanner_Type = ;
static PyObject*
pattern_scanner(PatternObject* pattern, PyObject* args)
static PyMethodDef _functions[] = ;
#if PY_VERSION_HEX < 0x02030000
DL_EXPORT(void) init_sre(void)
PyMODINIT_FUNC init_sre(void)
