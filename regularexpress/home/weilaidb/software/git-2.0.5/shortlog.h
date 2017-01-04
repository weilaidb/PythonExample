#define SHORTLOG_H
struct shortlog ;
void shortlog_init(struct shortlog *log);
void shortlog_add_commit(struct shortlog *log, struct commit *commit);
void shortlog_output(struct shortlog *log);
