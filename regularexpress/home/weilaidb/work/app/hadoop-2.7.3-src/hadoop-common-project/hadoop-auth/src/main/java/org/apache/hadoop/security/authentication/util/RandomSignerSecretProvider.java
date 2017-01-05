package org.apache.hadoop.security.authentication.util;
import com.google.common.annotations.VisibleForTesting;
import java.nio.charset.Charset;
import java.util.Random;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceStability.Unstable
@InterfaceAudience.Private
public class RandomSignerSecretProvider extends RolloverSignerSecretProvider
