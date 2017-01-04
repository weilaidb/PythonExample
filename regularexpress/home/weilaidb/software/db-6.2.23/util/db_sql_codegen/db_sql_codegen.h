struct __db_schema;        typedef struct __db_schema DB_SCHEMA;
struct __parse_progress;   typedef struct __parse_progress PARSE_PROGRESS;
struct __environment_info; typedef struct __environment_info ENVIRONMENT_INFO;
struct __db_entity;        typedef struct __db_entity ENTITY;
struct __db_attribute;     typedef struct __db_attribute ATTRIBUTE;
struct __db_attr_type;     typedef struct __db_attr_type ATTR_TYPE;
struct __db_index;         typedef struct __db_index DB_INDEX;
struct __environment_info ;
struct __db_schema ;
struct __db_entity ;
struct __db_attribute ;
struct __db_attr_type ;
struct __db_index ;
enum parse_event ;
struct __parse_progress ;
extern DB_SCHEMA the_schema;
extern PARSE_PROGRESS the_parse_progress;
extern int line_number;
extern int debug;
extern int txnflag;
extern char *me;
#define MAX_SQL_LENGTH 1000000000
#define KILO (1024)
#define MEGA (KILO * KILO)
#define GIGA (MEGA * KILO)
#define TERA (GIGA * KILO)
#if defined (_WIN32) && !defined(__MINGW_H)
#define snprintf sprintf_s
#define strdup _strdup
#define strconcat(dest, size, src) strcat_s(dest, size, src)
#define strnconcat(dest, size, src, count) strncat_s(dest, size, src, count)
#define strconcat(dest, size, src) strcat(dest, src)
#define strnconcat(dest, size, src, count) strncat(dest, src, count)
#define strcasecmp sqlite3StrICmp
extern void generate(FILE *, FILE *, FILE *, FILE *, char *);
extern void generate_test(FILE *, char *);
extern int do_parse(const char *, char **);
extern void parse_hint_comment(Token *);
extern void setString(char **, ...);
extern void preparser(void *, int,Token, Parse *);
extern void bdb_create_database(Token *, Parse *);
#define	COMPQUIET(n, v)	do  while (0)
