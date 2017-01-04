#define __SYS_DOT_H__
struct gfs2_sbd;
int gfs2_sys_fs_add(struct gfs2_sbd *sdp);
void gfs2_sys_fs_del(struct gfs2_sbd *sdp);
int gfs2_sys_init(void);
void gfs2_sys_uninit(void);
