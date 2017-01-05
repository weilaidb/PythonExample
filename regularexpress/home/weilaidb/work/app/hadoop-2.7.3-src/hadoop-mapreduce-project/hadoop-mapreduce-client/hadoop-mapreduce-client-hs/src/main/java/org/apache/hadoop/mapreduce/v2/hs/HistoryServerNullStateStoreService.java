package org.apache.hadoop.mapreduce.v2.hs;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.v2.api.MRDelegationTokenIdentifier;
import org.apache.hadoop.security.token.delegation.DelegationKey;
@Private
@Unstable
public class HistoryServerNullStateStoreService
extends HistoryServerStateStoreService
