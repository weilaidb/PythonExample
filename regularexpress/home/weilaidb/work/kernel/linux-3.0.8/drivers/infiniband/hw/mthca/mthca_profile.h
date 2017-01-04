#define MTHCA_PROFILE_H
struct mthca_profile ;
s64 mthca_make_profile(struct mthca_dev *mdev,
struct mthca_profile *request,
struct mthca_dev_lim *dev_lim,
struct mthca_init_hca_param *init_hca);
