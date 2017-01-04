#if defined (ZMQ_HAVE_WINDOWS)
#   include <winsock2.h>
#   include <stdexcept>
#   include <sys/socket.h>
#   include <netinet/in.h>
#   include <unistd.h>
#if defined (ZMQ_HAVE_WINDOWS)
void initialise_network (void)
int close (int fd)
void initialise_network (void)
int main (void)
int handle [1000];
int count;
for (count = 0; count < 1000; count++)
while (count)
close (handle [count--]);
}
