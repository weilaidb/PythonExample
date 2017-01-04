#define CEPH_CRUSH_CRUSH_H
#define CRUSH_MAGIC 0x00010000ul
#define CRUSH_MAX_DEPTH 10
#define CRUSH_MAX_SET   10
struct crush_rule_step ;
enum ;
#define CRUSH_CHOOSE_N            0
#define CRUSH_CHOOSE_N_MINUS(x)   (-(x))
struct crush_rule_mask ;
struct crush_rule ;
#define crush_rule_size(len) (sizeof(struct crush_rule) + \
(len)*sizeof(struct crush_rule_step))
enum ;
extern const char *crush_bucket_alg_name(int alg);
struct crush_bucket ;
struct crush_bucket_uniform ;
struct crush_bucket_list ;
struct crush_bucket_tree ;
struct crush_bucket_straw ;
struct crush_map ;
extern int crush_get_bucket_item_weight(struct crush_bucket *b, int pos);
extern void crush_calc_parents(struct crush_map *map);
extern void crush_destroy_bucket_uniform(struct crush_bucket_uniform *b);
extern void crush_destroy_bucket_list(struct crush_bucket_list *b);
extern void crush_destroy_bucket_tree(struct crush_bucket_tree *b);
extern void crush_destroy_bucket_straw(struct crush_bucket_straw *b);
extern void crush_destroy_bucket(struct crush_bucket *b);
extern void crush_destroy(struct crush_map *map);
