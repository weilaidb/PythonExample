static int	DbRecord_field(DbRecord *, u_int, void *, datatype);
static int	DbRecord_search_field(DbField *, char *, OPERATOR);
static int	DbRecord_search_recno(char *, OPERATOR);
void
DbRecord_print(DbRecord *recordp, FILE *fp)
int
DbRecord_read(u_long recno_ulong, DbRecord *recordp)
int
DbRecord_discard(DbRecord *recordp)
int
DbRecord_init(const DBT *key, const DBT *data, DbRecord *recordp)
static int
DbRecord_field(
DbRecord *recordp, u_int field, void *addr, datatype type)
int
DbRecord_search_field_name(char *field, char *value, OPERATOR op)
int
DbRecord_search_field_number(u_int32_t fieldno, char *value, OPERATOR op)
static int
DbRecord_search_recno(char *value, OPERATOR op)
static int
DbRecord_search_field(DbField *f, char *value, OPERATOR op)
