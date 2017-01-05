package org.apache.hadoop.yarn.server.webproxy;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.util.TrackingUriPlugin;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URLEncoder;
import java.util.List;
import static org.apache.hadoop.yarn.util.StringHelper.ujoin;
public class ProxyUriUtils
