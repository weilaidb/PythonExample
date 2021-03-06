void ft_dump_cmd(struct ft_cmd *cmd, const char *caller)
static void ft_queue_cmd(struct ft_sess *sess, struct ft_cmd *cmd)
static struct ft_cmd *ft_dequeue_cmd(struct se_queue_obj *qobj)
static void ft_free_cmd(struct ft_cmd *cmd)
void ft_release_cmd(struct se_cmd *se_cmd)
void ft_check_stop_free(struct se_cmd *se_cmd)
int ft_queue_status(struct se_cmd *se_cmd)
int ft_write_pending_status(struct se_cmd *se_cmd)
int ft_write_pending(struct se_cmd *se_cmd)
u32 ft_get_task_tag(struct se_cmd *se_cmd)
int ft_get_cmd_state(struct se_cmd *se_cmd)
int ft_is_state_remove(struct se_cmd *se_cmd)
void ft_new_cmd_failure(struct se_cmd *se_cmd)
static void ft_recv_seq(struct fc_seq *sp, struct fc_frame *fp, void *arg)
static void ft_send_resp_status(struct fc_lport *lport,
const struct fc_frame *rx_fp,
u32 status, enum fcp_resp_rsp_codes code)
static void ft_send_resp_code(struct ft_cmd *cmd, enum fcp_resp_rsp_codes code)
static void ft_send_tm(struct ft_cmd *cmd)
int ft_queue_tm_resp(struct se_cmd *se_cmd)
static void ft_recv_cmd(struct ft_sess *sess, struct fc_frame *fp)
void ft_recv_req(struct ft_sess *sess, struct fc_frame *fp)
static void ft_send_cmd(struct ft_cmd *cmd)
static void ft_exec_req(struct ft_cmd *cmd)
int ft_thread(void *arg)
