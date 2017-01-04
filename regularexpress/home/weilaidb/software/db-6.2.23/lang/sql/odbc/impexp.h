#define _IMPEXP_H
int impexp_import_sql(sqlite3 *db, char *filename);
int impexp_export_sql(sqlite3 *db, char *filename, int mode, ...);
int impexp_export_csv(sqlite3 *db, char *filename, int hdr, ...);
int impexp_export_xml(sqlite3 *db, char *filename,
int append, int indent, char *root,
char *item, char *tablename, char *schema);
typedef void (*impexp_putc)(int c, void *arg);
int impexp_export_json(sqlite3 *db, char *sql, impexp_putc pfunc,
void *parg);
int impexp_init(sqlite3 *db);
