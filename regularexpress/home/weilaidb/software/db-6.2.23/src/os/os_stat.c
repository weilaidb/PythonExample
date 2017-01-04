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
