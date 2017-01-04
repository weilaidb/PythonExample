#define PYSQLITE_ROW_H
typedef struct _Row
pysqlite_Row;
extern PyTypeObject pysqlite_RowType;
int pysqlite_row_setup_types(void);
