#define SUCCESS 0
#define YES 1
#define NO  0
static struct gni_afd  gni_afdl [] = ;
struct gni_sockinet ;
#define ENI_NOSOCKET    0
#define ENI_NOSERVNAME  1
#define ENI_NOHOSTNAME  2
#define ENI_MEMORY      3
#define ENI_SYSTEM      4
#define ENI_FAMILY      5
#define ENI_SALEN       6
int getnameinfo Py_PROTO((const struct sockaddr *, size_t, char *, size_t,
char *, size_t, int));
int
getnameinfo(sa, salen, host, hostlen, serv, servlen, flags)
const struct sockaddr *sa;
size_t salen;
char *host;
size_t hostlen;
char *serv;
size_t servlen;
int flags;
