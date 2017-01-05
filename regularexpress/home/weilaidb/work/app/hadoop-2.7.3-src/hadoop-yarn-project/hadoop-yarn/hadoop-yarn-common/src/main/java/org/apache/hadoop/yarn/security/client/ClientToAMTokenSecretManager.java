package org.apache.hadoop.yarn.security.client;
import javax.crypto.SecretKey;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.security.token.SecretManager;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
@Public
@Evolving
public class ClientToAMTokenSecretManager extends
BaseClientToAMTokenSecretManager
