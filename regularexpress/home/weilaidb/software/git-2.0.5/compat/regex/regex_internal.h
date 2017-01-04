#define _REGEX_INTERNAL_H 1
#if defined HAVE_LANGINFO_H || defined HAVE_LANGINFO_CODESET || defined _LIBC
# include <langinfo.h>
#if defined HAVE_LOCALE_H || defined _LIBC
# include <locale.h>
#if defined HAVE_WCHAR_H || defined _LIBC
# include <wchar.h>
#if defined HAVE_WCTYPE_H || defined _LIBC
# include <wctype.h>
#if defined HAVE_STDBOOL_H || defined _LIBC
# include <stdbool.h>
#if !defined(ZOS_USS)
#if defined HAVE_STDINT_H || defined _LIBC
# include <stdint.h>
#if defined _LIBC
# include <bits/libc-lock.h>
# define __libc_lock_define(CLASS,NAME)
# define __libc_lock_init(NAME) do  while (0)
# define __libc_lock_lock(NAME) do  while (0)
# define __libc_lock_unlock(NAME) do  while (0)
#if !defined _LIBC && !defined HAVE_ISBLANK && !defined isblank
# define isblank(ch) ((ch) == ' ' || (ch) == '\t')
static int
is_blank (int c)
# ifndef _RE_DEFINE_LOCALE_FUNCTIONS
#  define _RE_DEFINE_LOCALE_FUNCTIONS 1
#   include <locale/localeinfo.h>
#   include <locale/elem-hash.h>
#   include <locale/coll-lookup.h>
# endif
#if (HAVE_LIBINTL_H && ENABLE_NLS) || defined _LIBC
# include <libintl.h>
# ifdef _LIBC
#  undef gettext
#  define gettext(msgid) \
INTUSE(__dcgettext) (_libc_intl_domainname, msgid, LC_MESSAGES)
# endif
# define gettext(msgid) (msgid)
# define gettext_noop(String) String
# define SIZE_MAX ((size_t) -1)
#define MB_CUR_MAX 1
#if (defined MBS_SUPPORT) || _LIBC
# define RE_ENABLE_I18N
#if __GNUC__ >= 3
# define BE(expr, val) __builtin_expect (expr, val)
# define BE(expr, val) (expr)
# ifdef inline
# undef inline
# endif
# define inline
#define SBC_MAX 256
#define COLL_ELEM_LEN_MAX 8
#define NEWLINE_CHAR '\n'
#define WIDE_NEWLINE_CHAR L'\n'
# ifdef __wctype
# undef __wctype
# endif
# define __wctype wctype
# ifdef __iswctype
# undef __iswctype
# endif
# define __iswctype iswctype
# define __btowc btowc
# define __mbrtowc mbrtowc
#undef __mempcpy
# define __mempcpy mempcpy
# define __wcrtomb wcrtomb
# define __regfree regfree
# define attribute_hidden
# define __attribute(arg) __attribute__ (arg)
# define __attribute(arg)
extern const char __re_error_msgid[] attribute_hidden;
extern const size_t __re_error_msgid_idx[] attribute_hidden;
typedef unsigned long int bitset_word_t;
#define BITSET_WORD_MAX ULONG_MAX
#define BITSET_WORD_BITS (sizeof (bitset_word_t) * CHAR_BIT)
#define BITSET_WORDS (SBC_MAX / BITSET_WORD_BITS)
typedef bitset_word_t bitset_t[BITSET_WORDS];
typedef bitset_word_t *re_bitset_ptr_t;
typedef const bitset_word_t *re_const_bitset_ptr_t;
#define bitset_set(set,i) \
(set[i / BITSET_WORD_BITS] |= (bitset_word_t) 1 << i % BITSET_WORD_BITS)
#define bitset_clear(set,i) \
(set[i / BITSET_WORD_BITS] &= ~((bitset_word_t) 1 << i % BITSET_WORD_BITS))
#define bitset_contain(set,i) \
(set[i / BITSET_WORD_BITS] & ((bitset_word_t) 1 << i % BITSET_WORD_BITS))
#define bitset_empty(set) memset (set, '\0', sizeof (bitset_t))
#define bitset_set_all(set) memset (set, '\xff', sizeof (bitset_t))
#define bitset_copy(dest,src) memcpy (dest, src, sizeof (bitset_t))
#define PREV_WORD_CONSTRAINT 0x0001
#define PREV_NOTWORD_CONSTRAINT 0x0002
#define NEXT_WORD_CONSTRAINT 0x0004
#define NEXT_NOTWORD_CONSTRAINT 0x0008
#define PREV_NEWLINE_CONSTRAINT 0x0010
#define NEXT_NEWLINE_CONSTRAINT 0x0020
#define PREV_BEGBUF_CONSTRAINT 0x0040
#define NEXT_ENDBUF_CONSTRAINT 0x0080
#define WORD_DELIM_CONSTRAINT 0x0100
#define NOT_WORD_DELIM_CONSTRAINT 0x0200
typedef enum
re_context_type;
typedef struct
re_node_set;
typedef enum
re_token_type_t;
typedef struct
re_charset_t;
typedef struct
re_token_t;
#define IS_EPSILON_NODE(type) ((type) & EPSILON_BIT)
struct re_string_t
;
typedef struct re_string_t re_string_t;
struct re_dfa_t;
typedef struct re_dfa_t re_dfa_t;
# ifdef __i386__
#  define internal_function   __attribute ((regparm (3), stdcall))
# else
#  define internal_function
# endif
static reg_errcode_t re_string_realloc_buffers (re_string_t *pstr,
int new_buf_len)
internal_function;
# ifdef RE_ENABLE_I18N
static void build_wcs_buffer (re_string_t *pstr) internal_function;
static reg_errcode_t build_wcs_upper_buffer (re_string_t *pstr)
internal_function;
# endif
static void build_upper_buffer (re_string_t *pstr) internal_function;
static void re_string_translate_buffer (re_string_t *pstr) internal_function;
static unsigned int re_string_context_at (const re_string_t *input, int idx,
int eflags)
internal_function __attribute ((pure));
#define re_string_peek_byte(pstr, offset) \
((pstr)->mbs[(pstr)->cur_idx + offset])
#define re_string_fetch_byte(pstr) \
((pstr)->mbs[(pstr)->cur_idx++])
#define re_string_first_byte(pstr, idx) \
((idx) == (pstr)->valid_len || (pstr)->wcs[idx] != WEOF)
#define re_string_is_single_byte_char(pstr, idx) \
((pstr)->wcs[idx] != WEOF && ((pstr)->valid_len == (idx) + 1 \
|| (pstr)->wcs[(idx) + 1] != WEOF))
#define re_string_eoi(pstr) ((pstr)->stop <= (pstr)->cur_idx)
#define re_string_cur_idx(pstr) ((pstr)->cur_idx)
#define re_string_get_buffer(pstr) ((pstr)->mbs)
#define re_string_length(pstr) ((pstr)->len)
#define re_string_byte_at(pstr,idx) ((pstr)->mbs[idx])
#define re_string_skip_bytes(pstr,idx) ((pstr)->cur_idx += (idx))
#define re_string_set_index(pstr,idx) ((pstr)->cur_idx = (idx))
# if HAVE_ALLOCA
#  if (_MSC_VER)
#   include <malloc.h>
#   define __libc_use_alloca(n) 0
#  else
#   include <alloca.h>
#  define __libc_use_alloca(n) ((n) < 4032)
#  endif
# else
#  define __libc_use_alloca(n) 0
# endif
#define re_malloc(t,n) ((t *) malloc ((n) * sizeof (t)))
#define re_realloc(p,t,n) ((p != NULL) ? (t *) realloc (p,(n)*sizeof(t)) : (t *) calloc(n,sizeof(t)))
#define re_free(p) free (p)
struct bin_tree_t
;
typedef struct bin_tree_t bin_tree_t;
#define BIN_TREE_STORAGE_SIZE \
((1024 - sizeof (void *)) / sizeof (bin_tree_t))
struct bin_tree_storage_t
;
typedef struct bin_tree_storage_t bin_tree_storage_t;
#define CONTEXT_WORD 1
#define CONTEXT_NEWLINE (CONTEXT_WORD << 1)
#define CONTEXT_BEGBUF (CONTEXT_NEWLINE << 1)
#define CONTEXT_ENDBUF (CONTEXT_BEGBUF << 1)
#define IS_WORD_CONTEXT(c) ((c) & CONTEXT_WORD)
#define IS_NEWLINE_CONTEXT(c) ((c) & CONTEXT_NEWLINE)
#define IS_BEGBUF_CONTEXT(c) ((c) & CONTEXT_BEGBUF)
#define IS_ENDBUF_CONTEXT(c) ((c) & CONTEXT_ENDBUF)
#define IS_ORDINARY_CONTEXT(c) ((c) == 0)
#define IS_WORD_CHAR(ch) (isalnum (ch) || (ch) == '_')
#define IS_NEWLINE(ch) ((ch) == NEWLINE_CHAR)
#define IS_WIDE_WORD_CHAR(ch) (iswalnum (ch) || (ch) == L'_')
#define IS_WIDE_NEWLINE(ch) ((ch) == WIDE_NEWLINE_CHAR)
#define NOT_SATISFY_PREV_CONSTRAINT(constraint,context) \
((((constraint) & PREV_WORD_CONSTRAINT) && !IS_WORD_CONTEXT (context)) \
|| ((constraint & PREV_NOTWORD_CONSTRAINT) && IS_WORD_CONTEXT (context)) \
|| ((constraint & PREV_NEWLINE_CONSTRAINT) && !IS_NEWLINE_CONTEXT (context))\
|| ((constraint & PREV_BEGBUF_CONSTRAINT) && !IS_BEGBUF_CONTEXT (context)))
#define NOT_SATISFY_NEXT_CONSTRAINT(constraint,context) \
((((constraint) & NEXT_WORD_CONSTRAINT) && !IS_WORD_CONTEXT (context)) \
|| (((constraint) & NEXT_NOTWORD_CONSTRAINT) && IS_WORD_CONTEXT (context)) \
|| (((constraint) & NEXT_NEWLINE_CONSTRAINT) && !IS_NEWLINE_CONTEXT (context)) \
|| (((constraint) & NEXT_ENDBUF_CONSTRAINT) && !IS_ENDBUF_CONTEXT (context)))
struct re_dfastate_t
;
typedef struct re_dfastate_t re_dfastate_t;
struct re_state_table_entry
;
typedef struct
state_array_t;
typedef struct
re_sub_match_last_t;
typedef struct
re_sub_match_top_t;
struct re_backref_cache_entry
;
typedef struct
re_match_context_t;
typedef struct
re_sift_context_t;
struct re_fail_stack_ent_t
;
struct re_fail_stack_t
;
struct re_dfa_t
;
#define re_node_set_init_empty(set) memset (set, '\0', sizeof (re_node_set))
#define re_node_set_remove(set,id) \
(re_node_set_remove_at (set, re_node_set_contains (set, id) - 1))
#define re_node_set_empty(p) ((p)->nelem = 0)
#define re_node_set_free(set) re_free ((set)->elems)
typedef enum
bracket_elem_type;
typedef struct
bracket_elem_t;
static inline void
bitset_not (bitset_t set)
static inline void
bitset_merge (bitset_t dest, const bitset_t src)
static inline void
bitset_mask (bitset_t dest, const bitset_t src)
static inline int
internal_function __attribute ((pure))
re_string_char_size_at (const re_string_t *pstr, int idx)
static inline wint_t
internal_function __attribute ((pure))
re_string_wchar_at (const re_string_t *pstr, int idx)
# ifndef NOT_IN_libc
static int
internal_function __attribute ((pure))
re_string_elem_size_at (const re_string_t *pstr, int idx)
# endif
