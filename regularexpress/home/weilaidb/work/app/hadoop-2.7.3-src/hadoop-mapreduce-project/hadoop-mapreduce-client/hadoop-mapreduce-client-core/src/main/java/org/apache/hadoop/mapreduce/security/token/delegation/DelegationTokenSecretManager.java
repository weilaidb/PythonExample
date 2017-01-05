package org.apache.hadoop.mapreduce.security.token.delegation;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenSecretManager;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class DelegationTokenSecretManager
extends AbstractDelegationTokenSecretManager<DelegationTokenIdentifier>
