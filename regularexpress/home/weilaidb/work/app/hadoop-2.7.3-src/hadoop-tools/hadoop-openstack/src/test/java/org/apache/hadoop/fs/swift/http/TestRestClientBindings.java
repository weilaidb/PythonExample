package org.apache.hadoop.fs.swift.http;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.swift.SwiftTestConstants;
import org.apache.hadoop.fs.swift.exceptions.SwiftConfigurationException;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Properties;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_AUTH_URL;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_PASSWORD;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_USERNAME;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_AUTH_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_CONTAINER_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_HTTPS_PORT_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_HTTP_PORT_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_PASSWORD_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_REGION_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_SERVICE_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_TENANT_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_USERNAME_PROPERTY;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.assertPropertyEquals;
public class TestRestClientBindings extends Assert
implements SwiftTestConstants
