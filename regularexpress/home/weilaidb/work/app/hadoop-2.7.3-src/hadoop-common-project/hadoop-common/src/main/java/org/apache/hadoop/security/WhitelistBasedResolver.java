package org.apache.hadoop.security;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Map;
import java.util.TreeMap;
import javax.security.sasl.Sasl;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.SaslPropertiesResolver;
import org.apache.hadoop.security.SaslRpcServer.QualityOfProtection;
import org.apache.hadoop.util.CombinedIPWhiteList;
import org.apache.hadoop.util.StringUtils;
public class WhitelistBasedResolver extends SaslPropertiesResolver
