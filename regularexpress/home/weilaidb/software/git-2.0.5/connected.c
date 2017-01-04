int check_everything_connected(sha1_iterate_fn fn, int quiet, void *cb_data)
static int check_everything_connected_real(sha1_iterate_fn fn,
int quiet,
void *cb_data,
struct transport *transport,
const char *shallow_file)
int check_everything_connected_with_transport(sha1_iterate_fn fn,
int quiet,
void *cb_data,
struct transport *transport)
int check_shallow_connected(sha1_iterate_fn fn, int quiet, void *cb_data,
const char *shallow_file)
