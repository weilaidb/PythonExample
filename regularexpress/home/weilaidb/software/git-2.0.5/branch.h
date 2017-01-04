#define BRANCH_H
void create_branch(const char *head, const char *name, const char *start_name,
int force, int reflog,
int clobber_head, int quiet, enum branch_track track);
int validate_new_branchname(const char *name, struct strbuf *ref, int force, int attr_only);
void remove_branch_state(void);
#define BRANCH_CONFIG_VERBOSE 01
extern void install_branch_config(int flag, const char *local, const char *origin, const char *remote);
extern int read_branch_desc(struct strbuf *, const char *branch_name);
