struct rq_entry ;
void dlm_add_requestqueue(struct dlm_ls *ls, int nodeid, struct dlm_message *ms)
int dlm_process_requestqueue(struct dlm_ls *ls)
void dlm_wait_requestqueue(struct dlm_ls *ls)
static int purge_request(struct dlm_ls *ls, struct dlm_message *ms, int nodeid)
void dlm_purge_requestqueue(struct dlm_ls *ls)
