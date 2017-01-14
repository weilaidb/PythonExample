TSTESTNAME nameList[] = ;
#define NAMELIST_SIZE  sizeof(nameList)/sizeof(nameList[0])
char * testName
(
int test
)
void failTest
(
char *reason
)
void makeArray
(
char *theArray,
int size,
int start,
int end
)
int checkArray
(
char *theArray,
int arraySize
)
int acceptSocketTIPC
(
int sockfd_L
)
void listenSocketTIPC
(
int sockfd_S
)
void sendtoSocketBuffTIPC
(
int sockfd,
struct sockaddr_tipc *addr,
char *msgArea,
int numTimes,
int msgSize,
int sendErrorTarget
)
void sendtoSocketTIPC
(
int sockfd,
struct sockaddr_tipc *addr,
int numTimes,
int msgSize,
int sendErrorTarget
)
void anc_data_type
(
char * str,
int type
)
void setOption
(
int sockfd,
int opt,
int value
)
void getOption
(
int sockfd,
int opt,
int *value
)
void tipc_printaddr
(
struct sockaddr_tipc *addr
)
void setServerAddr
(
struct sockaddr_tipc *addr
)
void setServerAddrTo
(
struct sockaddr_tipc *addr,
int infoType,
int info1,
int info2,
int info3
)
int createSocketTIPC
(
int type
)
void bindSocketTIPC
(
int sockfd_S,
struct sockaddr_tipc *addr
)
void connectSocketTIPC
(
int sockfd_C,
struct sockaddr_tipc *addr
)
void closeSocketTIPC
(
int sockfd_C
)
void sendSocketBuffTIPC
(
int sockfd,
char *msgArea,
int numTimes,
int msgSize,
int sendErrorTarget
)
void sendSocketTIPC
(
int sockfd,
int numTimes,
int msgSize,
int sendErrorTarget
)
void recvSocketTIPC
(
int sockfd,
int numTimes,
int maxSize,
int recvErrorTarget,
int checkErrorTarget
)
void sendSyncTIPC
(
int sigInstance
)
void recvSyncTIPC
(
int sigInstance
)
void getServerAddr
(
struct sockaddr_tipc *addr
)
char * typeString
(
const int a_type,
char * a_buffer
)
void common_test_socketOptions(void)
#define THE_STRING
#define MAX_STR		10
void common_test_recvfrom
(
int syncId
)
void common_test_sendto
(
int syncId
)
