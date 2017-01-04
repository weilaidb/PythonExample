#define _SELINUX_AUDIT_H
int selinux_audit_rule_init(u32 field, u32 op, char *rulestr, void **rule);
void selinux_audit_rule_free(void *rule);
int selinux_audit_rule_match(u32 sid, u32 field, u32 op, void *rule,
struct audit_context *actx);
int selinux_audit_rule_known(struct audit_krule *krule);
