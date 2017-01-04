struct arm_vmregion *
arm_vmregion_alloc(struct arm_vmregion_head *head, size_t align,
size_t size, gfp_t gfp)
static struct arm_vmregion *__arm_vmregion_find(struct arm_vmregion_head *head, unsigned long addr)
struct arm_vmregion *arm_vmregion_find(struct arm_vmregion_head *head, unsigned long addr)
struct arm_vmregion *arm_vmregion_find_remove(struct arm_vmregion_head *head, unsigned long addr)
void arm_vmregion_free(struct arm_vmregion_head *head, struct arm_vmregion *c)
