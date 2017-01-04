#define S390_IDSET_H S390_IDSET_H
struct idset;
void idset_free(struct idset *set);
void idset_clear(struct idset *set);
void idset_fill(struct idset *set);
struct idset *idset_sch_new(void);
void idset_sch_add(struct idset *set, struct subchannel_id id);
void idset_sch_del(struct idset *set, struct subchannel_id id);
int idset_sch_contains(struct idset *set, struct subchannel_id id);
int idset_sch_get_first(struct idset *set, struct subchannel_id *id);
int idset_is_empty(struct idset *set);
void idset_add_set(struct idset *to, struct idset *from);
