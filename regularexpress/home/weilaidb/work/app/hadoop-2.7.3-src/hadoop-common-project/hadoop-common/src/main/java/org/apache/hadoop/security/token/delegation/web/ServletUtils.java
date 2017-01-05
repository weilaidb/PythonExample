package org.apache.hadoop.security.token.delegation.web;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.http.NameValuePair;
import org.apache.http.client.utils.URLEncodedUtils;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.List;
@InterfaceAudience.Private
class ServletUtils
