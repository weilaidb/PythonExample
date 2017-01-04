struct complete_reflogs ;
static int read_one_reflog(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static struct complete_reflogs *read_complete_reflog(const char *ref)
static int get_reflog_recno_by_time(struct complete_reflogs *array,
unsigned long timestamp)
struct commit_info_lifo ;
static struct commit_info *get_commit_info(struct commit *commit,
struct commit_info_lifo *lifo, int pop)
static void add_commit_info(struct commit *commit, void *util,
struct commit_info_lifo *lifo)
struct commit_reflog ;
struct reflog_walk_info ;
void init_reflog_walk(struct reflog_walk_info** info)
int add_reflog_for_walk(struct reflog_walk_info *info,
struct commit *commit, const char *name)
void fake_reflog_parent(struct reflog_walk_info *info, struct commit *commit)
void get_reflog_selector(struct strbuf *sb,
struct reflog_walk_info *reflog_info,
enum date_mode dmode, int force_date,
int shorten)
void get_reflog_message(struct strbuf *sb,
struct reflog_walk_info *reflog_info)
const char *get_reflog_ident(struct reflog_walk_info *reflog_info)
void show_reflog_message(struct reflog_walk_info *reflog_info, int oneline,
enum date_mode dmode, int force_date)
