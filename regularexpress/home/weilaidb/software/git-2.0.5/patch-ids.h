#define PATCH_IDS_H
struct patch_id ;
struct patch_ids ;
int init_patch_ids(struct patch_ids *);
int free_patch_ids(struct patch_ids *);
struct patch_id *add_commit_patch_id(struct commit *, struct patch_ids *);
struct patch_id *has_commit_patch_id(struct commit *, struct patch_ids *);
