static const char *OP_and	= "&";
static const char *OP_or	= "|";
static const char *OP_not	= "!";
#define is_operator(c)	((c) == '|' || (c) == '&' || (c) == '!')
#define is_separator(c)	(is_operator(c) || (c) == '(' || (c) == ')')
static void strfilter_node__delete(struct strfilter_node *self)
void strfilter__delete(struct strfilter *self)
static const char *get_token(const char *s, const char **e)
static struct strfilter_node *strfilter_node__alloc(const char *op,
struct strfilter_node *l,
struct strfilter_node *r)
static struct strfilter_node *strfilter_node__new(const char *s,
const char **ep)
struct strfilter *strfilter__new(const char *rules, const char **err)
static bool strfilter_node__compare(struct strfilter_node *self,
const char *str)
bool strfilter__compare(struct strfilter *self, const char *str)
