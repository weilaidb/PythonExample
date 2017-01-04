static const char ls_remote_usage[] =
"git ls-remote [--heads] [--tags]  [-u <exec> | --upload-pack <exec>]\n"
"                     [-q|--quiet] [--exit-code] [--get-url] [<repository> [<refs>...]]";
static int tail_match(const char **pattern, const char *path)
int cmd_ls_remote(int argc, const char **argv, const char *prefix)
