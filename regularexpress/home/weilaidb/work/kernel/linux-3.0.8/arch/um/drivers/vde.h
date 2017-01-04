#define __UM_VDE_H__
struct vde_data ;
struct vde_init ;
extern const struct net_user_info vde_user_info;
extern void vde_init_libstuff(struct vde_data *vpri, struct vde_init *init);
extern int vde_user_read(void *conn, void *buf, int len);
extern int vde_user_write(void *conn, void *buf, int len);
