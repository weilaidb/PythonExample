#define FETCH_PACK_H
struct sha1_array;
struct fetch_pack_args ;
struct ref *fetch_pack(struct fetch_pack_args *args,
int fd[], struct child_process *conn,
const struct ref *ref,
const char *dest,
struct ref **sought,
int nr_sought,
struct sha1_array *shallow,
char **pack_lockfile);
