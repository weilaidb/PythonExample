typedef void (*enter_entity_operation)(ENTITY *e);
typedef void (*exit_entity_operation)(ENTITY *e);
typedef void (*attribute_operation)(ENTITY *e, ATTRIBUTE *a,
int first, int last);
typedef void (*index_operation)(DB_INDEX *idx);
void iterate_over_entities(enter_entity_operation e_enter_op,
exit_entity_operation e_exit_op,
attribute_operation a_op);
void iterate_over_attributes(ENTITY *e, attribute_operation a_op);
void iterate_over_indexes(index_operation i_op);
char *prepare_string(const char *in, int indent_level, int is_comment);
int is_array(ATTR_TYPE *t);
int is_string(ATTR_TYPE *t);
char *custom_comparator_for_type(ATTR_TYPE *t);
char *array_dim_name(ENTITY *e, ATTRIBUTE *a);
char *decl_name(ENTITY *e, ATTRIBUTE *a);
char *serialized_length_name(ENTITY *e);
char *upcase_env_name(ENVIRONMENT_INFO *envp);
#define INDENT_MULTIPLIER 1
#define INDENT_CHAR '\t'
