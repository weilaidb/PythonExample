#define AVUTIL_LLS_H
#define MAX_VARS 32
#define MAX_VARS_ALIGN FFALIGN(MAX_VARS+1,4)
typedef struct LLSModel  LLSModel;
void avpriv_init_lls(LLSModel *m, int indep_count);
void ff_init_lls_x86(LLSModel *m);
void avpriv_solve_lls(LLSModel *m, double threshold, unsigned short min_order);
