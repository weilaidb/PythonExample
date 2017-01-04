#define __DIR_DOT_H__
int dlm_dir_nodeid(struct dlm_rsb *rsb);
int dlm_hash2nodeid(struct dlm_ls *ls, uint32_t hash);
void dlm_dir_remove_entry(struct dlm_ls *ls, int nodeid, char *name, int len);
void dlm_dir_clear(struct dlm_ls *ls);
void dlm_clear_free_entries(struct dlm_ls *ls);
int dlm_recover_directory(struct dlm_ls *ls);
int dlm_dir_lookup(struct dlm_ls *ls, int nodeid, char *name, int namelen,
int *r_nodeid);
void dlm_copy_master_names(struct dlm_ls *ls, char *inbuf, int inlen,
char *outbuf, int outlen, int nodeid);
