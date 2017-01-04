extern int maxbinsz;
#define	CASENUM 19
#define	CTYPENUM 4
char * data_set[CASENUM][CTYPENUM] = ;
static FILE *test_file;
static int round = 0;
static int test_indent_level = 0;
void generate_verification(FILE *, char *);
static void pr_test(char *, ...);
static void pr_test_comment(char *, ...);
static void callback_function_enter_entop(ENTITY *);
static void callback_function_exit_entop(ENTITY *);
static void callback_function_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void declare_record_instances_enter_entop(ENTITY *);
static void define_records_enter_entop(ENTITY *);
static void define_records_exit_entop(ENTITY *);
static void define_records_fields_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void initialize_database_enter_entop(ENTITY *);
static void initialize_index_enter_entop(DB_INDEX *);
static void insertion_test_enter_entop(ENTITY *);
static void insertion_test_exit_entop(ENTITY *);
static void insertion_test_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void retrieval_test_enter_entop(ENTITY *);
static void retrieval_test_exit_entop(ENTITY *);
static void retrieval_test_attrop(ENTITY *, ATTRIBUTE *, int, int);
static void invoke_full_iteration_enter_entop(ENTITY *);
static void invoke_full_iteration_exit_entop(ENTITY *);
static void invoke_query_iteration_idxop(DB_INDEX *);
static void deletion_test_enter_entop(ENTITY *);
static void deletion_test_exit_entop(ENTITY *);
static void close_secondary_test_idxop(DB_INDEX *);
static void close_primary_test_enter_entop(ENTITY *);
static void remove_secondary_test_idxop(DB_INDEX *);
static void remove_primary_test_enter_entop(ENTITY *);
void
generate_verification(vfile, hfilename)
FILE *vfile;
char *hfilename;
static void
pr_test(char *fmt, ...)
static void
pr_test_comment(char *fmt, ...)
static char *
data_value_for_type(ATTR_TYPE *t)
static void
define_records_enter_entop(ENTITY *e)
static void
define_records_fields_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
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
{
ATTRIBUTE *a = idx->attribute;
pr_test("for (i = 0; i < %d; i++) {\n", CASENUM);
test_indent_level++;
pr_test("count_iteration = 0;\n");
pr_test("%s_query_iteration(%s_dbp, %s%s",
idx->name, idx->name,
idx->primary->transactional ? the_schema.environment.name : "",
idx->primary->transactional ? "_txnp, " : "");
pr_test("%s_record_array[i].%s",
idx->primary->name, a->name);
pr_test(
",\n   &%s_iteration_callback_test,                             \n\
\"retrieval of %s record through %s query\");\n\n",
idx->primary->name, idx->primary->name, idx->name);
pr_test(
"printf(\"%s_record_array[%%d].%s: %%d\\n\", i, count_iteration);\n",
idx->primary->name, a->name,
idx->primary->name, a->name);
if (is_array(a->type) && !is_string(a->type))  else
static void
insertion_test_enter_entop(ENTITY *e)
static void
insertion_test_exit_entop(ENTITY *e)
static void
insertion_test_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
callback_function_enter_entop(ENTITY *e)
static void
callback_function_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
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
