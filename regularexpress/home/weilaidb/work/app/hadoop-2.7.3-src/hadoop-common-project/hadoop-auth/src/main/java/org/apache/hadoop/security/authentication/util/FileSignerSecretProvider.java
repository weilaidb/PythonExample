package org.apache.hadoop.security.authentication.util;
import com.google.common.base.Charsets;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.authentication.util.SignerSecretProvider;
import javax.servlet.ServletContext;
import java.io.*;
import java.nio.charset.Charset;
import java.util.Properties;
@InterfaceStability.Unstable
@InterfaceAudience.Private
public class FileSignerSecretProvider extends SignerSecretProvider
