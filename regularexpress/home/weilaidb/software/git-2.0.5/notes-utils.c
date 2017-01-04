void create_notes_commit(struct notes_tree *t, struct commit_list *parents,
const char *msg, size_t msg_len,
unsigned char *result_sha1)
void commit_notes(struct notes_tree *t, const char *msg)
static combine_notes_fn parse_combine_notes_fn(const char *v)
static int notes_rewrite_config(const char *k, const char *v, void *cb)
struct notes_rewrite_cfg *init_copy_notes_for_rewrite(const char *cmd)
int copy_note_for_rewrite(struct notes_rewrite_cfg *c,
const unsigned char *from_obj, const unsigned char *to_obj)
void finish_copy_notes_for_rewrite(struct notes_rewrite_cfg *c, const char *msg)
