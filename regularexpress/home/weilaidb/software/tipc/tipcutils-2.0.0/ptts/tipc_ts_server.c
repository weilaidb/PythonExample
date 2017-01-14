int TS_BLAST_SREPS = 100000;
static int client_in_same_cluster;
void server_receiveConnectionless
(
int socketType,
int numRequests,
int maxRequestSize
)
void server_test_connectionless
(
int sockType
)
void server_stress_connectionless
(
int sockType
)
void server_blast_connectionless
(
int sockType,
int numPackets,
int packetSize
)
void server_blast_connection
(
int sockType,
int numPackets,
int packetSize
)
void server_test_messageLimits(void)
void server_receiveConnection
(
int socketType,
int numConns,
int numRequests,
int maxRequestSize,
int numReplies,
int replySize
)
void server_test_connection
(
int sockType
)
void server_receiveConnectionShutdown
(
int socketType,
int numConns,
int numRequests,
int maxRequestSize
)
void server_test_connection_shutdown
(
int sockType
)
void server_test_importance(void)
void server_test_anc_connection(void)
void server_test_anc_connectionless(void)
void server_bindMulticast
(
int lower,
int upper,
int sd
)
#define TIPC_MCAST_SUBTESTS 4
#define TIPC_MCAST_SOCKETS  5
void server_mcast
(
int *sd,
fd_set *readfds,
int numSubTest
)
void server_test_multicast(void)
void server_test_socketOptions(void)
void server_test_stream(void)
int do_receive
(
int peer_sd,
int recvFlag
)
void server_test_bigStream(void)
void server_test_sendto(void)
void server_test_dgram(void)
void server_test_rdm(void)
void server_test_conn_stream(void)
void server_test_conn_seqpacket(void)
void server_test_shutdown_stream(void)
void server_test_shutdown_seqpacket(void)
void server_stress_rdm(void)
int sblastSize[] = ;
void server_blast_rdm(void)
void server_blast_seqpacket(void)
void server_blast_stream(void)
TSTEST serverList[] = ;
void tipcTestServer(void)
