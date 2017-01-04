# include <linux/slab.h>
# include <stdlib.h>
# include <assert.h>
# define kfree(x) do  while (0)
# define BUG_ON(x) assert(!(x))
const char *crush_bucket_alg_name(int alg)
int crush_get_bucket_item_weight(struct crush_bucket *b, int p)
void crush_calc_parents(struct crush_map *map)
void crush_destroy_bucket_uniform(struct crush_bucket_uniform *b)
void crush_destroy_bucket_list(struct crush_bucket_list *b)
void crush_destroy_bucket_tree(struct crush_bucket_tree *b)
void crush_destroy_bucket_straw(struct crush_bucket_straw *b)
void crush_destroy_bucket(struct crush_bucket *b)
void crush_destroy(struct crush_map *map)
