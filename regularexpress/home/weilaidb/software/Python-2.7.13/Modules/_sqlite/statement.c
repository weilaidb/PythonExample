static int pysqlite_check_remaining_sql(const char* tail);
typedef enum  parse_remaining_sql_state;
typedef enum  parameter_type;
int pysqlite_statement_create(pysqlite_Statement* self, pysqlite_Connection* connection, PyObject* sql)
int pysqlite_statement_bind_parameter(pysqlite_Statement* self, int pos, PyObject* parameter, int allow_8bit_chars)
static int _need_adapt(PyObject* obj)
void pysqlite_statement_bind_parameters(pysqlite_Statement* self, PyObject* parameters, int allow_8bit_chars)
int pysqlite_statement_recompile(pysqlite_Statement* self, PyObject* params)
int pysqlite_statement_finalize(pysqlite_Statement* self)
int pysqlite_statement_reset(pysqlite_Statement* self)
void pysqlite_statement_mark_dirty(pysqlite_Statement* self)
void pysqlite_statement_dealloc(pysqlite_Statement* self)
static int pysqlite_check_remaining_sql(const char* tail)
PyTypeObject pysqlite_StatementType = ;
extern int pysqlite_statement_setup_types(void)
