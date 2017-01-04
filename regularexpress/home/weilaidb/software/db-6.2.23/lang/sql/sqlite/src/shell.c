#if (defined(_WIN32) || defined(WIN32)) && !defined(_CRT_SECURE_NO_WARNINGS)
#define _CRT_SECURE_NO_WARNINGS
#if defined(INCLUDE_MSVC_H)
#if (defined(__RTP__) || defined(_WRS_KERNEL)) && !SQLITE_OMIT_LOAD_EXTENSION
# define SQLITE_OMIT_LOAD_EXTENSION 1
# define _LARGE_FILE       1
# ifndef _FILE_OFFSET_BITS
#   define _FILE_OFFSET_BITS 64
# endif
# define _LARGEFILE_SOURCE 1
#if !defined(_WIN32) && !defined(WIN32)
# include <signal.h>
# if !defined(__RTP__) && !defined(_WRS_KERNEL)
#  include <pwd.h>
# endif
# include <unistd.h>
# include <sys/types.h>
#if defined(HAVE_EDITLINE) && HAVE_EDITLINE==1
# include <editline/readline.h>
#elif defined(HAVE_READLINE) && HAVE_READLINE==1
# include <readline/readline.h>
# include <readline/history.h>
#if (defined(HAVE_EDITLINE) && HAVE_EDITLINE==1) || \
(defined(HAVE_READLINE) && HAVE_READLINE==1)
# define shell_add_history(X) add_history(X)
# define shell_read_history(X) read_history(X)
# define shell_write_history(X) write_history(X)
# define shell_stifle_history(X) stifle_history(X)
# define shell_readline(X) readline(X)
#elif HAVE_LINENOISE
# include "linenoise.h"
# define shell_add_history(X) linenoiseHistoryAdd(X)
# define shell_read_history(X) linenoiseHistoryLoad(X)
# define shell_write_history(X) linenoiseHistorySave(X)
# define shell_stifle_history(X) linenoiseHistorySetMaxLen(X)
# define shell_readline(X) linenoise(X)
# define shell_read_history(X)
# define shell_write_history(X)
# define shell_stifle_history(X)
# define SHELL_USE_LOCAL_GETLINE 1
#if defined(_WIN32) || defined(WIN32)
# include <io.h>
# include <fcntl.h>
#define isatty(h) _isatty(h)
# define access(f,m) _access((f),(m))
#undef popen
#define popen _popen
#undef pclose
#define pclose _pclose
extern int isatty(int);
#if !defined(__RTP__) && !defined(_WRS_KERNEL)
extern FILE *popen(const char*,const char*);
extern int pclose(FILE*);
# define SQLITE_OMIT_POPEN 1
#if defined(_WIN32_WCE)
#define isatty(x) 1
#define IsSpace(X)  isspace((unsigned char)X)
#define IsDigit(X)  isdigit((unsigned char)X)
#define ToLower(X)  (char)tolower((unsigned char)X)
#if defined(_WIN32) || defined(WIN32)
static void setBinaryMode(FILE *out)
static void setTextMode(FILE *out)
# define setBinaryMode(X)
# define setTextMode(X)
static int enableTimer = 0;
static sqlite3_int64 timeOfDay(void)
#if !defined(_WIN32) && !defined(WIN32) && !defined(__minux)
#if defined(_WRS_KERNEL) || defined(__RTP__)
struct rusage ;
#define getrusage(A,B) memset(B,0,sizeof(*B))
static struct rusage sBegin;
static sqlite3_int64 iBegin;
static void beginTimer(void)
static double timeDiff(struct timeval *pStart, struct timeval *pEnd)
static void endTimer(void)
#define BEGIN_TIMER beginTimer()
#define END_TIMER endTimer()
#define HAS_TIMER 1
#elif (defined(_WIN32) || defined(WIN32))
static HANDLE hProcess;
static FILETIME ftKernelBegin;
static FILETIME ftUserBegin;
static sqlite3_int64 ftWallBegin;
typedef BOOL (WINAPI *GETPROCTIMES)(HANDLE, LPFILETIME, LPFILETIME,
LPFILETIME, LPFILETIME);
static GETPROCTIMES getProcessTimesAddr = NULL;
static int hasTimer(void)
static void beginTimer(void)
static double timeDiff(FILETIME *pStart, FILETIME *pEnd)
static void endTimer(void)
#define BEGIN_TIMER beginTimer()
#define END_TIMER endTimer()
#define HAS_TIMER hasTimer()
#define BEGIN_TIMER
#define END_TIMER
#define HAS_TIMER 0
#define UNUSED_PARAMETER(x) (void)(x)
static int bail_on_error = 0;
static int stdin_is_interactive = 1;
static sqlite3 *globalDb = 0;
static volatile int seenInterrupt = 0;
static char *Argv0;
static char mainPrompt[20];
static char continuePrompt[20];
static FILE *iotrace = 0;
static void SQLITE_CDECL iotracePrintf(const char *zFormat, ...)
static int isNumber(const char *z, int *realnum)
static const char *zShellStatic = 0;
static void shellstaticFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static char *local_getline(char *zLine, FILE *in)
static char *one_input_line(FILE *in, char *zPrior, int isContinuation)
typedef struct SavedModeInfo SavedModeInfo;
struct SavedModeInfo ;
typedef struct ShellState ShellState;
struct ShellState ;
#define SHFLG_Scratch     0x00001
#define SHFLG_Pagecache   0x00002
#define SHFLG_Lookaside   0x00004
#define MODE_Line     0
#define MODE_Column   1
#define MODE_List     2
#define MODE_Semi     3
#define MODE_Html     4
#define MODE_Insert   5
#define MODE_Tcl      6
#define MODE_Csv      7
#define MODE_Explain  8
#define MODE_Ascii    9
static const char *modeDescr[] = ;
#define SEP_Column    "|"
#define SEP_Row       "\n"
#define SEP_Tab       "\t"
#define SEP_Space     " "
#define SEP_Comma     ","
#define SEP_CrLf      "\r\n"
#define SEP_Unit      "\x1F"
#define SEP_Record    "\x1E"
#define ArraySize(X)  (int)(sizeof(X)/sizeof(X[0]))
static int strlen30(const char *z)
static void shellLog(void *pArg, int iErrCode, const char *zMsg)
static void output_hex_blob(FILE *out, const void *pBlob, int nBlob)
static void output_quoted_string(FILE *out, const char *z)
static void output_c_string(FILE *out, const char *z)
static void output_html_string(FILE *out, const char *z)
static const char needCsvQuote[] = ;
static void output_csv(ShellState *p, const char *z, int bSep)
static void interrupt_handler(int NotUsed)
static int shell_callback(
void *pArg,
int nArg,
char **azArg,
char **azCol,
int *aiType
)
static int callback(void *pArg, int nArg, char **azArg, char **azCol)
static void set_table_name(ShellState *p, const char *zName)
static char *appendText(char *zIn, char const *zAppend, char quote)
static int run_table_dump_query(
ShellState *p,
const char *zSelect,
const char *zFirstRow
)
static char *save_err_msg(
sqlite3 *db
)
static int display_stats(
sqlite3 *db,
ShellState *pArg,
int bReset
)
static void display_scanstats(
sqlite3 *db,
ShellState *pArg
)
static int str_in_array(const char *zStr, const char **azArray)
static void explain_data_prepare(ShellState *p, sqlite3_stmt *pSql)
static void explain_data_delete(ShellState *p)
static int shell_exec(
sqlite3 *db,
const char *zSql,
int (*xCallback)(void*,int,char**,char**,int*),
ShellState *pArg,
char **pzErrMsg
)
static int dump_callback(void *pArg, int nArg, char **azArg, char **azCol)
static int run_schema_dump_query(
ShellState *p,
const char *zQuery
)
static char zHelp[] =
".backup ?DB? FILE      Backup DB (default \"main\") to FILE\n"
".bail on|off           Stop after hitting an error.  Default OFF\n"
".binary on|off         Turn binary output on or off.  Default OFF\n"
".clone NEWDB           Clone data into NEWDB from the existing database\n"
".databases             List names and files of attached databases\n"
".dbinfo ?DB?           Show status information about the database\n"
".dump ?TABLE? ...      Dump the database in an SQL text format\n"
"                         If TABLE specified, only dump tables matching\n"
"                         LIKE pattern TABLE.\n"
".echo on|off           Turn command echo on or off\n"
".eqp on|off            Enable or disable automatic EXPLAIN QUERY PLAN\n"
".exit                  Exit this program\n"
".explain ?on|off?      Turn output mode suitable for EXPLAIN on or off.\n"
"                         With no args, it turns EXPLAIN on.\n"
".fullschema            Show schema and the content of sqlite_stat tables\n"
".headers on|off        Turn display of headers on or off\n"
".help                  Show this message\n"
".import FILE TABLE     Import data from FILE into TABLE\n"
".indexes ?TABLE?       Show names of all indexes\n"
"                         If TABLE specified, only show indexes for tables\n"
"                         matching LIKE pattern TABLE.\n"
".iotrace FILE          Enable I/O diagnostic logging to FILE\n"
".limit ?LIMIT? ?VAL?   Display or change the value of an SQLITE_LIMIT\n"
".load FILE ?ENTRY?     Load an extension library\n"
".log FILE|off          Turn logging on or off.  FILE can be stderr/stdout\n"
".mode MODE ?TABLE?     Set output mode where MODE is one of:\n"
"                         ascii    Columns/rows delimited by 0x1F and 0x1E\n"
"                         csv      Comma-separated values\n"
"                         column   Left-aligned columns.  (See .width)\n"
"                         html     HTML <table> code\n"
"                         insert   SQL insert statements for TABLE\n"
"                         line     One value per line\n"
"                         list     Values delimited by .separator strings\n"
"                         tabs     Tab-separated values\n"
"                         tcl      TCL list elements\n"
".nullvalue STRING      Use STRING in place of NULL values\n"
".once FILENAME         Output for the next SQL command only to FILENAME\n"
".open ?FILENAME?       Close existing database and reopen FILENAME\n"
".output ?FILENAME?     Send output to FILENAME or stdout\n"
".print STRING...       Print literal STRING\n"
".prompt MAIN CONTINUE  Replace the standard prompts\n"
".quit                  Exit this program\n"
".read FILENAME         Execute SQL in FILENAME\n"
".restore ?DB? FILE     Restore content of DB (default \"main\") from FILE\n"
".save FILE             Write in-memory database into FILE\n"
".scanstats on|off      Turn sqlite3_stmt_scanstatus() metrics on or off\n"
".schema ?TABLE?        Show the CREATE statements\n"
"                         If TABLE specified, only show tables matching\n"
"                         LIKE pattern TABLE.\n"
".separator COL ?ROW?   Change the column separator and optionally the row\n"
"                         separator for both the output mode and .import\n"
".shell CMD ARGS...     Run CMD ARGS... in a system shell\n"
".show                  Show the current values for various settings\n"
".stat ?ITEM?           Print statistics\n"
"                         If ITEM=':env:', print statistics for the\n"
"                         Berkeley DB environment.\n"
"                         If ITEM=':rep:', print a summary of replication\n"
"                         statistics for the Berkeley DB environment.\n"
"                         If ITEM is the name of a table or index, print\n"
"                         statistics for the table or index.\n"
"                         If ITEM is not specified, print statistics for\n"
"                         the Berkeley DB environment followed by\n"
"                         statistics for all tables and indexes within the\n"
"                         database.\n"
".stats on|off          Turn stats on or off\n"
".system CMD ARGS...    Run CMD ARGS... in a system shell\n"
".tables ?TABLE?        List names of tables\n"
"                         If TABLE specified, only list tables matching\n"
"                         LIKE pattern TABLE.\n"
".timeout MS            Try opening locked tables for MS milliseconds\n"
".timer on|off          Turn SQL timer on or off\n"
".trace FILE|off        Output each SQL statement as it is run\n"
".vfsname ?AUX?         Print the name of the VFS stack\n"
".width NUM1 NUM2 ...   Set column widths for \"column\" mode\n"
"                         Negative values right-justify\n"
;
static int process_input(ShellState *p, FILE *in);
static void readfileFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void writefileFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void open_db(ShellState *p, int keepAlive)
static void resolve_backslashes(char *z)
static int hexDigitValue(char c)
static sqlite3_int64 integerValue(const char *zArg)
static int booleanValue(char *zArg)
static void output_file_close(FILE *f)
static FILE *output_file_open(const char *zFile)
static void sql_trace_callback(void *pArg, const char *z)
static void test_breakpoint(void)
typedef struct ImportCtx ImportCtx;
struct ImportCtx ;
static void import_append_char(ImportCtx *p, int c)
static char *SQLITE_CDECL csv_read_one_field(ImportCtx *p)
static char *SQLITE_CDECL ascii_read_one_field(ImportCtx *p)
static void tryToCloneData(
ShellState *p,
sqlite3 *newDb,
const char *zTable
)
static void tryToCloneSchema(
ShellState *p,
sqlite3 *newDb,
const char *zWhere,
void (*xForEach)(ShellState*,sqlite3*,const char*)
)
static void tryToClone(ShellState *p, const char *zNewDb)
static void output_reset(ShellState *p)
static int db_int(ShellState *p, const char *zSql)
unsigned int get2byteInt(unsigned char *a)
unsigned int get4byteInt(unsigned char *a)
static int shell_dbinfo_command(ShellState *p, int nArg, char **azArg)
static int do_meta_command(char *zLine, ShellState *p)
static int line_contains_semicolon(const char *z, int N)
static int _all_whitespace(const char *z)
static int line_is_command_terminator(const char *zLine)
static int line_is_complete(char *zSql, int nSql)
static int process_input(ShellState *p, FILE *in)
static char *find_home_dir(void)
static void process_sqliterc(
ShellState *p,
const char *sqliterc_override
)
static const char zOptions[] =
"   -ascii               set output mode to 'ascii'\n"
"   -bail                stop after hitting an error\n"
"   -batch               force batch I/O\n"
"   -column              set output mode to 'column'\n"
"   -cmd COMMAND         run \"COMMAND\" before reading stdin\n"
"   -csv                 set output mode to 'csv'\n"
"   -echo                print commands before execution\n"
"   -init FILENAME       read/process named file\n"
"   -[no]header          turn headers on or off\n"
#if defined(SQLITE_ENABLE_MEMSYS3) || defined(SQLITE_ENABLE_MEMSYS5)
"   -heap SIZE           Size of heap for memsys3 or memsys5\n"
"   -help                show this message\n"
"   -html                set output mode to HTML\n"
"   -interactive         force interactive I/O\n"
"   -line                set output mode to 'line'\n"
"   -list                set output mode to 'list'\n"
"   -lookaside SIZE N    use N entries of SZ bytes for lookaside memory\n"
"   -mmap N              default mmap size set to N\n"
"   -multiplex           enable the multiplexor VFS\n"
"   -newline SEP         set output row separator. Default: '\\n'\n"
"   -nullvalue TEXT      set text string for NULL values. Default ''\n"
"   -pagecache SIZE N    use N slots of SZ bytes each for page cache memory\n"
"   -scratch SIZE N      use N slots of SZ bytes each for scratch memory\n"
"   -separator SEP       set output column separator. Default: '|'\n"
"   -stats               print memory stats before each finalize\n"
"   -version             show SQLite version\n"
"   -vfs NAME            use NAME as the default VFS\n"
"   -vfstrace            enable tracing of all VFS calls\n"
;
static void usage(int showDetail)
static void main_init(ShellState *data)
static void printBold(const char *zText)
static void printBold(const char *zText)
static char *cmdline_option_value(int argc, char **argv, int i)
int SQLITE_CDECL main(int argc, char **argv)
