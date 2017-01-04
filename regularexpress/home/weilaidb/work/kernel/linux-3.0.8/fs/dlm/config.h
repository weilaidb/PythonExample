#define __CONFIG_DOT_H__
#define DLM_MAX_ADDR_COUNT 3
struct dlm_config_info ;
extern struct dlm_config_info dlm_config;
int dlm_config_init(void);
void dlm_config_exit(void);
int dlm_node_weight(char *lsname, int nodeid);
int dlm_nodeid_list(char *lsname, int **ids_out, int *ids_count_out,
int **new_out, int *new_count_out);
int dlm_nodeid_to_addr(int nodeid, struct sockaddr_storage *addr);
int dlm_addr_to_nodeid(struct sockaddr_storage *addr, int *nodeid);
int dlm_our_nodeid(void);
int dlm_our_addr(struct sockaddr_storage *addr, int num);
