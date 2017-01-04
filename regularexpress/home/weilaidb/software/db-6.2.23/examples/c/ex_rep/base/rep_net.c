int machtab_add __P((machtab_t *, socket_t, u_int32_t, int, int *));
void machtab_print __P((machtab_t *));
ssize_t readn __P((socket_t, void *, size_t));
#define	MACHID_INVALID	0
#define	MACHID_SELF	1
struct __machtab ;
struct __member ;
static int quote_send_broadcast __P((machtab_t *,
const DBT *, const DBT *, u_int32_t));
static int quote_send_one __P((const DBT *, const DBT *, socket_t, u_int32_t));
int
machtab_init(machtabp, nsites)
machtab_t **machtabp;
int nsites;
int
machtab_add(machtab, fd, hostaddr, port, idp)
machtab_t *machtab;
socket_t fd;
u_int32_t hostaddr;
int port, *idp;
int
machtab_getinfo(machtab, eid, hostp, portp)
machtab_t *machtab;
int eid;
u_int32_t *hostp;
int *portp;
int
machtab_rem(machtab, eid, lock)
machtab_t *machtab;
int eid;
int lock;
int machtab_destroy(machtab)
machtab_t *machtab;
void
machtab_parm(machtab, nump, timeoutp)
machtab_t *machtab;
int *nump;
u_int32_t *timeoutp;
void
machtab_print(machtab)
machtab_t *machtab;
socket_t
listen_socket_init(progname, port, machtab)
const char *progname;
int port;
machtab_t *machtab;
socket_t
listen_socket_accept(machtab, progname, s, eidp)
machtab_t *machtab;
const char *progname;
socket_t s;
int *eidp;
socket_t
get_connected_socket(machtab, progname, remotehost, port, is_open, eidp)
machtab_t *machtab;
const char *progname, *remotehost;
int port, *is_open, *eidp;
int
get_next_message(fd, rec, control)
socket_t fd;
DBT *rec, *control;
ssize_t
readn(fd, vptr, n)
socket_t fd;
void *vptr;
size_t n;
int
quote_send(dbenv, control, rec, lsnp, eid, flags)
DB_ENV *dbenv;
const DBT *control, *rec;
const DB_LSN *lsnp;
int eid;
u_int32_t flags;
static int
quote_send_broadcast(machtab, rec, control, flags)
machtab_t *machtab;
const DBT *rec, *control;
u_int32_t flags;
static int
quote_send_one(rec, control, fd, flags)
const DBT *rec, *control;
socket_t fd;
u_int32_t flags;
