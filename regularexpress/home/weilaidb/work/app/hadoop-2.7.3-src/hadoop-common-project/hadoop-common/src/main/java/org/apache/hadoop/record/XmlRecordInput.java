package org.apache.hadoop.record;
import java.io.InputStream;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.xml.sax.*;
import org.xml.sax.helpers.DefaultHandler;
import javax.xml.parsers.SAXParserFactory;
import javax.xml.parsers.SAXParser;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public class XmlRecordInput implements RecordInput
