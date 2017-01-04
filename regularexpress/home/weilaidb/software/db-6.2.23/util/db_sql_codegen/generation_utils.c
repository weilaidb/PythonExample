static int
is_tab_or_space(c)
int c;
char *
prepare_string(in, indent_level, is_comment)
const char *in;
int indent_level;
int is_comment;
void
iterate_over_attributes(e, a_op)
ENTITY *e;
attribute_operation a_op;
void
iterate_over_entities(e_enter_op, e_exit_op, a_op)
enter_entity_operation e_enter_op;
exit_entity_operation e_exit_op;
attribute_operation a_op;
void
iterate_over_indexes(i_op)
index_operation i_op;
int
is_array(t)
ATTR_TYPE *t;
int
is_string(t)
ATTR_TYPE *t;
char *
custom_comparator_for_type(t)
ATTR_TYPE *t;
char *
array_dim_name(e, a)
ENTITY *e;
ATTRIBUTE *a;
char *
decl_name(e, a)
ENTITY *e;
ATTRIBUTE *a;
char *
serialized_length_name(e)
ENTITY *e;
char *
upcase_env_name(envp)
ENVIRONMENT_INFO *envp;
