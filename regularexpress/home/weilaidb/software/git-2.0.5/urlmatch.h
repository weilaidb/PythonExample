struct url_info ;
extern char *url_normalize(const char *, struct url_info *);
extern int match_urls(const struct url_info *url, const struct url_info *url_prefix, int *exactusermatch);
struct urlmatch_item ;
struct urlmatch_config ;
extern int urlmatch_config_entry(const char *var, const char *value, void *cb);
