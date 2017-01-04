#define __PERF_STRLIST_H
struct str_node ;
struct strlist ;
struct strlist *strlist__new(bool dupstr, const char *slist);
void strlist__delete(struct strlist *self);
void strlist__remove(struct strlist *self, struct str_node *sn);
int strlist__load(struct strlist *self, const char *filename);
int strlist__add(struct strlist *self, const char *str);
struct str_node *strlist__entry(const struct strlist *self, unsigned int idx);
struct str_node *strlist__find(struct strlist *self, const char *entry);
static inline bool strlist__has_entry(struct strlist *self, const char *entry)
static inline bool strlist__empty(const struct strlist *self)
static inline unsigned int strlist__nr_entries(const struct strlist *self)
static inline struct str_node *strlist__first(struct strlist *self)
static inline struct str_node *strlist__next(struct str_node *sn)
#define strlist__for_each(pos, self)	\
for (pos = strlist__first(self); pos; pos = strlist__next(pos))
#define strlist__for_each_safe(pos, n, self)	\
for (pos = strlist__first(self), n = strlist__next(pos); pos;\
pos = n, n = strlist__next(n))
int strlist__parse_list(struct strlist *self, const char *s);
