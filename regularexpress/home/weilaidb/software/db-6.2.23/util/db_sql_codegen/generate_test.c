extern int maxbinsz;
static FILE *test_file;
static int test_indent_level = 0;
static void pr_test(char *, ...);
static void pr_test_comment(char *, ...);
static void callback_function_enter_entop(ENTITY *);
static void callback_function_exit_entop(ENTITY *);
static void callback_function_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void declare_record_instances_enter_entop(ENTITY *);
static void initialize_database_enter_entop(ENTITY *);
static void initialize_index_enter_entop(DB_INDEX *);
static void insertion_test_enter_entop(ENTITY *);
static void insertion_test_exit_entop(ENTITY *);
static void insertion_test_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void retrieval_test_enter_entop(ENTITY *);
static void retrieval_test_exit_entop(ENTITY *);
static void retrieval_test_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void invoke_full_iteration_enter_entop(ENTITY *);
static void invoke_full_iteration_exit_entop(ENTITY *e);
static void invoke_query_iteration_idxop(DB_INDEX *);
static void deletion_test_enter_entop(ENTITY *);
static void deletion_test_exit_entop(ENTITY *e);
static void close_secondary_test_idxop(DB_INDEX *);
static void close_primary_test_enter_entop(ENTITY *);
static void remove_secondary_test_idxop(DB_INDEX *);
static void remove_primary_test_enter_entop(ENTITY *);
void
generate_test(tfile, hfilename)
FILE *tfile;
char *hfilename;
static void
pr_test(char *fmt, ...)
static void
pr_test_comment(char *fmt, ...)
static char *
format_string_for_type(ATTR_TYPE *t)
static char *
data_value_for_type(ATTR_TYPE *t)
static void
declare_record_instances_enter_entop(ENTITY *e)
static void
initialize_database_enter_entop(ENTITY *e)
static void
initialize_index_enter_entop(DB_INDEX *idx)
static void
invoke_full_iteration_enter_entop(ENTITY *e)
static void
invoke_full_iteration_exit_entop(ENTITY *e)
static void
invoke_query_iteration_idxop(DB_INDEX *idx)
static void
insertion_test_enter_entop(ENTITY *e)
static void
insertion_test_exit_entop(ENTITY *e)
static void
insertion_test_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
callback_function_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
callback_function_enter_entop(ENTITY *e)
static void
retrieval_test_enter_entop(ENTITY *e)
static void
retrieval_test_exit_entop(ENTITY *e)
static void
retrieval_test_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
deletion_test_enter_entop(ENTITY *e)
static void
deletion_test_exit_entop(ENTITY *e)
static void
close_primary_test_enter_entop(ENTITY *e)
static void
close_secondary_test_idxop(DB_INDEX *idx)
static void
remove_primary_test_enter_entop(ENTITY *e)
static void
remove_secondary_test_idxop(DB_INDEX *idx)
