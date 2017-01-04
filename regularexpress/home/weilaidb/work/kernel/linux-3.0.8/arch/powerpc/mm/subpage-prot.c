void subpage_prot_free(struct mm_struct *mm)
void subpage_prot_init_new_context(struct mm_struct *mm)
static void hpte_flush_range(struct mm_struct *mm, unsigned long addr,
int npages)
static void subpage_prot_clear(unsigned long addr, unsigned long len)
long sys_subpage_prot(unsigned long addr, unsigned long len, u32 __user *map)
