typedef struct PCAPCA;
PCA *ff_pca_init(int n)
void ff_pca_free(PCA *pca)
void ff_pca_add(PCA *pca, const double *v)
int ff_pca(PCA *pca, double *eigenvector, double *eigenvalue)
#undef printf
int main(void)
