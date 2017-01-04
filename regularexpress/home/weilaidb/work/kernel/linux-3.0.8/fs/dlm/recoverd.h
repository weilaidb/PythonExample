#define __RECOVERD_DOT_H__
void dlm_recoverd_kick(struct dlm_ls *ls);
void dlm_recoverd_stop(struct dlm_ls *ls);
int dlm_recoverd_start(struct dlm_ls *ls);
void dlm_recoverd_suspend(struct dlm_ls *ls);
void dlm_recoverd_resume(struct dlm_ls *ls);
