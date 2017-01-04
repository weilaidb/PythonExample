static int feed_object(const unsigned char *sha1, int fd, int negative)
static int pack_objects(int fd, struct ref *refs, struct sha1_array *extra, struct send_pack_args *args)
static int receive_status(int in, struct ref *refs)
static int sideband_demux(int in, int out, void *data)
static int advertise_shallow_grafts_cb(const struct commit_graft *graft, void *cb)
static void advertise_shallow_grafts_buf(struct strbuf *sb)
int send_pack(struct send_pack_args *args,
int fd[], struct child_process *conn,
struct ref *remote_refs,
struct sha1_array *extra_have)
