package org.apache.hadoop.security.token.delegation.web;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authentication.client.Authenticator;
import org.apache.hadoop.security.authentication.client.KerberosAuthenticator;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class KerberosDelegationTokenAuthenticator
extends DelegationTokenAuthenticator
