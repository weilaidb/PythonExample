#define __USE_UNIX98
#define	E(api, func, name)
#define	F(api, func1, func2, name)
void
dirfree(char **namesp, int cnt)
int
dirlist(const char *dir, char ***namesp, int *cntp)
int
exists(const char *path, int *isdirp)
int
ioinfo(const char *path,
int fd, u_int32_t *mbytesp, u_int32_t *bytesp, u_int32_t *iosizep)
int
file_map(DB_ENV *dbenv, char *path, size_t len, int is_readonly, void **addr)
int
region_map(DB_ENV *dbenv, char *path, size_t len, int *is_create, void **addr)
int
seek(int fd, off_t offset, int whence)
int
local_sleep(u_long seconds, u_long microseconds)
int
unmap(DB_ENV *dbenv, void *addr)
int
main(int argc, char *argv[])
