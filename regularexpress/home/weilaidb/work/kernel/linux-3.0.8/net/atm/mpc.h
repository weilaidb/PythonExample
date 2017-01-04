#define _MPC_H_
int msg_to_mpoad(struct k_message *msg, struct mpoa_client *mpc);
struct mpoa_client ;
struct atm_mpoa_qos ;
struct atm_mpoa_qos *atm_mpoa_add_qos(__be32 dst_ip, struct atm_qos *qos);
struct atm_mpoa_qos *atm_mpoa_search_qos(__be32 dst_ip);
int atm_mpoa_delete_qos(struct atm_mpoa_qos *qos);
struct seq_file;
void atm_mpoa_disp_qos(struct seq_file *m);
int mpc_proc_init(void);
void mpc_proc_clean(void);
#define mpc_proc_init() (0)
#define mpc_proc_clean() do  while(0)
