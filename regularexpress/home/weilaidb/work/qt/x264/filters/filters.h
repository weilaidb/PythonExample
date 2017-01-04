#define X264_FILTERS_H
char **x264_split_options( const char *opt_str, const char * const *options );
char  *x264_get_option( const char *name, char **split_options );
int    x264_otob( const char *str, int def );
double x264_otof( const char *str, double def );
int    x264_otoi( const char *str, int def );
char  *x264_otos( char *str, char *def );
