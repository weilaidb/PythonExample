package org.apache.hadoop.security;
import java.net.InetAddress;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import javax.security.sasl.Sasl;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.security.SaslRpcServer.QualityOfProtection;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.StringUtils;
public class SaslPropertiesResolver implements Configurable
