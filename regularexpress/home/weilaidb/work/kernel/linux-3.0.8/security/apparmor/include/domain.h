#define __AA_DOMAIN_H
struct aa_domain ;
int apparmor_bprm_set_creds(struct linux_binprm *bprm);
int apparmor_bprm_secureexec(struct linux_binprm *bprm);
void apparmor_bprm_committing_creds(struct linux_binprm *bprm);
void apparmor_bprm_committed_creds(struct linux_binprm *bprm);
void aa_free_domain_entries(struct aa_domain *domain);
int aa_change_hat(const char *hats[], int count, u64 token, bool permtest);
int aa_change_profile(const char *ns_name, const char *name, bool onexec,
bool permtest);
