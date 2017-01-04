# define SO_TIMESTAMPING         37
# define SCM_TIMESTAMPING        SO_TIMESTAMPING
# define SO_TIMESTAMPNS 35
# define SIOCGSTAMPNS 0x8907
# define SIOCSHWTSTAMP 0x89b0
static void usage(const char *error)
static void bail(const char *error)
static const unsigned char sync[] = ;
static void sendpacket(int sock, struct sockaddr *addr, socklen_t addr_len)
static void printpacket(struct msghdr *msg, int res,
char *data,
int sock, int recvmsg_flags,
int siocgstamp, int siocgstampns)
static void recvpacket(int sock, int recvmsg_flags,
int siocgstamp, int siocgstampns)
int main(int argc, char **argv)
