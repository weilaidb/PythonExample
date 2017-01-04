struct nphy_txgains ;
struct nphy_iqcal_params ;
struct nphy_iq_est ;
enum b43_nphy_rf_sequence ;
enum b43_nphy_rssi_type ;
static void b43_nphy_stay_in_carrier_search(struct b43_wldev *dev,
bool enable);
static void b43_nphy_set_rf_sequence(struct b43_wldev *dev, u8 cmd,
u8 *events, u8 *delays, u8 length);
static void b43_nphy_force_rf_sequence(struct b43_wldev *dev,
enum b43_nphy_rf_sequence seq);
static void b43_nphy_rf_control_override(struct b43_wldev *dev, u16 field,
u16 value, u8 core, bool off);
static void b43_nphy_rf_control_intc_override(struct b43_wldev *dev, u8 field,
u16 value, u8 core);
void b43_nphy_set_rxantenna(struct b43_wldev *dev, int antenna)
static void b43_nphy_op_adjust_txpower(struct b43_wldev *dev)
static enum b43_txpwr_result b43_nphy_op_recalc_txpower(struct b43_wldev *dev,
bool ignore_tssi)
static void b43_chantab_radio_upload(struct b43_wldev *dev,
const struct b43_nphy_channeltab_entry_rev2 *e)
static void b43_chantab_radio_2056_upload(struct b43_wldev *dev,
const struct b43_nphy_channeltab_entry_rev3 *e)
udelay(50);
b43_radio_write(dev, B2056_SYN_PLL_VCOCAL12, 0x00);
b43_radio_write(dev, B2056_TX_INTPAA_PA_MISC, 0x38);
b43_radio_write(dev, B2056_TX_INTPAA_PA_MISC, 0x18);
b43_radio_write(dev, B2056_TX_INTPAA_PA_MISC, 0x38);
b43_radio_write(dev, B2056_TX_INTPAA_PA_MISC, 0x39);
udelay(300);
}
static void b43_chantab_phy_upload(struct b43_wldev *dev,
const struct b43_phy_n_sfo_cfg *e)
b43_phy_write(dev, B43_NPHY_TABLE_ADDR, 0x6840);
for (i = 0; i < 84; i++)
b43_phy_write(dev, B43_NPHY_TABLE_DATALO, 0);
b43_phy_write(dev, B43_NPHY_TABLE_ADDR, 0x6C40);
for (i = 0; i < 84; i++)
b43_phy_write(dev, B43_NPHY_TABLE_DATALO, 0);
tmp = B43_NPHY_TXPCTL_CMD_COEFF | B43_NPHY_TXPCTL_CMD_HWPCTLEN;
if (dev->phy.rev >= 3)
tmp |= B43_NPHY_TXPCTL_CMD_PCTLEN;
b43_phy_mask(dev, B43_NPHY_TXPCTL_CMD, ~tmp);
if (dev->phy.rev >= 3)  else
if (dev->phy.rev == 2)
b43_phy_maskset(dev, B43_NPHY_BPHY_CTL3,
~B43_NPHY_BPHY_CTL3_SCALE, 0x53);
else if (dev->phy.rev < 2)
b43_phy_maskset(dev, B43_NPHY_BPHY_CTL3,
~B43_NPHY_BPHY_CTL3_SCALE, 0x5A);
if (dev->phy.rev < 2 && 0)
;
} else
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 0);
}
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 1);
if (dev->phy.rev >= 3)  else if (sprom->revision < 4)  else
for (i = 0; i < 2; i++)
b43_phy_mask(dev, B43_NPHY_BPHY_CTL2, ~B43_NPHY_BPHY_CTL2_LUT);
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 0);
}
b43_radio_write(dev, B2055_VCO_CAL10, 0x65);
udelay(300);
}
static void b43_radio_init2055_pre(struct b43_wldev *dev)
static void b43_radio_init2055_post(struct b43_wldev *dev)
static void b43_radio_init2055(struct b43_wldev *dev)
static void b43_radio_init2056_pre(struct b43_wldev *dev)
static void b43_radio_init2056_post(struct b43_wldev *dev)
static void b43_radio_init2056(struct b43_wldev *dev)
static void b43_nphy_tables_init(struct b43_wldev *dev)
)
} else
}
if (channel == 11 && dev->phy.is_40mhz)
;
else
;
}
if (nphy->aband_spurwar_en)
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 0);
}
u8 i, j;
u8 code;
u16 tmp;
u8 rfseq_events[3] = ;
u8 rfseq_delays[3] = ;
bool ghz5;
bool ext_lna;
u16 rssi_gain;
struct nphy_gain_ctl_workaround_entry *e;
u8 lpf_gain[6] = ;
u8 lpf_bits[6] = ;
if (dev->phy.rev >= 3)  else
}
tmp16 = (b43_current_band(dev->wl) == IEEE80211_BAND_2GHZ) ?
0x2 : 0x9C40;
b43_phy_write(dev, B43_NPHY_ENDROP_TLEN, tmp16);
b43_phy_maskset(dev, 0x294, 0xF0FF, 0x0700);
b43_ntab_write(dev, B43_NTAB32(16, 3), 0x18D);
b43_ntab_write(dev, B43_NTAB32(16, 127), 0x18D);
b43_nphy_gain_ctrl_workarounds(dev);
b43_ntab_write(dev, B43_NTAB32(8, 0), 2);
b43_ntab_write(dev, B43_NTAB32(8, 16), 2);
b43_radio_write(dev, B2056_RX0 | B2056_RX_MIXA_MAST_BIAS, 0x00);
b43_radio_write(dev, B2056_RX1 | B2056_RX_MIXA_MAST_BIAS, 0x00);
b43_radio_write(dev, B2056_RX0 | B2056_RX_MIXA_BIAS_MAIN, 0x06);
b43_radio_write(dev, B2056_RX1 | B2056_RX_MIXA_BIAS_MAIN, 0x06);
b43_radio_write(dev, B2056_RX0 | B2056_RX_MIXA_BIAS_AUX, 0x07);
b43_radio_write(dev, B2056_RX1 | B2056_RX_MIXA_BIAS_AUX, 0x07);
b43_radio_write(dev, B2056_RX0 | B2056_RX_MIXA_LOB_BIAS, 0x88);
b43_radio_write(dev, B2056_RX1 | B2056_RX_MIXA_LOB_BIAS, 0x88);
b43_radio_write(dev, B2056_RX0 | B2056_RX_MIXG_CMFB_IDAC, 0x00);
b43_radio_write(dev, B2056_RX1 | B2056_RX_MIXG_CMFB_IDAC, 0x00);
if ((bus->sprom.boardflags2_lo & B43_BFL2_APLL_WAR &&
b43_current_band(dev->wl) == IEEE80211_BAND_5GHZ) ||
(bus->sprom.boardflags2_lo & B43_BFL2_GPLL_WAR &&
b43_current_band(dev->wl) == IEEE80211_BAND_2GHZ))
tmp32 = 0x00088888;
else
tmp32 = 0x88888888;
b43_ntab_write(dev, B43_NTAB32(30, 1), tmp32);
b43_ntab_write(dev, B43_NTAB32(30, 2), tmp32);
b43_ntab_write(dev, B43_NTAB32(30, 3), tmp32);
if (dev->phy.rev == 4 &&
b43_current_band(dev->wl) == IEEE80211_BAND_5GHZ)
b43_phy_write(dev, 0x224, 0x039C);
b43_phy_write(dev, 0x225, 0x0357);
b43_phy_write(dev, 0x226, 0x0317);
b43_phy_write(dev, 0x227, 0x02D7);
b43_phy_write(dev, 0x228, 0x039C);
b43_phy_write(dev, 0x229, 0x0357);
b43_phy_write(dev, 0x22A, 0x0317);
b43_phy_write(dev, 0x22B, 0x02D7);
b43_phy_write(dev, 0x22C, 0x039C);
b43_phy_write(dev, 0x22D, 0x0357);
b43_phy_write(dev, 0x22E, 0x0317);
b43_phy_write(dev, 0x22F, 0x02D7);
} else
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 0);
}
static int b43_nphy_tx_tone(struct b43_wldev *dev, u32 freq, u16 max_val,
bool iqmode, bool dac_test)
B43_WARN_ON(field & (~(1 << (index - 1))));
if (dev->phy.rev >= 3)  else
}
b43_nphy_reset_cca(dev);
}
}
static void b43_nphy_rssi_cal(struct b43_wldev *dev)
static void b43_nphy_restore_rssi_cal(struct b43_wldev *dev)
return txpwrctrl_tx_gain_ipa_rev6;
} else if (dev->phy.rev >= 5)  else
} else
}
static const u16 offset[] = ;
for (i = 0; i < 3; i++)
for (j = 0; j < 15; j++)
b43_phy_write(dev, B43_PHY_N(offset[i] + j),
tbl_tx_filter_coef_rev4[i][j]);
if (dev->phy.is_40mhz)  else if (b43_current_band(dev->wl) == IEEE80211_BAND_5GHZ)
if (dev->phy.channel == 14)
for (j = 0; j < 15; j++)
b43_phy_write(dev, B43_PHY_N(offset[0] + j),
tbl_tx_filter_coef_rev4[6][j]);
}
if (dev->phy.rev >= 3)  else
iqcal_chanspec->center_freq = dev->phy.channel_freq;
iqcal_chanspec->channel_type = dev->phy.channel_type;
b43_ntab_read_bulk(dev, B43_NTAB16(15, 80), 8, table);
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, 0);
}
if (dev->phy.rev >= 3)  else
b43_nphy_rx_iq_coeffs(dev, true, rxcal_coeffs);
}
nphy->phyrxchain = mask;
if (0)
return;
b43_mac_suspend(dev);
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, true);
b43_phy_maskset(dev, B43_NPHY_RFSEQCA, ~B43_NPHY_RFSEQCA_RXEN,
(mask & 0x3) << B43_NPHY_RFSEQCA_RXEN_SHIFT);
if ((mask & 0x3) != 0x3)  else
b43_nphy_force_rf_sequence(dev, B43_RFSEQ_RESET2RX);
if (nphy->hang_avoid)
b43_nphy_stay_in_carrier_search(dev, false);
b43_mac_enable(dev);
}
int b43_phy_initn(struct b43_wldev *dev)
}
b43_phy_write(dev, B43_NPHY_NDATAT_DUP40, 0x3830);
if (phy->rev >= 3)
b43_nphy_spur_workaround(dev);
}
phy->channel = channel->hw_value;
phy->channel_freq = channel->center_freq;
if (b43_channel_type_is_40mhz(phy->channel_type) !=
b43_channel_type_is_40mhz(channel_type))
;
if (channel_type == NL80211_CHAN_HT40PLUS)
b43_phy_set(dev, B43_NPHY_RXCTL,
B43_NPHY_RXCTL_BSELU20);
else if (channel_type == NL80211_CHAN_HT40MINUS)
b43_phy_mask(dev, B43_NPHY_RXCTL,
~B43_NPHY_RXCTL_BSELU20);
if (dev->phy.rev >= 3)  else
return 0;
}
static int b43_nphy_op_allocate(struct b43_wldev *dev)
static void b43_nphy_op_prepare_structs(struct b43_wldev *dev)
static void b43_nphy_op_free(struct b43_wldev *dev)
static int b43_nphy_op_init(struct b43_wldev *dev)
static inline void check_phyreg(struct b43_wldev *dev, u16 offset)
static u16 b43_nphy_op_read(struct b43_wldev *dev, u16 reg)
static void b43_nphy_op_write(struct b43_wldev *dev, u16 reg, u16 value)
static void b43_nphy_op_maskset(struct b43_wldev *dev, u16 reg, u16 mask,
u16 set)
static u16 b43_nphy_op_radio_read(struct b43_wldev *dev, u16 reg)
static void b43_nphy_op_radio_write(struct b43_wldev *dev, u16 reg, u16 value)
/* http:
static void b43_nphy_op_software_rfkill(struct b43_wldev *dev,
bool blocked)
/* http:
static void b43_nphy_op_switch_analog(struct b43_wldev *dev, bool on)
static int b43_nphy_op_switch_channel(struct b43_wldev *dev,
unsigned int new_channel)
static unsigned int b43_nphy_op_get_default_chan(struct b43_wldev *dev)
const struct b43_phy_operations b43_phyops_n = ;
