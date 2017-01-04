static unsigned short int all_variables;
static void print_variables (const char *string);
static void note_variables (const char *string);
static void subst_from_stdin (void);
int
main (int argc, char *argv[])
static void
find_variables (const char *string,
void (*callback) (const char *var_ptr, size_t var_len))
{
for (; *string != '\0';)
if (*string++ == '$')
static void
print_variable (const char *var_ptr, size_t var_len)
static void
print_variables (const char *string)
typedef struct string_list_ty string_list_ty;
struct string_list_ty
;
static inline void
string_list_init (string_list_ty *slp)
static inline void
string_list_append (string_list_ty *slp, const char *s)
static int
cmp_string (const void *pstr1, const void *pstr2)
static inline void
string_list_sort (string_list_ty *slp)
static int
sorted_string_list_member (const string_list_ty *slp, const char *s)
static string_list_ty variables_set;
static void
note_variable (const char *var_ptr, size_t var_len)
static void
note_variables (const char *string)
static int
do_getc (void)
static inline void
do_ungetc (int c)
static void
subst_from_stdin (void)
{
static char *buffer;
static size_t bufmax;
static size_t buflen;
int c;
for (;;)
