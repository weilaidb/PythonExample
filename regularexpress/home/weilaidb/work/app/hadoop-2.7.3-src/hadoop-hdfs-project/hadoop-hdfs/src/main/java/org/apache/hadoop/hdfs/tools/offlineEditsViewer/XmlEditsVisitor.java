package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.hdfs.util.XMLUtils;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.xml.sax.ContentHandler;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.AttributesImpl;
import org.apache.xml.serialize.OutputFormat;
import org.apache.xml.serialize.XMLSerializer;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class XmlEditsVisitor implements OfflineEditsVisitor
