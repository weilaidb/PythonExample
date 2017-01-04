#if defined(__KAME__) && defined(ENABLE_IPV6)
# define FAITH
#define SUCCESS 0
#define GAI_ANY 0
#define YES 1
#define NO  0
static int translate = NO;
static struct in6_addr faith_prefix = IN6ADDR_GAI_ANY_INIT;
static const char in_addrany[] = ;
static const char in6_addrany[] = ;
static const char in_loopback[] = ;
static const char in6_loopback[] = ;
struct sockinet ;
static struct gai_afd  gai_afdl [] = ;
#define PTON_MAX        16
#define PTON_MAX        4
#define IN_MULTICAST(i)     (((i) & 0xf0000000U) == 0xe0000000U)
#define IN_EXPERIMENTAL(i)  (((i) & 0xe0000000U) == 0xe0000000U)
#define IN_LOOPBACKNET      127
static int get_name Py_PROTO((const char *, struct gai_afd *,
struct addrinfo **, char *, struct addrinfo *,
int));
static int get_addr Py_PROTO((const char *, int, struct addrinfo **,
struct addrinfo *, int));
static int str_isnumber Py_PROTO((const char *));
static char *ai_errlist[] = ;
#define GET_CANONNAME(ai, str) \
if (pai->ai_flags & AI_CANONNAME)
#define GET_AI(ai, gai_afd, addr, port)
#define GET_AI(ai, gai_afd, addr, port)
#define ERR(err)
char *
gai_strerror(int ecode)
void
freeaddrinfo(struct addrinfo *ai)
static int
str_isnumber(const char *p)
int
getaddrinfo(const char*hostname, const char*servname,
const struct addrinfo *hints, struct addrinfo **res)
static int
get_name(addr, gai_afd, res, numaddr, pai, port0)
const char *addr;
struct gai_afd *gai_afd;
struct addrinfo **res;
char *numaddr;
struct addrinfo *pai;
int port0;
static int
get_addr(hostname, af, res, pai, port0)
const char *hostname;
int af;
struct addrinfo **res;
struct addrinfo *pai;
int port0;
