package org.apache.hadoop.security.authentication.util;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@SuppressWarnings("all")
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class KerberosName
