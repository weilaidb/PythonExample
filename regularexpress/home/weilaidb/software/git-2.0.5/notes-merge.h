#define NOTES_MERGE_H
#define NOTES_MERGE_WORKTREE "NOTES_MERGE_WORKTREE"
enum notes_merge_verbosity ;
struct notes_merge_options ;
void init_notes_merge_options(struct notes_merge_options *o);
int notes_merge(struct notes_merge_options *o,
struct notes_tree *local_tree,
unsigned char *result_sha1);
int notes_merge_commit(struct notes_merge_options *o,
struct notes_tree *partial_tree,
struct commit *partial_commit,
unsigned char *result_sha1);
int notes_merge_abort(struct notes_merge_options *o);
