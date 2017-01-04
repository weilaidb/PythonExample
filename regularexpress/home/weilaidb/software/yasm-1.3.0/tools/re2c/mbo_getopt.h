#define RE2C_MBO_GETOPT_H_INCLUDE_GUARD_
typedef struct mbo_opt_struct
mbo_opt_struct;
int mbo_getopt(int argc, char* const *argv, const mbo_opt_struct opts[], char **optarg, int *optind, int show_err);
