#define _KEYS_USER_TYPE_H
struct user_key_payload ;
extern struct key_type key_type_user;
extern int user_instantiate(struct key *key, const void *data, size_t datalen);
extern int user_update(struct key *key, const void *data, size_t datalen);
extern int user_match(const struct key *key, const void *criterion);
extern void user_revoke(struct key *key);
extern void user_destroy(struct key *key);
extern void user_describe(const struct key *user, struct seq_file *m);
extern long user_read(const struct key *key,
char __user *buffer, size_t buflen);
