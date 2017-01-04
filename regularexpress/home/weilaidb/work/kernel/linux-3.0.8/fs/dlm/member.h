#define __MEMBER_DOT_H__
int dlm_ls_stop(struct dlm_ls *ls);
int dlm_ls_start(struct dlm_ls *ls);
void dlm_clear_members(struct dlm_ls *ls);
void dlm_clear_members_gone(struct dlm_ls *ls);
int dlm_recover_members(struct dlm_ls *ls, struct dlm_recover *rv,int *neg_out);
int dlm_is_removed(struct dlm_ls *ls, int nodeid);
int dlm_is_member(struct dlm_ls *ls, int nodeid);
