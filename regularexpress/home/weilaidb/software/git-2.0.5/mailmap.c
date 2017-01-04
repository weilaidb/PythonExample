#define DEBUG_MAILMAP 0
#if DEBUG_MAILMAP
#define debug_mm(...) fprintf(stderr, __VA_ARGS__)
#define debug_str(X) ((X) ? (X) : "(none)")
static inline void debug_mm(const char *format, ...)
static inline const char *debug_str(const char *s)
const char *git_mailmap_file;
const char *git_mailmap_blob;
struct mailmap_info ;
struct mailmap_entry ;
static void free_mailmap_info(void *p, const char *s)
static void free_mailmap_entry(void *p, const char *s)
static int namemap_cmp(const char *a, const char *b)
static void add_mapping(struct string_list *map,
char *new_name, char *new_email,
char *old_name, char *old_email)
static char *parse_name_and_email(char *buffer, char **name,
char **email, int allow_empty_email)
static void read_mailmap_line(struct string_list *map, char *buffer,
char **repo_abbrev)
static int read_mailmap_file(struct string_list *map, const char *filename,
char **repo_abbrev)
static void read_mailmap_string(struct string_list *map, char *buf,
char **repo_abbrev)
static int read_mailmap_blob(struct string_list *map,
const char *name,
char **repo_abbrev)
int read_mailmap(struct string_list *map, char **repo_abbrev)
void clear_mailmap(struct string_list *map)
static struct string_list_item *lookup_prefix(struct string_list *map,
const char *string, size_t len)
int map_user(struct string_list *map,
const char **email, size_t *emaillen,
const char **name, size_t *namelen)
