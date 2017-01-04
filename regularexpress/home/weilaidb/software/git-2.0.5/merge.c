static const char *merge_argument(struct commit *commit)
int try_merge_command(const char *strategy, size_t xopts_nr,
const char **xopts, struct commit_list *common,
const char *head_arg, struct commit_list *remotes)
int checkout_fast_forward(const unsigned char *head,
const unsigned char *remote,
int overwrite_ignore)
