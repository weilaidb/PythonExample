package org.apache.hadoop.security.token.delegation.web;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.client.PseudoAuthenticator;
import java.io.IOException;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class PseudoDelegationTokenAuthenticator
extends DelegationTokenAuthenticator
