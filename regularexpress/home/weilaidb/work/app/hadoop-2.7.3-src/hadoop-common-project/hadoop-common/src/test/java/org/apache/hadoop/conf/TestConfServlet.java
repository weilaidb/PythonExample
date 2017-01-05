package org.apache.hadoop.conf;
import java.io.StringWriter;
import java.io.StringReader;
import java.util.Map;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import org.mortbay.util.ajax.JSON;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.InputSource;
import junit.framework.TestCase;
import org.junit.Test;
public class TestConfServlet extends TestCase
