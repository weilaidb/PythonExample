#define __MCONSOLE_H__
#define u32 uint32_t
#define MCONSOLE_MAGIC (0xcafebabe)
#define MCONSOLE_MAX_DATA (512)
#define MCONSOLE_VERSION 2
struct mconsole_request ;
struct mconsole_reply ;
struct mconsole_notify ;
struct mc_request;
enum mc_context ;
struct mconsole_command
;
struct mc_request
;
extern char mconsole_socket_name[];
extern int mconsole_unlink_socket(void);
extern int mconsole_reply_len(struct mc_request *req, const char *reply,
int len, int err, int more);
extern int mconsole_reply(struct mc_request *req, const char *str, int err,
int more);
extern void mconsole_version(struct mc_request *req);
extern void mconsole_help(struct mc_request *req);
extern void mconsole_halt(struct mc_request *req);
extern void mconsole_reboot(struct mc_request *req);
extern void mconsole_config(struct mc_request *req);
extern void mconsole_remove(struct mc_request *req);
extern void mconsole_sysrq(struct mc_request *req);
extern void mconsole_cad(struct mc_request *req);
extern void mconsole_stop(struct mc_request *req);
extern void mconsole_go(struct mc_request *req);
extern void mconsole_log(struct mc_request *req);
extern void mconsole_proc(struct mc_request *req);
extern void mconsole_stack(struct mc_request *req);
extern int mconsole_get_request(int fd, struct mc_request *req);
extern int mconsole_notify(char *sock_name, int type, const void *data,
int len);
extern char *mconsole_notify_socket(void);
extern void lock_notify(void);
extern void unlock_notify(void);
