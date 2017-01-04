#line 3 "scripts/kconfig/lex.zconf.c"
#define  YY_INT_ALIGNED short int
#define yy_create_buffer zconf_create_buffer
#define yy_delete_buffer zconf_delete_buffer
#define yy_flex_debug zconf_flex_debug
#define yy_init_buffer zconf_init_buffer
#define yy_flush_buffer zconf_flush_buffer
#define yy_load_buffer_state zconf_load_buffer_state
#define yy_switch_to_buffer zconf_switch_to_buffer
#define yyin zconfin
#define yyleng zconfleng
#define yylex zconflex
#define yylineno zconflineno
#define yyout zconfout
#define yyrestart zconfrestart
#define yytext zconftext
#define yywrap zconfwrap
#define yyalloc zconfalloc
#define yyrealloc zconfrealloc
#define yyfree zconffree
#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#define FLEXINT_H
#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __STDC_LIMIT_MACROS 1
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t;
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;
#define INT8_MIN               (-128)
#define INT16_MIN              (-32767-1)
#define INT32_MIN              (-2147483647-1)
#define INT8_MAX               (127)
#define INT16_MAX              (32767)
#define INT32_MAX              (2147483647)
#define UINT8_MAX              (255U)
#define UINT16_MAX             (65535U)
#define UINT32_MAX             (4294967295U)
#define yyconst const
#define yyconst
#define YY_NULL 0
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)
#define BEGIN (yy_start) = 1 + 2 *
#define YY_START (((yy_start) - 1) / 2)
#define YYSTATE YY_START
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)
#define YY_NEW_FILE zconfrestart(zconfin  )
#define YY_END_OF_BUFFER_CHAR 0
#define YY_BUF_SIZE 32768
#define YY_BUF_SIZE 16384
#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern int zconfleng;
extern FILE *zconfin, *zconfout;
#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2
#define YY_LESS_LINENO(n)
#define yyless(n) \
do \
\
while ( 0 )
#define unput(c) yyunput( c, (yytext_ptr)  )
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
;
static size_t yy_buffer_stack_top = 0;
static size_t yy_buffer_stack_max = 0;
static YY_BUFFER_STATE * yy_buffer_stack = 0;
#define YY_CURRENT_BUFFER ( (yy_buffer_stack) \
? (yy_buffer_stack)[(yy_buffer_stack_top)] \
: NULL)
#define YY_CURRENT_BUFFER_LVALUE (yy_buffer_stack)[(yy_buffer_stack_top)]
static char yy_hold_char;
static int yy_n_chars;
int zconfleng;
static char *yy_c_buf_p = (char *) 0;
static int yy_init = 0;
static int yy_start = 0;
static int yy_did_buffer_switch_on_eof;
void zconfrestart (FILE *input_file  );
void zconf_switch_to_buffer (YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE zconf_create_buffer (FILE *file,int size  );
void zconf_delete_buffer (YY_BUFFER_STATE b  );
void zconf_flush_buffer (YY_BUFFER_STATE b  );
void zconfpush_buffer_state (YY_BUFFER_STATE new_buffer  );
void zconfpop_buffer_state (void );
static void zconfensure_buffer_stack (void );
static void zconf_load_buffer_state (void );
static void zconf_init_buffer (YY_BUFFER_STATE b,FILE *file  );
#define YY_FLUSH_BUFFER zconf_flush_buffer(YY_CURRENT_BUFFER )
YY_BUFFER_STATE zconf_scan_buffer (char *base,yy_size_t size  );
YY_BUFFER_STATE zconf_scan_string (yyconst char *yy_str  );
YY_BUFFER_STATE zconf_scan_bytes (yyconst char *bytes,int len  );
void *zconfalloc (yy_size_t  );
void *zconfrealloc (void *,yy_size_t  );
void zconffree (void *  );
#define yy_new_buffer zconf_create_buffer
#define yy_set_interactive(is_interactive) \
#define yy_set_bol(at_bol) \
#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)
#define zconfwrap(n) 1
#define YY_SKIP_YYWRAP
typedef unsigned char YY_CHAR;
FILE *zconfin = (FILE *) 0, *zconfout = (FILE *) 0;
typedef int yy_state_type;
extern int zconflineno;
int zconflineno = 1;
extern char *zconftext;
#define yytext_ptr zconftext
static yyconst flex_int16_t yy_nxt[][17] =
;
static yy_state_type yy_get_previous_state (void );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state  );
static int yy_get_next_buffer (void );
static void yy_fatal_error (yyconst char msg[]  );
#define YY_DO_BEFORE_ACTION \
(yytext_ptr) = yy_bp; \
zconfleng = (size_t) (yy_cp - yy_bp); \
(yy_hold_char) = *yy_cp; \
*yy_cp = '\0'; \
(yy_c_buf_p) = yy_cp;
#define YY_NUM_RULES 33
#define YY_END_OF_BUFFER 34
struct yy_trans_info
;
static yyconst flex_int16_t yy_accept[61] =
;
static yyconst flex_int32_t yy_ec[256] =
;
extern int zconf_flex_debug;
int zconf_flex_debug = 0;
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *zconftext;
#define YY_NO_INPUT 1
#define LKC_DIRECT_LINK
#define START_STRSIZE	16
static struct  current_pos;
static char *text;
static int text_size, text_asize;
struct buffer ;
struct buffer *current_buf;
static int last_ts, first_ts;
static void zconf_endhelp(void);
static void zconf_endfile(void);
static void new_string(void)
static void append_string(const char *str, int size)
static void alloc_string(const char *str, int size)
#define INITIAL 0
#define COMMAND 1
#define HELP 2
#define STRING 3
#define PARAM 4
#define YY_EXTRA_TYPE void *
static int yy_init_globals (void );
int zconflex_destroy (void );
int zconfget_debug (void );
void zconfset_debug (int debug_flag  );
YY_EXTRA_TYPE zconfget_extra (void );
void zconfset_extra (YY_EXTRA_TYPE user_defined  );
FILE *zconfget_in (void );
void zconfset_in  (FILE * in_str  );
FILE *zconfget_out (void );
void zconfset_out  (FILE * out_str  );
int zconfget_leng (void );
char *zconfget_text (void );
int zconfget_lineno (void );
void zconfset_lineno (int line_number  );
static void yyunput (int c,char *buf_ptr  );
static void yy_flex_strncpy (char *,yyconst char *,int );
static int yy_flex_strlen (yyconst char * );
#define YY_READ_BUF_SIZE 16384
#define YY_READ_BUF_SIZE 8192
#define ECHO do  while (0)
#define YY_INPUT(buf,result,max_size) \
errno=0; \
while ( (result = read( fileno(zconfin), (char *) buf, max_size )) < 0 ) \
\
\
#define yyterminate() return YY_NULL
#define YY_START_STACK_INCR 25
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#define YY_DECL_IS_OURS 1
extern int zconflex (void);
#define YY_DECL int zconflex (void)
#define YY_USER_ACTION
#define YY_BREAK break;
#define YY_RULE_SETUP \
YY_USER_ACTION
YY_DECL
static int yy_get_next_buffer (void)
static yy_state_type yy_get_previous_state (void)
static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
static void yyunput (int c, register char * yy_bp )
void zconfrestart  (FILE * input_file )
void zconf_switch_to_buffer  (YY_BUFFER_STATE  new_buffer )
static void zconf_load_buffer_state  (void)
YY_BUFFER_STATE zconf_create_buffer  (FILE * file, int  size )
void zconf_delete_buffer (YY_BUFFER_STATE  b )
static void zconf_init_buffer  (YY_BUFFER_STATE  b, FILE * file )
void zconf_flush_buffer (YY_BUFFER_STATE  b )
void zconfpush_buffer_state (YY_BUFFER_STATE new_buffer )
void zconfpop_buffer_state (void)
static void zconfensure_buffer_stack (void)
YY_BUFFER_STATE zconf_scan_buffer  (char * base, yy_size_t  size )
YY_BUFFER_STATE zconf_scan_string (yyconst char * yystr )
YY_BUFFER_STATE zconf_scan_bytes  (yyconst char * yybytes, int  _yybytes_len )
#define YY_EXIT_FAILURE 2
static void yy_fatal_error (yyconst char* msg )
#undef yyless
#define yyless(n) \
do \
\
while ( 0 )
int zconfget_lineno  (void)
FILE *zconfget_in  (void)
FILE *zconfget_out  (void)
int zconfget_leng  (void)
char *zconfget_text  (void)
void zconfset_lineno (int  line_number )
void zconfset_in (FILE *  in_str )
void zconfset_out (FILE *  out_str )
int zconfget_debug  (void)
void zconfset_debug (int  bdebug )
static int yy_init_globals (void)
int zconflex_destroy  (void)
static void yy_flex_strncpy (char* s1, yyconst char * s2, int n )
static int yy_flex_strlen (yyconst char * s )
void *zconfalloc (yy_size_t  size )
void *zconfrealloc  (void * ptr, yy_size_t  size )
void zconffree (void * ptr )
#define YYTABLES_NAME "yytables"
void zconf_starthelp(void)
static void zconf_endhelp(void)
FILE *zconf_fopen(const char *name)
void zconf_initscan(const char *name)
void zconf_nextfile(const char *name)
static void zconf_endfile(void)
int zconf_lineno(void)
const char *zconf_curname(void)
