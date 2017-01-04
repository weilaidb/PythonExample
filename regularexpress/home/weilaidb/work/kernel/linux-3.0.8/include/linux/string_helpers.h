#define _LINUX_STRING_HELPERS_H_
enum string_size_units ;
int string_get_size(u64 size, enum string_size_units units,
char *buf, int len);
