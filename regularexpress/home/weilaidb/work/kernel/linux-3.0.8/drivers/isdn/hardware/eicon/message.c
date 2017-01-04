#define FILE_ "MESSAGE.C"
#define dprintf
static dword diva_xdi_extended_features = 0;
#define DIVA_CAPI_USE_CMA                 0x00000001
#define DIVA_CAPI_XDI_PROVIDES_SDRAM_BAR  0x00000002
#define DIVA_CAPI_XDI_PROVIDES_NO_CANCEL  0x00000004
#define DIVA_CAPI_XDI_PROVIDES_RX_DMA     0x00000008
#define DIVA_CAPI_SUPPORTS_NO_CANCEL(__a__)   (((__a__)->manufacturer_features&MANUFACTURER_FEATURE_XONOFF_FLOW_CONTROL)&&    ((__a__)->manufacturer_features & MANUFACTURER_FEATURE_OK_FC_LABEL) &&     (diva_xdi_extended_features   & DIVA_CAPI_XDI_PROVIDES_NO_CANCEL))
static void group_optimization(DIVA_CAPI_ADAPTER   * a, PLCI   * plci);
static void set_group_ind_mask (PLCI   *plci);
static void clear_group_ind_mask_bit (PLCI   *plci, word b);
static byte test_group_ind_mask_bit (PLCI   *plci, word b);
void AutomaticLaw(DIVA_CAPI_ADAPTER   *);
word CapiRelease(word);
word CapiRegister(word);
word api_put(APPL   *, CAPI_MSG   *);
static word api_parse(byte   *, word, byte *, API_PARSE *);
static void api_save_msg(API_PARSE   *in, byte *format, API_SAVE   *out);
static void api_load_msg(API_SAVE   *in, API_PARSE   *out);
word api_remove_start(void);
void api_remove_complete(void);
static void plci_remove(PLCI   *);
static void diva_get_extended_adapter_features (DIVA_CAPI_ADAPTER  * a);
static void diva_ask_for_xdi_sdram_bar (DIVA_CAPI_ADAPTER  *, IDI_SYNC_REQ  *);
void   callback(ENTITY   *);
static void control_rc(PLCI   *, byte, byte, byte, byte, byte);
static void data_rc(PLCI   *, byte);
static void data_ack(PLCI   *, byte);
static void sig_ind(PLCI   *);
static void SendInfo(PLCI   *, dword, byte   * *, byte);
static void SendSetupInfo(APPL   *, PLCI   *, dword, byte   * *, byte);
static void SendSSExtInd(APPL   *, PLCI   * plci, dword Id, byte   * * parms);
static void VSwitchReqInd(PLCI   *plci, dword Id, byte   **parms);
static void nl_ind(PLCI   *);
static byte connect_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_a_res(dword,word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte disconnect_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte disconnect_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte listen_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte info_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte info_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte alert_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte facility_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte facility_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_b3_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_b3_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_b3_a_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte disconnect_b3_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte disconnect_b3_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte data_b3_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte data_b3_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte reset_b3_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte reset_b3_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte connect_b3_t90_a_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte select_b_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte manufacturer_req(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static byte manufacturer_res(dword, word, DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, API_PARSE *);
static word get_plci(DIVA_CAPI_ADAPTER   *);
static void add_p(PLCI   *, byte, byte   *);
static void add_s(PLCI   * plci, byte code, API_PARSE * p);
static void add_ss(PLCI   * plci, byte code, API_PARSE * p);
static void add_ie(PLCI   * plci, byte code, byte   * p, word p_length);
static void add_d(PLCI   *, word, byte   *);
static void add_ai(PLCI   *, API_PARSE *);
static word add_b1(PLCI   *, API_PARSE *, word, word);
static word add_b23(PLCI   *, API_PARSE *);
static word add_modem_b23 (PLCI  * plci, API_PARSE* bp_parms);
static void sig_req(PLCI   *, byte, byte);
static void nl_req_ncci(PLCI   *, byte, byte);
static void send_req(PLCI   *);
static void send_data(PLCI   *);
static word plci_remove_check(PLCI   *);
static void listen_check(DIVA_CAPI_ADAPTER   *);
static byte AddInfo(byte   **, byte   **, byte   *, byte *);
static byte getChannel(API_PARSE *);
static void IndParse(PLCI   *, word *, byte   **, byte);
static byte ie_compare(byte   *, byte *);
static word find_cip(DIVA_CAPI_ADAPTER   *, byte   *, byte   *);
static word CPN_filter_ok(byte   *cpn,DIVA_CAPI_ADAPTER   *,word);
static void channel_flow_control_remove (PLCI   * plci);
static void channel_x_off (PLCI   * plci, byte ch, byte flag);
static void channel_x_on (PLCI   * plci, byte ch);
static void channel_request_xon (PLCI   * plci, byte ch);
static void channel_xmit_xon (PLCI   * plci);
static int channel_can_xon (PLCI   * plci, byte ch);
static void channel_xmit_extended_xon (PLCI   * plci);
static byte SendMultiIE(PLCI   * plci, dword Id, byte   * * parms, byte ie_type, dword info_mask, byte setupParse);
static word AdvCodecSupport(DIVA_CAPI_ADAPTER   *, PLCI   *, APPL   *, byte);
static void CodecIdCheck(DIVA_CAPI_ADAPTER   *, PLCI   *);
static void SetVoiceChannel(PLCI   *, byte   *, DIVA_CAPI_ADAPTER   * );
static void VoiceChannelOff(PLCI   *plci);
static void adv_voice_write_coefs (PLCI   *plci, word write_command);
static void adv_voice_clear_config (PLCI   *plci);
static word get_b1_facilities (PLCI   * plci, byte b1_resource);
static byte add_b1_facilities (PLCI   * plci, byte b1_resource, word b1_facilities);
static void adjust_b1_facilities (PLCI   *plci, byte new_b1_resource, word new_b1_facilities);
static word adjust_b_process (dword Id, PLCI   *plci, byte Rc);
static void adjust_b1_resource (dword Id, PLCI   *plci, API_SAVE   *bp_msg, word b1_facilities, word internal_command);
static void adjust_b_restore (dword Id, PLCI   *plci, byte Rc);
static void reset_b3_command (dword Id, PLCI   *plci, byte Rc);
static void select_b_command (dword Id, PLCI   *plci, byte Rc);
static void fax_connect_ack_command (dword Id, PLCI   *plci, byte Rc);
static void fax_edata_ack_command (dword Id, PLCI   *plci, byte Rc);
static void fax_connect_info_command (dword Id, PLCI   *plci, byte Rc);
static void fax_adjust_b23_command (dword Id, PLCI   *plci, byte Rc);
static void fax_disconnect_command (dword Id, PLCI   *plci, byte Rc);
static void hold_save_command (dword Id, PLCI   *plci, byte Rc);
static void retrieve_restore_command (dword Id, PLCI   *plci, byte Rc);
static void init_b1_config (PLCI   *plci);
static void clear_b1_config (PLCI   *plci);
static void dtmf_command (dword Id, PLCI   *plci, byte Rc);
static byte dtmf_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg);
static void dtmf_confirmation (dword Id, PLCI   *plci);
static void dtmf_indication (dword Id, PLCI   *plci, byte   *msg, word length);
static void dtmf_parameter_write (PLCI   *plci);
static void mixer_set_bchannel_id_esc (PLCI   *plci, byte bchannel_id);
static void mixer_set_bchannel_id (PLCI   *plci, byte   *chi);
static void mixer_clear_config (PLCI   *plci);
static void mixer_notify_update (PLCI   *plci, byte others);
static void mixer_command (dword Id, PLCI   *plci, byte Rc);
static byte mixer_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg);
static void mixer_indication_coefs_set (dword Id, PLCI   *plci);
static void mixer_indication_xconnect_from (dword Id, PLCI   *plci, byte   *msg, word length);
static void mixer_indication_xconnect_to (dword Id, PLCI   *plci, byte   *msg, word length);
static void mixer_remove (PLCI   *plci);
static void ec_command (dword Id, PLCI   *plci, byte Rc);
static byte ec_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg);
static void ec_indication (dword Id, PLCI   *plci, byte   *msg, word length);
static void rtp_connect_b3_req_command (dword Id, PLCI   *plci, byte Rc);
static void rtp_connect_b3_res_command (dword Id, PLCI   *plci, byte Rc);
static int  diva_get_dma_descriptor  (PLCI   *plci, dword   *dma_magic);
static void diva_free_dma_descriptor (PLCI   *plci, int nr);
extern byte MapController (byte);
extern byte UnMapController (byte);
#define MapId(Id) (((Id) & 0xffffff00L) | MapController ((byte)(Id)))
#define UnMapId(Id) (((Id) & 0xffffff00L) | UnMapController ((byte)(Id)))
void   sendf(APPL   *, word, dword, word, byte *, ...);
void   * TransmitBufferSet(APPL   * appl, dword ref);
void   * TransmitBufferGet(APPL   * appl, void   * p);
void TransmitBufferFree(APPL   * appl, void   * p);
void   * ReceiveBufferGet(APPL   * appl, int Num);
int fax_head_line_time (char *buffer);
extern byte max_adapter;
extern byte max_appl;
extern DIVA_CAPI_ADAPTER   * adapter;
extern APPL   * application;
static byte remove_started = false;
static PLCI dummy_plci;
static struct _ftable  ftable[] = ;
static byte * cip_bc[29][2] = ;
static byte * cip_hlc[29] = ;
#define V120_HEADER_LENGTH 1
#define V120_HEADER_EXTEND_BIT  0x80
#define V120_HEADER_BREAK_BIT   0x40
#define V120_HEADER_C1_BIT      0x04
#define V120_HEADER_C2_BIT      0x08
#define V120_HEADER_FLUSH_COND  (V120_HEADER_BREAK_BIT | V120_HEADER_C1_BIT | V120_HEADER_C2_BIT)
static byte v120_default_header[] =
;
static byte v120_break_header[] =
;
word api_put(APPL   * appl, CAPI_MSG   * msg)
static word api_parse(byte *msg, word length, byte *format, API_PARSE *parms)
static void api_save_msg(API_PARSE *in, byte *format, API_SAVE *out)
static void api_load_msg(API_SAVE *in, API_PARSE *out)
word api_remove_start(void)
static void init_internal_command_queue (PLCI   *plci)
static void start_internal_command (dword Id, PLCI   *plci, t_std_internal_command command_function)
static void next_internal_command (dword Id, PLCI   *plci)
static dword ncci_mapping_bug = 0;
static word get_ncci (PLCI   *plci, byte ch, word force_ncci)
static void ncci_free_receive_buffers (PLCI   *plci, word ncci)
static void cleanup_ncci_data (PLCI   *plci, word ncci)
static void ncci_remove (PLCI   *plci, word ncci, byte preserve_ncci)
static void plci_free_msg_in_queue (PLCI   *plci)
static void plci_remove(PLCI   * plci)
static void set_group_ind_mask (PLCI   *plci)
static void clear_group_ind_mask_bit (PLCI   *plci, word b)
static byte test_group_ind_mask_bit (PLCI   *plci, word b)
static void clear_c_ind_mask (PLCI   *plci)
static byte c_ind_mask_empty (PLCI   *plci)
static void set_c_ind_mask_bit (PLCI   *plci, word b)
static void clear_c_ind_mask_bit (PLCI   *plci, word b)
static byte test_c_ind_mask_bit (PLCI   *plci, word b)
static void dump_c_ind_mask (PLCI   *plci)
#define dump_plcis(a)
static byte connect_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte connect_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte connect_a_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte disconnect_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte disconnect_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte listen_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte info_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte info_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte alert_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte facility_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte facility_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte connect_b3_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte connect_b3_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte connect_b3_a_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte disconnect_b3_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte disconnect_b3_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte data_b3_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte data_b3_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte reset_b3_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte reset_b3_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte connect_b3_t90_a_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte select_b_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
static byte manufacturer_req(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *parms)
static byte manufacturer_res(dword Id, word Number, DIVA_CAPI_ADAPTER *a,
PLCI *plci, APPL *appl, API_PARSE *msg)
void   callback(ENTITY   * e)
static void control_rc(PLCI *plci, byte req, byte rc, byte ch, byte global_req,
byte nl_rc)
static void data_rc(PLCI *plci, byte ch)
static void data_ack(PLCI *plci, byte ch)
static void sig_ind(PLCI *plci)
static void SendSetupInfo(APPL   * appl, PLCI   * plci, dword Id, byte   * * parms, byte Info_Sent_Flag)
static void SendInfo(PLCI *plci, dword Id, byte **parms, byte iesent)
static byte SendMultiIE(PLCI *plci, dword Id, byte **parms, byte ie_type,
dword info_mask, byte setupParse)
static void SendSSExtInd(APPL   * appl, PLCI   * plci, dword Id, byte   * * parms)
;
static void nl_ind(PLCI *plci)
static word get_plci(DIVA_CAPI_ADAPTER *a)
static void add_p(PLCI   * plci, byte code, byte   * p)
static void add_s(PLCI   * plci, byte code, API_PARSE * p)
static void add_ss(PLCI   * plci, byte code, API_PARSE * p)
static byte getChannel(API_PARSE * p)
static void add_ie(PLCI   * plci, byte code, byte   * p, word p_length)
static void add_d(PLCI *plci, word length, byte *p)
static void add_ai(PLCI *plci, API_PARSE *ai)
static word add_b1(PLCI *plci, API_PARSE *bp, word b_channel_info,
word b1_facilities)
static word add_b23(PLCI *plci, API_PARSE *bp)
static word add_modem_b23 (PLCI  * plci, API_PARSE* bp_parms)
static void sig_req(PLCI *plci, byte req, byte Id)
static void nl_req_ncci(PLCI *plci, byte req, byte ncci)
static void send_req(PLCI *plci)
static void send_data(PLCI *plci)
static void listen_check(DIVA_CAPI_ADAPTER *a)
static void IndParse(PLCI *plci, word *parms_id, byte **parms, byte multiIEsize)
static byte ie_compare(byte *ie1, byte *ie2)
static word find_cip(DIVA_CAPI_ADAPTER *a, byte *bc, byte *hlc)
static byte AddInfo(byte   **add_i,
byte   **fty_i,
byte   *esc_chi,
byte *facility)
static void SetVoiceChannel(PLCI *plci, byte *chi, DIVA_CAPI_ADAPTER *a)
static void VoiceChannelOff(PLCI *plci)
static word AdvCodecSupport(DIVA_CAPI_ADAPTER *a, PLCI *plci, APPL *appl,
byte hook_listen)
static void CodecIdCheck(DIVA_CAPI_ADAPTER *a, PLCI *plci)
static void diva_ask_for_xdi_sdram_bar (DIVA_CAPI_ADAPTER  * a,
IDI_SYNC_REQ  * preq)
static void diva_get_extended_adapter_features (DIVA_CAPI_ADAPTER  * a)
void AutomaticLaw(DIVA_CAPI_ADAPTER   *a)
word CapiRelease(word Id)
static word plci_remove_check(PLCI   *plci)
static byte plci_nl_busy (PLCI   *plci)
static struct
dtmf_digit_map[] =
;
#define DTMF_DIGIT_MAP_ENTRIES ARRAY_SIZE(dtmf_digit_map)
static void dtmf_enable_receiver (PLCI   *plci, byte enable_mask)
static void dtmf_send_digits (PLCI   *plci, byte   *digit_buffer, word digit_count)
static void dtmf_rec_clear_config (PLCI   *plci)
static void dtmf_send_clear_config (PLCI   *plci)
static void dtmf_prepare_switch (dword Id, PLCI   *plci)
static word dtmf_save_config (dword Id, PLCI   *plci, byte Rc)
static word dtmf_restore_config (dword Id, PLCI   *plci, byte Rc)
static void dtmf_command (dword Id, PLCI   *plci, byte Rc)
static byte dtmf_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg)
static void dtmf_confirmation (dword Id, PLCI   *plci)
static void dtmf_indication (dword Id, PLCI   *plci, byte   *msg, word length)
static void dtmf_parameter_write (PLCI   *plci)
static void dtmf_parameter_clear_config (PLCI   *plci)
static void dtmf_parameter_prepare_switch (dword Id, PLCI   *plci)
static word dtmf_parameter_save_config (dword Id, PLCI   *plci, byte Rc)
static word dtmf_parameter_restore_config (dword Id, PLCI   *plci, byte Rc)
LI_CONFIG   *li_config_table;
word li_total_channels;
static byte chi_to_channel (byte   *chi, dword *pchannelmap)
static void mixer_set_bchannel_id_esc (PLCI   *plci, byte bchannel_id)
static void mixer_set_bchannel_id (PLCI   *plci, byte   *chi)
#define MIXER_MAX_DUMP_CHANNELS 34
static void mixer_calculate_coefs (DIVA_CAPI_ADAPTER   *a)
static struct
mixer_write_prog_pri[] =
;
static struct
mixer_write_prog_bri[] =
;
static byte mixer_swapped_index_bri[] =
;
static struct
xconnect_write_prog[] =
;
static void xconnect_query_addresses (PLCI   *plci)
static void xconnect_write_coefs (PLCI   *plci, word internal_command)
static byte xconnect_write_coefs_process (dword Id, PLCI   *plci, byte Rc)
static void mixer_notify_update (PLCI   *plci, byte others)
static void mixer_clear_config (PLCI   *plci)
static void mixer_prepare_switch (dword Id, PLCI   *plci)
static word mixer_save_config (dword Id, PLCI   *plci, byte Rc)
static word mixer_restore_config (dword Id, PLCI   *plci, byte Rc)
static void mixer_command (dword Id, PLCI   *plci, byte Rc)
static void li_update_connect (dword Id, DIVA_CAPI_ADAPTER   *a, PLCI   *plci,
dword plci_b_id, byte connect, dword li_flags)
static void li2_update_connect (dword Id, DIVA_CAPI_ADAPTER   *a, PLCI   *plci,
dword plci_b_id, byte connect, dword li_flags)
static word li_check_main_plci (dword Id, PLCI   *plci)
static PLCI   *li_check_plci_b (dword Id, PLCI   *plci,
dword plci_b_id, word plci_b_write_pos, byte   *p_result)
static PLCI   *li2_check_plci_b (dword Id, PLCI   *plci,
dword plci_b_id, word plci_b_write_pos, byte   *p_result)
static byte mixer_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg)
static void mixer_indication_coefs_set (dword Id, PLCI   *plci)
static void mixer_indication_xconnect_from (dword Id, PLCI   *plci, byte   *msg, word length)
static void mixer_indication_xconnect_to (dword Id, PLCI   *plci, byte   *msg, word length)
static byte mixer_notify_source_removed (PLCI   *plci, dword plci_b_id)
static void mixer_remove (PLCI   *plci)
static void ec_write_parameters (PLCI   *plci)
static void ec_clear_config (PLCI   *plci)
static void ec_prepare_switch (dword Id, PLCI   *plci)
static word ec_save_config (dword Id, PLCI   *plci, byte Rc)
static word ec_restore_config (dword Id, PLCI   *plci, byte Rc)
static void ec_command (dword Id, PLCI   *plci, byte Rc)
static byte ec_request (dword Id, word Number, DIVA_CAPI_ADAPTER   *a, PLCI   *plci, APPL   *appl, API_PARSE *msg)
static void ec_indication (dword Id, PLCI   *plci, byte   *msg, word length)
static void adv_voice_write_coefs (PLCI   *plci, word write_command)
static void adv_voice_clear_config (PLCI   *plci)
static void adv_voice_prepare_switch (dword Id, PLCI   *plci)
static word adv_voice_save_config (dword Id, PLCI   *plci, byte Rc)
static word adv_voice_restore_config (dword Id, PLCI   *plci, byte Rc)
static byte b1_facilities_table[] =
;
static word get_b1_facilities (PLCI   * plci, byte b1_resource)
static byte add_b1_facilities (PLCI   * plci, byte b1_resource, word b1_facilities)
static void adjust_b1_facilities (PLCI   *plci, byte new_b1_resource, word new_b1_facilities)
static void adjust_b_clear (PLCI   *plci)
static word adjust_b_process (dword Id, PLCI   *plci, byte Rc)
static void adjust_b1_resource (dword Id, PLCI   *plci, API_SAVE   *bp_msg, word b1_facilities, word internal_command)
static void adjust_b_restore (dword Id, PLCI   *plci, byte Rc)
static void reset_b3_command (dword Id, PLCI   *plci, byte Rc)
static void select_b_command (dword Id, PLCI   *plci, byte Rc)
static void fax_connect_ack_command (dword Id, PLCI   *plci, byte Rc)
static void fax_edata_ack_command (dword Id, PLCI   *plci, byte Rc)
static void fax_connect_info_command (dword Id, PLCI   *plci, byte Rc)
static void fax_adjust_b23_command (dword Id, PLCI   *plci, byte Rc)
static void fax_disconnect_command (dword Id, PLCI   *plci, byte Rc)
static void rtp_connect_b3_req_command (dword Id, PLCI   *plci, byte Rc)
static void rtp_connect_b3_res_command (dword Id, PLCI   *plci, byte Rc)
static void hold_save_command (dword Id, PLCI   *plci, byte Rc)
static void retrieve_restore_command (dword Id, PLCI   *plci, byte Rc)
static void init_b1_config (PLCI   *plci)
static void clear_b1_config (PLCI   *plci)
static void channel_flow_control_remove (PLCI   * plci)
static void channel_x_on (PLCI   * plci, byte ch)
static void channel_x_off (PLCI   * plci, byte ch, byte flag)
static void channel_request_xon (PLCI   * plci, byte ch)
static void channel_xmit_extended_xon (PLCI   * plci)
static int find_channel_with_pending_x_on (DIVA_CAPI_ADAPTER   * a, PLCI   * plci)
static void channel_xmit_xon (PLCI   * plci)
static int channel_can_xon (PLCI   * plci, byte ch)
static word CPN_filter_ok(byte   *cpn,DIVA_CAPI_ADAPTER   * a,word offset)
static void group_optimization(DIVA_CAPI_ADAPTER   * a, PLCI   * plci)
word CapiRegister(word id)
static void VSwitchReqInd(PLCI   *plci, dword Id, byte   **parms)
static int diva_get_dma_descriptor (PLCI   *plci, dword   *dma_magic)
static void diva_free_dma_descriptor (PLCI   *plci, int nr)
