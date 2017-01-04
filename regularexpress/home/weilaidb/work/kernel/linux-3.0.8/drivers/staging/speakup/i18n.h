#define I18N_H
enum msg_index_t ;
struct msg_group_t ;
extern char *msg_get(enum msg_index_t index);
extern ssize_t msg_set(enum msg_index_t index, char *text, size_t length);
extern struct msg_group_t *find_msg_group(const char *group_name);
extern void reset_msg_group(struct msg_group_t *group);
extern void initialize_msgs(void);
extern void free_user_msgs(void);
