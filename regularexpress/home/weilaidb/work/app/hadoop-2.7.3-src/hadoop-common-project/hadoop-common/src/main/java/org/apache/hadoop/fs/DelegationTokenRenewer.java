package org.apache.hadoop.fs;
import com.google.common.annotations.VisibleForTesting;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.concurrent.DelayQueue;
import java.util.concurrent.Delayed;
import java.util.concurrent.TimeUnit;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.util.Time;
@InterfaceAudience.Private
public class DelegationTokenRenewer
extends Thread
