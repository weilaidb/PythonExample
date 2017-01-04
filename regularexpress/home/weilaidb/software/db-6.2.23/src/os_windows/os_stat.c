#define	MAX_SECTOR_SIZE 4096
int
__os_get_cluster_size(path, psize)
const char *path;
u_int32_t *psize;
int
__os_exists(env, path, isdirp)
ENV *env;
const char *path;
int *isdirp;
int
__os_ioinfo(env, path, fhp, mbytesp, bytesp, iosizep)
ENV *env;
const char *path;
DB_FH *fhp;
u_int32_t *mbytesp, *bytesp, *iosizep;
