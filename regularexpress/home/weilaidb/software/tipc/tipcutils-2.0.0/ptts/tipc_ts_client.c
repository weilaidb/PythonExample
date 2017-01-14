int importance;
int TS_BLAST_REPS  = 100000;
void client_SendConnectionless
(
int socketType,
int numRequests,
int msgSize
)
void client_test_connectionless
(
int sockType
)
void client_stress_connectionless
(
int sockType
)
void reportBlast
(
int numPackets,
int packetSize,
unsigned int elapsedTime
)
void client_blast_connectionless
(
int sockType,
int numPackets,
int packetSize
)
void client_blast_connection
(
int sockType,
int numPackets,
int packetSize
)
void client_test_messageLimits(void)
void client_mcast
(
int sd,
int lower,
int upper
)
void client_test_multicast(void)
void client_SendConnection
(
int socketType,
int numMessages,
int messageSize,
int numReplies,
int maxReplySize
)
void client_test_connection
(
int sockType
)
void client_SendConnectionShutdown
(
int socketType,
int numRequests,
int requestSize
)
void client_test_connection_shutdown
(
int sockType
)
void client_test_importance(void)
void client_test_anc_connection(void)
void client_test_anc_connectionless(void)
void client_test_socketOptions(void)
void client_test_stream(void)
void client_test_bigStream(void)
void client_test_sendto(void)
void sendTIPCTest
(
int test
)
void client_test_dgram(void)
void client_test_rdm(void)
void client_test_conn_stream(void)
void client_test_conn_seqpacket(void)
void client_test_shutdown_stream(void)
void client_test_shutdown_seqpacket(void)
void client_stress_rdm(void)
int cblastSize[] = ;
void client_blast_rdm(void)
void client_blast_seqpacket(void)
void client_blast_stream(void)
void tipcTestSuiteHelp(void)
TSTEST clientList[] = ;
void tipcTestClientX
(
int test
)
void tipcTestClient
(
int test
)
