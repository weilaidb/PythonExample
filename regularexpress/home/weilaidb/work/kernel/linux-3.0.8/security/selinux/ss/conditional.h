#define _CONDITIONAL_H_
#define COND_EXPR_MAXDEPTH 10
struct cond_expr ;
struct cond_av_list ;
struct cond_node ;
int cond_policydb_init(struct policydb *p);
void cond_policydb_destroy(struct policydb *p);
int cond_init_bool_indexes(struct policydb *p);
int cond_destroy_bool(void *key, void *datum, void *p);
int cond_index_bool(void *key, void *datum, void *datap);
int cond_read_bool(struct policydb *p, struct hashtab *h, void *fp);
int cond_read_list(struct policydb *p, void *fp);
int cond_write_bool(void *key, void *datum, void *ptr);
int cond_write_list(struct policydb *p, struct cond_node *list, void *fp);
void cond_compute_av(struct avtab *ctab, struct avtab_key *key, struct av_decision *avd);
int evaluate_cond_node(struct policydb *p, struct cond_node *node);
