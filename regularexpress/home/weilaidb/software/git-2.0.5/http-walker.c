struct alt_base ;
enum object_request_state ;
struct object_request ;
struct alternates_request ;
struct walker_data ;
static struct object_request *object_queue_head;
static void fetch_alternates(struct walker *walker, const char *base);
static void process_object_response(void *callback_data);
static void start_object_request(struct walker *walker,
struct object_request *obj_req)
static void finish_object_request(struct object_request *obj_req)
static void process_object_response(void *callback_data)
static void release_object_request(struct object_request *obj_req)
static int fill_active_slot(struct walker *walker)
static void prefetch(struct walker *walker, unsigned char *sha1)
static void process_alternates_response(void *callback_data)
static void fetch_alternates(struct walker *walker, const char *base)
static int fetch_indices(struct walker *walker, struct alt_base *repo)
static int http_fetch_pack(struct walker *walker, struct alt_base *repo, unsigned char *sha1)
static void abort_object_request(struct object_request *obj_req)
static int fetch_object(struct walker *walker, struct alt_base *repo, unsigned char *sha1)
static int fetch(struct walker *walker, unsigned char *sha1)
static int fetch_ref(struct walker *walker, struct ref *ref)
static void cleanup(struct walker *walker)
struct walker *get_http_walker(const char *url)
