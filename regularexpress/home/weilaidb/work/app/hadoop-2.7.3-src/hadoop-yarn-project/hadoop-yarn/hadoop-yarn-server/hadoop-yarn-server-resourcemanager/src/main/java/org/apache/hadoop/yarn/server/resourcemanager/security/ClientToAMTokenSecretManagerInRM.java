package org.apache.hadoop.yarn.server.resourcemanager.security;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.SecretKey;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.security.client.BaseClientToAMTokenSecretManager;
public class ClientToAMTokenSecretManagerInRM extends
BaseClientToAMTokenSecretManager
