static int cat_one_file(int opt, const char *exp_type, const char *obj_name)
struct expand_data ;
static int is_atom(const char *atom, const char *s, int slen)
static void expand_atom(struct strbuf *sb, const char *atom, int len,
void *vdata)
static size_t expand_format(struct strbuf *sb, const char *start, void *data)
static void print_object_or_die(int fd, struct expand_data *data)
struct batch_options ;
static int batch_one_object(const char *obj_name, struct batch_options *opt,
struct expand_data *data)
static int batch_objects(struct batch_options *opt)
static const char * const cat_file_usage[] = ;
static int git_cat_file_config(const char *var, const char *value, void *cb)
static int batch_option_callback(const struct option *opt,
const char *arg,
int unset)
int cmd_cat_file(int argc, const char **argv, const char *prefix)
