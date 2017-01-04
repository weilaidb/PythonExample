int ehca_create_eq(struct ehca_shca *shca,
struct ehca_eq *eq,
const enum ehca_eq_type type, const u32 length)
void *ehca_poll_eq(struct ehca_shca *shca, struct ehca_eq *eq)
int ehca_destroy_eq(struct ehca_shca *shca, struct ehca_eq *eq)
