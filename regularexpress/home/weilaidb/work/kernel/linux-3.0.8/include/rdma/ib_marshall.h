#if !defined(IB_USER_MARSHALL_H)
#define IB_USER_MARSHALL_H
void ib_copy_qp_attr_to_user(struct ib_uverbs_qp_attr *dst,
struct ib_qp_attr *src);
void ib_copy_ah_attr_to_user(struct ib_uverbs_ah_attr *dst,
struct ib_ah_attr *src);
void ib_copy_path_rec_to_user(struct ib_user_path_rec *dst,
struct ib_sa_path_rec *src);
void ib_copy_path_rec_from_user(struct ib_sa_path_rec *dst,
struct ib_user_path_rec *src);
