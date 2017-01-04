static int header_indent_level = 0;
static int code_indent_level = 0;
static FILE *header_file;
static FILE *code_file;
#define	SEPARATE_HEADER (header_file != code_file)
void generate_test(FILE *tfile, char *hfilename);
void generate_verification(FILE *vfile, char *hfilename);
static void check_constraints();
static void generate_config_defines();
static void generate_schema_structs();
static void generate_iteration_callback_typedefs();
static void generate_environment();
static void generate_db_creation_functions();
static void generate_db_removal_functions();
static void generate_insertion_functions();
static void generate_fetch_functions();
static void generate_deletion_functions();
static void generate_full_iterations();
static void generate_index_functions();
static void generate_initialization();
static void pr_header(char *, ...);
static void pr_header_comment(char *, ...);
static void pr_code(char *, ...);
static void pr_code_comment(char *, ...);
static void
pr_code(char *fmt, ...)
static void
pr_code_comment(char *fmt, ...)
static void
pr_header(char *fmt, ...)
static void
pr_header_comment(char *fmt, ...)
static void
generate_config_defines()
static void
generate_environment()
static void
db_create_enter_entop(ENTITY *e)
static void
generate_db_creation_functions()
static void
db_remove_enter_entop(ENTITY *e)
static void
generate_db_removal_functions()
static void
array_dim_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
structs_enter_entop(ENTITY *e)
static void
structs_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
serialized_length_enter_entop(ENTITY *e)
static void
serialized_length_exit_entop(ENTITY *e)
static void
serialized_length_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
generate_schema_structs()
static void
serialize_function_enter_entop(ENTITY *e)
{
static char *header_template =
"                                                                           \n\
int serialize_%s_data(%s_data *%sp,                                         \n\
DBT *key_dbt";
static char *function_template=
" key_dbt->data = %s%sp->%s;						    \n\
key_dbt->size = ";
pr_code(header_template, e->name, e->name, e->name);
if ((e->attributes_head != e->attributes_tail) ||
(e->primary_key != e->attributes_head))
pr_code(
",                                                                          \n\
char *buffer,                                                              \n\
DBT *data_dbt)                                                             \n\
static void
serialize_function_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
deserialize_function_enter_entop(ENTITY *e)
static void
deserialize_function_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
insert_struct_function_enter_entop(ENTITY *e)
static void
insert_fields_list_args_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
insert_fields_declare_args_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
insert_fields_function_enter_entop(ENTITY *e)
static void
insert_fields_function_attrop(ENTITY *e, ATTRIBUTE *a, int first, int last)
static void
generate_insertion_functions()
static void
fetch_function_enter_entop(ENTITY *e)
static void
generate_fetch_functions()
static void
deletion_function_enter_entop(ENTITY *e)
static void
generate_deletion_functions()
static void
declare_extern_database_pointers_enter_entop(ENTITY *e)
static void
declare_database_pointers_enter_entop(ENTITY *e)
static void
declare_extern_secondary_pointers_idxop(DB_INDEX *idx)
static void
declare_secondary_pointers_idxop(DB_INDEX *idx)
static void
create_database_enter_entop(ENTITY *e)
static void
create_secondary_idxop(DB_INDEX *idx)
static void
generate_secondary_key_callback_function(DB_INDEX *idx)
static void
generate_index_creation_function(DB_INDEX *idx)
static void
generate_index_removal_function(DB_INDEX *idx)
static void
generate_index_query_iteration(DB_INDEX *idx)
static void
index_function_idxop(DB_INDEX *idx)
static void
generate_index_functions()
static void
generate_iteration_callback_typedef_enter_entop(ENTITY *e)
static void
generate_iteration_callback_typedefs()
static void
generate_full_iteration_enter_entop(ENTITY *e)
static void
generate_full_iterations()
static void
generate_initialization()
static void
check_pk_constraint_enter_entop(ENTITY *e)
static void
check_constraints()
void generate(hfile, cfile, tfile, vfile, hfilename)
FILE *hfile, *cfile, *tfile, *vfile;
char *hfilename;
