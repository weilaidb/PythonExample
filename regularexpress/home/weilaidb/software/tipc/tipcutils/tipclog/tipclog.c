struct tipc_subscr node_sub = ;
struct tipc_subscr link_sub = ;
struct sockaddr_tipc sa_topsrv = ;
int topsrv_sd = 0;
unsigned int tipc_own_node = 0;
int topology_connect()
void subscribe_evt()
void log_link(struct tipc_event *e)
void log_node(struct tipc_event *e)
void log_event(struct tipc_event *e)
void tipc_event_logger()
int main(int argc, char *argv[])
