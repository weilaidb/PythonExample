int
db_env_set_func_assert(func_assert)
void (*func_assert) __P((const char *, const char *, int));
int
db_env_set_func_close(func_close)
int (*func_close) __P((int));
int
db_env_set_func_dirfree(func_dirfree)
void (*func_dirfree) __P((char **, int));
int
db_env_set_func_dirlist(func_dirlist)
int (*func_dirlist) __P((const char *, char ***, int *));
int
db_env_set_func_exists(func_exists)
int (*func_exists) __P((const char *, int *));
int
db_env_set_func_free(func_free)
void (*func_free) __P((void *));
int
db_env_set_func_fsync(func_fsync)
int (*func_fsync) __P((int));
int
db_env_set_func_ftruncate(func_ftruncate)
int (*func_ftruncate) __P((int, off_t));
int
db_env_set_func_ioinfo(func_ioinfo)
int (*func_ioinfo)
__P((const char *, int, u_int32_t *, u_int32_t *, u_int32_t *));
int
db_env_set_func_malloc(func_malloc)
void *(*func_malloc) __P((size_t));
int
db_env_set_func_file_map(func_file_map, func_file_unmap)
int (*func_file_map) __P((DB_ENV *, char *, size_t, int, void **));
int (*func_file_unmap) __P((DB_ENV *, void *));
int
db_env_set_func_region_map(func_region_map, func_region_unmap)
int (*func_region_map) __P((DB_ENV *, char *, size_t, int *, void **));
int (*func_region_unmap) __P((DB_ENV *, void *));
int
db_env_set_func_pread(func_pread)
ssize_t (*func_pread) __P((int, void *, size_t, off_t));
int
db_env_set_func_pwrite(func_pwrite)
ssize_t (*func_pwrite) __P((int, const void *, size_t, off_t));
int
db_env_set_func_open(func_open)
int (*func_open) __P((const char *, int, ...));
int
db_env_set_func_read(func_read)
ssize_t (*func_read) __P((int, void *, size_t));
int
db_env_set_func_realloc(func_realloc)
void *(*func_realloc) __P((void *, size_t));
int
db_env_set_func_rename(func_rename)
int (*func_rename) __P((const char *, const char *));
int
db_env_set_func_seek(func_seek)
int (*func_seek) __P((int, off_t, int));
int
db_env_set_func_unlink(func_unlink)
int (*func_unlink) __P((const char *));
int
db_env_set_func_write(func_write)
ssize_t (*func_write) __P((int, const void *, size_t));
int
db_env_set_func_yield(func_yield)
int (*func_yield) __P((u_long, u_long));
