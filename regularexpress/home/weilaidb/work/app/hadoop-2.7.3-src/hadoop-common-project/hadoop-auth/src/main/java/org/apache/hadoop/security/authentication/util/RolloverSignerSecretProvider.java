package org.apache.hadoop.security.authentication.util;
import java.util.Properties;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import javax.servlet.ServletContext;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceStability.Unstable
@InterfaceAudience.Private
public abstract class RolloverSignerSecretProvider
extends SignerSecretProvider
