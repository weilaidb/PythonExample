#define _XOPEN_SOURCE 500
#define BUF_SIZE 30
#define MAP_EXPECTED_SEQUENCE_NUMBERS 255
#define OPTIONS 100
#define TRACE_ON
#define chkne(a) \
( ret = (a),\
((ret<0)?timestamp(),fprintf(stderr,,\
__FILE__,__LINE__,__FUNCTION__,errno,strerror(errno),ret,#a)\
:0))
#define trvd_(d) timestamp(), fprintf(stderr,#d,(int)d)
#define trvx_(d) timestamp(), fprintf(stderr,#d,(int)d)
#define trln() fprintf(stderr,);
#define trl() timestamp(), fprintf(stderr,,__FILE__,__LINE__,__FUNCTION__)
#define trl_() fprintf(stderr,,__FILE__,__LINE__,__FUNCTION__)
#define chkne(a) ret=(a)
#define trvd_(d)
#define trvx_(d)
#define trln()
#define trl()
#define trl_()
int sock_type = SOCK_STREAM;
int addr_type = TIPC_ADDR_NAME;
int server_type = 1000;
int dest_droppable = -1;
int delay = 0;
int data_num = 0;
int data_check = 0;
int data_size = 0;
int wait_peer = 0;
int replay = 0;
struct sockaddr_tipc addr_sk;
__thread int ret;
int addr1 = 0, addr2 = 0;
int recvq_depth = 0;
struct sockaddr_tipc name;
int buf_size = TIPC_MAX_USER_MSG_SIZE;
void *buf;
socklen_t addr_size = sizeof(struct sockaddr_tipc);
static enum client_mode_e  mode;
static inline void timestamp()
int tipc_write(int tipc, void *buf, int len)
int generate_data(int tipc, int data_num)
int check_generated_data(int tipc)
int pipe_start(int tipc)
#define TIPC_SOCK_RECVQ_MAX_DEPTH    133
int data_io(int tipc)
int listen_accept_and_io(int tipc)
void tipc_addr_set(struct sockaddr_tipc *A, int addr_type, int server_type, int a1, int a2)
#define add_literal_option(o)  do  while (0)
#define add_flag_option(n,p,v) do  while (0)
static struct option options[OPTIONS];
int optnum;
int options_init()
#define return_if_arg_is_equal(entry) if (0 == strcmp(arg,#entry)) return entry
int expand_arg(char *arg)
char *usage = "Usage:\n\
tipc-pipc <options> [address 1] [address 2]\n\
\n\
default address 1 is 0\n\
default address 2 is same as address 1\n\
\n\
options:\n\
\n\
default values are marked with '*'\n\
\n\
-h | --help\n\
show this help\n\
\n\
-l\n\
run in server mode, accept multiple connections\n\
-s\n\
run in single connection server mode, exit on connection close\n\
\n\
default mode is client mode\n\
\n\
--sock_type *SOCK_STREAM | SOCK_DGRAM | SOCK_RDM | SOCK_SEQPACKET\n\
\n\
--server_type *1000|<n>\n\
\n\
--addr_type TIPC_ADDR_NAMESEQ | TIPC_ADDR_MCAST | *TIPC_ADDR_NAME\n\
For TIPC_ADDR_NAME only address 1 is used.\n\
For TIPC_ADDR_NAMESEQ or TIPC_ADDR_MCAST\n\
address 1 and address 2 are used.\n\
\n\
--delay *0|<ms>\n\
Defines data reading and writing delay in ms.\n\
\n\
--data_num *0|<count>\n\
Generates defined number of sample data and sends is.\n\
\n\
--data_size *0\n\
Generates packets of defined size when data_num is defined.\n\
\n\
--data_check\n\
Check sequence numbers in received data,\n\
generated with option data_num.\n\
\n\
--dest_droppable 0|1 \n\
Enable message rejection \n\
\n\
--buf_size *66000|<n> \n\
I/O buffer size (see TIPC_MAX_USER_MSG_SIZE).\n\
--wait_peer *0\n\
Wait for peer published state before communication.\n\
--top\n\
run topology client\n\
--replay\n\
force connectionless server send input to last connected client \n\
\n\
shortcuts:\n\
\n\
--rdm\n\
sock_type = SOCK_RDM\n\
--stm\n\
* sock_type = SOCK_STREAM\n\
--sqp\n\
sock_type = SOCK_SEQPACKET\n\
--nam\n\
* addr_type = TIPC_ADDR_NAME\n\
--mc\n\
addr_type = TIPC_ADDR_MCAST or TIPC_ADDR_NAMESEQ\n\
--id\n\
addr_type = TIPC_ADDR_ID\n\
Samples:\n\
\n\
SOCK_STREAM single connection server with address zero and client:\n\
\n\
tipc-pipe -s | tee input\n\
\n\
date | tipc-pipe\n\
\n\
SOCK_RDM server with address 123 and client:\n\
\n\
tipc-pipe --rdm --replay -l 123\n\
\n\
tipc-pipe --rdm 123\n\
\n\
Start topology client for all addresses of specified optional server type\n\
\n\
tipc-pipe --server_type=1000 --top -- 0 -1\n\
\n\
";
int init(int argc, char *argv[])
int run_server(int tipc)
int run_client(int tipc)
int run_topology_client(int lower, int upper, unsigned int timeout)
int main(int argc, char *argv[])
