void kvmppc_init_timing_stats(struct kvm_vcpu *vcpu)
static void add_exit_timing(struct kvm_vcpu *vcpu, u64 duration, int type)
void kvmppc_update_timing_stats(struct kvm_vcpu *vcpu)
static const char *kvm_exit_names[__NUMBER_OF_KVM_EXIT_TYPES] = ;
static int kvmppc_exit_timing_show(struct seq_file *m, void *private)
static ssize_t kvmppc_exit_timing_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int kvmppc_exit_timing_open(struct inode *inode, struct file *file)
static const struct file_operations kvmppc_exit_timing_fops = ;
void kvmppc_create_vcpu_debugfs(struct kvm_vcpu *vcpu, unsigned int id)
void kvmppc_remove_vcpu_debugfs(struct kvm_vcpu *vcpu)
