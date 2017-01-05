package org.apache.hadoop.yarn.security.client;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenRenewer;
import org.apache.hadoop.yarn.client.api.TimelineClient;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Public
@Evolving
public class TimelineDelegationTokenIdentifier extends YARNDelegationTokenIdentifier
