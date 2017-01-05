package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.security;
import javax.crypto.SecretKey;
import org.apache.hadoop.security.token.SecretManager;
public class LocalizerTokenSecretManager extends
SecretManager<LocalizerTokenIdentifier>
