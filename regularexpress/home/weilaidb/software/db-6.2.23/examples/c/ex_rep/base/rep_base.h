#define	_EX_REPQUOTE_H_
#define	SELF_EID	1
typedef struct  APP_DATA;
extern int master_eid;
extern char *myaddr;
extern unsigned short myport;
struct __member;	typedef struct __member member_t;
struct __machtab;	typedef struct __machtab machtab_t;
typedef struct  all_args;
typedef struct  connect_args;
#define	CACHESIZE	(10 * 1024 * 1024)
#define	DATABASE	"quote.db"
#define	MAX_THREADS	25
#define	SLEEPTIME	3
#define	COMPQUIET(x,y)	x = (y)
typedef HANDLE mutex_t;
#define	mutex_init(m, attr)						   \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)							   \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define	mutex_unlock(m)		(ReleaseMutex(*(m)) ? 0 : -1)
typedef int socklen_t;
typedef SOCKET socket_t;
#define	SOCKET_CREATION_FAILURE INVALID_SOCKET
#define	readsocket(s, buf, sz)	recv((s), (buf), (int)(sz), 0)
#define	writesocket(s, buf, sz)	send((s), (const char *)(buf), (int)(sz), 0)
#define	net_errno		WSAGetLastError()
#undef SHUT_RDWR
#define SHUT_RDWR		SD_BOTH
typedef pthread_mutex_t mutex_t;
#define	mutex_init(m, attr)	pthread_mutex_init((m), (attr))
#define	mutex_lock(m)		pthread_mutex_lock(m)
#define	mutex_unlock(m)		pthread_mutex_unlock(m)
typedef int socket_t;
#define	SOCKET_CREATION_FAILURE -1
#define	closesocket(fd)		close(fd)
#define	net_errno		errno
#define	readsocket(s, buf, sz)	read((s), (buf), (sz))
#define	writesocket(s, buf, sz)	write((s), (buf), (sz))
void *connect_all __P((void *));
void *connect_thread __P((void *));
int   doclient __P((DB_ENV *, const char *, machtab_t *));
int   domaster __P((DB_ENV *, const char *));
socket_t   get_accepted_socket __P((const char *, int));
socket_t   get_connected_socket
__P((machtab_t *, const char *, const char *, int, int *, int *));
int   get_next_message __P((socket_t, DBT *, DBT *));
socket_t   listen_socket_init __P((const char *, int, machtab_t *));
socket_t   listen_socket_accept
__P((machtab_t *, const char *, socket_t, int *));
int   machtab_destroy __P((machtab_t *));
int   machtab_getinfo __P((machtab_t *, int, u_int32_t *, int *));
int   machtab_init __P((machtab_t **, int));
void  machtab_parm __P((machtab_t *, int *, u_int32_t *));
int   machtab_rem __P((machtab_t *, int, int));
int   quote_send __P((DB_ENV *, const DBT *, const DBT *, const DB_LSN *,
int, u_int32_t));
