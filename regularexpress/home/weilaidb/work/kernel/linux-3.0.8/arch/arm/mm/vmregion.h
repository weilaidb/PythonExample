#define VMREGION_H
struct page;
struct arm_vmregion_head ;
struct arm_vmregion ;
struct arm_vmregion *arm_vmregion_alloc(struct arm_vmregion_head *, size_t, size_t, gfp_t);
struct arm_vmregion *arm_vmregion_find(struct arm_vmregion_head *, unsigned long);
struct arm_vmregion *arm_vmregion_find_remove(struct arm_vmregion_head *, unsigned long);
void arm_vmregion_free(struct arm_vmregion_head *, struct arm_vmregion *);
