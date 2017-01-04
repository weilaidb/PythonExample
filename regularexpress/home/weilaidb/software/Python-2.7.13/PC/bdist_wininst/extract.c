static void normpath(char *path)
BOOL ensure_directory(char *pathname, char *new_part, NOTIFYPROC notify)
char *map_new_file(DWORD flags, char *filename,
char *pathname_part, int size,
WORD wFatDate, WORD wFatTime,
NOTIFYPROC notify)
BOOL
extract_file(char *dst, char *src, int method, int comp_size,
int uncomp_size, NOTIFYPROC notify)
BOOL
unzip_archive(SCHEME *scheme, char *dirname, char *data, DWORD size,
NOTIFYPROC notify)
