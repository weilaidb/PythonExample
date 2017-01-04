#if defined (ZMQ_HAVE_WINDOWS)
#   include <winsock2.h>
#   include <ws2tcpip.h>
#   include <stdexcept>
#   define close closesocket
#   include <sys/socket.h>
#   include <netinet/in.h>
#   include <arpa/inet.h>
#   include <unistd.h>
static char client_public [41];
static char client_secret [41];
static char server_public [41];
static char server_secret [41];
static void zap_handler (void *handler)
int main (void)
