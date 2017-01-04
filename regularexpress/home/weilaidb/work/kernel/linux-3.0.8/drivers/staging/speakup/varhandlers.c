static struct st_var_header var_headers[] = ;
static struct st_var_header *var_ptrs[MAXVARS] = ;
static struct punc_var_t punc_vars[] = ;
int chartab_get_value(char *keyword)
void speakup_register_var(struct var_t *var)
void speakup_unregister_var(enum var_id_t var_id)
struct st_var_header *get_var_header(enum var_id_t var_id)
struct st_var_header *var_header_by_name(const char *name)
struct var_t *get_var(enum var_id_t var_id)
EXPORT_SYMBOL_GPL(get_var);
struct punc_var_t *get_punc_var(enum var_id_t var_id)
int set_num_var(int input, struct st_var_header *var, int how)
int set_string_var(const char *page, struct st_var_header *var, int len)
int set_mask_bits(const char *input, const int which, const int how)
char *strlwr(char *s)
char *speakup_s2i(char *start, int *dest)
char *s2uchar(char *start, char *dest)
char *xlate(char *s)
