int mthca_pd_alloc(struct mthca_dev *dev, int privileged, struct mthca_pd *pd)
void mthca_pd_free(struct mthca_dev *dev, struct mthca_pd *pd)
int mthca_init_pd_table(struct mthca_dev *dev)
void mthca_cleanup_pd_table(struct mthca_dev *dev)
