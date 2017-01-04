#define CONNECTED_H
struct transport;
typedef int (*sha1_iterate_fn)(void *, unsigned char [20]);
extern int check_everything_connected(sha1_iterate_fn, int quiet, void *cb_data);
extern int check_shallow_connected(sha1_iterate_fn, int quiet, void *cb_data,
const char *shallow_file);
extern int check_everything_connected_with_transport(sha1_iterate_fn, int quiet,
void *cb_data,
struct transport *transport);
