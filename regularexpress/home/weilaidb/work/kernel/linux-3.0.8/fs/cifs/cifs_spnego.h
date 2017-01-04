#define _CIFS_SPNEGO_H
#define CIFS_SPNEGO_UPCALL_VERSION 2
struct cifs_spnego_msg ;
extern struct key_type cifs_spnego_key_type;
extern struct key *cifs_get_spnego_key(struct cifs_ses *sesInfo);
