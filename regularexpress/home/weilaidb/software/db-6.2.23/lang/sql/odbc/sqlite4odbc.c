#if defined(SQLITE_HAS_CODEC) && defined(SQLITE_API)
#undef WITH_SQLITE_DLLS
#undef SQLITE_DYNLOAD
#if defined(WITH_SQLITE_DLLS) && (WITH_SQLITE_DLLS > 1)
#define SQLITE_DYNLOAD 1
#undef MEMORY_DEBUG
#if defined(_WIN32) || defined(_WIN64)
static void dls_init(void);
static void dls_fini(void);
void dls_init(void);
void dls_fini(void);
static struct dl_sqlite4_funcs  dls_funcs;
#define sqlite4_bind_blob             dls_funcs.bind_blob
#define sqlite4_bind_double           dls_funcs.bind_double
#define sqlite4_bind_int              dls_funcs.bind_int
#define sqlite4_bind_int64            dls_funcs.bind_int64
#define sqlite4_bind_null             dls_funcs.bind_null
#define sqlite4_bind_parameter_count  dls_funcs.bind_parameter_count
#define sqlite4_bind_text             dls_funcs.bind_text
#define sqlite4_changes               dls_funcs.changes
#define sqlite4_close                 dls_funcs.close
#define sqlite4_column_blob           dls_funcs.column_blob
#define sqlite4_column_bytes          dls_funcs.column_bytes
#define sqlite4_column_count          dls_funcs.column_count
#define sqlite4_column_database_name  dls_funcs.column_database_name
#define sqlite4_column_decltype       dls_funcs.column_decltype
#define sqlite4_column_double         dls_funcs.column_double
#define sqlite4_column_name           dls_funcs.column_name
#define sqlite4_column_origin_name    dls_funcs.column_origin_name
#define sqlite4_column_table_name     dls_funcs.column_table_name
#define sqlite4_column_text           dls_funcs.column_text
#define sqlite4_column_type           dls_funcs.column_type
#define sqlite4_create_function       dls_funcs.create_function
#define sqlite4_errcode               dls_funcs.errcode
#define sqlite4_errmsg                dls_funcs.errmsg
#define sqlite4_exec                  dls_funcs.exec
#define sqlite4_finalize              dls_funcs.finalize
#define sqlite4_free                  dls_funcs.free
#define sqlite4_interrupt             dls_funcs.interrupt
#define sqlite4_libversion            dls_funcs.libversion
#define sqlite4_malloc                dls_funcs.malloc
#define sqlite4_mprintf               dls_funcs.mprintf
#define sqlite4_open                  dls_funcs.open
#define sqlite4_prepare               dls_funcs.prepare
#define sqlite4_profile               dls_funcs.profile
#define sqlite4_realloc               dls_funcs.realloc
#define sqlite4_reset                 dls_funcs.reset
#define sqlite4_result_blob           dls_funcs.result_blob
#define sqlite4_result_error          dls_funcs.result_error
#define sqlite4_result_int            dls_funcs.result_int
#define sqlite4_result_null           dls_funcs.result_null
#define sqlite4_step                  dls_funcs.step
#define sqlite4_strnicmp              dls_funcs.xstrnicmp
#define sqlite4_trace                 dls_funcs.trace
#define sqlite4_user_data             dls_funcs.user_data
#define sqlite4_value_blob            dls_funcs.value_blob
#define sqlite4_value_bytes           dls_funcs.value_bytes
#define sqlite4_value_text            dls_funcs.value_text
#define sqlite4_value_type            dls_funcs.value_type
#define WINTERFACE
#define WCHARSUPPORT
#if !defined(_WIN32) && !defined(_WIN64)
#if !defined(WCHARSUPPORT) && defined(HAVE_SQLWCHAR) && (HAVE_SQLWCHAR)
#define WCHARSUPPORT
#if defined(WINTERFACE)
#if defined(_WIN32) || defined(_WIN64)
#define ODBC_INI "ODBC.INI"
#define DRIVER_VER_INFO VERSION
#define ODBC_INI ".odbc.ini"
#define DRIVER_VER_INFO "0.0"
#define COLATTRIBUTE_LAST_ARG_TYPE SQLLEN *
#define COLATTRIBUTE_LAST_ARG_TYPE SQLPOINTER
#define SETSTMTOPTION_LAST_ARG_TYPE SQLROWCOUNT
#undef min
#define min(a, b) ((a) < (b) ? (a) : (b))
#undef max
#define max(a, b) ((a) < (b) ? (b) : (a))
#define PTRDIFF_T int
#define array_size(x) (sizeof (x) / sizeof (x[0]))
#define stringify1(s) #s
#define stringify(s) stringify1(s)
#define verinfo(maj, min, lev) ((maj) << 16 | (min) << 8 | (lev))
#if defined(WINTERFACE) && !defined(_WIN32) && !defined(_WIN64)
#define SCOL_VARCHAR SQL_WVARCHAR
#define SCOL_CHAR SQL_WCHAR
#define SCOL_VARCHAR SQL_VARCHAR
#define SCOL_CHAR SQL_CHAR
#define ENV_MAGIC  0x53544145
#define DBC_MAGIC  0x53544144
#define DEAD_MAGIC 0xdeadbeef
typedef struct dstr  dstr;
static const char *xdigits = "0123456789ABCDEFabcdef";
static void *
xmalloc_(int n, char *file, int line)
static void *
xrealloc_(void *old, int n, char *file, int line)
static void
xfree_(void *x, char *file, int line)
static void
xfree__(void *x)
static char *
xstrdup_(const char *str, char *file, int line)
#define xmalloc(x)    xmalloc_(x, __FILE__, __LINE__)
#define xrealloc(x,y) xrealloc_(x, y, __FILE__, __LINE__)
#define xfree(x)      xfree_(x, __FILE__, __LINE__)
#define xstrdup(x)    xstrdup_(x, __FILE__, __LINE__)
#define xmalloc(x)    sqlite4_malloc(0, x)
#define xrealloc(x,y) sqlite4_realloc(0, x, y)
#define xfree(x)      sqlite4_free(0, x)
#define xstrdup(x)    strdup_(x)
#if defined(_WIN32) || defined(_WIN64)
#define vsnprintf   _vsnprintf
#define snprintf    _snprintf
#define strcasecmp  _stricmp
#define strncasecmp _strnicmp
#define strtoll     _strtoi64
#define strtoull    _strtoui64
static HINSTANCE NEAR hModule;
#undef  strncasecmp
#define strncasecmp(A,B,C) sqlite4_strnicmp(A,B,C)
#undef  strcasecmp
#define strcasecmp(A,B) strcasecmp_(A,B)
#if defined(__GNUC__) && (__GNUC__ >= 2)
static int strcasecmp_(const char *a, const char *b)
__attribute__((__unused__));
static int strcasecmp_(const char *a, const char *b)
#if defined(_WIN32) || defined(_WIN64)
#define HDBC_LOCK(hdbc)				\
#define HDBC_UNLOCK(hdbc)			\
if ((hdbc) != SQL_NULL_HDBC)
#define HSTMT_LOCK(hstmt)			\
#define HSTMT_UNLOCK(hstmt)			\
if ((hstmt) != SQL_NULL_HSTMT)
#define HDBC_LOCK(hdbc)
#define HDBC_UNLOCK(hdbc)
#define HSTMT_LOCK(hdbc)
#define HSTMT_UNLOCK(hdbc)
static const char upper_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const char lower_chars[] = "abcdefghijklmnopqrstuvwxyz";
static int
TOLOWER(int c)
static const char digit_chars[] = "0123456789";
#define ISDIGIT(c) \
((c) && strchr(digit_chars, (c)) != NULL)
static const char space_chars[] = " \f\n\r\t\v";
#define ISSPACE(c) \
((c) && strchr(space_chars, (c)) != NULL)
static void dbtraceapi(DBC *d, char *fn, const char *sql);
static void freedyncols(STMT *s);
static void freeresult(STMT *s, int clrcols);
static void freerows(char **rowp);
static void unbindcols(STMT *s);
static void s4stmt_drop(STMT *s);
static SQLRETURN drvexecute(SQLHSTMT stmt, int initial);
static SQLRETURN freestmt(HSTMT stmt);
static SQLRETURN mkbindcols(STMT *s, int ncols);
static SQLRETURN setupdyncols(STMT *s, sqlite4_stmt *s4stmt, int *ncolsp);
static SQLRETURN setupparbuf(STMT *s, BINDPARM *p);
static SQLRETURN starttran(STMT *s);
static SQLRETURN setupparam(STMT *s, char *sql, int pnum);
static SQLRETURN getrowdata(STMT *s, SQLUSMALLINT col, SQLSMALLINT otype,
SQLPOINTER val, SQLINTEGER len, SQLLEN *lenp,
int partial);
#if (defined(_WIN32) || defined(_WIN64)) && defined(WINTERFACE)
static COL *statSpec2P, *statSpec3P;
#if (MEMORY_DEBUG < 1)
static char *
strdup_(const char *str)
static dstr *
dsappend(dstr *dsp, const char *str)
static dstr *
dsappendq(dstr *dsp, const char *str)
static const char *
dsval(dstr *dsp)
static int
dserr(dstr *dsp)
static void
dsfree(dstr *dsp)
static int
uc_strlen(SQLWCHAR *str)
static SQLWCHAR *
uc_strncpy(SQLWCHAR *dest, SQLWCHAR *src, int len)
static void
uc_from_utf_buf(unsigned char *str, int len, SQLWCHAR *uc, int ucLen)
static SQLWCHAR *
uc_from_utf(unsigned char *str, int len)
static char *
uc_to_utf(SQLWCHAR *str, int len)
static char *
uc_to_utf_c(SQLWCHAR *str, int len)
#if defined(WCHARSUPPORT) || defined(_WIN32) || defined(_WIN64)
static void
uc_free(void *str)
#if defined(_WIN32) || defined(_WIN64)
static char *
wmb_to_utf(char *str, int len)
static char *
wmb_to_utf_c(char *str, int len)
static char *
utf_to_wmb(char *str, int len)
static WCHAR *
wmb_to_uc(char *str, int len)
static char *
uc_to_wmb(WCHAR *wstr, int len)
#define SQLGetPrivateProfileString(A,B,C,D,E,F) drvgpps(d,A,B,C,D,E,F)
static void
drvgetgpps(DBC *d)
static void
drvrelgpps(DBC *d)
static int
drvgpps(DBC *d, char *sect, char *ent, char *def, char *buf,
int bufsiz, char *fname)
#define drvgetgpps(d)
#define drvrelgpps(d)
static void
s4bind(DBC *d, sqlite4_stmt *stmt, int nparams, BINDPARM *p)
typedef struct tblres  TBLRES;
static int
drvgettable_row(TBLRES *t, int ncol, int rc)
static int
drvgettable(STMT *s, const char *sql, char ***resp, int *nrowp,
int *ncolp, char **errp, int nparam, BINDPARM *p)
static int
sqlite4_get_table(sqlite4 *db, const char *sql, char ***resp, int *nrowp,
int *ncolp, char **errp)
#if defined(__GNUC__) && (__GNUC__ >= 2)
static void setstatd(DBC *, int, char *, char *, ...)
__attribute__((format (printf, 3, 5)));
static void
setstatd(DBC *d, int naterr, char *msg, char *st, ...)
#if defined(__GNUC__) && (__GNUC__ >= 2)
static void setstat(STMT *, int, char *, char *, ...)
__attribute__((format (printf, 3, 5)));
static void
setstat(STMT *s, int naterr, char *msg, char *st, ...)
static SQLRETURN
drvunimpldbc(HDBC dbc)
static SQLRETURN
drvunimplstmt(HSTMT stmt)
static void
freep(void *x)
static SQLRETURN
nomem(STMT *s)
static SQLRETURN
noconn(STMT *s)
#if defined(HAVE_LOCALECONV) || defined(_WIN32) || defined(_WIN64)
static double
ln_strtod(const char *data, char **endp)
#define ln_strtod(A,B) strtod(A,B)
static char *
unquote(char *str)
static int
unescpat(char *str)
static int
namematch(char *str, char *pat, int esc)
static int
setsqliteopts(sqlite4 *x, DBC *d)
static void
freerows(char **rowp)
static int
mapsqltype(const char *typename, int *nosign, int ov3, int nowchar,
int dobigint)
static void
getmd(const char *typename, int sqltype, int *mp, int *dp)
static int
mapdeftype(int type, int stype, int nosign, int nowchar)
static char *
fixupsql(char *sql, int sqlLen, int *nparam, int *isselect, char **errmsg)
static int
findcol(char **cols, int ncols, char *name)
static void
fixupdyncols(STMT *s, DBC *d)
static int
getmdays(int year, int month)
static int
str2date(char *str, DATE_STRUCT *ds)
static int
str2time(char *str, TIME_STRUCT *ts)
static int
str2timestamp(char *str, TIMESTAMP_STRUCT *tss)
static int
getbool(char *string)
static void
blob_free(void *dummy, void *p)
static void
blob_import(sqlite4_context *ctx, int nargs, sqlite4_value **args)
static void
blob_export(sqlite4_context *ctx, int nargs, sqlite4_value **args)
static void
dbtrace(void *arg, const char *msg, sqlite4_uint64 et)
static void
dbtraceapi(DBC *d, char *fn, const char *sql)
static void
dbtracerc(DBC *d, int rc, char *err)
static SQLRETURN
dbopen(DBC *d, char *name, int isu, char *dsn, char *sflag,
char *spflag, char *ntflag, char *jmode, char *busy)
static void
dbloadext(DBC *d, char *exts)
static char *
s4stmt_coltype(sqlite4_stmt *s4stmt, int col, DBC *d, int *guessed_types)
static void
s4stmt_addmeta(sqlite4_stmt *s4stmt, int col, DBC *d, COL *ci)
static int
s4stmt_step(STMT *s)
static void
s4stmt_end(STMT *s)
static void
s4stmt_end_if(STMT *s)
static void
s4stmt_drop(STMT *s)
static SQLRETURN
s4stmt_start(STMT *s)
SQLRETURN SQL_API
SQLDataSources(SQLHENV env, SQLUSMALLINT dir, SQLCHAR *srvname,
SQLSMALLINT buflen1, SQLSMALLINT *lenp1,
SQLCHAR *desc, SQLSMALLINT buflen2, SQLSMALLINT *lenp2)
SQLRETURN SQL_API
SQLDataSourcesW(SQLHENV env, SQLUSMALLINT dir, SQLWCHAR *srvname,
SQLSMALLINT buflen1, SQLSMALLINT *lenp1,
SQLWCHAR *desc, SQLSMALLINT buflen2, SQLSMALLINT *lenp2)
SQLRETURN SQL_API
SQLDrivers(SQLHENV env, SQLUSMALLINT dir, SQLCHAR *drvdesc,
SQLSMALLINT descmax, SQLSMALLINT *desclenp,
SQLCHAR *drvattr, SQLSMALLINT attrmax, SQLSMALLINT *attrlenp)
SQLRETURN SQL_API
SQLDriversW(SQLHENV env, SQLUSMALLINT dir, SQLWCHAR *drvdesc,
SQLSMALLINT descmax, SQLSMALLINT *desclenp,
SQLWCHAR *drvattr, SQLSMALLINT attrmax, SQLSMALLINT *attrlenp)
SQLRETURN SQL_API
SQLBrowseConnect(SQLHDBC dbc, SQLCHAR *connin, SQLSMALLINT conninLen,
SQLCHAR *connout, SQLSMALLINT connoutMax,
SQLSMALLINT *connoutLen)
SQLRETURN SQL_API
SQLBrowseConnectW(SQLHDBC dbc, SQLWCHAR *connin, SQLSMALLINT conninLen,
SQLWCHAR *connout, SQLSMALLINT connoutMax,
SQLSMALLINT *connoutLen)
static SQLRETURN
drvputdata(SQLHSTMT stmt, SQLPOINTER data, SQLLEN len)
SQLRETURN SQL_API
SQLPutData(SQLHSTMT stmt, SQLPOINTER data, SQLLEN len)
static SQLRETURN
freeparams(STMT *s)
static SQLRETURN
setupparam(STMT *s, char *sql, int pnum)
static SQLRETURN
drvbindparam(SQLHSTMT stmt, SQLUSMALLINT pnum, SQLSMALLINT iotype,
SQLSMALLINT buftype, SQLSMALLINT ptype, SQLUINTEGER coldef,
SQLSMALLINT scale,
SQLPOINTER data, SQLINTEGER buflen, SQLLEN *len)
SQLRETURN SQL_API
SQLBindParameter(SQLHSTMT stmt, SQLUSMALLINT pnum, SQLSMALLINT iotype,
SQLSMALLINT buftype, SQLSMALLINT ptype, SQLULEN coldef,
SQLSMALLINT scale,
SQLPOINTER data, SQLLEN buflen, SQLLEN *len)
SQLRETURN SQL_API
SQLBindParam(SQLHSTMT stmt, SQLUSMALLINT pnum, SQLSMALLINT vtype,
SQLSMALLINT ptype, SQLULEN lenprec,
SQLSMALLINT scale, SQLPOINTER val,
SQLLEN *lenp)
SQLRETURN SQL_API
SQLNumParams(SQLHSTMT stmt, SQLSMALLINT *nparam)
static SQLRETURN
setupparbuf(STMT *s, BINDPARM *p)
SQLRETURN SQL_API
SQLParamData(SQLHSTMT stmt, SQLPOINTER *pind)
SQLRETURN SQL_API
SQLDescribeParam(SQLHSTMT stmt, SQLUSMALLINT pnum, SQLSMALLINT *dtype,
SQLULEN *size, SQLSMALLINT *decdigits, SQLSMALLINT *nullable)
SQLRETURN SQL_API
SQLSetParam(SQLHSTMT stmt, SQLUSMALLINT par, SQLSMALLINT type,
SQLSMALLINT sqltype, SQLULEN coldef,
SQLSMALLINT scale, SQLPOINTER val, SQLLEN *nval)
SQLRETURN SQL_API
SQLParamOptions(SQLHSTMT stmt, SQLULEN rows, SQLULEN *rowp)
SQLRETURN SQL_API
SQLGetDescField(SQLHDESC handle, SQLSMALLINT recno,
SQLSMALLINT fieldid, SQLPOINTER value,
SQLINTEGER buflen, SQLINTEGER *strlen)
SQLRETURN SQL_API
SQLGetDescFieldW(SQLHDESC handle, SQLSMALLINT recno,
SQLSMALLINT fieldid, SQLPOINTER value,
SQLINTEGER buflen, SQLINTEGER *strlen)
SQLRETURN SQL_API
SQLSetDescField(SQLHDESC handle, SQLSMALLINT recno,
SQLSMALLINT fieldid, SQLPOINTER value,
SQLINTEGER buflen)
SQLRETURN SQL_API
SQLSetDescFieldW(SQLHDESC handle, SQLSMALLINT recno,
SQLSMALLINT fieldid, SQLPOINTER value,
SQLINTEGER buflen)
SQLRETURN SQL_API
SQLGetDescRec(SQLHDESC handle, SQLSMALLINT recno,
SQLCHAR *name, SQLSMALLINT buflen,
SQLSMALLINT *strlen, SQLSMALLINT *type,
SQLSMALLINT *subtype, SQLLEN *len,
SQLSMALLINT *prec, SQLSMALLINT *scale,
SQLSMALLINT *nullable)
SQLRETURN SQL_API
SQLGetDescRecW(SQLHDESC handle, SQLSMALLINT recno,
SQLWCHAR *name, SQLSMALLINT buflen,
SQLSMALLINT *strlen, SQLSMALLINT *type,
SQLSMALLINT *subtype, SQLLEN *len,
SQLSMALLINT *prec, SQLSMALLINT *scale,
SQLSMALLINT *nullable)
SQLRETURN SQL_API
SQLSetDescRec(SQLHDESC handle, SQLSMALLINT recno,
SQLSMALLINT type, SQLSMALLINT subtype,
SQLLEN len, SQLSMALLINT prec,
SQLSMALLINT scale, SQLPOINTER data,
SQLLEN *strlen, SQLLEN *indicator)
static SQLRETURN
mkresultset(HSTMT stmt, COL *colspec, int ncols, COL *colspec3,
int ncols4, int *nret)
static COL tablePrivSpec2[] = ;
static COL tablePrivSpec3[] = ;
static SQLRETURN
drvtableprivileges(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen)
#if !defined(WINTERFACE) || (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC))
SQLRETURN SQL_API
SQLTablePrivileges(SQLHSTMT stmt,
SQLCHAR *catalog, SQLSMALLINT catalogLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen)
#if !defined(HAVE_UNIXODBC) || !(HAVE_UNIXODBC)
SQLRETURN SQL_API
SQLTablePrivilegesW(SQLHSTMT stmt,
SQLWCHAR *catalog, SQLSMALLINT catalogLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen)
static COL colPrivSpec2[] = ;
static COL colPrivSpec3[] = ;
#if !defined(WINTERFACE) || (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC))
SQLRETURN SQL_API
SQLColumnPrivileges(SQLHSTMT stmt,
SQLCHAR *catalog, SQLSMALLINT catalogLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLCHAR *column, SQLSMALLINT columnLen)
#if !defined(HAVE_UNIXODBC) || !(HAVE_UNIXODBC)
SQLRETURN SQL_API
SQLColumnPrivilegesW(SQLHSTMT stmt,
SQLWCHAR *catalog, SQLSMALLINT catalogLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen,
SQLWCHAR *column, SQLSMALLINT columnLen)
static COL pkeySpec2[] = ;
static COL pkeySpec3[] = ;
static SQLRETURN
drvprimarykeys(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen)
SQLRETURN SQL_API
SQLPrimaryKeys(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen)
SQLRETURN SQL_API
SQLPrimaryKeysW(SQLHSTMT stmt,
SQLWCHAR *cat, SQLSMALLINT catLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen)
static COL scolSpec2[] = ;
static COL scolSpec3[] = ;
static SQLRETURN
drvspecialcolumns(SQLHSTMT stmt, SQLUSMALLINT id,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT scope, SQLUSMALLINT nullable)
SQLRETURN SQL_API
SQLSpecialColumns(SQLHSTMT stmt, SQLUSMALLINT id,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT scope, SQLUSMALLINT nullable)
SQLRETURN SQL_API
SQLSpecialColumnsW(SQLHSTMT stmt, SQLUSMALLINT id,
SQLWCHAR *cat, SQLSMALLINT catLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT scope, SQLUSMALLINT nullable)
static COL fkeySpec2[] = ;
static COL fkeySpec3[] = ;
static SQLRETURN SQL_API
drvforeignkeys(SQLHSTMT stmt,
SQLCHAR *PKcatalog, SQLSMALLINT PKcatalogLen,
SQLCHAR *PKschema, SQLSMALLINT PKschemaLen,
SQLCHAR *PKtable, SQLSMALLINT PKtableLen,
SQLCHAR *FKcatalog, SQLSMALLINT FKcatalogLen,
SQLCHAR *FKschema, SQLSMALLINT FKschemaLen,
SQLCHAR *FKtable, SQLSMALLINT FKtableLen)
SQLRETURN SQL_API
SQLForeignKeys(SQLHSTMT stmt,
SQLCHAR *PKcatalog, SQLSMALLINT PKcatalogLen,
SQLCHAR *PKschema, SQLSMALLINT PKschemaLen,
SQLCHAR *PKtable, SQLSMALLINT PKtableLen,
SQLCHAR *FKcatalog, SQLSMALLINT FKcatalogLen,
SQLCHAR *FKschema, SQLSMALLINT FKschemaLen,
SQLCHAR *FKtable, SQLSMALLINT FKtableLen)
SQLRETURN SQL_API
SQLForeignKeysW(SQLHSTMT stmt,
SQLWCHAR *PKcatalog, SQLSMALLINT PKcatalogLen,
SQLWCHAR *PKschema, SQLSMALLINT PKschemaLen,
SQLWCHAR *PKtable, SQLSMALLINT PKtableLen,
SQLWCHAR *FKcatalog, SQLSMALLINT FKcatalogLen,
SQLWCHAR *FKschema, SQLSMALLINT FKschemaLen,
SQLWCHAR *FKtable, SQLSMALLINT FKtableLen)
static SQLRETURN
starttran(STMT *s)
static SQLRETURN
endtran(DBC *d, SQLSMALLINT comptype, int force)
static SQLRETURN
drvendtran(SQLSMALLINT type, SQLHANDLE handle, SQLSMALLINT comptype)
SQLRETURN SQL_API
SQLEndTran(SQLSMALLINT type, SQLHANDLE handle, SQLSMALLINT comptype)
SQLRETURN SQL_API
SQLTransact(SQLHENV env, SQLHDBC dbc, SQLUSMALLINT type)
SQLRETURN SQL_API
SQLCopyDesc(SQLHDESC source, SQLHDESC target)
SQLRETURN SQL_API
SQLNativeSql(SQLHSTMT stmt, SQLCHAR *sqlin, SQLINTEGER sqlinLen,
SQLCHAR *sql, SQLINTEGER sqlMax, SQLINTEGER *sqlLen)
SQLRETURN SQL_API
SQLNativeSqlW(SQLHSTMT stmt, SQLWCHAR *sqlin, SQLINTEGER sqlinLen,
SQLWCHAR *sql, SQLINTEGER sqlMax, SQLINTEGER *sqlLen)
static COL procSpec2[] = ;
static COL procSpec3[] = ;
SQLRETURN SQL_API
SQLProcedures(SQLHSTMT stmt,
SQLCHAR *catalog, SQLSMALLINT catalogLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *proc, SQLSMALLINT procLen)
SQLRETURN SQL_API
SQLProceduresW(SQLHSTMT stmt,
SQLWCHAR *catalog, SQLSMALLINT catalogLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *proc, SQLSMALLINT procLen)
static COL procColSpec2[] = ;
static COL procColSpec3[] = ;
SQLRETURN SQL_API
SQLProcedureColumns(SQLHSTMT stmt,
SQLCHAR *catalog, SQLSMALLINT catalogLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *proc, SQLSMALLINT procLen,
SQLCHAR *column, SQLSMALLINT columnLen)
SQLRETURN SQL_API
SQLProcedureColumnsW(SQLHSTMT stmt,
SQLWCHAR *catalog, SQLSMALLINT catalogLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *proc, SQLSMALLINT procLen,
SQLWCHAR *column, SQLSMALLINT columnLen)
SQLRETURN SQL_API
SQLGetEnvAttr(SQLHENV env, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER len, SQLINTEGER *lenp)
SQLRETURN SQL_API
SQLSetEnvAttr(SQLHENV env, SQLINTEGER attr, SQLPOINTER val, SQLINTEGER len)
static SQLRETURN
drvgetdiagrec(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLCHAR *sqlstate, SQLINTEGER *nativeerr, SQLCHAR *msg,
SQLSMALLINT buflen, SQLSMALLINT *msglen)
#if !defined(WINTERFACE) || (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC))
SQLRETURN SQL_API
SQLGetDiagRec(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLCHAR *sqlstate, SQLINTEGER *nativeerr, SQLCHAR *msg,
SQLSMALLINT buflen, SQLSMALLINT *msglen)
#if !defined(HAVE_UNIXODBC) || !(HAVE_UNIXODBC)
SQLRETURN SQL_API
SQLGetDiagRecW(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLWCHAR *sqlstate, SQLINTEGER *nativeerr, SQLWCHAR *msg,
SQLSMALLINT buflen, SQLSMALLINT *msglen)
static SQLRETURN
drvgetdiagfield(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLSMALLINT id, SQLPOINTER info,
SQLSMALLINT buflen, SQLSMALLINT *stringlen)
SQLRETURN SQL_API
SQLGetDiagField(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLSMALLINT id, SQLPOINTER info,
SQLSMALLINT buflen, SQLSMALLINT *stringlen)
SQLRETURN SQL_API
SQLGetDiagFieldW(SQLSMALLINT htype, SQLHANDLE handle, SQLSMALLINT recno,
SQLSMALLINT id, SQLPOINTER info,
SQLSMALLINT buflen, SQLSMALLINT *stringlen)
static SQLRETURN
drvgetstmtattr(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
#if (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC)) || !defined(WINTERFACE)
SQLRETURN SQL_API
SQLGetStmtAttr(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
SQLRETURN SQL_API
SQLGetStmtAttrW(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
static SQLRETURN
drvsetstmtattr(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER buflen)
#if (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC)) || !defined(WINTERFACE)
SQLRETURN SQL_API
SQLSetStmtAttr(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER buflen)
SQLRETURN SQL_API
SQLSetStmtAttrW(SQLHSTMT stmt, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER buflen)
static SQLRETURN
drvgetstmtoption(SQLHSTMT stmt, SQLUSMALLINT opt, SQLPOINTER param)
SQLRETURN SQL_API
SQLGetStmtOption(SQLHSTMT stmt, SQLUSMALLINT opt, SQLPOINTER param)
SQLRETURN SQL_API
SQLGetStmtOptionW(SQLHSTMT stmt, SQLUSMALLINT opt, SQLPOINTER param)
static SQLRETURN
drvsetstmtoption(SQLHSTMT stmt, SQLUSMALLINT opt, SQLUINTEGER param)
SQLRETURN SQL_API
SQLSetStmtOption(SQLHSTMT stmt, SQLUSMALLINT opt,
SETSTMTOPTION_LAST_ARG_TYPE param)
SQLRETURN SQL_API
SQLSetStmtOptionW(SQLHSTMT stmt, SQLUSMALLINT opt,
SETSTMTOPTION_LAST_ARG_TYPE param)
static SQLRETURN
chkunbound(STMT *s)
static SQLRETURN
setposbind(STMT *s, sqlite4_stmt *stmt, int i, int si, int rsi)
static SQLRETURN
setposibind(STMT *s, sqlite4_stmt *stmt, int i, int si, int rsi)
static SQLRETURN
setposrefr(STMT *s, int rsi)
static SQLRETURN
drvsetpos(SQLHSTMT stmt, SQLSETPOSIROW row, SQLUSMALLINT op, SQLUSMALLINT lock)
SQLRETURN SQL_API
SQLSetPos(SQLHSTMT stmt, SQLSETPOSIROW row, SQLUSMALLINT op, SQLUSMALLINT lock)
static SQLRETURN
drvbulkoperations(SQLHSTMT stmt, SQLSMALLINT op)
SQLRETURN SQL_API
SQLBulkOperations(SQLHSTMT stmt, SQLSMALLINT oper)
SQLRETURN SQL_API
SQLSetScrollOptions(SQLHSTMT stmt, SQLUSMALLINT concur, SQLLEN rowkeyset,
SQLUSMALLINT rowset)
#define strmak(dst, src, max, lenp)
static SQLRETURN
drvgetinfo(SQLHDBC dbc, SQLUSMALLINT type, SQLPOINTER val, SQLSMALLINT valMax,
SQLSMALLINT *valLen)
#if (defined(HAVE_UNIXODBC) && (HAVE_UNIXODBC)) || !defined(WINTERFACE)
SQLRETURN SQL_API
SQLGetInfo(SQLHDBC dbc, SQLUSMALLINT type, SQLPOINTER val, SQLSMALLINT valMax,
SQLSMALLINT *valLen)
SQLRETURN SQL_API
SQLGetInfoW(SQLHDBC dbc, SQLUSMALLINT type, SQLPOINTER val, SQLSMALLINT valMax,
SQLSMALLINT *valLen)
SQLRETURN SQL_API
SQLGetFunctions(SQLHDBC dbc, SQLUSMALLINT func,
SQLUSMALLINT *flags)
static SQLRETURN
drvallocenv(SQLHENV *env)
SQLRETURN SQL_API
SQLAllocEnv(SQLHENV *env)
static SQLRETURN
drvfreeenv(SQLHENV env)
SQLRETURN SQL_API
SQLFreeEnv(SQLHENV env)
static SQLRETURN
drvallocconnect(SQLHENV env, SQLHDBC *dbc)
SQLRETURN SQL_API
SQLAllocConnect(SQLHENV env, SQLHDBC *dbc)
static SQLRETURN
drvfreeconnect(SQLHDBC dbc)
SQLRETURN SQL_API
SQLFreeConnect(SQLHDBC dbc)
static SQLRETURN
drvgetconnectattr(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
SQLRETURN SQL_API
SQLGetConnectAttr(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
SQLRETURN SQL_API
SQLGetConnectAttrW(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER bufmax, SQLINTEGER *buflen)
static SQLRETURN
drvsetconnectattr(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER len)
SQLRETURN SQL_API
SQLSetConnectAttr(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER len)
SQLRETURN SQL_API
SQLSetConnectAttrW(SQLHDBC dbc, SQLINTEGER attr, SQLPOINTER val,
SQLINTEGER len)
static SQLRETURN
drvgetconnectoption(SQLHDBC dbc, SQLUSMALLINT opt, SQLPOINTER param)
SQLRETURN SQL_API
SQLGetConnectOption(SQLHDBC dbc, SQLUSMALLINT opt, SQLPOINTER param)
SQLRETURN SQL_API
SQLGetConnectOptionW(SQLHDBC dbc, SQLUSMALLINT opt, SQLPOINTER param)
static SQLRETURN
drvsetconnectoption(SQLHDBC dbc, SQLUSMALLINT opt, SQLUINTEGER param)
SQLRETURN SQL_API
SQLSetConnectOption(SQLHDBC dbc, SQLUSMALLINT opt, SQLULEN param)
SQLRETURN SQL_API
SQLSetConnectOptionW(SQLHDBC dbc, SQLUSMALLINT opt, SQLULEN param)
#if defined(WITHOUT_DRIVERMGR) || (!defined(_WIN32) && !defined(_WIN64))
static int
getdsnattr(char *dsn, char *attr, char *out, int outLen)
static SQLRETURN
drvconnect(SQLHDBC dbc, SQLCHAR *dsn, SQLSMALLINT dsnLen, char *pwd,
int pwdLen, int isu)
SQLRETURN SQL_API
SQLConnect(SQLHDBC dbc, SQLCHAR *dsn, SQLSMALLINT dsnLen,
SQLCHAR *uid, SQLSMALLINT uidLen,
SQLCHAR *pwd, SQLSMALLINT pwdLen)
SQLRETURN SQL_API
SQLConnectW(SQLHDBC dbc, SQLWCHAR *dsn, SQLSMALLINT dsnLen,
SQLWCHAR *uid, SQLSMALLINT uidLen,
SQLWCHAR *pwd, SQLSMALLINT pwdLen)
static SQLRETURN
drvdisconnect(SQLHDBC dbc)
SQLRETURN SQL_API
SQLDisconnect(SQLHDBC dbc)
#if defined(WITHOUT_DRIVERMGR) || (!defined(_WIN32) && !defined(_WIN64))
static SQLRETURN
drvdriverconnect(SQLHDBC dbc, SQLHWND hwnd,
SQLCHAR *connIn, SQLSMALLINT connInLen,
SQLCHAR *connOut, SQLSMALLINT connOutMax,
SQLSMALLINT *connOutLen, SQLUSMALLINT drvcompl)
static SQLRETURN
freestmt(SQLHSTMT stmt)
static SQLRETURN
drvallocstmt(SQLHDBC dbc, SQLHSTMT *stmt)
SQLRETURN SQL_API
SQLAllocStmt(SQLHDBC dbc, SQLHSTMT *stmt)
static SQLRETURN
drvfreestmt(SQLHSTMT stmt, SQLUSMALLINT opt)
SQLRETURN SQL_API
SQLFreeStmt(SQLHSTMT stmt, SQLUSMALLINT opt)
SQLRETURN SQL_API
SQLCancel(SQLHSTMT stmt)
static SQLRETURN
drvgetcursorname(SQLHSTMT stmt, SQLCHAR *cursor, SQLSMALLINT buflen,
SQLSMALLINT *lenp)
SQLRETURN SQL_API
SQLGetCursorName(SQLHSTMT stmt, SQLCHAR *cursor, SQLSMALLINT buflen,
SQLSMALLINT *lenp)
SQLRETURN SQL_API
SQLGetCursorNameW(SQLHSTMT stmt, SQLWCHAR *cursor, SQLSMALLINT buflen,
SQLSMALLINT *lenp)
static SQLRETURN
drvsetcursorname(SQLHSTMT stmt, SQLCHAR *cursor, SQLSMALLINT len)
SQLRETURN SQL_API
SQLSetCursorName(SQLHSTMT stmt, SQLCHAR *cursor, SQLSMALLINT len)
SQLRETURN SQL_API
SQLSetCursorNameW(SQLHSTMT stmt, SQLWCHAR *cursor, SQLSMALLINT len)
SQLRETURN SQL_API
SQLCloseCursor(SQLHSTMT stmt)
SQLRETURN SQL_API
SQLAllocHandle(SQLSMALLINT type, SQLHANDLE input, SQLHANDLE *output)
SQLRETURN SQL_API
SQLFreeHandle(SQLSMALLINT type, SQLHANDLE h)
static void
freedyncols(STMT *s)
static void
freeresult(STMT *s, int clrcols)
static void
unbindcols(STMT *s)
static SQLRETURN
mkbindcols(STMT *s, int ncols)
static SQLRETURN
getrowdata(STMT *s, SQLUSMALLINT col, SQLSMALLINT otype,
SQLPOINTER val, SQLINTEGER len, SQLLEN *lenp, int partial)
static SQLRETURN
drvbindcol(SQLHSTMT stmt, SQLUSMALLINT col, SQLSMALLINT type,
SQLPOINTER val, SQLLEN max, SQLLEN *lenp)
SQLRETURN SQL_API
SQLBindCol(SQLHSTMT stmt, SQLUSMALLINT col, SQLSMALLINT type,
SQLPOINTER val, SQLLEN max, SQLLEN *lenp)
static COL tableSpec2[] = ;
static COL tableSpec3[] = ;
static SQLRETURN
drvtables(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLCHAR *type, SQLSMALLINT typeLen)
SQLRETURN SQL_API
SQLTables(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLCHAR *type, SQLSMALLINT typeLen)
SQLRETURN SQL_API
SQLTablesW(SQLHSTMT stmt,
SQLWCHAR *cat, SQLSMALLINT catLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen,
SQLWCHAR *type, SQLSMALLINT typeLen)
static COL colSpec2[] = ;
static COL colSpec3[] = ;
static SQLRETURN
drvcolumns(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLCHAR *col, SQLSMALLINT colLen)
SQLRETURN SQL_API
SQLColumns(SQLHSTMT stmt,
SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLCHAR *col, SQLSMALLINT colLen)
SQLRETURN SQL_API
SQLColumnsW(SQLHSTMT stmt,
SQLWCHAR *cat, SQLSMALLINT catLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen,
SQLWCHAR *col, SQLSMALLINT colLen)
static COL typeSpec2[] = ;
static COL typeSpec3[] = ;
static void
mktypeinfo(STMT *s, int row, int asize, char *typename, int type, int tind)
static int
typeinfosort(const void *a, const void *b)
static SQLRETURN
drvgettypeinfo(SQLHSTMT stmt, SQLSMALLINT sqltype)
SQLRETURN SQL_API
SQLGetTypeInfo(SQLHSTMT stmt, SQLSMALLINT sqltype)
SQLRETURN SQL_API
SQLGetTypeInfoW(SQLHSTMT stmt, SQLSMALLINT sqltype)
static COL statSpec2[] = ;
static COL statSpec3[] = ;
static SQLRETURN
drvstatistics(SQLHSTMT stmt, SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT itype, SQLUSMALLINT resv)
SQLRETURN SQL_API
SQLStatistics(SQLHSTMT stmt, SQLCHAR *cat, SQLSMALLINT catLen,
SQLCHAR *schema, SQLSMALLINT schemaLen,
SQLCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT itype, SQLUSMALLINT resv)
SQLRETURN SQL_API
SQLStatisticsW(SQLHSTMT stmt, SQLWCHAR *cat, SQLSMALLINT catLen,
SQLWCHAR *schema, SQLSMALLINT schemaLen,
SQLWCHAR *table, SQLSMALLINT tableLen,
SQLUSMALLINT itype, SQLUSMALLINT resv)
SQLRETURN SQL_API
SQLGetData(SQLHSTMT stmt, SQLUSMALLINT col, SQLSMALLINT type,
SQLPOINTER val, SQLLEN len, SQLLEN *lenp)
static SQLRETURN
dofetchbind(STMT *s, int rsi)
static SQLRETURN
drvfetchscroll(SQLHSTMT stmt, SQLSMALLINT orient, SQLINTEGER offset)
SQLRETURN SQL_API
SQLFetch(SQLHSTMT stmt)
SQLRETURN SQL_API
SQLFetchScroll(SQLHSTMT stmt, SQLSMALLINT orient, SQLLEN offset)
SQLRETURN SQL_API
SQLExtendedFetch(SQLHSTMT stmt, SQLUSMALLINT orient, SQLROWOFFSET offset,
SQLROWSETSIZE *rowcount, SQLUSMALLINT *rowstatus)
SQLRETURN SQL_API
SQLRowCount(SQLHSTMT stmt, SQLLEN *nrows)
SQLRETURN SQL_API
SQLNumResultCols(SQLHSTMT stmt, SQLSMALLINT *ncols)
static SQLRETURN
drvdescribecol(SQLHSTMT stmt, SQLUSMALLINT col, SQLCHAR *name,
SQLSMALLINT nameMax, SQLSMALLINT *nameLen,
SQLSMALLINT *type, SQLULEN *size,
SQLSMALLINT *digits, SQLSMALLINT *nullable)
SQLRETURN SQL_API
SQLDescribeCol(SQLHSTMT stmt, SQLUSMALLINT col, SQLCHAR *name,
SQLSMALLINT nameMax, SQLSMALLINT *nameLen,
SQLSMALLINT *type, SQLULEN *size,
SQLSMALLINT *digits, SQLSMALLINT *nullable)
SQLRETURN SQL_API
SQLDescribeColW(SQLHSTMT stmt, SQLUSMALLINT col, SQLWCHAR *name,
SQLSMALLINT nameMax, SQLSMALLINT *nameLen,
SQLSMALLINT *type, SQLULEN *size,
SQLSMALLINT *digits, SQLSMALLINT *nullable)
static SQLRETURN
drvcolattributes(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
SQLLEN *val2)
SQLRETURN SQL_API
SQLColAttributes(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
SQLLEN *val2)
SQLRETURN SQL_API
SQLColAttributesW(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
SQLLEN *val2)
static SQLRETURN
drvcolattribute(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
SQLPOINTER val2)
SQLRETURN SQL_API
SQLColAttribute(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
COLATTRIBUTE_LAST_ARG_TYPE val2)
SQLRETURN SQL_API
SQLColAttributeW(SQLHSTMT stmt, SQLUSMALLINT col, SQLUSMALLINT id,
SQLPOINTER val, SQLSMALLINT valMax, SQLSMALLINT *valLen,
COLATTRIBUTE_LAST_ARG_TYPE val2)
static SQLRETURN
drverror(SQLHENV env, SQLHDBC dbc, SQLHSTMT stmt,
SQLCHAR *sqlState, SQLINTEGER *nativeErr,
SQLCHAR *errmsg, SQLSMALLINT errmax, SQLSMALLINT *errlen)
SQLRETURN SQL_API
SQLError(SQLHENV env, SQLHDBC dbc, SQLHSTMT stmt,
SQLCHAR *sqlState, SQLINTEGER *nativeErr,
SQLCHAR *errmsg, SQLSMALLINT errmax, SQLSMALLINT *errlen)
SQLRETURN SQL_API
SQLErrorW(SQLHENV env, SQLHDBC dbc, SQLHSTMT stmt,
SQLWCHAR *sqlState, SQLINTEGER *nativeErr,
SQLWCHAR *errmsg, SQLSMALLINT errmax, SQLSMALLINT *errlen)
SQLRETURN SQL_API
SQLMoreResults(SQLHSTMT stmt)
static SQLRETURN
setupdyncols(STMT *s, sqlite4_stmt *s4stmt, int *ncolsp)
static SQLRETURN
drvprepare(SQLHSTMT stmt, SQLCHAR *query, SQLINTEGER queryLen)
static SQLRETURN
drvexecute(SQLHSTMT stmt, int initial)
SQLRETURN SQL_API
SQLPrepare(SQLHSTMT stmt, SQLCHAR *query, SQLINTEGER queryLen)
SQLRETURN SQL_API
SQLPrepareW(SQLHSTMT stmt, SQLWCHAR *query, SQLINTEGER queryLen)
SQLRETURN SQL_API
SQLExecute(SQLHSTMT stmt)
SQLRETURN SQL_API
SQLExecDirect(SQLHSTMT stmt, SQLCHAR *query, SQLINTEGER queryLen)
SQLRETURN SQL_API
SQLExecDirectW(SQLHSTMT stmt, SQLWCHAR *query, SQLINTEGER queryLen)
#if defined(_WIN32) || defined(_WIN64)
#define MAXPATHLEN      (259+1)
#define MAXKEYLEN       (15+1)
#define MAXDESC         (255+1)
#define MAXDSNAME       (32+1)
#define MAXTONAME       (32+1)
#define MAXDBNAME       MAXPATHLEN
#define KEY_DSN 		0
#define KEY_DESC		1
#define KEY_DBNAME		2
#define KEY_BUSY		3
#define KEY_DRIVER		4
#define KEY_STEPAPI		5
#define KEY_SYNCP		6
#define KEY_NOTXN		7
#define KEY_SHORTNAM		8
#define KEY_LONGNAM		9
#define KEY_NOCREAT	       10
#define KEY_NOWCHAR	       11
#define KEY_LOADEXT	       12
#define KEY_JMODE              13
#define KEY_FKSUPPORT          14
#define KEY_OEMCP              15
#define KEY_BIGINT             16
#define KEY_PASSWD             17
#define NUMOFKEYS	       18
typedef struct  ATTR;
typedef struct  SETUPDLG;
static struct  attrLookup[] = ;
static void
ParseAttributes(LPCSTR attribs, SETUPDLG *setupdlg)
static BOOL
SetDSNAttributes(HWND parent, SETUPDLG *setupdlg)
static void
GetAttributes(SETUPDLG *setupdlg)
static void
GetDBFile(HWND hdlg)
static BOOL CALLBACK
ConfigDlgProc(HWND hdlg, WORD wmsg, WPARAM wparam, LPARAM lparam)
BOOL INSTAPI
ConfigDSN(HWND hwnd, WORD request, LPCSTR driver, LPCSTR attribs)
static BOOL CALLBACK
DriverConnectProc(HWND hdlg, WORD wmsg, WPARAM wparam, LPARAM lparam)
static SQLRETURN
drvdriverconnect(SQLHDBC dbc, SQLHWND hwnd,
SQLCHAR *connIn, SQLSMALLINT connInLen,
SQLCHAR *connOut, SQLSMALLINT connOutMax,
SQLSMALLINT *connOutLen, SQLUSMALLINT drvcompl)
SQLRETURN SQL_API
SQLDriverConnect(SQLHDBC dbc, SQLHWND hwnd,
SQLCHAR *connIn, SQLSMALLINT connInLen,
SQLCHAR *connOut, SQLSMALLINT connOutMax,
SQLSMALLINT *connOutLen, SQLUSMALLINT drvcompl)
SQLRETURN SQL_API
SQLDriverConnectW(SQLHDBC dbc, SQLHWND hwnd,
SQLWCHAR *connIn, SQLSMALLINT connInLen,
SQLWCHAR *connOut, SQLSMALLINT connOutMax,
SQLSMALLINT *connOutLen, SQLUSMALLINT drvcompl)
#if defined(_WIN32) || defined(_WIN64)
BOOL APIENTRY
LibMain(HANDLE hinst, DWORD reason, LPVOID reserved)
int __stdcall
DllMain(HANDLE hinst, DWORD reason, LPVOID reserved)
static BOOL
InUnError(char *name)
static BOOL
InUn(int remove, char *cmdline)
void CALLBACK
install(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
void CALLBACK
uninstall(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
static void
setargv(int *argcp, char ***argvp, char *cmdline, char *argv0)
void CALLBACK
shell(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
#if defined(HAVE_ODBCINSTEXT_H) && (HAVE_ODBCINSTEXT_H)
int
ODBCINSTGetProperties(HODBCINSTPROPERTY prop)
static void
dls_void(void)
static int
dls_error(void)
static int
dls_0(void)
static double
dls_00(void)
static void *
dls_null(void)
static const char *
dls_empty(void)
static int
dls_snull(void)
#define DLS_ENT(name, func)						\
#define DLS_ENT3(name, off, func)					\
#define DLS_END
static struct  dls_nametab[] = ;
#if defined(_WIN32) || defined(_WIN64)
static HMODULE sqlite4_dll = 0;
static void
dls_init(void)
static void
dls_fini(void)
static void *libsqlite4_so = 0;
void
dls_init(void)
void
dls_fini(void)
