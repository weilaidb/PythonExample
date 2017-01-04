static int match_one(char *s, const char *p, substring_t args[])
int match_token(char *s, const match_table_t table, substring_t args[])
static int match_number(substring_t *s, int *result, int base)
int match_int(substring_t *s, int *result)
int match_octal(substring_t *s, int *result)
int match_hex(substring_t *s, int *result)
size_t match_strlcpy(char *dest, const substring_t *src, size_t size)
char *match_strdup(const substring_t *s)
EXPORT_SYMBOL(match_token);
EXPORT_SYMBOL(match_int);
EXPORT_SYMBOL(match_octal);
EXPORT_SYMBOL(match_hex);
EXPORT_SYMBOL(match_strlcpy);
EXPORT_SYMBOL(match_strdup);
