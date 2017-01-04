static int commit_patch_id(struct commit *commit, struct diff_options *options,
unsigned char *sha1)
static const unsigned char *patch_id_access(size_t index, void *table)
static int patch_pos(struct patch_id **table, int nr, const unsigned char *id)
#define BUCKET_SIZE 190
struct patch_id_bucket ;
int init_patch_ids(struct patch_ids *ids)
int free_patch_ids(struct patch_ids *ids)
static struct patch_id *add_commit(struct commit *commit,
struct patch_ids *ids,
int no_add)
struct patch_id *has_commit_patch_id(struct commit *commit,
struct patch_ids *ids)
struct patch_id *add_commit_patch_id(struct commit *commit,
struct patch_ids *ids)
