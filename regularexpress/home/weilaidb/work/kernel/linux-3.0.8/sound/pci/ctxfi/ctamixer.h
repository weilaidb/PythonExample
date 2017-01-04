#define CTAMIXER_H
struct sum ;
struct sum_desc ;
struct sum_mgr ;
int sum_mgr_create(void *hw, struct sum_mgr **rsum_mgr);
int sum_mgr_destroy(struct sum_mgr *sum_mgr);
struct amixer_rsc_ops;
struct amixer ;
struct amixer_rsc_ops ;
struct amixer_desc ;
struct amixer_mgr ;
int amixer_mgr_create(void *hw, struct amixer_mgr **ramixer_mgr);
int amixer_mgr_destroy(struct amixer_mgr *amixer_mgr);
