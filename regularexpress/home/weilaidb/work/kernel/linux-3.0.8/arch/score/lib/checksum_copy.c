unsigned int csum_partial_copy(const char *src, char *dst,
int len, unsigned int sum)
unsigned int csum_partial_copy_from_user(const char *src, char *dst,
int len, unsigned int sum,
int *err_ptr)
