package org.apache.hadoop.mapreduce.v2.hs;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.v2.api.MRDelegationTokenIdentifier;
import org.apache.hadoop.security.token.delegation.DelegationKey;
class HistoryServerMemStateStoreService
extends HistoryServerStateStoreService
