package org.apache.hadoop.io;
import java.io.IOException;
import java.io.DataInput;
import java.io.DataOutput;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.CharacterCodingException;
import java.nio.charset.Charset;
import java.nio.charset.CharsetDecoder;
import java.nio.charset.CharsetEncoder;
import java.nio.charset.CodingErrorAction;
import java.nio.charset.MalformedInputException;
import java.text.CharacterIterator;
import java.text.StringCharacterIterator;
import java.util.Arrays;
import org.apache.avro.reflect.Stringable;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Stringable
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Text extends BinaryComparable
implements WritableComparable<BinaryComparable>
