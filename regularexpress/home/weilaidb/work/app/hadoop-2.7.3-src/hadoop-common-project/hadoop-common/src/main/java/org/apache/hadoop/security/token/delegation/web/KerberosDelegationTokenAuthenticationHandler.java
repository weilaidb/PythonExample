package org.apache.hadoop.security.token.delegation.web;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authentication.server.AuthenticationHandler;
import org.apache.hadoop.security.authentication.server.KerberosAuthenticationHandler;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class KerberosDelegationTokenAuthenticationHandler
extends DelegationTokenAuthenticationHandler
