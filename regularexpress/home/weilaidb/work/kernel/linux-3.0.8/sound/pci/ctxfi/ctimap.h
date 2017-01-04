#define CTIMAP_H
struct imapper ;
int input_mapper_add(struct list_head *mappers, struct imapper *entry,
int (*map_op)(void *, struct imapper *), void *data);
int input_mapper_delete(struct list_head *mappers, struct imapper *entry,
int (*map_op)(void *, struct imapper *), void *data);
void free_input_mapper_list(struct list_head *mappers);
