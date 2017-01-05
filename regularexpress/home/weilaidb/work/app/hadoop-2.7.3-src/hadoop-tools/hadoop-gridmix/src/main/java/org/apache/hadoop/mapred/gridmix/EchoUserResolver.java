package org.apache.hadoop.mapred.gridmix;
import java.io.IOException;
import java.net.URI;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
public class EchoUserResolver implements UserResolver
