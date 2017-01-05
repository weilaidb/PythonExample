package org.apache.hadoop.crypto.random;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.NativeCodeLoader;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class OpensslSecureRandom extends Random
