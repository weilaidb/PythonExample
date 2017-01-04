#define SEQUENCER_H
#define SEQ_DIR		"sequencer"
#define SEQ_HEAD_FILE	"sequencer/head"
#define SEQ_TODO_FILE	"sequencer/todo"
#define SEQ_OPTS_FILE	"sequencer/opts"
#define APPEND_SIGNOFF_DEDUP (1u << 0)
enum replay_action ;
enum replay_subcommand ;
struct replay_opts ;
int sequencer_pick_revisions(struct replay_opts *opts);
extern const char sign_off_header[];
void append_signoff(struct strbuf *msgbuf, int ignore_footer, unsigned flag);
