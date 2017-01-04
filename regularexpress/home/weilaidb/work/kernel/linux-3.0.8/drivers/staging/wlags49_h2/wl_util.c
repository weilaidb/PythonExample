#define MAX_CHAN_FREQ_MAP_ENTRIES   50
static const long chan_freq_list[][MAX_CHAN_FREQ_MAP_ENTRIES] =
;
#if DBG
extern dbg_info_t *DbgInfo;
int dbm( int value )
int percent( int value, int min, int max )
int is_valid_key_string( char *s )
void key_string2key( char *ks, KEY_STRCT *key )
int wl_has_wep (IFBP ifbp)
void wl_hcf_error( struct net_device *dev, int hcfStatus )
void wl_endian_translate_event( ltv_t *pLtv )
void msf_assert( unsigned int line_number, hcf_16 trace, hcf_32 qual )
hcf_8 wl_parse_ds_ie( PROBE_RESP *probe_rsp )
hcf_8 * wl_parse_wpa_ie( PROBE_RESP *probe_rsp, hcf_16 *length )
hcf_8 * wl_print_wpa_ie( hcf_8 *buffer, int length )
int wl_is_a_valid_chan( int channel )
int wl_is_a_valid_freq( long frequency )
long wl_get_freq_from_chan( int channel )
int wl_get_chan_from_freq( long frequency )
void wl_process_link_status( struct wl_private *lp )
void wl_process_probe_response( struct wl_private *lp )
void wl_process_updated_record( struct wl_private *lp )
void wl_process_assoc_status( struct wl_private *lp )
void wl_process_security_status( struct wl_private *lp )
int wl_get_tallies(struct wl_private *lp,
CFG_HERMES_TALLIES_STRCT *tallies)
