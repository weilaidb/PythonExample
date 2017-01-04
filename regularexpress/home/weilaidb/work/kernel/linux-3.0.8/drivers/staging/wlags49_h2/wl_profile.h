#define __WL_PROFILE_H__
#define ROOT_CONFIG_FILENAME "/etc/agere/iwconfig-"
void parse_config( struct net_device *dev );
int readline( int filedesc, char *buffer );
void translate_option( char *buffer, struct wl_private *lp );
int parse_mac_address( char *value, u_char *byte_array );
void ParseConfigLine( char *pszLine, char **ppszLVal, char **ppszRVal );
