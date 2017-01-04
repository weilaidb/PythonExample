int advice_push_update_rejected = 1;
int advice_push_non_ff_current = 1;
int advice_push_non_ff_matching = 1;
int advice_push_already_exists = 1;
int advice_push_fetch_first = 1;
int advice_push_needs_force = 1;
int advice_status_hints = 1;
int advice_status_u_option = 1;
int advice_commit_before_merge = 1;
int advice_resolve_conflict = 1;
int advice_implicit_identity = 1;
int advice_detached_head = 1;
int advice_set_upstream_failure = 1;
int advice_object_name_warning = 1;
int advice_rm_hints = 1;
static struct  advice_config[] = ;
void advise(const char *advice, ...)
int git_default_advice_config(const char *var, const char *value)
int error_resolve_conflict(const char *me)
void NORETURN die_resolve_conflict(const char *me)
void detach_advice(const char *new_name)
