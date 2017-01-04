#define _GNU_SOURCE
static const char version[] = PACKAGE_STRING;
static int send_reply_devlist(int sockfd)
static int recv_request_devlist(int sockfd)
static int recv_request_import(int sockfd)
static int recv_pdu(int sockfd)
static void log_addrinfo(struct addrinfo *ai)
static struct addrinfo *my_getaddrinfo(char *host, int ai_family)
#define MAXSOCK 20
static int listen_all_addrinfo(struct addrinfo *ai_head, int lsock[])
static int tcpd_auth(int csock)
static int my_accept(int lsock)
GMainLoop *main_loop;
static void signal_handler(int i)
static void set_signal(void)
gboolean process_comming_request(GIOChannel *gio, GIOCondition condition,
gpointer data __attribute__((unused)))
static void do_standalone_mode(gboolean daemonize)
static const char help_message[] = "\
Usage: usbipd [options]				\n\
-D, --daemon				\n\
Run as a daemon process.	\n\
\n\
-d, --debug				\n\
Print debugging information.	\n\
\n\
-v, --version				\n\
Show version.			\n\
\n\
-h, --help 				\n\
Print this help.		\n";
static void show_help(void)
static const struct option longopts[] = ;
int main(int argc, char *argv[])
