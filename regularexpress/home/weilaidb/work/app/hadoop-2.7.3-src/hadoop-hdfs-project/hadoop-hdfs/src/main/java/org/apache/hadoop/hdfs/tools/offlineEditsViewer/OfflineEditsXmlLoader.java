package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.util.XMLUtils;
import org.apache.hadoop.hdfs.util.XMLUtils.InvalidXmlException;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOpCodes;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp.OpInstanceCache;
import org.apache.hadoop.hdfs.tools.offlineEditsViewer.OfflineEditsViewer;
import org.apache.hadoop.hdfs.util.XMLUtils.Stanza;
import org.xml.sax.Attributes;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import org.xml.sax.SAXParseException;
import org.xml.sax.XMLReader;
import org.xml.sax.helpers.DefaultHandler;
import org.xml.sax.helpers.XMLReaderFactory;
import com.google.common.base.Charsets;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class OfflineEditsXmlLoader
extends DefaultHandler implements OfflineEditsLoader
