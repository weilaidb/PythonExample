#if CONFIG_NETWORK
ff_url_join
ff_make_absolute_url
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
while (av_strstart(rel, , NULL) && sep)
av_strlcat(buf, rel, size);
}
*ff_alloc_dir_entry
