#define	fsync(fd)	__vx_fsync(fd)
int
__vx_fsync(fd)
int fd;
#define	fsync(fd)	__mpe_fsync(fd)
int
__mpe_fsync(fd)
int fd;
int
__os_fsync(env, fhp)
ENV *env;
DB_FH *fhp;
