typedef enum  __db_config_type;
typedef struct __db_config_desc  CFG_DESC;
typedef int (*CFG_FUNC_STRING) __P((DB_ENV *, const char *));
typedef int (*CFG_FUNC_INT) __P((DB_ENV *, int));
typedef int (*CFG_FUNC_LONG) __P((DB_ENV *, long));
typedef int (*CFG_FUNC_UINT) __P((DB_ENV *, u_int32_t));
typedef int (*CFG_FUNC_2INT) __P((DB_ENV *, int, int));
typedef int (*CFG_FUNC_2UINT) __P((DB_ENV *, u_int32_t, u_int32_t));
static const CFG_DESC config_descs[] = ;
static const FN config_mem_init[] = ;
static const FN config_rep_config[] = ;
static const FN config_rep_timeout[] = ;
static const FN config_repmgr_ack_policy[] = ;
static const FN config_repmgr_site[] = ;
static const FN config_set_flags[] = ;
static const FN config_set_flags_forlog[] = ;
static const FN config_log_set_config[] = ;
static const FN config_set_lk_detect[] = ;
static const FN config_set_open_flags[] = ;
static const FN config_set_verbose[] = ;
static int __config_format_err __P((ENV *, int, char *));
static int __config_parse __P((ENV *, char *, int));
static int __config_scan __P((char *, char **, const CFG_DESC **));
static int __config_set_param
__P((DB_ENV *, const CFG_DESC *, int, char **, int));
static int cmp_cfg_name __P((const void *, const void *element));
int
__env_read_db_config(env)
ENV *env;
#undef	CFG_GET_INT
#define	CFG_GET_INT(s, vp) do  while (0)
#undef	CFG_GET_LONG
#define	CFG_GET_LONG(s, vp) do  while (0)
#undef	CFG_GET_UINT
#define	CFG_GET_UINT(s, vp) do  while (0)
#undef	CFG_GET_UINT32
#define	CFG_GET_UINT32(s, vp) do  while (0)
#undef	CFG_SLOTS
#define	CFG_SLOTS	10
static int
__config_format_err(env, lc, str)
ENV *env;
int lc;
char *str;
static int
__config_parse(env, s, lc)
ENV *env;
char *s;
int lc;
static int
__config_set_param(dbenv, desc, nf, argv, lc)
DB_ENV *dbenv;
const CFG_DESC *desc;
int nf;
char **argv;
int lc;
static int
cmp_cfg_name(sought, element)
const void *sought;
const void *element;
static int
__config_scan(input, argv, descptr)
char *input, *argv[CFG_SLOTS];
const CFG_DESC **descptr;
