package org.apache.hadoop.security.token;
import com.google.common.collect.Maps;
import org.apache.commons.codec.binary.Base64;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.*;
import org.apache.hadoop.util.ReflectionUtils;
import java.io.*;
import java.util.Arrays;
import java.util.Map;
import java.util.ServiceLoader;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class Token<T extends TokenIdentifier> implements Writable
