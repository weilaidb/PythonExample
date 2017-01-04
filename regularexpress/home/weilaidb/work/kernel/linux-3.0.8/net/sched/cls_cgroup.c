static struct cgroup_subsys_state *cgrp_create(struct cgroup_subsys *ss,
struct cgroup *cgrp);
static void cgrp_destroy(struct cgroup_subsys *ss, struct cgroup *cgrp);
static int cgrp_populate(struct cgroup_subsys *ss, struct cgroup *cgrp);
struct cgroup_subsys net_cls_subsys = ;
static inline struct cgroup_cls_state *cgrp_cls_state(struct cgroup *cgrp)
static inline struct cgroup_cls_state *task_cls_state(struct task_struct *p)
static struct cgroup_subsys_state *cgrp_create(struct cgroup_subsys *ss,
struct cgroup *cgrp)
static void cgrp_destroy(struct cgroup_subsys *ss, struct cgroup *cgrp)
static u64 read_classid(struct cgroup *cgrp, struct cftype *cft)
static int write_classid(struct cgroup *cgrp, struct cftype *cft, u64 value)
static struct cftype ss_files[] = ;
static int cgrp_populate(struct cgroup_subsys *ss, struct cgroup *cgrp)
struct cls_cgroup_head ;
static int cls_cgroup_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static unsigned long cls_cgroup_get(struct tcf_proto *tp, u32 handle)
static void cls_cgroup_put(struct tcf_proto *tp, unsigned long f)
static int cls_cgroup_init(struct tcf_proto *tp)
static const struct tcf_ext_map cgroup_ext_map = ;
static const struct nla_policy cgroup_policy[TCA_CGROUP_MAX + 1] = ;
static int cls_cgroup_change(struct tcf_proto *tp, unsigned long base,
u32 handle, struct nlattr **tca,
unsigned long *arg)
static void cls_cgroup_destroy(struct tcf_proto *tp)
static int cls_cgroup_delete(struct tcf_proto *tp, unsigned long arg)
static void cls_cgroup_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int cls_cgroup_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_cgroup_ops __read_mostly = ;
static int __init init_cgroup_cls(void)
static void __exit exit_cgroup_cls(void)
module_init(init_cgroup_cls);
module_exit(exit_cgroup_cls);
MODULE_LICENSE("GPL");
