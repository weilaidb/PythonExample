#define REVISION_H
#define SEEN		(1u<<0)
#define UNINTERESTING   (1u<<1)
#define TREESAME	(1u<<2)
#define SHOWN		(1u<<3)
#define TMP_MARK	(1u<<4)
#define BOUNDARY	(1u<<5)
#define CHILD_SHOWN	(1u<<6)
#define ADDED		(1u<<7)
#define SYMMETRIC_LEFT	(1u<<8)
#define PATCHSAME	(1u<<9)
#define BOTTOM		(1u<<10)
#define TRACK_LINEAR	(1u<<26)
#define ALL_REV_FLAGS	(((1u<<11)-1) | TRACK_LINEAR)
#define DECORATE_SHORT_REFS	1
#define DECORATE_FULL_REFS	2
struct rev_info;
struct log_info;
struct string_list;
struct saved_parents;
struct rev_cmdline_info ;
#define REVISION_WALK_WALK 0
#define REVISION_WALK_NO_WALK_SORTED 1
#define REVISION_WALK_NO_WALK_UNSORTED 2
struct rev_info ;
extern int ref_excluded(struct string_list *, const char *path);
void clear_ref_exclusion(struct string_list **);
void add_ref_exclusion(struct string_list **, const char *exclude);
#define REV_TREE_SAME		0
#define REV_TREE_NEW		1
#define REV_TREE_OLD		2
#define REV_TREE_DIFFERENT	3
typedef void (*show_early_output_fn_t)(struct rev_info *, struct commit_list *);
extern volatile show_early_output_fn_t show_early_output;
struct setup_revision_opt ;
extern void init_revisions(struct rev_info *revs, const char *prefix);
extern int setup_revisions(int argc, const char **argv, struct rev_info *revs,
struct setup_revision_opt *);
extern void parse_revision_opt(struct rev_info *revs, struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[]);
#define REVARG_CANNOT_BE_FILENAME 01
#define REVARG_COMMITTISH 02
extern int handle_revision_arg(const char *arg, struct rev_info *revs,
int flags, unsigned revarg_opt);
extern void reset_revision_walk(void);
extern int prepare_revision_walk(struct rev_info *revs);
extern struct commit *get_revision(struct rev_info *revs);
extern char *get_revision_mark(const struct rev_info *revs,
const struct commit *commit);
extern void put_revision_mark(const struct rev_info *revs,
const struct commit *commit);
extern void mark_parents_uninteresting(struct commit *commit);
extern void mark_tree_uninteresting(struct tree *tree);
struct name_path ;
char *path_name(const struct name_path *path, const char *name);
extern void show_object_with_name(FILE *, struct object *,
const struct name_path *, const char *);
extern void add_object(struct object *obj,
struct object_array *p,
struct name_path *path,
const char *name);
extern void add_pending_object(struct rev_info *revs,
struct object *obj, const char *name);
extern void add_pending_sha1(struct rev_info *revs,
const char *name, const unsigned char *sha1,
unsigned int flags);
extern void add_head_to_pending(struct rev_info *);
enum commit_action ;
extern enum commit_action get_commit_action(struct rev_info *revs,
struct commit *commit);
extern enum commit_action simplify_commit(struct rev_info *revs,
struct commit *commit);
enum rewrite_result ;
typedef enum rewrite_result (*rewrite_parent_fn_t)(struct rev_info *revs, struct commit **pp);
extern int rewrite_parents(struct rev_info *revs, struct commit *commit,
rewrite_parent_fn_t rewrite_parent);
extern void save_parents(struct rev_info *revs, struct commit *commit);
extern struct commit_list *get_saved_parents(struct rev_info *revs, const struct commit *commit);
extern void free_saved_parents(struct rev_info *revs);
