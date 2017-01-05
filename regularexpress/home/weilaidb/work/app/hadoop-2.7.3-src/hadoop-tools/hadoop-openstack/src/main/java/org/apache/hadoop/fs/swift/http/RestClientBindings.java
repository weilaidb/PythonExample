package org.apache.hadoop.fs.swift.http;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.swift.exceptions.SwiftConfigurationException;
import java.net.URI;
import java.util.Properties;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.*;
public final class RestClientBindings
