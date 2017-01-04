static void process_blob(struct rev_info *revs,
struct blob *blob,
show_object_fn show,
struct name_path *path,
const char *name,
void *cb_data)
static void process_gitlink(struct rev_info *revs,
const unsigned char *sha1,
show_object_fn show,
struct name_path *path,
const char *name,
void *cb_data)
static void process_tree(struct rev_info *revs,
struct tree *tree,
show_object_fn show,
struct name_path *path,
struct strbuf *base,
const char *name,
void *cb_data)
static void mark_edge_parents_uninteresting(struct commit *commit,
struct rev_info *revs,
show_edge_fn show_edge)
void mark_edges_uninteresting(struct rev_info *revs, show_edge_fn show_edge)
static void add_pending_tree(struct rev_info *revs, struct tree *tree)
void traverse_commit_list(struct rev_info *revs,
show_commit_fn show_commit,
show_object_fn show_object,
void *data)
