#define __AA_PROCATTR_H
#define AA_DO_TEST 1
#define AA_ONEXEC  1
int aa_getprocattr(struct aa_profile *profile, char **string);
int aa_setprocattr_changehat(char *args, size_t size, int test);
int aa_setprocattr_changeprofile(char *fqname, bool onexec, int test);
int aa_setprocattr_permipc(char *fqname);
