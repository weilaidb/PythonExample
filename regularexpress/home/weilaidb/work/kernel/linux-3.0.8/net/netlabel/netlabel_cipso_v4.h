#define _NETLABEL_CIPSO_V4
enum ;
enum ;
#define NLBL_CIPSOV4_A_MAX (__NLBL_CIPSOV4_A_MAX - 1)
int netlbl_cipsov4_genl_init(void);
void netlbl_cipsov4_doi_free(struct rcu_head *entry);
