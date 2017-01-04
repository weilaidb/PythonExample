static SecProtocolType protocol;
static char *host;
static char *path;
static char *username;
static char *password;
static UInt16 port;
static void die(const char *err, ...)
static void *xstrdup(const char *s1)
#define KEYCHAIN_ITEM(x) (x ? strlen(x) : 0), x
#define KEYCHAIN_ARGS \
NULL, \
KEYCHAIN_ITEM(host), \
0, NULL, \
KEYCHAIN_ITEM(username), \
KEYCHAIN_ITEM(path), \
port, \
protocol, \
kSecAuthenticationTypeDefault
static void write_item(const char *what, const char *buf, int len)
static void find_username_in_item(SecKeychainItemRef item)
static void find_internet_password(void)
static void delete_internet_password(void)
static void add_internet_password(void)
static void read_credential(void)
int main(int argc, const char **argv)
