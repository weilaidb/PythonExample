#define BUNDLE_H
struct ref_list ;
struct bundle_header ;
int is_bundle(const char *path, int quiet);
int read_bundle_header(const char *path, struct bundle_header *header);
int create_bundle(struct bundle_header *header, const char *path,
int argc, const char **argv);
int verify_bundle(struct bundle_header *header, int verbose);
#define BUNDLE_VERBOSE 1
int unbundle(struct bundle_header *header, int bundle_fd, int flags);
int list_bundle_refs(struct bundle_header *header,
int argc, const char **argv);
