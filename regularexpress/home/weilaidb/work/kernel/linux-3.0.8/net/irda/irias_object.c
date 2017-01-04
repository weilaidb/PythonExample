hashbin_t *irias_objects;
struct ias_value irias_missing = ;
struct ias_object *irias_new_object( char *name, int id)
EXPORT_SYMBOL(irias_new_object);
static void __irias_delete_attrib(struct ias_attrib *attrib)
void __irias_delete_object(struct ias_object *obj)
int irias_delete_object(struct ias_object *obj)
EXPORT_SYMBOL(irias_delete_object);
int irias_delete_attrib(struct ias_object *obj, struct ias_attrib *attrib,
int cleanobject)
void irias_insert_object(struct ias_object *obj)
EXPORT_SYMBOL(irias_insert_object);
struct ias_object *irias_find_object(char *name)
EXPORT_SYMBOL(irias_find_object);
struct ias_attrib *irias_find_attrib(struct ias_object *obj, char *name)
static void irias_add_attrib(struct ias_object *obj, struct ias_attrib *attrib,
int owner)
int irias_object_change_attribute(char *obj_name, char *attrib_name,
struct ias_value *new_value)
EXPORT_SYMBOL(irias_object_change_attribute);
void irias_add_integer_attrib(struct ias_object *obj, char *name, int value,
int owner)
EXPORT_SYMBOL(irias_add_integer_attrib);
void irias_add_octseq_attrib(struct ias_object *obj, char *name, __u8 *octets,
int len, int owner)
EXPORT_SYMBOL(irias_add_octseq_attrib);
void irias_add_string_attrib(struct ias_object *obj, char *name, char *value,
int owner)
EXPORT_SYMBOL(irias_add_string_attrib);
struct ias_value *irias_new_integer_value(int integer)
EXPORT_SYMBOL(irias_new_integer_value);
struct ias_value *irias_new_string_value(char *string)
struct ias_value *irias_new_octseq_value(__u8 *octseq , int len)
struct ias_value *irias_new_missing_value(void)
void irias_delete_value(struct ias_value *value)
EXPORT_SYMBOL(irias_delete_value);
