#define MAX_SIZE 10
struct confentry ;
struct configuration ;
struct configuration config=;
void free_configurations()
static int is_only_root_writable(const char *file)
char *resolve_config_path(const char* file_name, const char *root)
int check_configuration_permissions(const char* file_name)
void read_config(const char* file_name)
char * get_value(const char* key)
char ** get_values(const char * key)
char ** extract_values(char *value)
void free_values(char** values)
int get_kv_key(const char *input, char *out, size_t out_len)
int get_kv_value(const char *input, char *out, size_t out_len)
