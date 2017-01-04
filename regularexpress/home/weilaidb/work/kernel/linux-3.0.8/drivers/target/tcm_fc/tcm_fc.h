#define __TCM_FC_H__
#define FT_VERSION "0.3"
#define FT_NAMELEN 32
#define FT_TPG_NAMELEN 32
#define FT_LUN_NAMELEN 32
#define FT_DEBUG_CONF	0x01
#define	FT_DEBUG_SESS	0x02
#define	FT_DEBUG_TM	0x04
#define	FT_DEBUG_IO	0x08
#define	FT_DEBUG_DATA	0x10
extern unsigned int ft_debug_logging;
#define FT_DEBUG(mask, fmt, args...)					\
do  while (0)
#define	FT_CONF_DBG(fmt, args...)	FT_DEBUG(FT_DEBUG_CONF, fmt, ##args)
#define	FT_SESS_DBG(fmt, args...)	FT_DEBUG(FT_DEBUG_SESS, fmt, ##args)
#define	FT_TM_DBG(fmt, args...)		FT_DEBUG(FT_DEBUG_TM, fmt, ##args)
#define	FT_IO_DBG(fmt, args...)		FT_DEBUG(FT_DEBUG_IO, fmt, ##args)
#define	FT_DATA_DBG(fmt, args...)	FT_DEBUG(FT_DEBUG_DATA, fmt, ##args)
struct ft_transport_id  __attribute__((__packed__));
struct ft_sess ;
#define	FT_SESS_HASH_BITS	6
#define	FT_SESS_HASH_SIZE	(1 << FT_SESS_HASH_BITS)
struct ft_tport ;
struct ft_node_auth ;
struct ft_node_acl ;
struct ft_lun ;
struct ft_tpg ;
struct ft_lport_acl ;
enum ft_cmd_state ;
struct ft_cmd ;
extern struct list_head ft_lport_list;
extern struct mutex ft_lport_lock;
extern struct fc4_prov ft_prov;
extern struct target_fabric_configfs *ft_configfs;
void ft_sess_put(struct ft_sess *);
int ft_sess_shutdown(struct se_session *);
void ft_sess_close(struct se_session *);
void ft_sess_stop(struct se_session *, int, int);
int ft_sess_logged_in(struct se_session *);
u32 ft_sess_get_index(struct se_session *);
u32 ft_sess_get_port_name(struct se_session *, unsigned char *, u32);
void ft_sess_set_erl0(struct se_session *);
void ft_lport_add(struct fc_lport *, void *);
void ft_lport_del(struct fc_lport *, void *);
int ft_lport_notify(struct notifier_block *, unsigned long, void *);
void ft_check_stop_free(struct se_cmd *);
void ft_release_cmd(struct se_cmd *);
int ft_queue_status(struct se_cmd *);
int ft_queue_data_in(struct se_cmd *);
int ft_write_pending(struct se_cmd *);
int ft_write_pending_status(struct se_cmd *);
u32 ft_get_task_tag(struct se_cmd *);
int ft_get_cmd_state(struct se_cmd *);
void ft_new_cmd_failure(struct se_cmd *);
int ft_queue_tm_resp(struct se_cmd *);
int ft_is_state_remove(struct se_cmd *);
int ft_thread(void *);
void ft_recv_req(struct ft_sess *, struct fc_frame *);
struct ft_tpg *ft_lport_find_tpg(struct fc_lport *);
struct ft_node_acl *ft_acl_get(struct ft_tpg *, struct fc_rport_priv *);
void ft_recv_write_data(struct ft_cmd *, struct fc_frame *);
void ft_dump_cmd(struct ft_cmd *, const char *caller);
ssize_t ft_format_wwn(char *, size_t, u64);
