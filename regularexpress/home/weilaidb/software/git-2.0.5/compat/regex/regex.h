#define _REGEX_H 1
#define __USE_GNU	1
typedef long int s_reg_t;
typedef unsigned long int active_reg_t;
typedef unsigned long int reg_syntax_t;
# define RE_BACKSLASH_ESCAPE_IN_LISTS ((unsigned long int) 1)
# define RE_BK_PLUS_QM (RE_BACKSLASH_ESCAPE_IN_LISTS << 1)
# define RE_CHAR_CLASSES (RE_BK_PLUS_QM << 1)
# define RE_CONTEXT_INDEP_ANCHORS (RE_CHAR_CLASSES << 1)
# define RE_CONTEXT_INDEP_OPS (RE_CONTEXT_INDEP_ANCHORS << 1)
# define RE_CONTEXT_INVALID_OPS (RE_CONTEXT_INDEP_OPS << 1)
# define RE_DOT_NEWLINE (RE_CONTEXT_INVALID_OPS << 1)
# define RE_DOT_NOT_NULL (RE_DOT_NEWLINE << 1)
# define RE_HAT_LISTS_NOT_NEWLINE (RE_DOT_NOT_NULL << 1)
# define RE_INTERVALS (RE_HAT_LISTS_NOT_NEWLINE << 1)
# define RE_LIMITED_OPS (RE_INTERVALS << 1)
# define RE_NEWLINE_ALT (RE_LIMITED_OPS << 1)
# define RE_NO_BK_BRACES (RE_NEWLINE_ALT << 1)
# define RE_NO_BK_PARENS (RE_NO_BK_BRACES << 1)
# define RE_NO_BK_REFS (RE_NO_BK_PARENS << 1)
# define RE_NO_BK_VBAR (RE_NO_BK_REFS << 1)
# define RE_NO_EMPTY_RANGES (RE_NO_BK_VBAR << 1)
# define RE_UNMATCHED_RIGHT_PAREN_ORD (RE_NO_EMPTY_RANGES << 1)
# define RE_NO_POSIX_BACKTRACKING (RE_UNMATCHED_RIGHT_PAREN_ORD << 1)
# define RE_NO_GNU_OPS (RE_NO_POSIX_BACKTRACKING << 1)
# define RE_INVALID_INTERVAL_ORD (RE_NO_GNU_OPS << 1)
# define RE_ICASE (RE_INVALID_INTERVAL_ORD << 1)
# define RE_CARET_ANCHORS_HERE (RE_ICASE << 1)
# define RE_CONTEXT_INVALID_DUP (RE_CARET_ANCHORS_HERE << 1)
#define RE_NO_SUB (RE_CONTEXT_INVALID_DUP << 1)
extern reg_syntax_t re_syntax_options;
#define RE_SYNTAX_EMACS 0
#define RE_SYNTAX_AWK							\
(RE_BACKSLASH_ESCAPE_IN_LISTS   | RE_DOT_NOT_NULL			\
| RE_NO_BK_PARENS              | RE_NO_BK_REFS			\
| RE_NO_BK_VBAR                | RE_NO_EMPTY_RANGES			\
| RE_DOT_NEWLINE		  | RE_CONTEXT_INDEP_ANCHORS		\
| RE_UNMATCHED_RIGHT_PAREN_ORD | RE_NO_GNU_OPS)
#define RE_SYNTAX_GNU_AWK						\
((RE_SYNTAX_POSIX_EXTENDED | RE_BACKSLASH_ESCAPE_IN_LISTS		\
| RE_INVALID_INTERVAL_ORD)						\
& ~(RE_DOT_NOT_NULL | RE_CONTEXT_INDEP_OPS				\
| RE_CONTEXT_INVALID_OPS ))
#define RE_SYNTAX_POSIX_AWK						\
(RE_SYNTAX_POSIX_EXTENDED | RE_BACKSLASH_ESCAPE_IN_LISTS		\
| RE_INTERVALS	    | RE_NO_GNU_OPS				\
| RE_INVALID_INTERVAL_ORD)
#define RE_SYNTAX_GREP							\
(RE_BK_PLUS_QM              | RE_CHAR_CLASSES				\
| RE_HAT_LISTS_NOT_NEWLINE | RE_INTERVALS				\
| RE_NEWLINE_ALT)
#define RE_SYNTAX_EGREP							\
(RE_CHAR_CLASSES        | RE_CONTEXT_INDEP_ANCHORS			\
| RE_CONTEXT_INDEP_OPS | RE_HAT_LISTS_NOT_NEWLINE			\
| RE_NEWLINE_ALT       | RE_NO_BK_PARENS				\
| RE_NO_BK_VBAR)
#define RE_SYNTAX_POSIX_EGREP						\
(RE_SYNTAX_EGREP | RE_INTERVALS | RE_NO_BK_BRACES			\
| RE_INVALID_INTERVAL_ORD)
#define RE_SYNTAX_ED RE_SYNTAX_POSIX_BASIC
#define RE_SYNTAX_SED RE_SYNTAX_POSIX_BASIC
#define _RE_SYNTAX_POSIX_COMMON						\
(RE_CHAR_CLASSES | RE_DOT_NEWLINE      | RE_DOT_NOT_NULL		\
| RE_INTERVALS  | RE_NO_EMPTY_RANGES)
#define RE_SYNTAX_POSIX_BASIC						\
(_RE_SYNTAX_POSIX_COMMON | RE_BK_PLUS_QM | RE_CONTEXT_INVALID_DUP)
#define RE_SYNTAX_POSIX_MINIMAL_BASIC					\
(_RE_SYNTAX_POSIX_COMMON | RE_LIMITED_OPS)
#define RE_SYNTAX_POSIX_EXTENDED					\
(_RE_SYNTAX_POSIX_COMMON  | RE_CONTEXT_INDEP_ANCHORS			\
| RE_CONTEXT_INDEP_OPS   | RE_NO_BK_BRACES				\
| RE_NO_BK_PARENS        | RE_NO_BK_VBAR				\
| RE_CONTEXT_INVALID_OPS | RE_UNMATCHED_RIGHT_PAREN_ORD)
#define RE_SYNTAX_POSIX_MINIMAL_EXTENDED				\
(_RE_SYNTAX_POSIX_COMMON  | RE_CONTEXT_INDEP_ANCHORS			\
| RE_CONTEXT_INVALID_OPS | RE_NO_BK_BRACES				\
| RE_NO_BK_PARENS        | RE_NO_BK_REFS				\
| RE_NO_BK_VBAR	    | RE_UNMATCHED_RIGHT_PAREN_ORD)
# ifdef RE_DUP_MAX
#  undef RE_DUP_MAX
# endif
# define RE_DUP_MAX (0x7fff)
#define REG_EXTENDED 1
#define REG_ICASE (REG_EXTENDED << 1)
#define REG_NEWLINE (REG_ICASE << 1)
#define REG_NOSUB (REG_NEWLINE << 1)
#define REG_NOTBOL 1
#define REG_NOTEOL (1 << 1)
#define REG_STARTEND (1 << 2)
typedef enum
reg_errcode_t;
# define __RE_TRANSLATE_TYPE unsigned char *
# ifdef __USE_GNU
#  define RE_TRANSLATE_TYPE __RE_TRANSLATE_TYPE
# endif
# define __REPB_PREFIX(name) name
# define __REPB_PREFIX(name) __##name
struct re_pattern_buffer
;
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct re_registers
;
# ifndef RE_NREGS
#  define RE_NREGS 30
# endif
typedef struct
regmatch_t;
extern reg_syntax_t re_set_syntax (reg_syntax_t __syntax);
extern const char *re_compile_pattern (const char *__pattern, size_t __length,
struct re_pattern_buffer *__buffer);
extern int re_compile_fastmap (struct re_pattern_buffer *__buffer);
extern int re_search (struct re_pattern_buffer *__buffer, const char *__cstring,
int __length, int __start, int __range,
struct re_registers *__regs);
extern int re_search_2 (struct re_pattern_buffer *__buffer,
const char *__string1, int __length1,
const char *__string2, int __length2, int __start,
int __range, struct re_registers *__regs, int __stop);
extern int re_match (struct re_pattern_buffer *__buffer, const char *__cstring,
int __length, int __start, struct re_registers *__regs);
extern int re_match_2 (struct re_pattern_buffer *__buffer,
const char *__string1, int __length1,
const char *__string2, int __length2, int __start,
struct re_registers *__regs, int __stop);
extern void re_set_registers (struct re_pattern_buffer *__buffer,
struct re_registers *__regs,
unsigned int __num_regs,
regoff_t *__starts, regoff_t *__ends);
#if defined _REGEX_RE_COMP || (defined _LIBC && defined __USE_BSD)
# ifndef _CRAY
extern char *re_comp (const char *);
extern int re_exec (const char *);
# endif
# if ! (2 < __GNUC__ || (2 == __GNUC__ && 95 <= __GNUC_MINOR__))
#  if defined restrict || 199901L <= __STDC_VERSION__
#   define __restrict restrict
#  else
#   define __restrict
#  endif
# endif
# if (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1)) \
&& !defined __GNUG__
#  define __restrict_arr __restrict
# else
#  define __restrict_arr
# endif
extern int regcomp (regex_t *__restrict __preg,
const char *__restrict __pattern,
int __cflags);
extern int regexec (const regex_t *__restrict __preg,
const char *__restrict __cstring, size_t __nmatch,
regmatch_t __pmatch[__restrict_arr],
int __eflags);
extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
char *__restrict __errbuf, size_t __errbuf_size);
extern void regfree (regex_t *__preg);
