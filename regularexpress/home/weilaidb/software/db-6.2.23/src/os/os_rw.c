int
__os_io(env, op, fhp, pgno, pgsize, relative, io_len, buf, niop)
ENV *env;
int op;
DB_FH *fhp;
db_pgno_t pgno;
u_int32_t pgsize, relative, io_len;
u_int8_t *buf;
size_t *niop;
int
__os_read(env, fhp, addr, len, nrp)
ENV *env;
DB_FH *fhp;
void *addr;
size_t len;
size_t *nrp;
int
__os_write(env, fhp, addr, len, nwp)
ENV *env;
DB_FH *fhp;
void *addr;
size_t len;
size_t *nwp;
int
__os_physwrite(env, fhp, addr, len, nwp)
ENV *env;
DB_FH *fhp;
void *addr;
size_t len;
size_t *nwp;
