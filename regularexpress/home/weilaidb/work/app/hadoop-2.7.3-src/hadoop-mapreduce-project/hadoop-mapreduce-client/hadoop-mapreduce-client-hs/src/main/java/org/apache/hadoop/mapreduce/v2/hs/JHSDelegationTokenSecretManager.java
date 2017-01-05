package org.apache.hadoop.mapreduce.v2.hs;
import java.io.IOException;
import java.util.Map.Entry;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.v2.api.MRDelegationTokenIdentifier;
import org.apache.hadoop.mapreduce.v2.hs.HistoryServerStateStoreService.HistoryServerState;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenSecretManager;
import org.apache.hadoop.security.token.delegation.DelegationKey;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JHSDelegationTokenSecretManager
extends AbstractDelegationTokenSecretManager<MRDelegationTokenIdentifier>
