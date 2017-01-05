package org.apache.hadoop.yarn.server.webproxy;
import static org.junit.Assert.*;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.List;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.server.utils.BuilderUtils;
import org.apache.hadoop.yarn.util.TrackingUriPlugin;
import org.junit.Test;
import com.google.common.collect.Lists;
public class TestProxyUriUtils
