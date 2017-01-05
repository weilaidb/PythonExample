package org.apache.hadoop.security.token.delegation;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.Arrays;
import javax.crypto.SecretKey;
import org.apache.avro.reflect.Nullable;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class DelegationKey implements Writable
