int aa_getprocattr(struct aa_profile *profile, char **string)
{
char *str;
int len = 0, mode_len = 0, ns_len = 0, name_len;
const char *mode_str = profile_mode_names[profile->mode];
const char *ns_name = NULL;
struct aa_namespace *ns = profile->ns;
struct aa_namespace *current_ns = __aa_current_profile()->ns;
char *s;
if (!aa_ns_visible(current_ns, ns))
return -EACCES;
ns_name = aa_ns_name(current_ns, ns);
ns_len = strlen(ns_name);
if (!unconfined(profile))
mode_len = strlen(mode_str) + 3;
name_len = strlen(profile->base.hname);
len = mode_len + ns_len + name_len + 1;
s = str = kmalloc(len + 1, GFP_KERNEL);
if (!str)
return -ENOMEM;
if (ns_len)
static char *split_token_from_name(int op, char *args, u64 * token)
int aa_setprocattr_changehat(char *args, size_t size, int test)
int aa_setprocattr_changeprofile(char *fqname, bool onexec, int test)
int aa_setprocattr_permipc(char *fqname)
