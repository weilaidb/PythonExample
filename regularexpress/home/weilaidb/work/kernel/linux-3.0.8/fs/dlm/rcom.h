#define __RCOM_DOT_H__
int dlm_rcom_status(struct dlm_ls *ls, int nodeid);
int dlm_rcom_names(struct dlm_ls *ls, int nodeid, char *last_name,int last_len);
int dlm_send_rcom_lookup(struct dlm_rsb *r, int dir_nodeid);
int dlm_send_rcom_lock(struct dlm_rsb *r, struct dlm_lkb *lkb);
void dlm_receive_rcom(struct dlm_ls *ls, struct dlm_rcom *rc, int nodeid);
int dlm_send_ls_not_ready(int nodeid, struct dlm_rcom *rc_in);
