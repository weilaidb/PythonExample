#define WALKER_H
struct walker ;
void walker_say(struct walker *walker, const char *, const char *);
int walker_targets_stdin(char ***target, const char ***write_ref);
void walker_targets_free(int targets, char **target, const char **write_ref);
int walker_fetch(struct walker *impl, int targets, char **target,
const char **write_ref, const char *write_ref_log_details);
void walker_free(struct walker *walker);
struct walker *get_http_walker(const char *url);
