package org.apache.hadoop.yarn.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.C_TABLE;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._INFO_WRAP;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._TH;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.initID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.tableInit;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import org.apache.commons.lang.ArrayUtils;
import org.apache.hadoop.yarn.MockApps;
import org.apache.hadoop.yarn.webapp.view.HtmlPage;
import org.apache.hadoop.yarn.webapp.view.JQueryUI;
import org.apache.hadoop.yarn.webapp.view.TextPage;
import org.junit.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import com.google.inject.Inject;
public class TestWebApp
String echo(String s)
@Test public void testCreate()
@Test public void testCreateWithPort()
@Test(expected=org.apache.hadoop.yarn.webapp.WebAppException.class)
public void testCreateWithBindAddressNonZeroPort()
@Test(expected=org.apache.hadoop.yarn.webapp.WebAppException.class)
public void testCreateWithNonZeroPort()
@Test public void testServePaths()
@Test public void testServePathsNoName()
@Test public void testDefaultRoutes() throws Exception
@Test public void testCustomRoutes() throws Exception
@Test public void testYARNWebAppContext() throws Exception
static String baseUrl(WebApp app)
static String getContent(String url)
static int getResponseCode(String url)
public static void main(String[] args) throws Exception
}
