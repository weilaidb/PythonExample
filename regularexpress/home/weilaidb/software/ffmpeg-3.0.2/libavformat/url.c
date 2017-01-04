#if CONFIG_NETWORK
int ff_url_join(char *str, int size, const char *proto,
const char *authorization, const char *hostname,
int port, const char *fmt, ...)
void ff_make_absolute_url(char *buf, int size, const char *base,
const char *rel)
if (!base || strstr(rel, ":
av_strlcpy(buf, rel, size);
return;
}
if (base != buf)
av_strlcpy(buf, base, size);
path_query = strchr(buf, '?');
if (path_query)
*path_query = '\0';
if (rel[0] == '?')
sep = strrchr(buf, '/');
if (sep)
sep[1] = '\0';
else
buf[0] = '\0';
while (av_strstart(rel, "../", NULL) && sep)
av_strlcat(buf, rel, size);
}
AVIODirEntry *ff_alloc_dir_entry(void)
