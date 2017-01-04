#define _LINUX_KEY_TYPE_H
struct key_construction ;
typedef int (*request_key_actor_t)(struct key_construction *key,
const char *op, void *aux);
struct key_type ;
extern struct key_type key_type_keyring;
extern int register_key_type(struct key_type *ktype);
extern void unregister_key_type(struct key_type *ktype);
extern int key_payload_reserve(struct key *key, size_t datalen);
extern int key_instantiate_and_link(struct key *key,
const void *data,
size_t datalen,
struct key *keyring,
struct key *instkey);
extern int key_reject_and_link(struct key *key,
unsigned timeout,
unsigned error,
struct key *keyring,
struct key *instkey);
extern void complete_request_key(struct key_construction *cons, int error);
static inline int key_negate_and_link(struct key *key,
unsigned timeout,
struct key *keyring,
struct key *instkey)
