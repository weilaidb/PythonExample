#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static size_t rpc_ntop6_noscopeid(const struct sockaddr *sap,
char *buf, const int buflen)
static size_t rpc_ntop6(const struct sockaddr *sap,
char *buf, const size_t buflen)
static size_t rpc_ntop6_noscopeid(const struct sockaddr *sap,
char *buf, const int buflen)
static size_t rpc_ntop6(const struct sockaddr *sap,
char *buf, const size_t buflen)
static int rpc_ntop4(const struct sockaddr *sap,
char *buf, const size_t buflen)
size_t rpc_ntop(const struct sockaddr *sap, char *buf, const size_t buflen)
EXPORT_SYMBOL_GPL(rpc_ntop);
static size_t rpc_pton4(const char *buf, const size_t buflen,
struct sockaddr *sap, const size_t salen)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int rpc_parse_scope_id(const char *buf, const size_t buflen,
const char *delim, struct sockaddr_in6 *sin6)
static size_t rpc_pton6(const char *buf, const size_t buflen,
struct sockaddr *sap, const size_t salen)
static size_t rpc_pton6(const char *buf, const size_t buflen,
struct sockaddr *sap, const size_t salen)
size_t rpc_pton(const char *buf, const size_t buflen,
struct sockaddr *sap, const size_t salen)
EXPORT_SYMBOL_GPL(rpc_pton);
char *rpc_sockaddr2uaddr(const struct sockaddr *sap)
EXPORT_SYMBOL_GPL(rpc_sockaddr2uaddr);
size_t rpc_uaddr2sockaddr(const char *uaddr, const size_t uaddr_len,
struct sockaddr *sap, const size_t salen)
EXPORT_SYMBOL_GPL(rpc_uaddr2sockaddr);
