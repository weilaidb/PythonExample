struct key_type key_type_user = ;
EXPORT_SYMBOL_GPL(key_type_user);
int user_instantiate(struct key *key, const void *data, size_t datalen)
EXPORT_SYMBOL_GPL(user_instantiate);
int user_update(struct key *key, const void *data, size_t datalen)
EXPORT_SYMBOL_GPL(user_update);
int user_match(const struct key *key, const void *description)
EXPORT_SYMBOL_GPL(user_match);
void user_revoke(struct key *key)
EXPORT_SYMBOL(user_revoke);
void user_destroy(struct key *key)
EXPORT_SYMBOL_GPL(user_destroy);
void user_describe(const struct key *key, struct seq_file *m)
EXPORT_SYMBOL_GPL(user_describe);
long user_read(const struct key *key, char __user *buffer, size_t buflen)
EXPORT_SYMBOL_GPL(user_read);
