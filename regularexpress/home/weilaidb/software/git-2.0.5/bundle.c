static const char bundle_signature[] = "# v2 git bundle\n";
static void add_to_ref_list(const unsigned char *sha1, const char *name,
struct ref_list *list)
static int parse_bundle_header(int fd, struct bundle_header *header,
const char *report_path)
int read_bundle_header(const char *path, struct bundle_header *header)
int is_bundle(const char *path, int quiet)
static int list_refs(struct ref_list *r, int argc, const char **argv)
#define PREREQ_MARK (1u<<16)
int verify_bundle(struct bundle_header *header, int verbose)
int list_bundle_refs(struct bundle_header *header, int argc, const char **argv)
static int is_tag_in_date_range(struct object *tag, struct rev_info *revs)
int create_bundle(struct bundle_header *header, const char *path,
int argc, const char **argv)
int unbundle(struct bundle_header *header, int bundle_fd, int flags)
