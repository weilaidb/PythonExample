static HANDLE ms_eventlog;
void openlog(const char *ident, int logopt, int facility)
void syslog(int priority, const char *fmt, ...)
