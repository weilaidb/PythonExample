static int vde_user_init(void *data, void *dev)
static int vde_user_open(void *data)
static void vde_remove(void *data)
const struct net_user_info vde_user_info = ;
void vde_init_libstuff(struct vde_data *vpri, struct vde_init *init)
int vde_user_read(void *conn, void *buf, int len)
int vde_user_write(void *conn, void *buf, int len)
