struct nlmsg_perm ;
static struct nlmsg_perm nlmsg_route_perms[] =
;
static struct nlmsg_perm nlmsg_firewall_perms[] =
;
static struct nlmsg_perm nlmsg_tcpdiag_perms[] =
;
static struct nlmsg_perm nlmsg_xfrm_perms[] =
;
static struct nlmsg_perm nlmsg_audit_perms[] =
;
static int nlmsg_perm(u16 nlmsg_type, u32 *perm, struct nlmsg_perm *tab, size_t tabsize)
int selinux_nlmsg_lookup(u16 sclass, u16 nlmsg_type, u32 *perm)
