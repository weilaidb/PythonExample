int
__db_file_extend(env, fhp, size)
ENV *env;
DB_FH *fhp;
size_t size;
int
__db_file_multi_write(env, path)
ENV *env;
const char *path;
int
__db_file_write(env, fhp, mbytes, bytes, pattern)
ENV *env;
DB_FH *fhp;
int pattern;
u_int32_t mbytes, bytes;
