package org.apache.hadoop.security.authentication.util;
import java.nio.charset.Charset;
import java.util.Properties;
import javax.servlet.ServletContext;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
@InterfaceStability.Unstable
@VisibleForTesting
class StringSignerSecretProvider extends SignerSecretProvider
