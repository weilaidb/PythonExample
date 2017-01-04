#define SEND_PACK_H
struct send_pack_args ;
int send_pack(struct send_pack_args *args,
int fd[], struct child_process *conn,
struct ref *remote_refs, struct sha1_array *extra_have);
